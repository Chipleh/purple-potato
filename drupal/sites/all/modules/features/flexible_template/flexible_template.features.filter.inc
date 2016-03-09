<?php
/**
 * @file
 * flexible_template.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function flexible_template_filter_default_formats() {
  $formats = array();

  // Exported format: Flexible Template HTML.
  $formats['restricted_html'] = array(
    'format' => 'restricted_html',
    'name' => 'Flexible Template HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a>  <s> <u> <em> <strong> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <sub> <sup>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
