<?php
/**
 * @file
 * leidos.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function leidos_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'capabilities';
  $page->task = 'page';
  $page->admin_title = 'Capabilities';
  $page->admin_description = '';
  $page->path = 'engineering/capabilities';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_capabilities__panel_context_dc3859a3-60f2-4c01-bc29-ec6da2593eec';
  $handler->task = 'page';
  $handler->subtask = 'capabilities';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Capabilities';
  $display->uuid = 'af13ff70-0c6f-40ea-9328-aa6a613aefc5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-813fec8e-c79b-4794-be62-99ba9ffb57e2';
    $pane->panel = 'right_rail';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:7';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '813fec8e-c79b-4794-be62-99ba9ffb57e2';
    $display->content['new-813fec8e-c79b-4794-be62-99ba9ffb57e2'] = $pane;
    $display->panels['right_rail'][0] = 'new-813fec8e-c79b-4794-be62-99ba9ffb57e2';
    $pane = new stdClass();
    $pane->pid = 'new-cc1f0e6c-6ae2-4e29-b6aa-22b2052e2999';
    $pane->panel = 'right_rail';
    $pane->type = 'views';
    $pane->subtype = 'capabilities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc1f0e6c-6ae2-4e29-b6aa-22b2052e2999';
    $display->content['new-cc1f0e6c-6ae2-4e29-b6aa-22b2052e2999'] = $pane;
    $display->panels['right_rail'][1] = 'new-cc1f0e6c-6ae2-4e29-b6aa-22b2052e2999';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['capabilities'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'engineering';
  $page->task = 'page';
  $page->admin_title = 'Engineering';
  $page->admin_description = 'Engineering landing page';
  $page->path = 'engineering';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Engineering',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_engineering__panel_context_f0bd2453-799d-4ac2-b9d8-5872fb92e621';
  $handler->task = 'page';
  $handler->subtask = 'engineering';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Engineering Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Engineering | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:industry_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_rail' => NULL,
      'optional_inner_right_rail' => NULL,
      'optional_rotator' => NULL,
      'top_banner' => NULL,
      'left_rail' => NULL,
      'optional_navigation_menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd1b0671d-842b-49ed-ae2a-6c8d679265e4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83c04a74-92c0-4ef5-b028-84b06cc8d508';
    $pane->panel = 'left_rail';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-engineering-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '83c04a74-92c0-4ef5-b028-84b06cc8d508';
    $display->content['new-83c04a74-92c0-4ef5-b028-84b06cc8d508'] = $pane;
    $display->panels['left_rail'][0] = 'new-83c04a74-92c0-4ef5-b028-84b06cc8d508';
    $pane = new stdClass();
    $pane->pid = 'new-d20435e0-f9fc-4a3a-ad02-74927f3327b8';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'items_per_page' => '10',
      'path' => '',
      'override_title' => 1,
      'override_title_text' => 'FEATURED PROJECTS <a href="http://google.com">View All Projects</a>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd20435e0-f9fc-4a3a-ad02-74927f3327b8';
    $display->content['new-d20435e0-f9fc-4a3a-ad02-74927f3327b8'] = $pane;
    $display->panels['optional_inner_right_rail'][0] = 'new-d20435e0-f9fc-4a3a-ad02-74927f3327b8';
    $pane = new stdClass();
    $pane->pid = 'new-8c26067a-793d-4e51-b3e0-3ad7f9d606e3';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:3';
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
    $pane->uuid = '8c26067a-793d-4e51-b3e0-3ad7f9d606e3';
    $display->content['new-8c26067a-793d-4e51-b3e0-3ad7f9d606e3'] = $pane;
    $display->panels['optional_inner_right_rail'][1] = 'new-8c26067a-793d-4e51-b3e0-3ad7f9d606e3';
    $pane = new stdClass();
    $pane->pid = 'new-70cdf50f-bf78-45e5-b123-d13d9502310e';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'items_per_page' => '2',
      'path' => 'http://twitter.com',
      'override_title' => 1,
      'override_title_text' => 'NEWS AND EVENTS <a href="http://www.twitter.com">Follow Us On Twitter</a>',
      'override_title_heading' => 'h2',
      'link_to_view' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '70cdf50f-bf78-45e5-b123-d13d9502310e';
    $display->content['new-70cdf50f-bf78-45e5-b123-d13d9502310e'] = $pane;
    $display->panels['optional_inner_right_rail'][2] = 'new-70cdf50f-bf78-45e5-b123-d13d9502310e';
    $pane = new stdClass();
    $pane->pid = 'new-aefe8e06-6fd1-4eec-93e9-055a98b20c2a';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:2';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'aefe8e06-6fd1-4eec-93e9-055a98b20c2a';
    $display->content['new-aefe8e06-6fd1-4eec-93e9-055a98b20c2a'] = $pane;
    $display->panels['optional_inner_right_rail'][3] = 'new-aefe8e06-6fd1-4eec-93e9-055a98b20c2a';
    $pane = new stdClass();
    $pane->pid = 'new-ff9e4b84-368b-44d0-b638-7cb817faa68a';
    $pane->panel = 'optional_rotator';
    $pane->type = 'views';
    $pane->subtype = 'rotators';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff9e4b84-368b-44d0-b638-7cb817faa68a';
    $display->content['new-ff9e4b84-368b-44d0-b638-7cb817faa68a'] = $pane;
    $display->panels['optional_rotator'][0] = 'new-ff9e4b84-368b-44d0-b638-7cb817faa68a';
    $pane = new stdClass();
    $pane->pid = 'new-c76e9f57-696b-4505-9837-0fd0c9dd58b7';
    $pane->panel = 'right_rail';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c76e9f57-696b-4505-9837-0fd0c9dd58b7';
    $display->content['new-c76e9f57-696b-4505-9837-0fd0c9dd58b7'] = $pane;
    $display->panels['right_rail'][0] = 'new-c76e9f57-696b-4505-9837-0fd0c9dd58b7';
    $pane = new stdClass();
    $pane->pid = 'new-25dd046a-f03f-4e65-bcce-7437dc7b8a0d';
    $pane->panel = 'top_banner';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => 'Engineering',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '25dd046a-f03f-4e65-bcce-7437dc7b8a0d';
    $display->content['new-25dd046a-f03f-4e65-bcce-7437dc7b8a0d'] = $pane;
    $display->panels['top_banner'][0] = 'new-25dd046a-f03f-4e65-bcce-7437dc7b8a0d';
    $pane = new stdClass();
    $pane->pid = 'new-3bcca798-d077-4f53-9155-fd631af788bd';
    $pane->panel = 'top_banner';
    $pane->type = 'custom';
    $pane->subtype = 'theme_banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3bcca798-d077-4f53-9155-fd631af788bd';
    $display->content['new-3bcca798-d077-4f53-9155-fd631af788bd'] = $pane;
    $display->panels['top_banner'][1] = 'new-3bcca798-d077-4f53-9155-fd631af788bd';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['engineering'] = $page;

  return $pages;

}
