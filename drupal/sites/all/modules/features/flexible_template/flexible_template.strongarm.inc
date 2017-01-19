<?php
/**
 * @file
 * flexible_template.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function flexible_template_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_flexible_template';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_flexible_template';
  $strongarm->value = 0;
  $export['comment_anonymous_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_rotator_hero';
  $strongarm->value = 0;
  $export['comment_anonymous_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_flexible_template';
  $strongarm->value = 1;
  $export['comment_default_mode_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_rotator_hero';
  $strongarm->value = 1;
  $export['comment_default_mode_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_flexible_template';
  $strongarm->value = '50';
  $export['comment_default_per_page_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_rotator_hero';
  $strongarm->value = '50';
  $export['comment_default_per_page_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_flexible_template';
  $strongarm->value = '2';
  $export['comment_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_flexible_template';
  $strongarm->value = 1;
  $export['comment_form_location_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_rotator_hero';
  $strongarm->value = 1;
  $export['comment_form_location_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_flexible_template';
  $strongarm->value = '1';
  $export['comment_preview_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_rotator_hero';
  $strongarm->value = '1';
  $export['comment_preview_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_rotator_hero';
  $strongarm->value = '2';
  $export['comment_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_flexible_template';
  $strongarm->value = 1;
  $export['comment_subject_field_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_rotator_hero';
  $strongarm->value = 1;
  $export['comment_subject_field_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_flexible_template';
  $strongarm->value = array(
    0 => 'default',
    1 => 'full',
    2 => 'teaser',
  );
  $export['ds_extras_view_modes_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_gallery_thumbnail';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_gallery_thumbnail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_rotator_hero';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__content';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__feature_video';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__feature_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__icons';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__icons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__long_form_copy';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
        'redirect' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__long_form_copy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__multi_column';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__multi_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__multi_column_parallax';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
      'form' => array(),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__multi_column_parallax'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__rotator_hero';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__thumbnail_gallery';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
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
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__thumbnail_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_columns_multi';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
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
        'redirect' => array(
          'weight' => '14',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_columns_multi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_icon_item';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
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
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_icon_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_thumbnail_image_item';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
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
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_thumbnail_image_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__flexible_template';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
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
          'weight' => '4',
        ),
        'metatags' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__rotator_hero';
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
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_flexible_template';
  $strongarm->value = '';
  $export['maxlength_js_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_flexible_template';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_flexible_template';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_rotator_hero';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_flexible_template';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_rotator_hero';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_flexible_template';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rotator_hero';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_flexible_template';
  $strongarm->value = '1';
  $export['node_preview_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_rotator_hero';
  $strongarm->value = '1';
  $export['node_preview_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_flexible_template';
  $strongarm->value = 1;
  $export['node_submitted_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_rotator_hero';
  $strongarm->value = 1;
  $export['node_submitted_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_gallery_thumbnail';
  $strongarm->value = '';
  $export['page_title_type_gallery_thumbnail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_gallery_thumbnail_showfield';
  $strongarm->value = 0;
  $export['page_title_type_gallery_thumbnail_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_flexible_template';
  $strongarm->value = array(
    'status' => 1,
    'help' => '',
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'substitute' => '',
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_flexible_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_gallery_thumbnail';
  $strongarm->value = array(
    'status' => 0,
    'help' => '',
    'view modes' => array(),
  );
  $export['panelizer_defaults_node_gallery_thumbnail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_rotator_hero';
  $strongarm->value = array(
    'status' => 0,
    'help' => '',
    'view modes' => array(),
  );
  $export['panelizer_defaults_node_rotator_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:flexible_template:default_selection';
  $strongarm->value = 0;
  $export['panelizer_node:flexible_template:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:flexible_template:page_manager_selection';
  $strongarm->value = 'node:flexible_template:default';
  $export['panelizer_node:flexible_template:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:flexible_template_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:32:"panelizer_node:flexible_template";s:23:"allowed_layout_settings";a:11:{s:8:"flexible";b:0;s:19:"flexible:full_width";b:0;s:26:"flexible:industry_template";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:6:"twocol";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:6:"onecol";b:1;s:13:"twocol_bricks";b:0;}s:10:"form_state";N;}';
  $export['panelizer_node:flexible_template_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:flexible_template_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:flexible_template_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:flexible_template_allowed_types';
  $strongarm->value = array(
    'fieldable_panels_pane-content' => TRUE,
    'fieldable_panels_pane-fieldable_panels_pane' => TRUE,
    'fieldable_panels_pane-announcements' => TRUE,
    'fieldable_panels_pane-feature_video' => TRUE,
    'fieldable_panels_pane-icons' => TRUE,
    'fieldable_panels_pane-long_form_copy' => TRUE,
    'fieldable_panels_pane-multi_column' => TRUE,
    'fieldable_panels_pane-multi_column_parallax' => TRUE,
    'fieldable_panels_pane-rotator_hero' => TRUE,
    'fieldable_panels_pane-thumbnail_gallery' => TRUE,
    'fieldable_panels_pane-capabilities' => TRUE,
    'fieldable_panels_pane-custom_breadcrumbs' => TRUE,
    'fieldable_panels_pane-elements_panel_pane' => TRUE,
    'fieldable_panels_pane-featured_news_panel' => TRUE,
    'fieldable_panels_pane-featured_projects_panel' => TRUE,
    'fieldable_panels_pane-left_navigation' => TRUE,
    'fieldable_panels_pane-link_columns' => TRUE,
    'fieldable_panels_pane-list_columns' => TRUE,
    'fieldable_panels_pane-page_header' => TRUE,
    'fieldable_panels_pane-ranking_promo' => TRUE,
    'fieldable_panels_pane-rotator' => TRUE,
    'fieldable_panels_pane-webform' => TRUE,
    'fieldable_panels_pane-news_releases' => TRUE,
    'fieldable_panels_pane-fpid:58' => TRUE,
    'fieldable_panels_pane-fpid:408' => TRUE,
    'fieldable_panels_pane-fpid:450' => TRUE,
    'fieldable_panels_pane-fpid:459' => TRUE,
    'fieldable_panels_pane-fpid:464' => TRUE,
    'fieldable_panels_pane-fpid:466' => TRUE,
    'fieldable_panels_pane-fpid:519' => TRUE,
    'fieldable_panels_pane-fpid:554' => TRUE,
    'fieldable_panels_pane-fpid:556' => TRUE,
    'fieldable_panels_pane-fpid:586' => TRUE,
    'fieldable_panels_pane-fpid:597' => TRUE,
    'fieldable_panels_pane-fpid:600' => TRUE,
    'fieldable_panels_pane-fpid:619' => TRUE,
    'fieldable_panels_pane-fpid:639' => TRUE,
    'fieldable_panels_pane-fpid:656' => TRUE,
    'fieldable_panels_pane-fpid:693' => TRUE,
    'fieldable_panels_pane-fpid:728' => TRUE,
    'fieldable_panels_pane-fpid:750' => TRUE,
    'fieldable_panels_pane-fpid:786' => TRUE,
    'fieldable_panels_pane-fpid:788' => TRUE,
    'fieldable_panels_pane-fpid:789' => TRUE,
    'fieldable_panels_pane-fpid:795' => TRUE,
    'fieldable_panels_pane-fpid:819' => TRUE,
    'fieldable_panels_pane-fpid:845' => TRUE,
    'fieldable_panels_pane-fpid:874' => TRUE,
    'fieldable_panels_pane-fpid:985' => TRUE,
    'fieldable_panels_pane-fpid:990' => TRUE,
    'fieldable_panels_pane-fpid:1006' => TRUE,
    'fieldable_panels_pane-fpid:1056' => TRUE,
    'fieldable_panels_pane-fpid:1057' => TRUE,
    'fieldable_panels_pane-fpid:1116' => TRUE,
    'fieldable_panels_pane-fpid:1119' => TRUE,
    'fieldable_panels_pane-fpid:1160' => TRUE,
    'fieldable_panels_pane-fpid:1188' => TRUE,
    'fieldable_panels_pane-fpid:1191' => TRUE,
    'fieldable_panels_pane-fpid:1192' => TRUE,
    'fieldable_panels_pane-fpid:1208' => TRUE,
    'fieldable_panels_pane-fpid:1245' => TRUE,
    'fieldable_panels_pane-fpid:1256' => TRUE,
    'fieldable_panels_pane-fpid:1284' => TRUE,
    'fieldable_panels_pane-fpid:1371' => TRUE,
    'fieldable_panels_pane-fpid:1427' => TRUE,
    'fieldable_panels_pane-fpid:1564' => TRUE,
    'fieldable_panels_pane-fpid:1574' => TRUE,
    'fieldable_panels_pane-fpid:1575' => TRUE,
    'fieldable_panels_pane-fpid:1579' => TRUE,
    'fieldable_panels_pane-fpid:1592' => TRUE,
    'fieldable_panels_pane-fpid:1661' => TRUE,
    'fieldable_panels_pane-fpid:1777' => TRUE,
    'fieldable_panels_pane-fpid:1900' => TRUE,
    'fieldable_panels_pane-fpid:2004' => TRUE,
    'fieldable_panels_pane-fpid:2007' => TRUE,
    'fieldable_panels_pane-fpid:2008' => TRUE,
    'fieldable_panels_pane-fpid:2009' => TRUE,
    'fieldable_panels_pane-fpid:2018' => TRUE,
    'fieldable_panels_pane-fpid:2023' => TRUE,
    'fieldable_panels_pane-fpid:2151' => TRUE,
    'fieldable_panels_pane-fpid:2690' => TRUE,
    'fieldable_panels_pane-fpid:2832' => TRUE,
    'fieldable_panels_pane-fpid:2833' => TRUE,
    'fieldable_panels_pane-fpid:2834' => TRUE,
    'fieldable_panels_pane-fpid:2835' => TRUE,
    'fieldable_panels_pane-fpid:2836' => TRUE,
    'fieldable_panels_pane-fpid:2837' => TRUE,
    'fieldable_panels_pane-fpid:3026' => TRUE,
    'fieldable_panels_pane-fpid:3079' => TRUE,
    'fieldable_panels_pane-fpid:3167' => TRUE,
    'fieldable_panels_pane-fpid:3225' => TRUE,
    'fieldable_panels_pane-fpid:3238' => TRUE,
    'fieldable_panels_pane-fpid:3415' => TRUE,
    'fieldable_panels_pane-fpid:3458' => TRUE,
    'fieldable_panels_pane-fpid:3459' => TRUE,
    'fieldable_panels_pane-fpid:3611' => TRUE,
    'fieldable_panels_pane-fpid:3786' => TRUE,
  );
  $export['panelizer_node:flexible_template_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:flexible_template_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:flexible_template_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:flexible_template_default';
  $strongarm->value = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'entity_form_field' => 0,
    'custom' => 0,
    'token' => 0,
    'entity_field' => 0,
    'entity_field_extra' => 0,
    'block' => 0,
    'entity_view' => 0,
    'menu_tree' => 0,
    'views' => 0,
    'views_panes' => 0,
    'other' => 0,
  );
  $export['panelizer_node:flexible_template_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_curator_display_flexible_template';
  $strongarm->value = '46';
  $export['panels_curator_display_flexible_template'] = $strongarm;

  return $export;
}
