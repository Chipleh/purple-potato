<?php
/**
 * @file
 * news_release.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_release_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest news';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-news&nyo=0">View All »</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: ID */
  $handler->display->display_options['fields']['field_id']['id'] = 'field_id';
  $handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
  $handler->display->display_options['fields']['field_id']['field'] = 'field_id';
  $handler->display->display_options['fields']['field_id']['label'] = '';
  $handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_announcement_date']['id'] = 'field_announcement_date';
  $handler->display->display_options['fields']['field_announcement_date']['table'] = 'field_data_field_announcement_date';
  $handler->display->display_options['fields']['field_announcement_date']['field'] = 'field_announcement_date';
  $handler->display->display_options['fields']['field_announcement_date']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date (field_announcement_date) */
  $handler->display->display_options['sorts']['field_announcement_date_value']['id'] = 'field_announcement_date_value';
  $handler->display->display_options['sorts']['field_announcement_date_value']['table'] = 'field_data_field_announcement_date';
  $handler->display->display_options['sorts']['field_announcement_date_value']['field'] = 'field_announcement_date_value';
  $handler->display->display_options['sorts']['field_announcement_date_value']['order'] = 'DESC';
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
    'news_release' => 'news_release',
  );

  /* Display: Latest news */
  $handler = $view->new_display('block', 'Latest news', 'latest_news');
  $export['news_releases'] = $view;

  return $export;
}
