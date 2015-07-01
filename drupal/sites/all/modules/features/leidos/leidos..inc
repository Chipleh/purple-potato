<?php
/**
 * @file
 * leidos..inc
 */

/**
 * Implements hook_default_block_machine_name_boxes().
 */
function leidos_default_block_machine_name_boxes() {
  $export = array();

  $block_machine_name_boxes = new stdClass();
  $block_machine_name_boxes->machine_name = 'leidos_custom_search';
  $export['leidos_custom_search'] = $block_machine_name_boxes;

  return $export;
}
