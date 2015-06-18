<?php
/**
 * @file
 * leidos.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function leidos_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_links_four|fieldable_panels_pane|link_columns|form';
  $field_group->group_name = 'group_column_links_four';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'link_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column 4',
    'weight' => '4',
    'children' => array(
      0 => 'field_colun_links_four',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-links-four field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_column_links_four|fieldable_panels_pane|link_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_links_three|fieldable_panels_pane|link_columns|form';
  $field_group->group_name = 'group_column_links_three';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'link_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_column_links_three',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-links-three field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_column_links_three|fieldable_panels_pane|link_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_links_two|fieldable_panels_pane|link_columns|form';
  $field_group->group_name = 'group_column_links_two';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'link_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_column_links_two',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-links-two field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_column_links_two|fieldable_panels_pane|link_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_one|fieldable_panels_pane|link_columns|form';
  $field_group->group_name = 'group_column_one';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'link_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_column_links_one',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-one field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_column_one|fieldable_panels_pane|link_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|left_navigation|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'left_navigation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_menu',
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
  $export['group_general|fieldable_panels_pane|left_navigation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|fieldable_panels_pane|link_columns|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'link_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '0',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-general field-group-tabs',
      ),
    ),
  );
  $export['group_general|fieldable_panels_pane|link_columns|form'] = $field_group;

  return $export;
}
