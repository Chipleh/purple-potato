<?php
/**
 * @file
 * leidos.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function leidos_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_menu'
  $field_bases['field_menu'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_menu',
    'indexes' => array(
      'mlid' => array(
        0 => 'mlid',
      ),
    ),
    'locked' => 0,
    'module' => 'menu_reference',
    'settings' => array(
      'allowed_menus' => array(
        'devel' => 0,
        'features' => 0,
        'main-menu' => 0,
        'management' => 0,
        'menu-left-navigation' => 'menu-left-navigation',
        'navigation' => 0,
        'user-menu' => 0,
      ),
      'language_visibility' => 0,
    ),
    'translatable' => 0,
    'type' => 'menu_reference_link',
  );

  return $field_bases;
}
