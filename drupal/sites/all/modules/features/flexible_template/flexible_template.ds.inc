<?php
/**
 * @file
 * flexible_template.ds.inc
 */

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
        0 => 'field_title_copy',
        1 => 'field_title_copy_color',
        2 => 'field_title_copy_size',
        3 => 'field_subhead_copy',
        4 => 'field_subhead_copy_color',
        5 => 'field_subhead_copy_size',
        6 => 'field_video_tout',
        7 => 'field_background_color',
        8 => 'field_background_image',
        9 => 'field_cta',
      ),
    ),
    'fields' => array(
      'field_title_copy' => 'ds_content',
      'field_title_copy_color' => 'ds_content',
      'field_title_copy_size' => 'ds_content',
      'field_subhead_copy' => 'ds_content',
      'field_subhead_copy_color' => 'ds_content',
      'field_subhead_copy_size' => 'ds_content',
      'field_video_tout' => 'ds_content',
      'field_background_color' => 'ds_content',
      'field_background_image' => 'ds_content',
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
        0 => 'field_title_copy',
        1 => 'field_title_copy_color',
        2 => 'field_title_copy_size',
        3 => 'field_subhead_copy',
        4 => 'field_subhead_copy_color',
        5 => 'field_subhead_copy_size',
        6 => 'field_background_color',
        7 => 'field_background_image',
        8 => 'field_video_tout',
        9 => 'field_cta',
        10 => 'redirect',
      ),
      'hidden' => array(
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_title_copy' => 'first',
      'field_title_copy_color' => 'first',
      'field_title_copy_size' => 'first',
      'field_subhead_copy' => 'first',
      'field_subhead_copy_color' => 'first',
      'field_subhead_copy_size' => 'first',
      'field_background_color' => 'first',
      'field_background_image' => 'first',
      'field_video_tout' => 'first',
      'field_cta' => 'first',
      'redirect' => 'first',
      '_add_existing_field' => 'hidden',
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
        0 => 'field_title_copy',
        1 => 'field_image',
        2 => 'field_image_hover',
        3 => 'field_image_link',
      ),
    ),
    'fields' => array(
      'field_title_copy' => 'ds_content',
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
        0 => 'field_title_copy',
        1 => 'field_title_copy_color',
        2 => 'field_title_copy_size',
        3 => 'field_subhead_copy',
        4 => 'field_subhead_copy_color',
        5 => 'field_subhead_copy_size',
        6 => 'field_image',
        7 => 'field_image_hover',
        8 => 'field_disable_lightbox_on_event',
      ),
    ),
    'fields' => array(
      'field_title_copy' => 'ds_content',
      'field_title_copy_color' => 'ds_content',
      'field_title_copy_size' => 'ds_content',
      'field_subhead_copy' => 'ds_content',
      'field_subhead_copy_color' => 'ds_content',
      'field_subhead_copy_size' => 'ds_content',
      'field_image' => 'ds_content',
      'field_image_hover' => 'ds_content',
      'field_disable_lightbox_on_event' => 'ds_content',
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
        1 => 'field_title_copy',
        2 => 'field_title_copy_color',
        3 => 'field_title_copy_size',
        4 => 'field_subhead_copy',
        5 => 'field_subhead_copy_color',
        6 => 'field_subhead_copy_size',
        7 => 'field_cta',
        8 => 'field_background_video',
        9 => 'field_background_mobile_image',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_title_copy' => 'ds_content',
      'field_title_copy_color' => 'ds_content',
      'field_title_copy_size' => 'ds_content',
      'field_subhead_copy' => 'ds_content',
      'field_subhead_copy_color' => 'ds_content',
      'field_subhead_copy_size' => 'ds_content',
      'field_cta' => 'ds_content',
      'field_background_video' => 'ds_content',
      'field_background_mobile_image' => 'ds_content',
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
        2 => 'field_title_copy',
        3 => 'field_title_copy_color',
        4 => 'field_title_copy_size',
        5 => 'field_subhead_copy',
        6 => 'field_subhead_copy_color',
        7 => 'field_subhead_copy_size',
        8 => 'field_background_color',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_icon_item' => 'ds_content',
      'field_title_copy' => 'ds_content',
      'field_title_copy_color' => 'ds_content',
      'field_title_copy_size' => 'ds_content',
      'field_subhead_copy' => 'ds_content',
      'field_subhead_copy_color' => 'ds_content',
      'field_subhead_copy_size' => 'ds_content',
      'field_background_color' => 'ds_content',
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
  $export['fieldable_panels_pane|icons|default'] = $ds_layout;

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
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
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
        0 => 'title',
        1 => 'field_rotator_slide',
        2 => 'field_module_height',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_rotator_slide' => 'ds_content',
      'field_module_height' => 'ds_content',
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
        1 => 'field_title_copy',
        2 => 'field_title_copy_color',
        3 => 'field_title_copy_size',
        4 => 'field_subhead_copy',
        5 => 'field_subhead_copy_color',
        6 => 'field_subhead_copy_size',
        7 => 'field_background_color',
        8 => 'field_thumbnail_image_item',
        9 => 'field_grid_type',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_title_copy' => 'ds_content',
      'field_title_copy_color' => 'ds_content',
      'field_title_copy_size' => 'ds_content',
      'field_subhead_copy' => 'ds_content',
      'field_subhead_copy_color' => 'ds_content',
      'field_subhead_copy_size' => 'ds_content',
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
