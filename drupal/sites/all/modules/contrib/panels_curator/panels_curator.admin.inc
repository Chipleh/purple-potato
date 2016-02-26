<?php 
/**
 * @file
 * Admin settings form for the Panels curator module.
 */

/**
 * Custom settings for the Panels curator module.
 */
function panels_curator_settings_form() {
  module_load_include('inc', 'ctools', 'includes/plugins');
  module_load_include('inc', 'panels', 'includes/plugins');
  module_load_include('inc', 'panels', 'includes/common');
  // Get all panel types.
  $panels_renderer = new panels_renderer_editor;
  $types = panels_common_get_allowed_types('');
  $type_mapping = array();
  foreach ($types as $group => &$type) {
    foreach ($type as $key => $panel) {
      $type_mapping[$panel['title']] = array('group' => $group, 'panel' => $key);
      if ($group == 'fieldable_panels_pane') {
        // Make sure that the fieldable panels pane subtypes are set.
        if (!isset($types[$group][$key]['type'])) {
          $types[$group][$key]['type_name'] = 'fieldable_panels_pane';
          $types[$group][$key]['subtype_name'] = $types[$group][$key]['name'];
        }
      }
      elseif ($group == 'block') {
        // Make sure that block types/subtypes are set.
        $types[$group][$key]['type_name'] = 'block';
        $types[$group][$key]['subtype_name'] = $key;
      }
    }
  }

  // Load all layouts and regions.
  $regions = array();
  $layouts = panels_get_layouts();
  $display = panels_new_display();
  foreach ($layouts as $layout) {
    foreach (panels_get_regions($layout, $display) as $key => $region) {
      $regions[$key] = $region . ' (' . $layout['title'] . ')';
    }
  }

  $categories = variable_get('panels_curator_categories', '');
  $categories = array_filter(explode(',', $categories));
  if (empty($categories)) {
    // Default to panels default categories.
    $categories = $panels_renderer->get_categories($types);
    // Add 'Disabled' group.
    $categories['disabled'] = array(
      'title' => t('Disabled'),
      'content' => array(),
    );
    $option_keys = array_keys($categories);
  }
  else {
    $option_keys = $categories;
  }
  $options = array();
  foreach ($option_keys as $value) {
    $options[$value] = $value;
  }

  $form['add'] = array(
    '#title' => t('Add a custom group'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
  );
  $form['add']['custom_group'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
  );

  foreach ($categories as $key => $category) {
    if (!is_array($category)) {
      $key = $category;
      $category = variable_get('panels_curator_' . $key, '');
      $category = unserialize($category);
    }
    $category_title = $category['title'] . ' (' . count($category['content']) . ')';
    $form[$key] = array(
      '#title' => check_plain($category_title),
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    // Region settings for this category/group.
    $category['regions'] = variable_get('panels_curator_regions_' . $key, '');
    $category['regions'] = explode(',', $category['regions']);
    $form[$key][$key . '_region_container'] = array(
      '#title' => t('Regions'),
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form[$key][$key . '_region_container'][$key . '_regions'] = array(
      '#title' => t('Regions'),
      '#type' => 'checkboxes',
      '#options' => $regions,
      '#default_value' => isset($category['regions']) ? $category['regions'] : array(),
    );
    foreach ($category['content'] as $content) {
      $form[$key][$content['title']] = array(
        '#title' => check_plain($content['title']),
        '#type' => 'select',
        '#options' => $options,
        '#default_value' => $key,
      );
      // Store the serialized data in a hidden variable.
      $form['hidden_' . $content['title']] = array(
        '#title' => check_plain($content['title']),
        '#type' => 'hidden',
        '#default_value' => $key,
        '#value' => serialize($content),
      );
      // Keep track of any new or un-categorized panels.
      if (isset($type_mapping[$content['title']])) {
        unset($type_mapping[$content['title']]);
      }
    }
  }

  // Add any new or un-categorized panels.
  foreach ($type_mapping as $key => $type) {
    $group = $type['group'];
    if ($group == 'fieldable_panels_pane') {
      $group = 'fielded-panes';
    }
    if (!isset($form[$group])) {
      $group = 'disabled';
    }
    $panel_title = $types[$type['group']][$type['panel']]['title'];
    $form[$group][$panel_title] = array(
      '#title' => check_plain($panel_title),
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => $group,
    );
    // Store the serialized data in a hidden variable.
    $form['hidden_' . $panel_title] = array(
      '#title' => check_plain($panel_title),
      '#type' => 'hidden',
      '#default_value' => $group,
      '#value' => serialize($types[$type['group']][$type['panel']]),
    );
  }

  // Panelizer default overrides.
  $content_types = node_type_get_names();
  $panelizer_overrides = variable_get('panels_curator_override_displays', '');
  $panelizer_overrides = explode(',', $panelizer_overrides);
  $form['panelizer_overrides'] = array(
    '#title' => t('Panelizer default overrides'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['panelizer_overrides']['override_displays'] = array(
    '#title' => t('Override panelizer default display automatically'),
    '#description' => t('Checking this box will create a new display and panel duplicates for each new panelized node.'),
    '#type' => 'checkboxes',
    '#options' => $content_types,
    '#default_value' => $panelizer_overrides,
  );

  // Additional settings.
  $hide_extras = variable_get('panels_curator_hide_extras', FALSE);
  $data_object = variable_get('panels_curator_data_object', FALSE);
  $form['additional_settings'] = array(
    '#title' => t('Additional settings'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
  );
  $form['additional_settings']['hide_extras'] = array(
    '#title' => t('Hide extra options for fieldable panels pane forms'),
    '#description' => t('Checking this box will hide the "Make title a link" and "View mode" form options added by other modules.'),
    '#type' => 'checkbox',
    '#default_value' => $hide_extras,
  );
  $form['additional_settings']['data_object'] = array(
    '#title' => t('Provide a clean canonical data object for fiedable panels pane templates'),
    '#description' => t('Check this box if you want to provide front end developers with a simple "output" object in their pane templates.'),
    '#type' => 'checkbox',
    '#default_value' => $data_object,
  );

  $form['#submit'][] = 'panels_curator_settings_form_submit';

  return system_settings_form($form);
}

/**
 * Custom settings for the Panels curator module.
 */
function panels_curator_settings_form_submit($form, &$form_state) {
  // Set curated categories.
  $category_keys = variable_get('panels_curator_categories', '');
  $category_keys = array_filter(explode(',', $category_keys));
  if (empty($category_keys)) {
    module_load_include('inc', 'panels', 'includes/common');
    // Default to panels default categories.
    $panels_renderer = new panels_renderer_editor;
    $types = panels_common_get_allowed_types('');
    $categories = $panels_renderer->get_categories($types);
    // Add 'Disabled' group.
    $categories['disabled'] = array(
      'title' => t('Disabled'),
      'content' => array(),
    );
  }
  else {
    // Load category mappings from existing variables.
    $categories = array();
    foreach ($category_keys as $category) {
      if (!is_array($category)) {
        $key = $category;
        $category = variable_get('panels_curator_' . $key, '');
        $categories[$key] = unserialize($category);
      }
    }
  }
  // Create a new group.
  if (!empty($form_state['values']['custom_group'])) {
    $group_title = preg_replace('@[^a-z0-9-]+@', '-', strtolower($form_state['values']['custom_group']));
    $categories[$group_title] = array(
      'title' => $form_state['values']['custom_group'],
      'content' => array(),
    );
    variable_set('panels_curator_' . $group_title, serialize($categories[$group_title]));
  }
  $category_groups = array();
  foreach (array_keys($categories) as $key => $value) {
    $category_groups[] = $value;
  }
  // Set the new update categories.
  variable_set('panels_curator_categories', implode(',', $category_groups));
  // Check for updates to each group.
  $category_mappings = array();
  foreach ($form_state['input'] as $key => $value) {
    // Look for all panel panes that can be added to a group.
    if (!empty($value) && isset($form_state['input']['hidden_' . $key])) {
      // Initialize the category mapping for this group.
      if (!isset($category_mappings[$value])) {
        $category_mappings[$value] = array(
          'title' => $categories[$value]['title'],
          'content' => array(),
        );
      }
      $category_mappings[$value]['content'][$key] = unserialize($form_state['input']['hidden_' . $key]);
    }
  }
  // Set each category mapping with associated panel panes.
  foreach ($category_mappings as $key => $mapping) {
    variable_set('panels_curator_' . $key, serialize($mapping));
  }
  foreach ($category_groups as $group) {
    // Update all category panels mappings.
    if (!isset($category_mappings[$group])) {
      $empty = array(
        'title' => $categories[$group]['title'],
        'content' => array(),
      );
      variable_set('panels_curator_' . $group, serialize($empty));
    }
    // Update all category region mappings.
    $region_mappings = array();
    foreach ($form_state['input'][$group . '_regions'] as $key => $region) {
      if (!empty($region)) {
        $region_mappings[$key] = $region;
      }
    }
    variable_set('panels_curator_regions_' . $group, implode(',', $region_mappings));
  }
  $override_displays = array();
  foreach ($form_state['values']['override_displays'] as $display) {
    if (!empty($display)) {
      $override_displays[] = $display; 
    }
  }
  // Set the new update categories.
  variable_set('panels_curator_override_displays', implode(',', $override_displays));
  //variable_set('panels_curator_override_displays', $form_state['values']['override_displays']);
  variable_set('panels_curator_hide_extras', $form_state['values']['hide_extras']);
  variable_set('panels_curator_data_object', $form_state['values']['data_object']);
}
