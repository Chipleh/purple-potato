<?php
/**
 * @file
 * leidos.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function leidos_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-left_navigation-field_menu'
  $field_instances['fieldable_panels_pane-left_navigation-field_menu'] = array(
    'bundle' => 'left_navigation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'menu_reference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'menu_reference_links',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'menu_reference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'menu_reference_links',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_menu',
    'label' => 'Menu',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'menu_reference',
      'settings' => array(),
      'type' => 'menu_reference_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu');

  return $field_instances;
}
