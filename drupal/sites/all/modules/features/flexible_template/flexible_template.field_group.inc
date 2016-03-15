<?php
/**
 * @file
 * flexible_template.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function flexible_template_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|feature_video|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'feature_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_background_mobile_image',
      1 => 'field_background_video',
      2 => 'field_cta',
      3 => 'field_subhead',
      4 => 'field_subhead_size',
      5 => 'field_title_size',
      6 => 'field_subhead_color',
      7 => 'field_title_color',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|feature_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|icons|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'icons';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_icon_item',
      1 => 'field_title',
      2 => 'field_title_color',
      3 => 'field_title_size',
      4 => 'field_subhead',
      5 => 'field_subhead_color',
      6 => 'field_subhead_size',
      7 => 'field_background_color',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|icons|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|long_form_copy|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'long_form_copy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_body',
      1 => 'field_title_size',
      2 => 'field_drop_cap',
      3 => 'field_image',
      4 => 'field_image_position',
      5 => 'field_image_caption',
      6 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|long_form_copy|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|multi_column_parallax|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'multi_column_parallax';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_columns_multi',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|multi_column_parallax|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|multi_column|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'multi_column';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_columns_multi',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|multi_column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|rotator_hero|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'rotator_hero';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_module_height',
      1 => 'field_rotator_slide',
      2 => 'title',
      3 => 'field_rotator_slide_hero',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|rotator_hero|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|thumbnail_gallery|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'thumbnail_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_title_color',
      1 => 'field_title_size',
      2 => 'field_subhead',
      3 => 'field_subhead_color',
      4 => 'field_subhead_size',
      5 => 'field_background_color',
      6 => 'field_thumbnail_image_item',
      7 => 'field_grid_type',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|thumbnail_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|rotator_hero|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rotator_hero';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_background_image',
      1 => 'field_cta',
      2 => 'field_secondary_cta',
      3 => 'field_subhead',
      4 => 'field_subhead_size',
      5 => 'field_title_size',
      6 => 'field_video_tout',
      7 => 'field_background_color',
      8 => 'field_subhead_color',
      9 => 'field_title_color',
      10 => 'field_background_mobile_image',
      11 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'General Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-general field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_general|node|rotator_hero|form'] = $field_group;

  return $export;
}
