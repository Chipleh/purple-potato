<?php

/**
 * Add body classes if certain regions have content.
 */
function leidos_preprocess_html(&$variables) {
  if (!empty($variables['page']['featured'])) {
    $variables['classes_array'][] = 'featured';
  }

  if (!empty($variables['page']['triptych_first'])
    || !empty($variables['page']['triptych_middle'])
    || !empty($variables['page']['triptych_last'])) {
    $variables['classes_array'][] = 'triptych';
  }

  if (!empty($variables['page']['footer_firstcolumn'])
    || !empty($variables['page']['footer_secondcolumn'])
    || !empty($variables['page']['footer_thirdcolumn'])
    || !empty($variables['page']['footer_fourthcolumn'])) {
    $variables['classes_array'][] = 'footer-columns';
  }

  // Add viewport meta tag.
  $viewport = array(
   '#tag' => 'meta',
   '#attributes' => array(
     'name' => 'viewport',
     'content' => 'width=device-width, initial-scale=1',
   ),
  );
  drupal_add_html_head($viewport, 'viewport');

  // Add conditional stylesheets for IE
  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));

  // Leidos stylesheet
  drupal_add_css(path_to_theme() . '/css/main.css', array('group' => CSS_THEME));

  //Webdev compiled
  drupal_add_js(path_to_theme() . '/js/modernizr-custom.js', array('group' => JS_LIBRARY, 'weight' => 48));
  drupal_add_js(path_to_theme() . '/js/scripts.js', array('group' => JS_LIBRARY, 'weight' => 49));

  //Leidos theme modifications
  drupal_add_js(path_to_theme() . '/js/leidos_theme.js', array('group' => JS_LIBRARY, 'weight' => 50));
}

/**
 * Override or insert variables into the page template for HTML output.
 */
function leidos_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

/**
 * Override or insert variables into the page template.
 */
function leidos_preprocess_page(&$variables) {
  // Popup modal light box from specific lockheed martin pages
  $referer_urls = explode(',', variable_get('lightbox_referer_urls'));
  $url = parse_url($_SERVER['HTTP_REFERER']);
  $variables['lightbox'] = (in_array($_SERVER['HTTP_REFERER'], $referer_urls) || 
          in_array($url, $referer_urls)) ? TRUE : FALSE ;

  $display = panels_get_current_page_display();
  if (isset($display->panels)) {
    $vertices = 'no-vertices';
    $title_class = 'no-title';
    // Add classes for vertices banner.
    if (isset($display->panels['top_banner'])) {
      foreach ($display->panels['top_banner'] as $pane) {
        // Check for panel ID or actual panel data.
        if (is_int($pane)) {
          $panel = fieldable_panels_panes_load($pane);
        }
        else {
          $panel = $display->content[$pane];
        }
        if (isset($panel->subtype) && $panel->subtype == 'theme_banner') {
          $vertices = 'has-vertices';
        }
        if (isset($panel->subtype) && $panel->subtype == 'page_title') {
          $title_class = 'has-title';
          if (!empty($panel->configuration['override_title'])) {
            $title_class = 'has-title title-override';
          }
        }
      }
    }
    $variables['classes_array'][] = $vertices;
    $variables['classes_array'][] = $title_class;
    $variables['classes_array'][] = isset($display->panels['left_rail']) ? 'has-left-nav' : 'no-left-nav';
    $variables['classes_array'][] = isset($display->panels['optional_rotator']) ? 'has-rotator' : 'no-rotator';
    $variables['classes_array'][] = isset($display->panels['optional_inner_right_rail']) ? 'optional-right-rail' : 'no-optional-right-rail';
  }
  // Redirect taxonomy terms if needed.
  if (arg(0) == 'taxonomy') {
    $term = menu_get_item();
    if (isset($term['page_arguments'][0]->field_redirect['und'][0]['display_url'])) {
      drupal_goto($term['page_arguments'][0]->field_redirect['und'][0]['display_url']);
    }
  }
}

/**
 * Override or insert variables into the page template.
 */
function leidos_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
  // Remove default taxonomy no content message.
  if (isset($variables['theme_hook_suggestions'][0]) &&
    $variables['theme_hook_suggestions'][0] == 'page__taxonomy' &&
    isset($variables['page']['content']['system_main']['no_content'])
  ) {
    unset($variables['page']['content']['system_main']['no_content']);
  }
}

/**
 * Implements hook_preprocess_maintenance_page().
 */
