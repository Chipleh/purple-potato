<?php
/**
 * @file
 * flexible_template.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function flexible_template_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rotators_hero';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rotators / Hero';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'body' => 0,
    'field_rotator_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'body' => 0,
    'field_rotator_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Title Color */
  $handler->display->display_options['fields']['field_title_color']['id'] = 'field_title_color';
  $handler->display->display_options['fields']['field_title_color']['table'] = 'field_data_field_title_color';
  $handler->display->display_options['fields']['field_title_color']['field'] = 'field_title_color';
  $handler->display->display_options['fields']['field_title_color']['label'] = '';
  $handler->display->display_options['fields']['field_title_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_color']['settings'] = array(
    'selector' => 'body',
    'property' => 'background-color',
    'important' => 1,
  );
  /* Field: Field: Title Size */
  $handler->display->display_options['fields']['field_title_size']['id'] = 'field_title_size';
  $handler->display->display_options['fields']['field_title_size']['table'] = 'field_data_field_title_size';
  $handler->display->display_options['fields']['field_title_size']['field'] = 'field_title_size';
  $handler->display->display_options['fields']['field_title_size']['label'] = '';
  $handler->display->display_options['fields']['field_title_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_size']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Subhead Color */
  $handler->display->display_options['fields']['field_subhead_color']['id'] = 'field_subhead_color';
  $handler->display->display_options['fields']['field_subhead_color']['table'] = 'field_data_field_subhead_color';
  $handler->display->display_options['fields']['field_subhead_color']['field'] = 'field_subhead_color';
  $handler->display->display_options['fields']['field_subhead_color']['label'] = '';
  $handler->display->display_options['fields']['field_subhead_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subhead_color']['element_label_colon'] = FALSE;
  /* Field: Field: Subhead Size */
  $handler->display->display_options['fields']['field_subhead_size']['id'] = 'field_subhead_size';
  $handler->display->display_options['fields']['field_subhead_size']['table'] = 'field_data_field_subhead_size';
  $handler->display->display_options['fields']['field_subhead_size']['field'] = 'field_subhead_size';
  $handler->display->display_options['fields']['field_subhead_size']['label'] = '';
  $handler->display->display_options['fields']['field_subhead_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subhead_size']['element_label_colon'] = FALSE;
  /* Field: Field: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Field: Background Color */
  $handler->display->display_options['fields']['field_background_color']['id'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['table'] = 'field_data_field_background_color';
  $handler->display->display_options['fields']['field_background_color']['field'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['label'] = '';
  $handler->display->display_options['fields']['field_background_color']['element_label_colon'] = FALSE;
  /* Field: Field: Background Image */
  $handler->display->display_options['fields']['field_background_image']['id'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['table'] = 'field_data_field_background_image';
  $handler->display->display_options['fields']['field_background_image']['field'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['label'] = '';
  $handler->display->display_options['fields']['field_background_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_background_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Background Mobile Image */
  $handler->display->display_options['fields']['field_background_mobile_image']['id'] = 'field_background_mobile_image';
  $handler->display->display_options['fields']['field_background_mobile_image']['table'] = 'field_data_field_background_mobile_image';
  $handler->display->display_options['fields']['field_background_mobile_image']['field'] = 'field_background_mobile_image';
  $handler->display->display_options['fields']['field_background_mobile_image']['label'] = '';
  $handler->display->display_options['fields']['field_background_mobile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_mobile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_background_mobile_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Video Tout */
  $handler->display->display_options['fields']['field_video_tout']['id'] = 'field_video_tout';
  $handler->display->display_options['fields']['field_video_tout']['table'] = 'field_data_field_video_tout';
  $handler->display->display_options['fields']['field_video_tout']['field'] = 'field_video_tout';
  $handler->display->display_options['fields']['field_video_tout']['label'] = '';
  $handler->display->display_options['fields']['field_video_tout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_tout']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_tout']['type'] = 'file_video';
  $handler->display->display_options['fields']['field_video_tout']['settings'] = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  /* Field: Field: CTA */
  $handler->display->display_options['fields']['field_cta']['id'] = 'field_cta';
  $handler->display->display_options['fields']['field_cta']['table'] = 'field_data_field_cta';
  $handler->display->display_options['fields']['field_cta']['field'] = 'field_cta';
  $handler->display->display_options['fields']['field_cta']['label'] = '';
  $handler->display->display_options['fields']['field_cta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cta']['click_sort_column'] = 'url';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_secondary_cta']['id'] = 'field_secondary_cta';
  $handler->display->display_options['fields']['field_secondary_cta']['table'] = 'field_data_field_secondary_cta';
  $handler->display->display_options['fields']['field_secondary_cta']['field'] = 'field_secondary_cta';
  $handler->display->display_options['fields']['field_secondary_cta']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_cta']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'capabilities_sort:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'rotator_hero' => 'rotator_hero',
  );

  /* Display: Rotator / Hero */
  $handler = $view->new_display('panel_pane', 'Rotator / Hero', 'rotator_hero_pane');
  $export['rotators_hero'] = $view;

  return $export;
}
