<?php
/**
 * @file
 * news_release.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function news_release_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'news_releases';
  $fieldable_panels_pane_type->title = 'News releases';
  $fieldable_panels_pane_type->description = '';
  $export['news_releases'] = $fieldable_panels_pane_type;

  return $export;
}