function leidos_preprocess_maintenance_page(&$variables) {
  // By default, site_name is set to Drupal if no db connection is available
  // or during site installation. Setting site_name to an empty string makes
  // the site and update pages look cleaner.
  // @see template_preprocess_maintenance_page
  if (!$variables['db_is_active']) {
    $variables['site_name'] = '';
  }
  drupal_add_css(drupal_get_path('theme', 'leidos') . '/css/maintenance-page.css');
}

/**
 * Override or insert variables into the maintenance page template.
 */
function leidos_process_maintenance_page(&$variables) {
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}

/**
 * Override or insert variables into the node template.
 */
function leidos_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
  // External links for announcement title overrides on teaser view mode.
  if ($variables['type'] == 'announcement' && $variables['view_mode'] == 'teaser') {
    if (!empty($variables['node']->field_external_link[$variables['node']->language])) {
      $variables['content']['title'][0]['#markup'] = l($variables['node']->title, $variables['node']->field_external_link[$variables['node']->language][0]['url']);
    }
  }
}

/**
 * Override or insert variables into the block template.
 */
function leidos_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
    $variables['content'] = '
    <span class="search" title="Search leidos.com"></span>
    <a href="http://leidos.com" class="logo" title="home">Leidos</a>' . $variables['content'];        
  }
  // Add the footer logo div to the first block in the 'Footer - First column' region.
  if ($variables['block']->region == 'footer_firstcolumn' && $variables['block']->delta == 1) {
    $variables['content'] = '
    <div class="footer-logo">
      <h3></h3>
      <div class="copyright">' . t('&copy; @year Leidos', array('@year' => date('Y'))) . '</div>
    </div>' . $variables['content'];
  }
}

/**
 * Implements theme_menu_tree().
 */
function leidos_menu_tree($variables) {
  if($variables['theme_hook_original'] == 'menu_tree__main_menu'){
    $monica = 'test';
  }
  // Check for children menus and assign 'parent' or 'no-children'.
  $parent = (strpos($variables['tree'], '<ul')) ? 'parent-menu' : 'no-children';
  $active_parent = (strpos($variables['tree'], 'active') && strpos($variables['tree'], 'open-tree') === FALSE) ? 'open-tree' : '';
  $tree = '<ul class="menu clearfix ' . $parent . ' ' . $active_parent . '">' . $variables['tree'] . '</ul>';
  // Do not add back button around the 'Left navigation' panel output.
  if ($parent) {
    $tree = '<span class="additional-control">' . t('Back') . '</span><span class="additional-info"></span>' . $tree;
  }
  return $tree;
}

/**
 * Implements theme_field__field_type().
 */
function leidos_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_preprocess_field().
 */
