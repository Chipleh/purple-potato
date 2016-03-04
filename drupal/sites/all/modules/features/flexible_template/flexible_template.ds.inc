<?php
/**
 * @file
 * flexible_template.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function flexible_template_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|icons|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'icons';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_icon_item' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|icons|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|multi_column_parallax|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'multi_column_parallax';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_columns_multi' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|multi_column_parallax|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|multi_column|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'multi_column';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_columns_multi' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|multi_column|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|thumbnail_gallery|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'thumbnail_gallery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_thumbnail_image_item' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|thumbnail_gallery|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function flexible_template_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_columns_multi|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_columns_multi';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_item',
        1 => 'field_title_color',
        2 => 'field_title_size',
        3 => 'field_subhead',
        4 => 'field_subhead_color',
        5 => 'field_subhead_size',
        6 => 'field_background_color',
        7 => 'field_background_image',
        8 => 'field_background_video',
        9 => 'field_background_mobile_image',
        10 => 'field_cta',
        11 => 'field_video_tout',
      ),
    ),
    'fields' => array(
      'field_title_item' => 'ds_content',
      'field_title_color' => 'ds_content',
      'field_title_size' => 'ds_content',
      'field_subhead' => 'ds_content',
      'field_subhead_color' => 'ds_content',
      'field_subhead_size' => 'ds_content',
      'field_background_color' => 'ds_content',
      'field_background_image' => 'ds_content',
      'field_background_video' => 'ds_content',
      'field_background_mobile_image' => 'ds_content',
      'field_cta' => 'ds_content',
      'field_video_tout' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['field_collection_item|field_columns_multi|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_columns_multi|form';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_columns_multi';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_4col';
  $ds_layout->settings = array(
    'regions' => array(
      'first' => array(
        0 => 'field_title_item',
        1 => 'field_title_color',
        2 => 'field_title_size',
        3 => 'field_subhead',
        4 => 'field_subhead_color',
        5 => 'field_subhead_size',
        6 => 'field_background_color',
        7 => 'field_background_image',
        8 => 'field_background_video',
        9 => 'field_background_mobile_image',
        10 => 'field_video_tout',
        11 => 'field_cta',
        12 => 'redirect',
        13 => '_add_existing_field',
      ),
      'hidden' => array(
        14 => 'field_title_copy',
        15 => 'field_title_copy_color',
        16 => 'field_title_copy_size',
        17 => 'field_subhead_copy',
        18 => 'field_subhead_copy_color',
        19 => 'field_subhead_copy_size',
      ),
    ),
    'fields' => array(
      'field_title_item' => 'first',
      'field_title_color' => 'first',
      'field_title_size' => 'first',
      'field_subhead' => 'first',
      'field_subhead_color' => 'first',
      'field_subhead_size' => 'first',
      'field_background_color' => 'first',
      'field_background_image' => 'first',
      'field_background_video' => 'first',
      'field_background_mobile_image' => 'first',
      'field_video_tout' => 'first',
      'field_cta' => 'first',
      'redirect' => 'first',
      '_add_existing_field' => 'first',
      'field_title_copy' => 'hidden',
      'field_title_copy_color' => 'hidden',
      'field_title_copy_size' => 'hidden',
      'field_subhead_copy' => 'hidden',
      'field_subhead_copy_color' => 'hidden',
      'field_subhead_copy_size' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'first' => 'div',
      'second' => 'div',
      'third' => 'div',
      'fourth' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_columns_multi|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_icon_item|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_icon_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'field_image',
        2 => 'field_image_hover',
        3 => 'field_image_link',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'field_image' => 'ds_content',
      'field_image_hover' => 'ds_content',
      'field_image_link' => 'ds_content',
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
  $export['field_collection_item|field_icon_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_thumbnail_image_item|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_thumbnail_image_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_item',
        1 => 'field_title_color',
        2 => 'field_title_size',
        3 => 'field_subhead',
        4 => 'field_subhead_color',
        5 => 'field_subhead_size',
        6 => 'field_image',
        7 => 'field_image_hover',
      ),
    ),
    'fields' => array(
      'field_title_item' => 'ds_content',
      'field_title_color' => 'ds_content',
      'field_title_size' => 'ds_content',
      'field_subhead' => 'ds_content',
      'field_subhead_color' => 'ds_content',
      'field_subhead_size' => 'ds_content',
      'field_image' => 'ds_content',
      'field_image_hover' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['field_collection_item|field_thumbnail_image_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|feature_video|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'feature_video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_title_color',
        2 => 'field_title_size',
        3 => 'field_subhead',
        4 => 'field_subhead_color',
        5 => 'field_subhead_size',
        6 => 'field_background_video',
        7 => 'field_background_mobile_image',
        8 => 'field_cta',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_title_color' => 'ds_content',
      'field_title_size' => 'ds_content',
      'field_subhead' => 'ds_content',
      'field_subhead_color' => 'ds_content',
      'field_subhead_size' => 'ds_content',
      'field_background_video' => 'ds_content',
      'field_background_mobile_image' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['fieldable_panels_pane|feature_video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|icons|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'icons';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_icon_item',
        2 => 'field_title_color',
        3 => 'field_title_size',
        4 => 'field_subhead',
        5 => 'field_subhead_color',
        6 => 'field_subhead_size',
        7 => 'field_background_color',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_icon_item' => 'ds_content',
      'field_title_color' => 'ds_content',
      'field_title_size' => 'ds_content',
      'field_subhead' => 'ds_content',
      'field_subhead_color' => 'ds_content',
      'field_subhead_size' => 'ds_content',
      'field_background_color' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['fieldable_panels_pane|icons|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|long_form_copy|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'long_form_copy';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_title_size',
        2 => 'field_drop_cap',
        3 => 'field_image',
        4 => 'field_image_position',
        5 => 'field_image_caption',
        6 => 'field_body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_title_size' => 'ds_content',
      'field_drop_cap' => 'ds_content',
      'field_image' => 'ds_content',
      'field_image_position' => 'ds_content',
      'field_image_caption' => 'ds_content',
      'field_body' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['fieldable_panels_pane|long_form_copy|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|multi_column_parallax|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'multi_column_parallax';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_columns_multi',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_columns_multi' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['fieldable_panels_pane|multi_column_parallax|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|multi_column|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'multi_column';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_columns_multi',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_columns_multi' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['fieldable_panels_pane|multi_column|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|rotator_hero|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'rotator_hero';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_module_height',
        1 => 'field_rotator_slide_hero',
      ),
    ),
    'fields' => array(
      'field_module_height' => 'ds_content',
      'field_rotator_slide_hero' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['fieldable_panels_pane|rotator_hero|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|thumbnail_gallery|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'thumbnail_gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_title_color',
        2 => 'field_title_size',
        3 => 'field_subhead',
        4 => 'field_subhead_color',
        5 => 'field_subhead_size',
        6 => 'field_background_color',
        7 => 'field_thumbnail_image_item',
        8 => 'field_grid_type',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_title_color' => 'ds_content',
      'field_title_size' => 'ds_content',
      'field_subhead' => 'ds_content',
      'field_subhead_color' => 'ds_content',
      'field_subhead_size' => 'ds_content',
      'field_background_color' => 'ds_content',
      'field_thumbnail_image_item' => 'ds_content',
      'field_grid_type' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['fieldable_panels_pane|thumbnail_gallery|default'] = $ds_layout;

  return $export;
}
