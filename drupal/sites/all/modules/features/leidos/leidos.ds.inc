<?php
/**
 * @file
 * leidos.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function leidos_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|announcements-panel_pane_1-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'announcements-panel_pane_1-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_announcement_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|announcements-panel_pane_1-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|project_type|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'project_type';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'featured_projects' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:8:{s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:14:"items_per_page";s:2:"10";s:4:"path";s:0:"";s:9:"arguments";a:1:{s:19:"term_node_tid_depth";s:18:"%taxonomy_term:tid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"projects-panel_pane_1";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|project_type|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function leidos_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'featured_projects';
  $ds_field->label = 'Featured Projects';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['featured_projects'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function leidos_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|announcements-panel_pane_1-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'announcements-panel_pane_1-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_announcement_date',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_announcement_date' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['ds_views|announcements-panel_pane_1-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_column_links|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_column_links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_link',
        1 => 'field_column_link',
      ),
    ),
    'fields' => array(
      'field_title_link' => 'ds_content',
      'field_column_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_column_links|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_column_links|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_column_links';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_link',
        1 => 'field_column_link',
      ),
    ),
    'fields' => array(
      'field_title_link' => 'ds_content',
      'field_column_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_column_links|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_columns_list|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_columns_list';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_link',
        1 => 'field_list_items',
        2 => 'field_cta',
      ),
    ),
    'fields' => array(
      'field_title_link' => 'ds_content',
      'field_list_items' => 'ds_content',
      'field_cta' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_columns_list|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_columns_list|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_columns_list';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_link',
        1 => 'field_list_items',
        2 => 'field_cta',
      ),
    ),
    'fields' => array(
      'field_title_link' => 'ds_content',
      'field_list_items' => 'ds_content',
      'field_cta' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_columns_list|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_columns|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_columns';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_column_links',
      ),
    ),
    'fields' => array(
      'field_column_links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_columns|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_columns|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_columns';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_column_links',
      ),
    ),
    'fields' => array(
      'field_column_links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_columns|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|left_navigation|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'left_navigation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_menu',
      ),
    ),
    'fields' => array(
      'field_menu' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|left_navigation|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|left_navigation|full';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'left_navigation';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_menu',
      ),
    ),
    'fields' => array(
      'field_menu' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|left_navigation|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|link_columns|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'link_columns';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_columns',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_columns' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|link_columns|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|link_columns|full';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'link_columns';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_columns',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_columns' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|link_columns|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|list_columns|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'list_columns';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_columns_list',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_columns_list' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|list_columns|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|list_columns|full';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'list_columns';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_columns_list',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_columns_list' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['fieldable_panels_pane|list_columns|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|project_type|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'project_type';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-flexible:industry_template';
  $ds_layout->settings = array(
    'regions' => array(
      'right_rail' => array(
        0 => 'title',
        1 => 'description',
        2 => 'field_content',
        3 => 'field_featured_subcategories',
      ),
      'optional_inner_right_rail' => array(
        4 => 'featured_projects',
      ),
    ),
    'fields' => array(
      'title' => 'right_rail',
      'description' => 'right_rail',
      'field_content' => 'right_rail',
      'field_featured_subcategories' => 'right_rail',
      'featured_projects' => 'optional_inner_right_rail',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top_banner' => 'div',
      'left_rail' => 'div',
      'optional_rotator' => 'div',
      'right_rail' => 'div',
      'optional_inner_right_rail' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|project_type|default'] = $ds_layout;

  return $export;
}
