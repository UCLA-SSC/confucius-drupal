<?php
/**
 * @file
 * confucius_front_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function confucius_front_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshow';
  $view->description = 'Display a list of all nodes in queue \'Slideshow\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_front_page_image' => 'field_front_page_image',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'slideshow' => 'slideshow',
  );
  /* Relationship: Content: Link (field_see_more_link) */
  $handler->display->display_options['relationships']['field_see_more_link_nid']['id'] = 'field_see_more_link_nid';
  $handler->display->display_options['relationships']['field_see_more_link_nid']['table'] = 'field_data_field_see_more_link';
  $handler->display->display_options['relationships']['field_see_more_link_nid']['field'] = 'field_see_more_link_nid';
  $handler->display->display_options['relationships']['field_see_more_link_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_see_more_link_nid']['delta'] = '-1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_front_page_image']['id'] = 'field_front_page_image';
  $handler->display->display_options['fields']['field_front_page_image']['table'] = 'field_data_field_front_page_image';
  $handler->display->display_options['fields']['field_front_page_image']['field'] = 'field_front_page_image';
  $handler->display->display_options['fields']['field_front_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_page_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_front_page_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_front_page_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_front_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front_page_image']['settings'] = array(
    'image_style' => 'fontpage_slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_front_page_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_slideshow_body']['id'] = 'field_slideshow_body';
  $handler->display->display_options['fields']['field_slideshow_body']['table'] = 'field_data_field_slideshow_body';
  $handler->display->display_options['fields']['field_slideshow_body']['field'] = 'field_slideshow_body';
  $handler->display->display_options['fields']['field_slideshow_body']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_see_more_link']['id'] = 'field_see_more_link';
  $handler->display->display_options['fields']['field_see_more_link']['table'] = 'field_data_field_see_more_link';
  $handler->display->display_options['fields']['field_see_more_link']['field'] = 'field_see_more_link';
  $handler->display->display_options['fields']['field_see_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_see_more_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_see_more_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_see_more_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_see_more_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_see_more_link']['field_api_classes'] = 0;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
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
    'field_front_page_image' => 0,
    'field_slideshow_body' => 0,
    'field_see_more_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_front_page_image' => 0,
    'field_slideshow_body' => 0,
    'field_see_more_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Front SlideShow';
  $export['slideshow'] = $view;

  return $export;
}
