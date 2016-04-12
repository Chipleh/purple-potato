<?php
/**
 * @file
 * announcements.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function announcements_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|announcements|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'announcements';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_title_link',
      1 => 'title',
      2 => 'field_industry',
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
  $export['group_general|fieldable_panels_pane|announcements|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|announcement|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'announcement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_industry',
      2 => 'field_announcement_type',
      3 => 'field_announcement_date',
      4 => 'title',
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
  $export['group_general|node|announcement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|announcement|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'announcement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_icon_item',
      1 => 'field_image',
      2 => 'field_image_caption',
      3 => 'field_media_placement',
      4 => 'field_video_tout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|announcement|form'] = $field_group;

  return $export;
}
