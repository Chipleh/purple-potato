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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Engineering - Capabilities | [site:name]',
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
    $pane->pid = 'new-ade7f177-29d9-4ca9-a28d-9796d6ce1fa3';
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
    $pane->uuid = 'ade7f177-29d9-4ca9-a28d-9796d6ce1fa3';
    $display->content['new-ade7f177-29d9-4ca9-a28d-9796d6ce1fa3'] = $pane;
    $display->panels['left_rail'][0] = 'new-ade7f177-29d9-4ca9-a28d-9796d6ce1fa3';
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
    $pane = new stdClass();
    $pane->pid = 'new-a3b6da74-f9de-42e4-b38c-102722f10294';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3b6da74-f9de-42e4-b38c-102722f10294';
    $display->content['new-a3b6da74-f9de-42e4-b38c-102722f10294'] = $pane;
    $display->panels['top_banner'][0] = 'new-a3b6da74-f9de-42e4-b38c-102722f10294';
    $pane = new stdClass();
    $pane->pid = 'new-aa2e4072-23a3-47bd-a934-8d8fc22b98fb';
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
      'override_title_text' => 'Engineering - Capabilities',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aa2e4072-23a3-47bd-a934-8d8fc22b98fb';
    $display->content['new-aa2e4072-23a3-47bd-a934-8d8fc22b98fb'] = $pane;
    $display->panels['top_banner'][1] = 'new-aa2e4072-23a3-47bd-a934-8d8fc22b98fb';
  $display->hide_title = PANELS_TITLE_NONE;
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
    $pane->pid = 'new-9887f85a-0270-44de-9b7e-17c32676b37f';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-featured_projects_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'items_per_page' => '2',
      'path' => '',
      'arguments' => array(
        'term_node_tid_depth' => '',
      ),
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
    $pane->uuid = '9887f85a-0270-44de-9b7e-17c32676b37f';
    $display->content['new-9887f85a-0270-44de-9b7e-17c32676b37f'] = $pane;
    $display->panels['optional_inner_right_rail'][0] = 'new-9887f85a-0270-44de-9b7e-17c32676b37f';
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
    $pane->pid = 'new-27875490-e983-4183-8668-c924822f44bc';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-featured_announcements_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'items_per_page' => '2',
      'path' => '',
      'arguments' => array(
        'term_node_tid_depth' => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'NEWS AND EVENTS <a href="http://www.twitter.com">Follow Us On Twitter</a>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '27875490-e983-4183-8668-c924822f44bc';
    $display->content['new-27875490-e983-4183-8668-c924822f44bc'] = $pane;
    $display->panels['optional_inner_right_rail'][2] = 'new-27875490-e983-4183-8668-c924822f44bc';
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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'engineering_newsroom';
  $page->task = 'page';
  $page->admin_title = 'Engineering Newsroom';
  $page->admin_description = '';
  $page->path = 'engineering/newsroom';
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
  $handler->name = 'page_engineering_newsroom__panel_context_2de75bcc-7a09-4179-83c0-3e7ec494162c';
  $handler->task = 'page';
  $handler->subtask = 'engineering_newsroom';
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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Engineering - Newsroom | [site:name]',
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
      'top_banner' => NULL,
      'left_rail' => NULL,
      'optional_rotator' => NULL,
      'right_rail' => NULL,
      'optional_inner_right_rail' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd40d7ca5-3878-4d98-85e0-a4352799eca1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-51ede2e4-d308-45f4-b86c-275c9bd9b4fa';
    $pane->panel = 'left_rail';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-engineering-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 'menu-engineering-navigation:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'depth_relative' => 0,
      'expanded' => 0,
      'sort' => 0,
      'menu_name' => 'menu-engineering-navigation',
      'parent_mlid' => '0',
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
    $pane->uuid = '51ede2e4-d308-45f4-b86c-275c9bd9b4fa';
    $display->content['new-51ede2e4-d308-45f4-b86c-275c9bd9b4fa'] = $pane;
    $display->panels['left_rail'][0] = 'new-51ede2e4-d308-45f4-b86c-275c9bd9b4fa';
    $pane = new stdClass();
    $pane->pid = 'new-f6515a72-5f7f-4ec3-94c0-997b084eef04';
    $pane->panel = 'right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-full_view_announcements_pane_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'term_node_tid_depth' => '10',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6515a72-5f7f-4ec3-94c0-997b084eef04';
    $display->content['new-f6515a72-5f7f-4ec3-94c0-997b084eef04'] = $pane;
    $display->panels['right_rail'][0] = 'new-f6515a72-5f7f-4ec3-94c0-997b084eef04';
    $pane = new stdClass();
    $pane->pid = 'new-56be10b7-f199-4a7f-9061-7addd853794c';
    $pane->panel = 'right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-full_view_announcements_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'term_node_tid_depth' => '10',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '56be10b7-f199-4a7f-9061-7addd853794c';
    $display->content['new-56be10b7-f199-4a7f-9061-7addd853794c'] = $pane;
    $display->panels['right_rail'][1] = 'new-56be10b7-f199-4a7f-9061-7addd853794c';
    $pane = new stdClass();
    $pane->pid = 'new-35d295b0-0cdf-42ed-9f85-8c4ae9620641';
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
      'override_title_text' => 'Newsroom',
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
    $pane->uuid = '35d295b0-0cdf-42ed-9f85-8c4ae9620641';
    $display->content['new-35d295b0-0cdf-42ed-9f85-8c4ae9620641'] = $pane;
    $display->panels['top_banner'][0] = 'new-35d295b0-0cdf-42ed-9f85-8c4ae9620641';
    $pane = new stdClass();
    $pane->pid = 'new-de7dbdec-1472-446d-a5c3-35202639a8a8';
    $pane->panel = 'top_banner';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:8';
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
    $pane->uuid = 'de7dbdec-1472-446d-a5c3-35202639a8a8';
    $display->content['new-de7dbdec-1472-446d-a5c3-35202639a8a8'] = $pane;
    $display->panels['top_banner'][1] = 'new-de7dbdec-1472-446d-a5c3-35202639a8a8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-35d295b0-0cdf-42ed-9f85-8c4ae9620641';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['engineering_newsroom'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'engineering_projects';
  $page->task = 'page';
  $page->admin_title = 'Engineering Projects';
  $page->admin_description = '';
  $page->path = 'engineering/projects';
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
  $handler->name = 'page_engineering_projects__panel_context_24913716-5e9f-4884-9712-ca29306ad107';
  $handler->task = 'page';
  $handler->subtask = 'engineering_projects';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Engineering Projects',
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
          'value' => 'Engineering - Projects | [site:name]',
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
      'top_banner' => NULL,
      'left_rail' => NULL,
      'optional_rotator' => NULL,
      'right_rail' => NULL,
      'optional_inner_right_rail' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2e0cc949-72dd-4988-af63-7b8eb10de4d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-41e6b801-d748-4588-a723-be36a16ded78';
    $pane->panel = 'right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-full_view_projects_pane_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41e6b801-d748-4588-a723-be36a16ded78';
    $display->content['new-41e6b801-d748-4588-a723-be36a16ded78'] = $pane;
    $display->panels['right_rail'][0] = 'new-41e6b801-d748-4588-a723-be36a16ded78';
    $pane = new stdClass();
    $pane->pid = 'new-e94626a8-5e56-457d-b45a-4404e33ee41a';
    $pane->panel = 'right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-full_view_projects_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e94626a8-5e56-457d-b45a-4404e33ee41a';
    $display->content['new-e94626a8-5e56-457d-b45a-4404e33ee41a'] = $pane;
    $display->panels['right_rail'][1] = 'new-e94626a8-5e56-457d-b45a-4404e33ee41a';
    $pane = new stdClass();
    $pane->pid = 'new-ea6f2ef6-6665-44e8-9ff4-3aeca5ddada1';
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
      'override_title_text' => 'Featured Projects',
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
    $pane->uuid = 'ea6f2ef6-6665-44e8-9ff4-3aeca5ddada1';
    $display->content['new-ea6f2ef6-6665-44e8-9ff4-3aeca5ddada1'] = $pane;
    $display->panels['top_banner'][0] = 'new-ea6f2ef6-6665-44e8-9ff4-3aeca5ddada1';
    $pane = new stdClass();
    $pane->pid = 'new-32afca51-2b6b-4324-a038-10d5c0ff9823';
    $pane->panel = 'top_banner';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:10';
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
    $pane->uuid = '32afca51-2b6b-4324-a038-10d5c0ff9823';
    $display->content['new-32afca51-2b6b-4324-a038-10d5c0ff9823'] = $pane;
    $display->panels['top_banner'][1] = 'new-32afca51-2b6b-4324-a038-10d5c0ff9823';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ea6f2ef6-6665-44e8-9ff4-3aeca5ddada1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['engineering_projects'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panes_demo_page';
  $page->task = 'page';
  $page->admin_title = 'Panes Demo Page';
  $page->admin_description = '';
  $page->path = 'panes_demo';
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
  $handler->name = 'page_panes_demo_page__panel_context_786a6c70-b2ae-43c2-b0dc-f258ed653710';
  $handler->task = 'page';
  $handler->subtask = 'panes_demo_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
          'value' => 'Panes Demo | [site:name]',
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
      'top_banner' => NULL,
      'left_rail' => NULL,
      'optional_rotator' => NULL,
      'right_rail' => NULL,
      'optional_inner_right_rail' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '935b8fa7-b07c-4aa4-ab03-c1cb603d4d8c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e3d7ca1b-aae7-4555-8821-02b11680a949';
    $pane->panel = 'left_rail';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-engineering-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 'menu-engineering-navigation:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'depth_relative' => 0,
      'expanded' => 0,
      'sort' => 0,
      'menu_name' => 'menu-engineering-navigation',
      'parent_mlid' => '0',
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
    $pane->uuid = 'e3d7ca1b-aae7-4555-8821-02b11680a949';
    $display->content['new-e3d7ca1b-aae7-4555-8821-02b11680a949'] = $pane;
    $display->panels['left_rail'][0] = 'new-e3d7ca1b-aae7-4555-8821-02b11680a949';
    $pane = new stdClass();
    $pane->pid = 'new-5481a672-7c68-4d3d-a040-4ccec8b7488a';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-full_view_projects_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5481a672-7c68-4d3d-a040-4ccec8b7488a';
    $display->content['new-5481a672-7c68-4d3d-a040-4ccec8b7488a'] = $pane;
    $display->panels['optional_inner_right_rail'][0] = 'new-5481a672-7c68-4d3d-a040-4ccec8b7488a';
    $pane = new stdClass();
    $pane->pid = 'new-349c07ea-dcb1-4567-bd50-ac3556c69fc2';
    $pane->panel = 'optional_inner_right_rail';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-full_view_projects_pane_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '349c07ea-dcb1-4567-bd50-ac3556c69fc2';
    $display->content['new-349c07ea-dcb1-4567-bd50-ac3556c69fc2'] = $pane;
    $display->panels['optional_inner_right_rail'][1] = 'new-349c07ea-dcb1-4567-bd50-ac3556c69fc2';
    $pane = new stdClass();
    $pane->pid = 'new-7d7e7c9d-d760-46fa-862b-7d9b775a2c3a';
    $pane->panel = 'optional_rotator';
    $pane->type = 'views_panes';
    $pane->subtype = 'rotators-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d7e7c9d-d760-46fa-862b-7d9b775a2c3a';
    $display->content['new-7d7e7c9d-d760-46fa-862b-7d9b775a2c3a'] = $pane;
    $display->panels['optional_rotator'][0] = 'new-7d7e7c9d-d760-46fa-862b-7d9b775a2c3a';
    $pane = new stdClass();
    $pane->pid = 'new-48947b64-9543-4632-8776-643e640a8853';
    $pane->panel = 'right_rail';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:11';
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
    $pane->uuid = '48947b64-9543-4632-8776-643e640a8853';
    $display->content['new-48947b64-9543-4632-8776-643e640a8853'] = $pane;
    $display->panels['right_rail'][0] = 'new-48947b64-9543-4632-8776-643e640a8853';
    $pane = new stdClass();
    $pane->pid = 'new-cd351336-c5b1-4db7-ac29-3f2119fa482c';
    $pane->panel = 'right_rail';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:12';
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
    $pane->uuid = 'cd351336-c5b1-4db7-ac29-3f2119fa482c';
    $display->content['new-cd351336-c5b1-4db7-ac29-3f2119fa482c'] = $pane;
    $display->panels['right_rail'][1] = 'new-cd351336-c5b1-4db7-ac29-3f2119fa482c';
    $pane = new stdClass();
    $pane->pid = 'new-a4efaebb-153f-436c-a0c5-e4c52a678f0e';
    $pane->panel = 'right_rail';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:13';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a4efaebb-153f-436c-a0c5-e4c52a678f0e';
    $display->content['new-a4efaebb-153f-436c-a0c5-e4c52a678f0e'] = $pane;
    $display->panels['right_rail'][2] = 'new-a4efaebb-153f-436c-a0c5-e4c52a678f0e';
    $pane = new stdClass();
    $pane->pid = 'new-6c4377f2-c9da-4d9f-b2ee-d2c26c0346f7';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c4377f2-c9da-4d9f-b2ee-d2c26c0346f7';
    $display->content['new-6c4377f2-c9da-4d9f-b2ee-d2c26c0346f7'] = $pane;
    $display->panels['top_banner'][0] = 'new-6c4377f2-c9da-4d9f-b2ee-d2c26c0346f7';
    $pane = new stdClass();
    $pane->pid = 'new-9bc380dd-e890-49ff-a0b3-83cb52da6d53';
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
      'override_title_text' => 'Panes Demo Page',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9bc380dd-e890-49ff-a0b3-83cb52da6d53';
    $display->content['new-9bc380dd-e890-49ff-a0b3-83cb52da6d53'] = $pane;
    $display->panels['top_banner'][1] = 'new-9bc380dd-e890-49ff-a0b3-83cb52da6d53';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6c4377f2-c9da-4d9f-b2ee-d2c26c0346f7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panes_demo_page'] = $page;

  return $pages;

}
