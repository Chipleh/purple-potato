<?php
/**
 * @file
 * announcements.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function announcements_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'announcement';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:announcement:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible:industry_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_banner' => NULL,
      'left_rail' => NULL,
      'optional_rotator' => NULL,
      'right_rail' => NULL,
      'optional_inner_right_rail' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7683a2ef-1ce9-4f89-9331-b15db05ab595';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-36bd5d98-0aea-4ad0-aad9-5876b8c08604';
  $pane->panel = 'left_rail';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:2356';
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
  $pane->uuid = '36bd5d98-0aea-4ad0-aad9-5876b8c08604';
  $display->content['new-36bd5d98-0aea-4ad0-aad9-5876b8c08604'] = $pane;
  $display->panels['left_rail'][0] = 'new-36bd5d98-0aea-4ad0-aad9-5876b8c08604';
  $pane = new stdClass();
  $pane->pid = 'new-22684936-db06-4531-bd9e-875cc9f67bfe';
  $pane->panel = 'right_rail';
  $pane->type = 'block';
  $pane->subtype = 'announcements-announcements_media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '22684936-db06-4531-bd9e-875cc9f67bfe';
  $display->content['new-22684936-db06-4531-bd9e-875cc9f67bfe'] = $pane;
  $display->panels['right_rail'][0] = 'new-22684936-db06-4531-bd9e-875cc9f67bfe';
  $pane = new stdClass();
  $pane->pid = 'new-0c60f79a-efe8-4d7f-8987-c87a02d0fc52';
  $pane->panel = 'top_banner';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => TRUE,
    'override_title_text' => 'Announcements',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0c60f79a-efe8-4d7f-8987-c87a02d0fc52';
  $display->content['new-0c60f79a-efe8-4d7f-8987-c87a02d0fc52'] = $pane;
  $display->panels['top_banner'][0] = 'new-0c60f79a-efe8-4d7f-8987-c87a02d0fc52';
  $pane = new stdClass();
  $pane->pid = 'new-e6169c6d-02b4-46ef-b8b6-6ef7f2ddc099';
  $pane->panel = 'top_banner';
  $pane->type = 'custom';
  $pane->subtype = 'theme_banner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e6169c6d-02b4-46ef-b8b6-6ef7f2ddc099';
  $display->content['new-e6169c6d-02b4-46ef-b8b6-6ef7f2ddc099'] = $pane;
  $display->panels['top_banner'][1] = 'new-e6169c6d-02b4-46ef-b8b6-6ef7f2ddc099';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:announcement:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'announcement';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:announcement:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible:industry_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_banner' => NULL,
      'left_rail' => NULL,
      'optional_rotator' => NULL,
      'right_rail' => NULL,
      'optional_inner_right_rail' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0b96fd02-7a55-45d6-bd10-832e72be26a0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3ce30795-75ac-49fd-9a00-805cd164499e';
  $pane->panel = 'left_rail';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:2184';
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
  $pane->uuid = '3ce30795-75ac-49fd-9a00-805cd164499e';
  $display->content['new-3ce30795-75ac-49fd-9a00-805cd164499e'] = $pane;
  $display->panels['left_rail'][0] = 'new-3ce30795-75ac-49fd-9a00-805cd164499e';
  $pane = new stdClass();
  $pane->pid = 'new-9b7530ad-3f74-4cdd-99f1-2a1a7d17cbfe';
  $pane->panel = 'right_rail';
  $pane->type = 'block';
  $pane->subtype = 'announcements-announcements_media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9b7530ad-3f74-4cdd-99f1-2a1a7d17cbfe';
  $display->content['new-9b7530ad-3f74-4cdd-99f1-2a1a7d17cbfe'] = $pane;
  $display->panels['right_rail'][0] = 'new-9b7530ad-3f74-4cdd-99f1-2a1a7d17cbfe';
  $pane = new stdClass();
  $pane->pid = 'new-394d8f74-1027-43c3-8580-f46540629081';
  $pane->panel = 'top_banner';
  $pane->type = 'custom';
  $pane->subtype = 'theme_banner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '394d8f74-1027-43c3-8580-f46540629081';
  $display->content['new-394d8f74-1027-43c3-8580-f46540629081'] = $pane;
  $display->panels['top_banner'][0] = 'new-394d8f74-1027-43c3-8580-f46540629081';
  $pane = new stdClass();
  $pane->pid = 'new-b03c7ab0-ca1c-4902-989f-df478bc26d8a';
  $pane->panel = 'top_banner';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => TRUE,
    'override_title_text' => 'Announcements',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b03c7ab0-ca1c-4902-989f-df478bc26d8a';
  $display->content['new-b03c7ab0-ca1c-4902-989f-df478bc26d8a'] = $pane;
  $display->panels['top_banner'][1] = 'new-b03c7ab0-ca1c-4902-989f-df478bc26d8a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:announcement:default:default'] = $panelizer;

  return $export;
}
