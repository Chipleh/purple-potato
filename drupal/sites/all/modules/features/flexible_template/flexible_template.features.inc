<?php
/**
 * @file
 * flexible_template.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flexible_template_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function flexible_template_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function flexible_template_image_default_styles() {
  $styles = array();

  // Exported image style: flexible_template_desktop.
  $styles['flexible_template_desktop'] = array(
    'label' => 'Flexible Template Desktop',
    'effects' => array(
      6 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1400,
          'height' => 600,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: flexible_template_mobile.
  $styles['flexible_template_mobile'] = array(
    'label' => 'Flexible Template Mobile',
    'effects' => array(
      5 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 750,
          'height' => 1000,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function flexible_template_node_info() {
  $items = array(
    'flexible_template' => array(
      'name' => t('Flexible template'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rotator_hero' => array(
      'name' => t('Rotator slide / Hero'),
      'base' => 'node_content',
      'description' => t('Carousel rotator slides [Hero]'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
