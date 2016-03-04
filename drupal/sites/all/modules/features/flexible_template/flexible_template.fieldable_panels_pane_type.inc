<?php
/**
 * @file
 * flexible_template.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function flexible_template_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'feature_video';
  $fieldable_panels_pane_type->title = 'Feature Video';
  $fieldable_panels_pane_type->description = 'Full width module that displays a background video with an optional title, copy and CAT.';
  $export['feature_video'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'icons';
  $fieldable_panels_pane_type->title = 'Icons';
  $fieldable_panels_pane_type->description = '';
  $export['icons'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'long_form_copy';
  $fieldable_panels_pane_type->title = 'Long-form copy';
  $fieldable_panels_pane_type->description = 'Provides a standard way to add text copy and images in a document format.';
  $export['long_form_copy'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'multi_column';
  $fieldable_panels_pane_type->title = 'Multi-column';
  $fieldable_panels_pane_type->description = 'Supports a minimum of 1 column and a maximum of 4 columns.';
  $export['multi_column'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'multi_column_parallax';
  $fieldable_panels_pane_type->title = 'Multi-column Parallax';
  $fieldable_panels_pane_type->description = 'Supports a minimum of 1 column and a maximum of 4 columns in a parallax format.';
  $export['multi_column_parallax'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'rotator_hero';
  $fieldable_panels_pane_type->title = 'Rotator / Hero';
  $fieldable_panels_pane_type->description = '';
  $export['rotator_hero'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'thumbnail_gallery';
  $fieldable_panels_pane_type->title = 'Thumbnail Gallery';
  $fieldable_panels_pane_type->description = 'Wrapper that provides a image gallery in a grid format.';
  $export['thumbnail_gallery'] = $fieldable_panels_pane_type;

  return $export;
}
