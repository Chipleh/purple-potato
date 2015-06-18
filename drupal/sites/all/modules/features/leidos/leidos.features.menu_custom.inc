<?php
/**
 * @file
 * leidos.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function leidos_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-left-navigation.
  $menus['menu-left-navigation'] = array(
    'menu_name' => 'menu-left-navigation',
    'title' => 'Left navigation',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Left navigation');


  return $menus;
}
