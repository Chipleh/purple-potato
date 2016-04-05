<?php
/**
 * @file
 * leidos.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function leidos_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:flexible_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flexible_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '422845d3-e2de-49f1-9c46-8d33386e0e62';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b55e9f48-e631-4d69-b497-4de64f5b3294';
    $pane->panel = 'middle';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:50';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b55e9f48-e631-4d69-b497-4de64f5b3294';
    $display->content['new-b55e9f48-e631-4d69-b497-4de64f5b3294'] = $pane;
    $display->panels['middle'][0] = 'new-b55e9f48-e631-4d69-b497-4de64f5b3294';
    $pane = new stdClass();
    $pane->pid = 'new-39184fe7-e203-4c37-ae35-a131b72b96b8';
    $pane->panel = 'middle';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:75';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '39184fe7-e203-4c37-ae35-a131b72b96b8';
    $display->content['new-39184fe7-e203-4c37-ae35-a131b72b96b8'] = $pane;
    $display->panels['middle'][1] = 'new-39184fe7-e203-4c37-ae35-a131b72b96b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:flexible_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:flexible_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flexible_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ba374460-3fcb-4a35-90c1-9013336faf11';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f27d6412-3850-43ea-bed3-0dd54843e0a9';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f27d6412-3850-43ea-bed3-0dd54843e0a9';
    $display->content['new-f27d6412-3850-43ea-bed3-0dd54843e0a9'] = $pane;
    $display->panels['middle'][0] = 'new-f27d6412-3850-43ea-bed3-0dd54843e0a9';
    $pane = new stdClass();
    $pane->pid = 'new-c6e6f373-55fb-45a8-857e-2accf97a16f0';
    $pane->panel = 'middle';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c6e6f373-55fb-45a8-857e-2accf97a16f0';
    $display->content['new-c6e6f373-55fb-45a8-857e-2accf97a16f0'] = $pane;
    $display->panels['middle'][1] = 'new-c6e6f373-55fb-45a8-857e-2accf97a16f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f27d6412-3850-43ea-bed3-0dd54843e0a9';
  $panelizer->display = $display;
  $export['node:flexible_page:default:default'] = $panelizer;

  return $export;
}
