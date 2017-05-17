<?php
/**
 * @file
 * home_campaign.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_campaign_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_campaign';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Campaign';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home Campaign';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Body style */
  $handler->display->display_options['fields']['field_body_style']['id'] = 'field_body_style';
  $handler->display->display_options['fields']['field_body_style']['table'] = 'field_data_field_body_style';
  $handler->display->display_options['fields']['field_body_style']['field'] = 'field_body_style';
  $handler->display->display_options['fields']['field_body_style']['label'] = '';
  $handler->display->display_options['fields']['field_body_style']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_body_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body_style']['type'] = 'text_plain';
  /* Field: Content: Campaign Image */
  $handler->display->display_options['fields']['field_campaign_image']['id'] = 'field_campaign_image';
  $handler->display->display_options['fields']['field_campaign_image']['table'] = 'field_data_field_campaign_image';
  $handler->display->display_options['fields']['field_campaign_image']['field'] = 'field_campaign_image';
  $handler->display->display_options['fields']['field_campaign_image']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_campaign_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: H1 */
  $handler->display->display_options['fields']['field_h1']['id'] = 'field_h1';
  $handler->display->display_options['fields']['field_h1']['table'] = 'field_data_field_h1';
  $handler->display->display_options['fields']['field_h1']['field'] = 'field_h1';
  $handler->display->display_options['fields']['field_h1']['label'] = '';
  $handler->display->display_options['fields']['field_h1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_h1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_h1']['alter']['preserve_tags'] = '<br>';
  $handler->display->display_options['fields']['field_h1']['element_label_colon'] = FALSE;
  /* Field: Content: H1 style */
  $handler->display->display_options['fields']['field_h1_style']['id'] = 'field_h1_style';
  $handler->display->display_options['fields']['field_h1_style']['table'] = 'field_data_field_h1_style';
  $handler->display->display_options['fields']['field_h1_style']['field'] = 'field_h1_style';
  $handler->display->display_options['fields']['field_h1_style']['label'] = '';
  $handler->display->display_options['fields']['field_h1_style']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_h1_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_h1_style']['type'] = 'text_plain';
  /* Field: Field: CTA */
  $handler->display->display_options['fields']['field_cta']['id'] = 'field_cta';
  $handler->display->display_options['fields']['field_cta']['table'] = 'field_data_field_cta';
  $handler->display->display_options['fields']['field_cta']['field'] = 'field_cta';
  $handler->display->display_options['fields']['field_cta']['label'] = '';
  $handler->display->display_options['fields']['field_cta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cta']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cta']['type'] = 'link_title_plain';
  /* Field: Field: CTA */
  $handler->display->display_options['fields']['field_cta_1']['id'] = 'field_cta_1';
  $handler->display->display_options['fields']['field_cta_1']['table'] = 'field_data_field_cta';
  $handler->display->display_options['fields']['field_cta_1']['field'] = 'field_cta';
  $handler->display->display_options['fields']['field_cta_1']['label'] = '';
  $handler->display->display_options['fields']['field_cta_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cta_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cta_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cta_1']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="heroCarousel__item heroCarousel__item--v3" style="background-image: url(\'/sites/default/files/responsive/home%20page/doe-HP.jpg\');">
			<div class="heroCarousel__inner">
				<h1 style="font-size:60px; line-height:1.1em; color:#fff; margin: -40px 0 0 0 ; text-shadow:none; padding: -25px 0 0 0;">The Next Chapter of<br>DOE Support</h1>

				<p style="font-size:17px; color:#d4fcfc; padding: 15px 0 0 0;">Transforming department of energy site management</p>
				<a class="cta cta__secondary" href="/doe" onClick="ga(\'send\', \'event\', \'HP-Slide\', \'click\', \'DOE\');">Learn More</a></div>
		</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: ga code */
  $handler->display->display_options['fields']['field_ga_code']['id'] = 'field_ga_code';
  $handler->display->display_options['fields']['field_ga_code']['table'] = 'field_data_field_ga_code';
  $handler->display->display_options['fields']['field_ga_code']['field'] = 'field_ga_code';
  /* Field: Content: Full Width Text Area */
  $handler->display->display_options['fields']['field_full_width_text_area']['id'] = 'field_full_width_text_area';
  $handler->display->display_options['fields']['field_full_width_text_area']['table'] = 'field_data_field_full_width_text_area';
  $handler->display->display_options['fields']['field_full_width_text_area']['field'] = 'field_full_width_text_area';
  $handler->display->display_options['fields']['field_full_width_text_area']['label'] = '';
  $handler->display->display_options['fields']['field_full_width_text_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_width_text_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_width_text_area']['delta_offset'] = '0';
  /* Field: Content: Campaign Image Mobile */
  $handler->display->display_options['fields']['field_campaign_image_mobile']['id'] = 'field_campaign_image_mobile';
  $handler->display->display_options['fields']['field_campaign_image_mobile']['table'] = 'field_data_field_campaign_image_mobile';
  $handler->display->display_options['fields']['field_campaign_image_mobile']['field'] = 'field_campaign_image_mobile';
  $handler->display->display_options['fields']['field_campaign_image_mobile']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_image_mobile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_image_mobile']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_image_mobile']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Sort (field_sort) */
  $handler->display->display_options['sorts']['field_sort_value']['id'] = 'field_sort_value';
  $handler->display->display_options['sorts']['field_sort_value']['table'] = 'field_data_field_sort';
  $handler->display->display_options['sorts']['field_sort_value']['field'] = 'field_sort_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'home_campaign' => 'home_campaign',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['home_campaign'] = $view;

  return $export;
}
