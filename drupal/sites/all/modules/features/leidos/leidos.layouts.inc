<?php
/**
 * @file
 * leidos.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function leidos_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'industry_template';
  $layout->admin_title = 'Industry Template';
  $layout->admin_description = 'Two columns with optional rotator and optional inner right rail';
  $layout->category = 'Industry Template';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_banner',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 4,
          1 => 5,
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 7,
          1 => 8,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      'top_banner' => array(
        'type' => 'region',
        'title' => 'Top Banner',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_rail',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_rail' => array(
        'type' => 'region',
        'title' => 'Navigation Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 1,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'optional_rotator',
        ),
        'parent' => '5',
        'class' => '',
        'hide_empty' => 1,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_rail',
          1 => 'optional_inner_right_rail',
        ),
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'optional_rotator' => array(
        'type' => 'region',
        'title' => 'Optional Rotator',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 1,
      ),
      'right_rail' => array(
        'type' => 'region',
        'title' => 'Page Content',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'optional_inner_right_rail' => array(
        'type' => 'region',
        'title' => 'Optional Right Rail',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $export['industry_template'] = $layout;

  return $export;
}
