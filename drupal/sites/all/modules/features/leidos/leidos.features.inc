<?php
/**
 * @file
 * leidos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function leidos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function leidos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function leidos_image_default_styles() {
  $styles = array();

  // Exported image style: capabilities.
  $styles['capabilities'] = array(
    'label' => 'Capabilities',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 650,
          'height' => 650,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_small.
  $styles['project_small'] = array(
    'label' => 'Project small',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 660,
          'height' => 383,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_teaser.
  $styles['project_teaser'] = array(
    'label' => 'Project teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 244,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rotator.
  $styles['rotator'] = array(
    'label' => 'Rotator desktop',
    'effects' => array(
      5 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 900,
          'height' => 274,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: rotator_mobile.
  $styles['rotator_mobile'] = array(
    'label' => 'Rotator mobile',
    'effects' => array(
      9 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 720,
          'height' => 274,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: rotator_tablet.
  $styles['rotator_tablet'] = array(
    'label' => 'Rotator tablet',
    'effects' => array(
      7 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 960,
          'height' => 274,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
          'weight' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function leidos_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rotator' => array(
      'name' => t('Rotator slide'),
      'base' => 'node_content',
      'description' => t('Carousel rotator slides'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
