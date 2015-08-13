<?php
/**
 * @file
 * leidos.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function leidos_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'theme_banner';
  $content->admin_title = 'Vertices';
  $content->admin_description = 'Banner that appears at the top of the page';
  $content->category = 'Optional Theme Elements';
  $content->settings = array(
    'admin_title' => 'Vertices',
    'title' => '',
    'body' => '<div id="theme-banner-div"></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['theme_banner'] = $content;

  return $export;
}
