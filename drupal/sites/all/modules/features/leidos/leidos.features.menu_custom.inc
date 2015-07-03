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
  // Exported menu: menu-footer---main-menu.
  $menus['menu-footer---main-menu'] = array(
    'menu_name' => 'menu-footer---main-menu',
    'title' => 'Footer - Main Menu',
    'description' => '',
  );
  // Exported menu: menu-footer---resources.
  $menus['menu-footer---resources'] = array(
    'menu_name' => 'menu-footer---resources',
    'title' => 'Footer - Resources',
    'description' => '',
  );
  // Exported menu: menu-footer---services.
  $menus['menu-footer---services'] = array(
    'menu_name' => 'menu-footer---services',
    'title' => 'Footer - Services',
    'description' => '',
  );
  // Exported menu: menu-footer---social-media.
  $menus['menu-footer---social-media'] = array(
    'menu_name' => 'menu-footer---social-media',
    'title' => 'Footer - Social Media',
    'description' => '',
  );
  // Exported menu: menu-left-navigation.
  $menus['menu-left-navigation'] = array(
    'menu_name' => 'menu-left-navigation',
    'title' => 'Left navigation',
    'description' => '',
  );
  // Exported menu: menu-pane-testing.
  $menus['menu-pane-testing'] = array(
    'menu_name' => 'menu-pane-testing',
    'title' => 'Pane Testing',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering Navigation');
  t('Engineering page left navigation bar');
  t('Footer - Main Menu');
  t('Footer - Resources');
  t('Footer - Services');
  t('Footer - Social Media');
  t('Left navigation');
  t('Main menu');
  t('Pane Testing');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
