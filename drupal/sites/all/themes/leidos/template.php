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

  // Add conditional stylesheets for IE
  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));
  
  // Leidos stylesheet
  drupal_add_css(path_to_theme() . '/css/main.css', array('group' => CSS_THEME));
  
  //Webdev compiled
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
  $display = panels_get_current_page_display();
  if (isset($display->panels['optional_inner_right_rail'])) {
    $variables['classes_array'][] = 'optional-right-rail';
  }
  // Add classes for vertices banner.
  $variables['classes_array'][] = isset($display->panels['top_banner']) ? 'has-vertices' : 'no-vertices';
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
}

/**
 * Override or insert variables into the block template.
 */
function leidos_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
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
  // Check for children menus and assign 'parent' or 'no-children'.
  $parent = (strpos($variables['tree'], '<ul')) ? 'parent-menu' : 'no-children';
  $tree = '<ul class="menu clearfix ' . $parent . '">' . $variables['tree'] . '</ul>';
  if ($parent) {
    $tree = '<span class="additional-control">Back</span><span class="additional-info"></span>' . $tree;
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
    $rotator->set_arguments(array(implode(',', $arguments)));
    $rotator->set_items_per_page(count($arguments));
    $rotator->pre_execute();
    $rotator->execute();
    $variables['rotator'] = $rotator->render();
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
}
