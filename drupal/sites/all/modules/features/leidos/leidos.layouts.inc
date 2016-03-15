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
  $layout->name = 'full_width';
  $layout->admin_title = 'Full width';
  $layout->admin_description = '';
  $layout->category = 'Full width';
  $layout->plugin = 'flexible';
  $layout->settings = array();
  $export['full_width'] = $layout;

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
          0 => 'industry_container',
        ),
        'parent' => NULL,
      ),
      'industry_container' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 'top',
          1 => 'content_container',
        ),
        'class' => 'industry-container',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_banner',
        ),
        'parent' => 'industry_container',
        'class' => 'top',
        'hide_empty' => 1,
      ),
      'content_container' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'content_left',
          1 => 'content_right',
        ),
        'parent' => 'industry_container',
        'class' => 'content-container',
        'hide_empty' => 0,
      ),
      'content_left' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'content_container',
        'children' => array(
          0 => 'left_container',
        ),
        'class' => 'content-left',
        'hide_empty' => 0,
      ),
      'content_right' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'content_container',
        'children' => array(
          0 => 'top_right',
          1 => 'right_container',
        ),
        'class' => 'right-container',
        'hide_empty' => 0,
      ),
      'top_banner' => array(
        'type' => 'region',
        'title' => 'Top Banner',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'top',
        'class' => 'top-banner',
        'hide_empty' => 1,
      ),
      'left_container' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_rail',
        ),
        'parent' => 'content_left',
        'class' => 'left-container',
        'hide_empty' => 0,
      ),
      'left_rail' => array(
        'type' => 'region',
        'title' => 'Navigation Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'left_container',
        'class' => 'left-navigation-menu',
        'hide_empty' => 1,
      ),
      'top_right' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'optional_rotator',
        ),
        'parent' => 'content_right',
        'class' => 'top-right',
        'hide_empty' => 1,
      ),
      'right_container' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_rail',
          1 => 'optional_inner_right_rail',
        ),
        'parent' => 'content-right',
        'class' => 'right-container',
        'hide_empty' => 0,
      ),
      'optional_rotator' => array(
        'type' => 'region',
        'title' => 'Optional Rotator',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'right_container',
        'class' => 'optional-rotator',
        'hide_empty' => 1,
      ),
      'right_rail' => array(
        'type' => 'region',
        'title' => 'Page Content',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'right_container',
        'class' => 'right-rail',
        'hide_empty' => 0,
      ),
      'optional_inner_right_rail' => array(
        'type' => 'region',
        'title' => 'Optional Right Rail',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'right_container',
        'class' => 'optional-right-rail',
        'hide_empty' => 1,
      ),
    ),
  );
  $export['industry_template'] = $layout;

  return $export;
}
