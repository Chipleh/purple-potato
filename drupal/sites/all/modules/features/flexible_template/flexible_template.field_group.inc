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
      0 => 'field_title_copy',
      1 => 'field_title_copy_color',
      2 => 'field_title_copy_size',
      3 => 'field_subhead_copy',
      4 => 'field_subhead_copy_color',
      5 => 'field_subhead_copy_size',
      6 => 'field_cta',
      7 => 'field_background_video',
      8 => 'field_background_mobile_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
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
      1 => 'field_title_copy',
      2 => 'field_title_copy_color',
      3 => 'field_title_copy_size',
      4 => 'field_subhead_copy',
      5 => 'field_subhead_copy_color',
      6 => 'field_subhead_copy_size',
      7 => 'field_background_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|icons|form'] = $field_group;

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
      0 => 'field_subhead_copy_color',
      1 => 'field_subhead_copy_size',
      2 => 'field_video_tout',
      3 => 'field_background_color',
      4 => 'field_background_image',
      5 => 'field_cta',
      6 => 'field_title_copy',
      7 => 'field_subhead_copy',
      8 => 'field_title_copy_color',
      9 => 'field_title_copy_size',
      10 => 'field_columns_multi',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
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
      0 => 'field_rotator_slide',
      1 => 'field_module_height',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
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
      0 => 'field_title_copy',
      1 => 'field_title_copy_color',
      2 => 'field_title_copy_size',
      3 => 'field_subhead_copy',
      4 => 'field_subhead_copy_color',
      5 => 'field_subhead_copy_size',
      6 => 'field_background_color',
      7 => 'field_thumbnail_image_item',
      8 => 'field_grid_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_title_copy',
      1 => 'field_subhead_copy',
      2 => 'field_subhead_copy_size',
      3 => 'field_cta',
      4 => 'field_secondary_cta',
      5 => 'field_video_tout',
      6 => 'field_background_color',
      7 => 'field_background_image',
      8 => 'field_subhead_copy_color',
      9 => 'field_title_copy_size',
      10 => 'field_title_copy_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|node|rotator_hero|form'] = $field_group;

  return $export;
}
