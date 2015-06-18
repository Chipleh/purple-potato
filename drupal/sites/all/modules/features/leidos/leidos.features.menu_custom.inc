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

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-engineering-navigation.
  $menus['menu-engineering-navigation'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'title' => 'Engineering Navigation',
    'description' => 'Engineering page left navigation bar',
  );
  // Exported menu: menu-left-navigation.
  $menus['menu-left-navigation'] = array(
    'menu_name' => 'menu-left-navigation',
    'title' => 'Left navigation',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering Navigation');
  t('Engineering page left navigation bar');
  t('Left navigation');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
