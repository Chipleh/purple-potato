<?php
/**
 * @file
 * leidos.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function leidos_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'announcements-panel_pane_1-fields';
  $ds_vd->label = 'Announcements: Content pane (Fields)';
  $export['announcements-panel_pane_1-fields'] = $ds_vd;

  return $export;
}
