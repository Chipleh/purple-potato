<?php
/**
 * @file
 * news_release.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function news_release_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|news_releases|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'news_releases';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General info',
    'weight' => '0',
    'children' => array(
      0 => 'title',
      1 => 'field_releases_count',
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
  $field_groups['group_general|fieldable_panels_pane|news_releases|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|news_release|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_release';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '0',
    'children' => array(
      0 => 'title',
      1 => 'field_id',
      2 => 'field_announcement_date',
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
  $field_groups['group_general|node|news_release|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('General Info');
  t('General info');

  return $field_groups;
}
