<?php
/**
 * @file
 * leidos.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function leidos_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'elements_panel_pane';
  $fieldable_panels_pane_type->title = 'Elements Panel Pane';
  $fieldable_panels_pane_type->description = '';
  $export['elements_panel_pane'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'left_navigation';
  $fieldable_panels_pane_type->title = 'Left navigation';
  $fieldable_panels_pane_type->description = '';
  $export['left_navigation'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'link_columns';
  $fieldable_panels_pane_type->title = 'Link columns';
  $fieldable_panels_pane_type->description = '';
  $export['link_columns'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'list_columns';
  $fieldable_panels_pane_type->title = 'List columns';
  $fieldable_panels_pane_type->description = '';
  $export['list_columns'] = $fieldable_panels_pane_type;

  return $export;
}
