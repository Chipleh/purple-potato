<?php 
/**
 * @file
 * Admin settings form for the Panels curator module.
 */

/**
 * Custom settings for the Panels curator module.
 */
function panels_curator_settings_form() {
  $categories = variable_get('panels_curator_categories', '');
  $categories = array_filter(explode(',', $categories));
  if (empty($categories)) {
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
    $category_title = check_plain($category['title']) . ' (' . count($category['content']) . ')';
    $form[$key] = array(
      '#title' => $category_title,
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    foreach ($category['content'] as $content) {
      $form[$key][$content['title']] = array(
        '#title' => $content['title'],
        '#type' => 'select',
        '#options' => $options,
        '#default_value' => $key,
      );
      // Store the serialized data in a hidden variable.
      $form['hidden_' . $content['title']] = array(
        '#title' => $content['title'],
        '#type' => 'hidden',
        '#default_value' => $key,
        '#value' => serialize($content),
      );
    }
  }

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
    $group_title = preg_replace('@[^a-z0-9-]+@','-', strtolower($form_state['values']['custom_group']));
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
    if (!isset($category_mappings[$group])) {
      $empty = array(
        'title' => $categories[$group]['title'],
        'content' => array(),
      );
      variable_set('panels_curator_' . $group, serialize($empty));
    }
  }
}
