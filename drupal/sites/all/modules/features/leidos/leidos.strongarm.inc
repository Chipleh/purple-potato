<?php
/**
 * @file
 * leidos.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function leidos_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_announcement';
  $strongarm->value = '2';
  $export['comment_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_announcement';
  $strongarm->value = 0;
  $export['comment_anonymous_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project';
  $strongarm->value = 0;
  $export['comment_anonymous_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_rotator';
  $strongarm->value = 0;
  $export['comment_anonymous_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_announcement';
  $strongarm->value = 1;
  $export['comment_default_mode_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_project';
  $strongarm->value = 1;
  $export['comment_default_mode_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_rotator';
  $strongarm->value = 1;
  $export['comment_default_mode_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_announcement';
  $strongarm->value = '50';
  $export['comment_default_per_page_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_project';
  $strongarm->value = '50';
  $export['comment_default_per_page_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_rotator';
  $strongarm->value = '50';
  $export['comment_default_per_page_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_announcement';
  $strongarm->value = 1;
  $export['comment_form_location_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_project';
  $strongarm->value = 1;
  $export['comment_form_location_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_rotator';
  $strongarm->value = 1;
  $export['comment_form_location_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_announcement';
  $strongarm->value = '1';
  $export['comment_preview_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_project';
  $strongarm->value = '1';
  $export['comment_preview_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_rotator';
  $strongarm->value = '1';
  $export['comment_preview_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_project';
  $strongarm->value = '2';
  $export['comment_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_rotator';
  $strongarm->value = '2';
  $export['comment_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_announcement';
  $strongarm->value = 1;
  $export['comment_subject_field_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_project';
  $strongarm->value = 1;
  $export['comment_subject_field_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_rotator';
  $strongarm->value = 1;
  $export['comment_subject_field_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__left_navigation';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__left_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__announcement';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__project';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '20',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__rotator';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_announcement';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_project';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_rotator';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_announcement';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_project';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_rotator';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_announcement';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_project';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rotator';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_announcement';
  $strongarm->value = '1';
  $export['node_preview_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_project';
  $strongarm->value = '1';
  $export['node_preview_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_rotator';
  $strongarm->value = '1';
  $export['node_preview_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_announcement';
  $strongarm->value = 1;
  $export['node_submitted_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_project';
  $strongarm->value = 1;
  $export['node_submitted_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_rotator';
  $strongarm->value = 1;
  $export['node_submitted_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_activity';
  $strongarm->value = 'a:2:{s:5:"title";s:8:"Activity";s:7:"content";a:0:{}}';
  $export['panels_curator_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_categories';
  $strongarm->value = 'activity,custom-blocks,display-suite,fielded-panes,menus,miscellaneous,optional-theme-elements,page-elements,root,view-panes,views,widgets,disabled,leidos,top-banner,navigation-menu,rotator,right-rail,open-html';
  $export['panels_curator_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_custom-blocks';
  $strongarm->value = 'a:2:{s:5:"title";s:13:"Custom blocks";s:7:"content";a:0:{}}';
  $export['panels_curator_custom-blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_disabled';
  $strongarm->value = 'a:2:{s:5:"title";s:8:"Disabled";s:7:"content";a:71:{s:11:"Panels_Pane";a:12:{s:4:"name";s:21:"fieldable_panels_pane";s:5:"title";s:11:"Panels Pane";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:21:"fieldable_panels_pane";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:21:"fieldable_panels_pane";}s:11:"Development";a:6:{s:5:"title";s:11:"Development";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:10:"menu-devel";}s:8:"Features";a:6:{s:5:"title";s:8:"Features";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:13:"menu-features";}s:18:"Footer_-_Main_Menu";a:6:{s:5:"title";s:18:"Footer - Main Menu";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:28:"menu-menu-footer---main-menu";}s:18:"Footer_-_Resources";a:6:{s:5:"title";s:18:"Footer - Resources";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:28:"menu-menu-footer---resources";}s:17:"Footer_-_Services";a:6:{s:5:"title";s:17:"Footer - Services";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:27:"menu-menu-footer---services";}s:21:"Footer_-_Social_Media";a:6:{s:5:"title";s:21:"Footer - Social Media";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:31:"menu-menu-footer---social-media";}s:12:"Pane_Testing";a:6:{s:5:"title";s:12:"Pane Testing";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:22:"menu-menu-pane-testing";}s:30:"Footer_-_Main_Menu_(levels_1+)";a:6:{s:5:"title";s:30:"Footer - Main Menu (levels 1+)";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:12:"menu_block-1";}s:30:"Footer_-_Resources_(levels_1+)";a:6:{s:5:"title";s:30:"Footer - Resources (levels 1+)";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:12:"menu_block-2";}s:29:"Footer_-_Services_(levels_1+)";a:6:{s:5:"title";s:29:"Footer - Services (levels 1+)";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:12:"menu_block-3";}s:33:"Footer_-_Social_Media_(levels_1+)";a:6:{s:5:"title";s:33:"Footer - Social Media (levels 1+)";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:12:"menu_block-4";}s:24:"Pane_Testing_(levels_1+)";a:6:{s:5:"title";s:24:"Pane Testing (levels 1+)";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:12:"menu_block-5";}s:10:"Navigation";a:6:{s:5:"title";s:10:"Navigation";s:4:"icon";s:24:"icon_core_navigation.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:17:"system-navigation";}s:10:"Management";a:6:{s:5:"title";s:10:"Management";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:17:"system-management";}s:9:"User_menu";a:6:{s:5:"title";s:9:"User menu";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:16:"system-user-menu";}s:9:"Main_menu";a:6:{s:5:"title";s:9:"Main menu";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:16:"system-main-menu";}s:71:"menu_tree_of_<em_class="placeholder">the_menu_selected_by_the_page</em>";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:9:"_active:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:7:"_active";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:71:"menu tree of <em class="placeholder">the menu selected by the page</em>";s:10:"menu_title";s:31:"<the menu selected by the page>";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:7:"_active";}s:50:"<em_class="placeholder">Development</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:7:"devel:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:5:"devel";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:50:"<em class="placeholder">Development</em> menu tree";s:10:"menu_title";s:11:"Development";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:5:"devel";}s:61:"<em_class="placeholder">Engineering_Navigation</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:29:"menu-engineering-navigation:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:27:"menu-engineering-navigation";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:61:"<em class="placeholder">Engineering Navigation</em> menu tree";s:10:"menu_title";s:22:"Engineering Navigation";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:27:"menu-engineering-navigation";}s:47:"<em_class="placeholder">Features</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:10:"features:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:8:"features";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:47:"<em class="placeholder">Features</em> menu tree";s:10:"menu_title";s:8:"Features";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:8:"features";}s:57:"<em_class="placeholder">Footer_-_Main_Menu</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:25:"menu-footer---main-menu:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:23:"menu-footer---main-menu";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:57:"<em class="placeholder">Footer - Main Menu</em> menu tree";s:10:"menu_title";s:18:"Footer - Main Menu";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:23:"menu-footer---main-menu";}s:57:"<em_class="placeholder">Footer_-_Resources</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:25:"menu-footer---resources:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:23:"menu-footer---resources";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:57:"<em class="placeholder">Footer - Resources</em> menu tree";s:10:"menu_title";s:18:"Footer - Resources";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:23:"menu-footer---resources";}s:56:"<em_class="placeholder">Footer_-_Services</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:24:"menu-footer---services:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:22:"menu-footer---services";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:56:"<em class="placeholder">Footer - Services</em> menu tree";s:10:"menu_title";s:17:"Footer - Services";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:22:"menu-footer---services";}s:60:"<em_class="placeholder">Footer_-_Social_Media</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:28:"menu-footer---social-media:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:26:"menu-footer---social-media";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:60:"<em class="placeholder">Footer - Social Media</em> menu tree";s:10:"menu_title";s:21:"Footer - Social Media";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:26:"menu-footer---social-media";}s:54:"<em_class="placeholder">Left_navigation</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:22:"menu-left-navigation:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:20:"menu-left-navigation";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:54:"<em class="placeholder">Left navigation</em> menu tree";s:10:"menu_title";s:15:"Left navigation";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:20:"menu-left-navigation";}s:48:"<em_class="placeholder">Main_menu</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:26:"icon_contrib_main_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:11:"main-menu:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:9:"main-menu";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:48:"<em class="placeholder">Main menu</em> menu tree";s:10:"menu_title";s:9:"Main menu";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:9:"main-menu";}s:49:"<em_class="placeholder">Management</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:27:"icon_contrib_management.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:12:"management:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:10:"management";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:49:"<em class="placeholder">Management</em> menu tree";s:10:"menu_title";s:10:"Management";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:10:"management";}s:49:"<em_class="placeholder">Navigation</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:12:"navigation:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:10:"navigation";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:49:"<em class="placeholder">Navigation</em> menu tree";s:10:"menu_title";s:10:"Navigation";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:10:"navigation";}s:51:"<em_class="placeholder">Pane_Testing</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:19:"menu-pane-testing:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:17:"menu-pane-testing";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:51:"<em class="placeholder">Pane Testing</em> menu tree";s:10:"menu_title";s:12:"Pane Testing";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:17:"menu-pane-testing";}s:48:"<em_class="placeholder">User_menu</em>_menu_tree";a:11:{s:11:"description";s:43:"A configurable tree provided by Menu block.";s:4:"icon";s:21:"icon_contrib_menu.png";s:8:"category";a:2:{i:0;s:5:"Menus";i:1;i:-9;}s:8:"defaults";a:10:{s:6:"parent";s:11:"user-menu:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";i:1;s:6:"follow";i:0;s:5:"depth";i:0;s:14:"depth_relative";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:9:"menu_name";s:9:"user-menu";}s:2:"js";a:1:{i:0;s:50:"sites/all/modules/contrib/menu_block/menu-block.js";}s:3:"css";a:1:{i:0;s:57:"sites/all/modules/contrib/menu_block/menu-block-admin.css";}s:5:"title";s:48:"<em class="placeholder">User menu</em> menu tree";s:10:"menu_title";s:9:"User menu";s:4:"path";s:68:"sites/all/modules/contrib/menu_block/plugins/content_types/menu_tree";s:9:"type_name";s:9:"menu_tree";s:12:"subtype_name";s:9:"user-menu";}s:18:"Inline_differences";a:6:{s:5:"title";s:18:"Inline differences";s:4:"icon";s:22:"icon_contrib_block.png";s:8:"category";s:13:"Miscellaneous";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:11:"diff-inline";}s:9:"Shortcuts";a:6:{s:5:"title";s:9:"Shortcuts";s:4:"icon";s:22:"icon_contrib_block.png";s:8:"category";s:13:"Miscellaneous";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:18:"shortcut-shortcuts";}s:11:"Execute_PHP";a:6:{s:5:"title";s:11:"Execute PHP";s:4:"icon";s:22:"icon_contrib_block.png";s:8:"category";s:13:"Miscellaneous";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:17:"devel-execute_php";}s:11:"Switch_user";a:6:{s:5:"title";s:11:"Switch user";s:4:"icon";s:22:"icon_contrib_block.png";s:8:"category";s:13:"Miscellaneous";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:17:"devel-switch_user";}s:26:"Secondary_navigation_links";a:7:{s:5:"title";s:26:"Secondary navigation links";s:11:"description";s:49:"Add the secondary_links (local tasks) as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:20:"page_secondary_links";s:12:"subtype_name";s:20:"page_secondary_links";}s:15:"Status_messages";a:7:{s:5:"title";s:15:"Status messages";s:11:"description";s:55:"Add the status messages of the current page as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:13:"page_messages";s:12:"subtype_name";s:13:"page_messages";}s:9:"Site_logo";a:7:{s:5:"title";s:9:"Site logo";s:11:"description";s:30:"Add the logo trail as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:9:"page_logo";s:12:"subtype_name";s:9:"page_logo";}s:11:"Site_slogan";a:7:{s:5:"title";s:11:"Site slogan";s:11:"description";s:33:"Add the site\'s slogan as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:11:"page_slogan";s:12:"subtype_name";s:11:"page_slogan";}s:7:"Actions";a:7:{s:5:"title";s:7:"Actions";s:11:"description";s:46:"Add the action links (local tasks) as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:12:"page_actions";s:12:"subtype_name";s:12:"page_actions";}s:24:"Primary_navigation_links";a:7:{s:5:"title";s:24:"Primary navigation links";s:11:"description";s:47:"Add the primary_links (local tasks) as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:18:"page_primary_links";s:12:"subtype_name";s:18:"page_primary_links";}s:4:"Help";a:7:{s:5:"title";s:4:"Help";s:11:"description";s:49:"Add the help text of the current page as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:9:"page_help";s:12:"subtype_name";s:9:"page_help";}s:4:"Tabs";a:7:{s:5:"title";s:4:"Tabs";s:11:"description";s:38:"Add the tabs (local tasks) as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:9:"page_tabs";s:12:"subtype_name";s:9:"page_tabs";}s:10:"Feed_icons";a:7:{s:5:"title";s:10:"Feed icons";s:11:"description";s:45:"Add the site feed_icons statement as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:15:"page_feed_icons";s:12:"subtype_name";s:15:"page_feed_icons";}s:9:"Site_name";a:7:{s:5:"title";s:9:"Site name";s:11:"description";s:57:"The name of the site, optionally links to the front page.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:14:"page_site_name";s:12:"subtype_name";s:14:"page_site_name";}s:11:"System_help";a:6:{s:5:"title";s:11:"System help";s:4:"icon";s:20:"icon_core_drupal.png";s:8:"category";s:13:"Page elements";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:11:"system-help";}s:23:"Fieldable_pane_entities";a:8:{s:4:"view";s:23:"fieldable_pane_entities";s:5:"title";s:23:"Fieldable pane entities";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:82:"Administrative view to show a list of fieldable pane entities and administer them.";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:23:"fieldable_pane_entities";}s:31:"Fieldable_pane_entity_revisions";a:8:{s:4:"view";s:31:"fieldable_pane_entity_revisions";s:5:"title";s:31:"Fieldable pane entity revisions";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:95:"Administrative view to show a list of revisions of a fieldable pane entity and administer them.";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:31:"fieldable_pane_entity_revisions";}s:17:"Capabilities_Sort";a:8:{s:4:"view";s:17:"capabilities_sort";s:5:"title";s:17:"Capabilities Sort";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:0:"";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:17:"capabilities_sort";}s:21:"List_Node_Page_Titles";a:8:{s:4:"view";s:21:"list_node_page_titles";s:5:"title";s:21:"List Node Page Titles";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:37:"List all Nodes with their Page Titles";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:21:"list_node_page_titles";}s:21:"Administration:_Nodes";a:8:{s:4:"view";s:16:"admin_views_node";s:5:"title";s:21:"Administration: Nodes";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:24:"Find and manage content.";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:16:"admin_views_node";}s:21:"Administration:_Users";a:8:{s:4:"view";s:16:"admin_views_user";s:5:"title";s:21:"Administration: Users";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:26:"List, add, and edit users.";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:16:"admin_views_user";}s:24:"Administration:_Comments";a:8:{s:4:"view";s:19:"admin_views_comment";s:5:"title";s:24:"Administration: Comments";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:61:"List and edit site comments and the comment moderation queue.";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:19:"admin_views_comment";}s:20:"Advanced_search_form";a:8:{s:5:"title";s:20:"Advanced search form";s:11:"description";s:36:"A search form with advanced options.";s:4:"icon";s:77:"sites/all/modules/contrib/ctools/plugins/content_types/search/icon_search.png";s:8:"category";s:7:"Widgets";s:16:"required context";O:23:"ctools_context_optional":4:{s:8:"required";b:0;s:8:"keywords";s:6:"string";s:5:"title";s:8:"Keywords";s:15:"skip_name_check";b:0;}s:4:"path";s:61:"sites/all/modules/contrib/ctools/plugins/content_types/search";s:9:"type_name";s:11:"search_form";s:12:"subtype_name";s:11:"search_form";}s:9:"Syndicate";a:6:{s:5:"title";s:9:"Syndicate";s:4:"icon";s:23:"icon_core_syndicate.png";s:8:"category";s:7:"Widgets";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:14:"node-syndicate";}s:14:"Recent_content";a:6:{s:5:"title";s:14:"Recent content";s:4:"icon";s:23:"icon_core_syndicate.png";s:8:"category";s:7:"Widgets";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:11:"node-recent";}s:11:"Search_form";a:6:{s:5:"title";s:11:"Search form";s:4:"icon";s:24:"icon_core_searchform.png";s:8:"category";s:7:"Widgets";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:11:"search-form";}s:17:"Powered_by_Drupal";a:6:{s:5:"title";s:17:"Powered by Drupal";s:4:"icon";s:20:"icon_core_drupal.png";s:8:"category";s:7:"Widgets";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:17:"system-powered-by";}s:10:"User_login";a:7:{s:5:"title";s:10:"User login";s:8:"category";s:7:"Widgets";s:4:"icon";s:23:"icon_core_userlogin.png";s:15:"render callback";s:29:"ctools_user_login_pane_render";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:10:"user-login";}s:13:"Existing_node";a:9:{s:5:"title";s:13:"Existing node";s:11:"description";s:37:"Add a node from your site as content.";s:4:"icon";s:73:"sites/all/modules/contrib/ctools/plugins/content_types/node/icon_node.png";s:8:"category";s:6:"Custom";s:9:"top level";b:1;s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/node";s:2:"js";a:1:{i:0;s:20:"misc/autocomplete.js";}s:9:"type_name";s:4:"node";s:12:"subtype_name";s:4:"node";}s:18:"New_custom_content";a:12:{s:4:"name";s:6:"custom";s:5:"title";s:18:"New custom content";s:9:"top level";b:1;s:8:"category";s:6:"Custom";s:11:"description";s:49:"Create a completely custom piece of HTML content.";s:9:"edit form";s:36:"ctools_custom_content_type_edit_form";s:12:"all contexts";b:1;s:14:"check editable";s:35:"ctools_custom_content_type_editable";s:4:"path";s:61:"sites/all/modules/contrib/ctools/plugins/content_types/custom";s:2:"js";a:3:{i:0;s:20:"misc/autocomplete.js";i:1;s:16:"misc/textarea.js";i:2;s:16:"misc/collapse.js";}s:9:"type_name";s:6:"custom";s:12:"subtype_name";s:6:"custom";}s:15:"Recent_comments";a:6:{s:5:"title";s:15:"Recent comments";s:4:"icon";s:28:"icon_core_recentcomments.png";s:8:"category";s:8:"Activity";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:14:"comment-recent";}s:9:"Who\'s_new";a:6:{s:5:"title";s:9:"Who\'s new";s:8:"category";s:8:"Activity";s:4:"icon";s:21:"icon_core_whosnew.png";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:8:"user-new";}s:12:"Who\'s_online";a:6:{s:5:"title";s:12:"Who\'s online";s:8:"category";s:8:"Activity";s:4:"icon";s:24:"icon_core_whosonline.png";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:11:"user-online";}s:21:"Display_Suite_content";a:8:{s:5:"title";s:21:"Display Suite content";s:11:"description";s:101:"Add custom content with the possibility to use the entity object when using the Display Suite format.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Display Suite";s:4:"path";s:54:"sites/all/modules/contrib/ds/plugins/content_types/dsc";s:2:"js";a:2:{i:0;s:16:"misc/textarea.js";i:1;s:16:"misc/collapse.js";}s:9:"type_name";s:3:"dsc";s:12:"subtype_name";s:3:"dsc";}s:15:"Left_navigation";a:4:{s:5:"title";s:15:"Left navigation";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";}s:23:"View:_Rotators:_Rotator";a:7:{s:5:"title";s:23:"View: Rotators: Rotator";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:1:{i:0;N;}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:1;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";}s:14:"View:_Rotators";a:9:{s:5:"title";s:14:"View: Rotators";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:0:{}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:1;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:11:"views_panes";s:12:"subtype_name";s:21:"rotators-rotator_pane";}s:8:"Rotators";a:8:{s:4:"view";s:8:"rotators";s:5:"title";s:8:"Rotators";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:0:"";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:8:"rotators";}s:43:"View:_Announcements:_Featured_Announcements";a:9:{s:5:"title";s:43:"View: Announcements: Featured Announcements";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:1:{i:0;N;}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:0;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:11:"views_panes";s:12:"subtype_name";s:41:"announcements-featured_announcements_pane";}s:33:"View:_Projects:_Featured_Projects";a:9:{s:5:"title";s:33:"View: Projects: Featured Projects";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:1:{i:0;N;}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:0;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:11:"views_panes";s:12:"subtype_name";s:31:"projects-featured_projects_pane";}}}';
  $export['panels_curator_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_display-suite';
  $strongarm->value = 'a:2:{s:5:"title";s:13:"Display Suite";s:7:"content";a:0:{}}';
  $export['panels_curator_display-suite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_fielded-panes';
  $strongarm->value = 'a:2:{s:5:"title";s:13:"Fielded panes";s:7:"content";a:0:{}}';
  $export['panels_curator_fielded-panes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_leidos';
  $strongarm->value = 'a:2:{s:5:"title";s:6:"Leidos";s:7:"content";a:14:{s:11:"Page_Header";a:12:{s:4:"name";s:11:"page_header";s:5:"title";s:11:"Page Header";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:11:"page_header";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:11:"page_header";}s:12:"Link_columns";a:12:{s:4:"name";s:12:"link_columns";s:5:"title";s:12:"Link columns";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:12:"link_columns";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:12:"link_columns";}s:12:"List_columns";a:12:{s:4:"name";s:12:"list_columns";s:5:"title";s:12:"List columns";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:12:"list_columns";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:12:"list_columns";}s:10:"Breadcrumb";a:7:{s:5:"title";s:10:"Breadcrumb";s:11:"description";s:36:"Add the breadcrumb trail as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:15:"page_breadcrumb";s:12:"subtype_name";s:15:"page_breadcrumb";}s:44:"View:_Announcements:_Full_View_Announcements";a:9:{s:5:"title";s:44:"View: Announcements: Full View Announcements";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:1:{i:0;N;}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:1;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:11:"views_panes";s:12:"subtype_name";s:42:"announcements-full_view_announcements_pane";}s:53:"View:_Announcements:_Full_View_Announcements_-_Mobile";a:9:{s:5:"title";s:53:"View: Announcements: Full View Announcements - Mobile";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:1:{i:0;N;}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:1;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:11:"views_panes";s:12:"subtype_name";s:49:"announcements-full_view_announcements_pane_mobile";}s:34:"View:_Projects:_Full_View_Projects";a:9:{s:5:"title";s:34:"View: Projects: Full View Projects";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:1:{i:0;N;}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:1;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:11:"views_panes";s:12:"subtype_name";s:32:"projects-full_view_projects_pane";}s:43:"View:_Projects:_Full_View_Projects_-_Mobile";a:9:{s:5:"title";s:43:"View: Projects: Full View Projects - Mobile";s:4:"icon";s:19:"icon_views_page.png";s:11:"description";s:0:"";s:16:"required context";a:1:{i:0;N;}s:8:"category";a:2:{i:0;s:10:"View panes";i:1;i:0;}s:17:"no title override";b:1;s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:11:"views_panes";s:12:"subtype_name";s:39:"projects-full_view_projects_pane_mobile";}s:13:"Announcements";a:8:{s:4:"view";s:13:"announcements";s:5:"title";s:13:"Announcements";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:0:"";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:13:"announcements";}s:12:"Capabilities";a:8:{s:4:"view";s:12:"capabilities";s:5:"title";s:12:"Capabilities";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:0:"";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:12:"capabilities";}s:8:"Projects";a:8:{s:4:"view";s:8:"projects";s:5:"title";s:8:"Projects";s:4:"icon";s:26:"icon_views_page_legacy.png";s:11:"description";s:0:"";s:8:"category";s:5:"Views";s:4:"path";s:68:"sites/all/modules/contrib/ctools/views_content/plugins/content_types";s:9:"type_name";s:5:"views";s:12:"subtype_name";s:8:"projects";}s:21:"Search_Leidos_website";a:7:{s:5:"title";s:21:"Search Leidos website";s:4:"icon";s:25:"icon_core_block_empty.png";s:8:"category";s:13:"Custom blocks";s:8:"defaults";a:2:{s:14:"override_title";b:1;s:19:"override_title_text";s:13:"Leidos Search";}s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";s:9:"type_name";s:5:"block";s:12:"subtype_name";s:7:"block-1";}s:18:"Custom_Breadcrumbs";a:12:{s:4:"name";s:18:"custom_breadcrumbs";s:5:"title";s:18:"Custom Breadcrumbs";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:18:"custom_breadcrumbs";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:18:"custom_breadcrumbs";}s:19:"Elements_Panel_Pane";a:12:{s:4:"name";s:19:"elements_panel_pane";s:5:"title";s:19:"Elements Panel Pane";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:19:"elements_panel_pane";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:19:"elements_panel_pane";}}}';
  $export['panels_curator_leidos'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_menus';
  $strongarm->value = 'a:2:{s:5:"title";s:5:"Menus";s:7:"content";a:0:{}}';
  $export['panels_curator_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_miscellaneous';
  $strongarm->value = 'a:2:{s:5:"title";s:13:"Miscellaneous";s:7:"content";a:0:{}}';
  $export['panels_curator_miscellaneous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_navigation-menu';
  $strongarm->value = 'a:2:{s:5:"title";s:15:"Navigation menu";s:7:"content";a:2:{s:22:"Engineering_Navigation";a:4:{s:5:"title";s:22:"Engineering Navigation";s:4:"icon";s:24:"icon_core_block_menu.png";s:8:"category";s:5:"Menus";s:4:"path";s:60:"sites/all/modules/contrib/ctools/plugins/content_types/block";}s:20:"Left_navigation_menu";a:12:{s:4:"name";s:15:"left_navigation";s:5:"title";s:20:"Left navigation menu";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:15:"left_navigation";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:15:"left_navigation";}}}';
  $export['panels_curator_navigation-menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_open-html';
  $strongarm->value = 'a:2:{s:5:"title";s:9:"Open HTML";s:7:"content";a:1:{s:7:"Content";a:12:{s:4:"name";s:7:"content";s:5:"title";s:7:"Content";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:7:"content";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:7:"content";}}}';
  $export['panels_curator_open-html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_optional-theme-elements';
  $strongarm->value = 'a:2:{s:5:"title";s:23:"Optional Theme Elements";s:7:"content";a:0:{}}';
  $export['panels_curator_optional-theme-elements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_page-elements';
  $strongarm->value = 'a:2:{s:5:"title";s:13:"Page elements";s:7:"content";a:0:{}}';
  $export['panels_curator_page-elements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_activity';
  $strongarm->value = '';
  $export['panels_curator_regions_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_custom-blocks';
  $strongarm->value = '';
  $export['panels_curator_regions_custom-blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_disabled';
  $strongarm->value = '';
  $export['panels_curator_regions_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_display-suite';
  $strongarm->value = '';
  $export['panels_curator_regions_display-suite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_fielded-panes';
  $strongarm->value = '';
  $export['panels_curator_regions_fielded-panes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_leidos';
  $strongarm->value = 'right_rail';
  $export['panels_curator_regions_leidos'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_menus';
  $strongarm->value = '';
  $export['panels_curator_regions_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_miscellaneous';
  $strongarm->value = '';
  $export['panels_curator_regions_miscellaneous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_navigation-menu';
  $strongarm->value = 'left_rail';
  $export['panels_curator_regions_navigation-menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_open-html';
  $strongarm->value = 'right_rail,optional_inner_right_rail';
  $export['panels_curator_regions_open-html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_optional-theme-elements';
  $strongarm->value = '';
  $export['panels_curator_regions_optional-theme-elements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_page-elements';
  $strongarm->value = '';
  $export['panels_curator_regions_page-elements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_right-rail';
  $strongarm->value = 'optional_inner_right_rail';
  $export['panels_curator_regions_right-rail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_root';
  $strongarm->value = '';
  $export['panels_curator_regions_root'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_rotator';
  $strongarm->value = 'optional_rotator';
  $export['panels_curator_regions_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_top-banner';
  $strongarm->value = 'top_banner';
  $export['panels_curator_regions_top-banner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_view-panes';
  $strongarm->value = '';
  $export['panels_curator_regions_view-panes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_views';
  $strongarm->value = '';
  $export['panels_curator_regions_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_regions_widgets';
  $strongarm->value = '';
  $export['panels_curator_regions_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_right-rail';
  $strongarm->value = 'a:2:{s:5:"title";s:10:"Right rail";s:7:"content";a:2:{s:19:"Featured_News_Panel";a:12:{s:4:"name";s:19:"featured_news_panel";s:5:"title";s:19:"Featured News Panel";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:19:"featured_news_panel";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:19:"featured_news_panel";}s:23:"Featured_Projects_Panel";a:12:{s:4:"name";s:23:"featured_projects_panel";s:5:"title";s:23:"Featured Projects Panel";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:23:"featured_projects_panel";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:23:"featured_projects_panel";}}}';
  $export['panels_curator_right-rail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_root';
  $strongarm->value = 'a:2:{s:5:"title";s:4:"root";s:7:"content";a:0:{}}';
  $export['panels_curator_root'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_rotator';
  $strongarm->value = 'a:2:{s:5:"title";s:7:"Rotator";s:7:"content";a:1:{s:7:"Rotator";a:12:{s:4:"name";s:7:"rotator";s:5:"title";s:7:"Rotator";s:8:"category";s:13:"Fielded panes";s:9:"top level";b:0;s:4:"icon";N;s:11:"description";s:27:"Create a new custom entity.";s:12:"all contexts";b:1;s:6:"bundle";s:7:"rotator";s:21:"create content access";s:49:"fieldable_panels_panes_content_type_create_access";s:4:"path";s:70:"sites/all/modules/contrib/fieldable_panels_panes/plugins/content_types";s:9:"type_name";s:21:"fieldable_panels_pane";s:12:"subtype_name";s:7:"rotator";}}}';
  $export['panels_curator_rotator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_top-banner';
  $strongarm->value = 'a:2:{s:5:"title";s:10:"Top Banner";s:7:"content";a:2:{s:10:"Page_title";a:7:{s:5:"title";s:10:"Page title";s:11:"description";s:30:"Add the page title as content.";s:4:"icon";s:51:"sites/all/modules/contrib/ctools/images/no-icon.png";s:8:"category";s:13:"Page elements";s:4:"path";s:59:"sites/all/modules/contrib/ctools/plugins/content_types/page";s:9:"type_name";s:10:"page_title";s:12:"subtype_name";s:10:"page_title";}s:12:"Theme_Banner";a:11:{s:4:"name";s:12:"theme_banner";s:5:"title";s:12:"Theme Banner";s:11:"description";s:42:"Banner that appears at the top of the page";s:8:"category";s:23:"Optional Theme Elements";s:12:"all contexts";b:1;s:4:"icon";s:21:"icon_block_custom.png";s:7:"content";O:8:"stdClass":10:{s:3:"cid";s:1:"3";s:4:"name";s:12:"theme_banner";s:11:"admin_title";s:12:"Theme Banner";s:17:"admin_description";s:42:"Banner that appears at the top of the page";s:8:"category";s:23:"Optional Theme Elements";s:8:"settings";a:5:{s:11:"admin_title";s:12:"Theme Banner";s:5:"title";s:0:"";s:4:"body";s:33:"<div id="theme-banner-div"></div>";s:6:"format";s:9:"full_html";s:10:"substitute";i:1;}s:5:"table";s:21:"ctools_custom_content";s:4:"type";s:10:"Overridden";s:11:"export_type";i:3;s:13:"export_module";s:6:"leidos";}s:4:"path";s:61:"sites/all/modules/contrib/ctools/plugins/content_types/custom";s:2:"js";a:3:{i:0;s:20:"misc/autocomplete.js";i:1;s:16:"misc/textarea.js";i:2;s:16:"misc/collapse.js";}s:9:"type_name";s:6:"custom";s:12:"subtype_name";s:12:"theme_banner";}}}';
  $export['panels_curator_top-banner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_view-panes';
  $strongarm->value = 'a:2:{s:5:"title";s:10:"View panes";s:7:"content";a:0:{}}';
  $export['panels_curator_view-panes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_views';
  $strongarm->value = 'a:2:{s:5:"title";s:5:"Views";s:7:"content";a:0:{}}';
  $export['panels_curator_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_widgets';
  $strongarm->value = 'a:2:{s:5:"title";s:7:"Widgets";s:7:"content";a:0:{}}';
  $export['panels_curator_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_renderer_default';
  $strongarm->value = 'ipe';
  $export['panels_renderer_default'] = $strongarm;

  return $export;
}