function leidos_preprocess_field(&$variables) {
  if ($variables['element']['#field_name'] == 'field_rotator_slide') {
    // Render the rotator instead of the slide nodes that are referenced.
    $arguments = array();
    foreach ($variables['items'] as $item) {
      $arguments[] = $item['#node']->nid;
    }
    // Render the rotator.
    $rotator = views_get_view('rotators');
    $rotator->set_display('rotator_pane');
    if (!empty($arguments)) {
      $rotator->set_arguments(array(implode(',', $arguments)));
      $rotator->set_items_per_page(count($arguments));
    }
    $rotator->pre_execute();
    $rotator->execute();
    $variables['rotator'] = $rotator->render();
  }
  elseif ($variables['element']['#field_name'] == 'field_capabilities') {
    // Render the capabilities view instead of the terms that are referenced.
    $arguments = array();
    foreach ($variables['items'] as $item) {
      $arguments[] = $item['#term']->tid;
    }
    // Render the capabilities view.
    $capabilities = views_get_view('capabilities');
    $capabilities->set_display('default');
    if (!empty($arguments)) {
      $capabilities->set_arguments(array(implode(',', $arguments)));
      //$capabilities->set_items_per_page(count($arguments));
    }
    $capabilities->pre_execute();
    $capabilities->execute();
    $variables['capabilities'] = $capabilities->render();
  }
  elseif ($variables['element']['#field_name'] == 'field_project') {
    // Render the projects view instead of the project nodes.
    $arguments = array();
    foreach ($variables['items'] as $item) {
      $arguments[] = $item['#node']->nid;
    }
    // Render the announcements.
    $projects = views_get_view('projects');
    $projects->set_display('featured_projects_pane');
    if (!empty($arguments)) {
      $projects->set_arguments(array(implode(',', $arguments)));
      $projects->set_items_per_page(count($arguments));
    }
    $projects->pre_execute();
    $projects->execute();
    $variables['projects'] = $projects->render();
  }
  elseif ($variables['element']['#field_name'] == 'field_announcement') {
    // Render the announcements view instead of the announcement nodes.
    $arguments = array();
    foreach ($variables['items'] as $item) {
      $arguments[] = $item['#node']->nid;
    }
    // Render the announcements.
    $announcements = views_get_view('announcements');
    $announcements->set_display('featured_announcements_pane');
    if (!empty($arguments)) {
      $announcements->set_arguments(array(implode(',', $arguments)));
      $announcements->set_items_per_page(count($arguments));
    }
    $announcements->pre_execute();
    $announcements->execute();
    $variables['announcements'] = $announcements->render();
  }
  elseif ($variables['element']['#field_name'] == 'field_industry') {
    // Render the announcements view instead of the announcement nodes.
    $arguments = array();
    foreach ($variables['items'] as $item) {
      $arguments[] = $item['#term']->tid;
    }
    // Render the announcements.
    $announcements = views_get_view('announcements');
    $announcements->set_display('full_view_announcements_pane');
    if (!empty($arguments)) {
      $announcements->set_arguments(array(implode(',', $arguments)));
    }
    $announcements->pre_execute();
    $announcements->execute();
    $variables['announcements'] = $announcements->render();
    // Render the announcements.
    $announcements = views_get_view('announcements');
    $announcements->set_display('full_view_announcements_pane_mobile');
    if (!empty($arguments)) {
      $announcements->set_arguments(array(implode(',', $arguments)));
    }
    $announcements->pre_execute();
    $announcements->execute();
    $variables['announcements'] .= $announcements->render();
  }
  elseif ($variables['element']['#field_name'] == 'field_breadcrumb_link') {
    // Add right arrow chevrons for breadcrumb links.
    $total_links = count($variables['items']);
    foreach ($variables['items'] as $key => &$item) {
      if (($key + 1) < $total_links) {
        $variables['items'][$key]['#element']['title'] .= ' &raquo;';
      }
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_columns') {
    // Custom classes for our field collection wrappers.
    foreach ($variables['items'] as $key => &$item) {
      $variables['items'][$key]['#attributes'] = array(
        'class' => array('column', 'column-' . $key, 'columns-total-' . count($variables['items']))
      );
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_column_links') {
    // Custom classes for our field collection wrappers.
    foreach ($variables['items'] as $key => &$item) {
      $variables['items'][$key]['#attributes'] = array(
        'class' => array('column-section', 'column-section-' . $key)
      );
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_left_menu') {
    $variables['items'][0]['#markup'] = '
    <h2 class="pane-title"></h2>
    <div class="pane-content">' .
      $variables['items'][0]['#markup'] .
    '</div>';
  }
  elseif ($variables['element']['#field_name'] == 'field_releases_count') {
    // Render the news releases.
    $items_per_page = isset($variables['items'][0]['#markup']) ? $variables['items'][0]['#markup'] : 10;
    $news = views_get_view('news_releases');
    $news->set_display('latest_news');
    $news->set_items_per_page($items_per_page);
    $news->pre_execute();
    $news->execute();
    $variables['news'] = $news->render();
  }
}

/**
 * Implements leidos_preprocess_panels_pane().
 */
function leidos_preprocess_panels_pane(&$variables) {
  if (isset($variables['content']['#bundle']) && $variables['content']['#bundle'] == 'rotator') {
    // Default rotator field to empty view for all slides.
    if (!isset($variables['content']['field_rotator_slide'])) {
      $variables['content']['field_rotator_slide'] = array(
        '#theme' => 'field',
        '#weight' => '2',
        '#title' => 'Rotator slide',
        '#access' => TRUE,
        '#label_display' => 'hidden',
        '#view_mode' => 'full',
        '#language' => 'und',
        '#field_name' => 'field_rotator_slide',
        '#field_type' => 'node_reference',
        '#field_translatable' => 0,
        '#entity_type' => 'fieldable_panels_pane',
        '#bundle' => 'rotator',
        '#items' => array()
      );
    }
  }
  elseif (isset($variables['content']['#bundle']) && $variables['content']['#bundle'] == 'capabilities') {
    // Default capabilities field to empty view.
    if (!isset($variables['content']['field_capabilities'])) {
      $variables['content']['field_capabilities'] = array(
        '#theme' => 'field',
        '#weight' => '0',
        '#title' => 'Capabilities',
        '#access' => TRUE,
        '#label_display' => 'hidden',
        '#view_mode' => 'full',
        '#language' => 'und',
        '#field_name' => 'field_capabilities',
        '#field_type' => 'taxonomy_term_reference',
        '#field_translatable' => 0,
        '#entity_type' => 'fieldable_panels_pane',
        '#bundle' => 'capabilities',
        '#items' => array()
      );
    }
  }
  elseif (isset($variables['content']['#bundle']) && $variables['content']['#bundle'] == 'featured_projects_panel') {
    // Default announcement field to empty view for all projects.
    if (!isset($variables['content']['field_project'])) {
      $variables['content']['field_project'] = array(
        '#theme' => 'field',
        '#weight' => '2',
        '#title' => 'Project',
        '#access' => TRUE,
        '#label_display' => 'hidden',
        '#view_mode' => 'full',
        '#language' => 'und',
        '#field_name' => 'field_project',
        '#field_type' => 'node_reference',
        '#field_translatable' => 0,
        '#entity_type' => 'fieldable_panels_pane',
        '#bundle' => 'featured_projects_panel',
        '#items' => array()
      );
    }
  }
  elseif (isset($variables['content']['#bundle']) && $variables['content']['#bundle'] == 'featured_news_panel') {
    // Default announcement field to empty view for all announcements.
    if (!isset($variables['content']['field_announcement'])) {
      $variables['content']['field_announcement'] = array(
        '#theme' => 'field',
        '#weight' => '2',
        '#title' => 'Announcement',
        '#access' => TRUE,
        '#label_display' => 'hidden',
        '#view_mode' => 'full',
        '#language' => 'und',
        '#field_name' => 'field_announcement',
        '#field_type' => 'node_reference',
        '#field_translatable' => 0,
        '#entity_type' => 'fieldable_panels_pane',
        '#bundle' => 'featured_news_panel',
        '#items' => array()
      );
    }
  }
  elseif (isset($variables['content']['#bundle']) && $variables['content']['#bundle'] == 'announcements') {
    // Default industry field to empty view for all announcements.
    if (!isset($variables['content']['field_industry'])) {
      $variables['content']['field_industry'] = array(
        '#theme' => 'field',
        '#weight' => '2',
        '#title' => 'Industry',
        '#access' => TRUE,
        '#label_display' => 'hidden',
        '#view_mode' => 'full',
        '#language' => 'und',
        '#field_name' => 'field_industry',
        '#field_type' => 'taxonomy_term_reference',
        '#field_translatable' => 0,
        '#entity_type' => 'fieldable_panels_pane',
        '#bundle' => 'announcements',
        '#items' => array()
      );
    }
  }
}

/**
 * Implements hook_menu_link().
 * @param array $variables
 * @return string
 */
function leidos_menu_link(array $variables) {
  $element = $variables['element'];
  $i=0;
  $main_menu_items = menu_build_tree('main-menu');
  $current_path = current_path();
  
  foreach($main_menu_items as $parent){
    $menu_parents[] = $parent['link']['link_path'];
  }
  // Process only the menu with no parent
  if ($element['#original_link']['plid'] == 0) {
    if (($key = array_search('active-trail', $element['#attributes']['class'])) !== false) {
      unset($element['#attributes']['class'][$key]);
    }
    // Make sure all link items have a title.
    if (empty($element['#localized_options']['attributes']['title'])) {
      $element['#localized_options']['attributes']['title'] = $element['#title'];
    }
    if ($element['#href'] == $current_path && !(in_array($current_path, $menu_parents)) && !isset($element['#below'])) {    
      $element['#attributes']['class'][] = 'active-trail-selected';
      $element['#localized_options']['attributes']['class'] = array();
      $element['#localized_options']['attributes']['class'][] = 'active-trail';
    }
    if ($element['#href'] == $current_path && (in_array($current_path, $menu_parents) || isset($element['#below']))){
      $ignore_subcategories = TRUE;
      $element['#attributes']['class'][] = 'main-menu-parent';
      foreach($element['#below'] as $element_key => $sublinks){
        if(is_int($element_key) && !empty($sublinks['#below'])){
          $ignore_subcategories = FALSE;
        }
      }
      if($ignore_subcategories){
        $element['#attributes']['class'][] = 'sub-categories-0';
      }
    }
    elseif ($element['#below']) {
      foreach ($element['#below'] as $key => $subitem) {
        if(is_int($key) && !empty($subitem['#below'])){
          $i++;
        }
        if (isset($subitem['#href']) && $subitem['#href'] == $current_path) {
          $element['#attributes']['class'][] = 'active-trail-selected';
        }
      }
      $element['#attributes']['class'][] = 'sub-categories-' . $i;
    }
  }

  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
