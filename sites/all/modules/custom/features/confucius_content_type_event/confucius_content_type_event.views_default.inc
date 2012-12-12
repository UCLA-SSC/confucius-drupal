<?php
/**
 * @file
 * confucius_content_type_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function confucius_content_type_event_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'view all events';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Start and End Time -  start date (field_event_start_time) */
  $handler->display->display_options['sorts']['field_event_start_time_value']['id'] = 'field_event_start_time_value';
  $handler->display->display_options['sorts']['field_event_start_time_value']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['sorts']['field_event_start_time_value']['field'] = 'field_event_start_time_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start_time.field_event_start_time_value' => 'field_data_field_event_start_time.field_event_start_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-event-start-time/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start_time.field_event_start_time_value' => 'field_data_field_event_start_time.field_event_start_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-event-start-time/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start_time.field_event_start_time_value' => 'field_data_field_event_start_time.field_event_start_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-event-start-time/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Start and End Time */
  $handler->display->display_options['fields']['field_event_start_time']['id'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['field'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_event_start_time']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_time']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start_time.field_event_start_time_value' => 'field_data_field_event_start_time.field_event_start_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-event-start-time/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: 30day-Calendar  */
  $handler = $view->new_display('block', '30day-Calendar ', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Start and End Time */
  $handler->display->display_options['fields']['field_event_start_time']['id'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['field'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_start_time']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_start_time.field_event_start_time_value' => 'field_data_field_event_start_time.field_event_start_time_value',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Calender Block';

  /* Display: FrontPage-Upcoming Events */
  $handler = $view->new_display('block', 'FrontPage-Upcoming Events', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/newsroom/calendar">view all events</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start and End Time */
  $handler->display->display_options['fields']['field_event_start_time_1']['id'] = 'field_event_start_time_1';
  $handler->display->display_options['fields']['field_event_start_time_1']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time_1']['field'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_event_start_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_time_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['settings'] = array(
    'format_type' => 'date_format_simple_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_start_time_1']['field_api_classes'] = 0;
  /* Field: Content: Start and End Time */
  $handler->display->display_options['fields']['field_event_start_time']['id'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['field'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['element_class'] = 'month';
  $handler->display->display_options['fields']['field_event_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['settings'] = array(
    'format_type' => 'date_format_simple_month_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_start_time']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_time']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_start_time.field_event_start_time_value' => 'field_data_field_event_start_time.field_event_start_time_value',
  );
  $handler->display->display_options['block_description'] = 'FrontPage Calendar';

  /* Display: Page - Upcoming Events */
  $handler = $view->new_display('page', 'Page - Upcoming Events', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_event_start_time' => 'field_event_start_time',
    'field_event_start_time_1' => 'field_event_start_time_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start and End Time */
  $handler->display->display_options['fields']['field_event_start_time']['id'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['field'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_time']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['field_event_start_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_start_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['settings'] = array(
    'format_type' => 'date_format_simple_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_start_time']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_time']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_time']['field_api_classes'] = 0;
  /* Field: Content: Start and End Time */
  $handler->display->display_options['fields']['field_event_start_time_1']['id'] = 'field_event_start_time_1';
  $handler->display->display_options['fields']['field_event_start_time_1']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time_1']['field'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['text'] = '[field_event_start_time]
[field_event_start_time_1]';
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['element_class'] = 'month';
  $handler->display->display_options['fields']['field_event_start_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_time_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_1']['settings'] = array(
    'format_type' => 'date_format_simple_month_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_start_time_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Start and End Time */
  $handler->display->display_options['fields']['field_event_start_time_2']['id'] = 'field_event_start_time_2';
  $handler->display->display_options['fields']['field_event_start_time_2']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time_2']['field'] = 'field_event_start_time';
  $handler->display->display_options['fields']['field_event_start_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['text'] = '[term_node_tid]
[title]
[field_event_start_time_2]';
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_time_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_time_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_time_2']['settings'] = array(
    'format_type' => 'time_format_simple',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_start_time_2']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_event_start_time.field_event_start_time_value' => 'field_data_field_event_start_time.field_event_start_time_value',
  );
  /* Filter criterion: Content: Start and End Time -  start date (field_event_start_time) */
  $handler->display->display_options['filters']['field_event_start_time_value']['id'] = 'field_event_start_time_value';
  $handler->display->display_options['filters']['field_event_start_time_value']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['filters']['field_event_start_time_value']['field'] = 'field_event_start_time_value';
  $handler->display->display_options['filters']['field_event_start_time_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_start_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_start_time_value']['expose']['operator_id'] = 'field_event_start_time_value_op';
  $handler->display->display_options['filters']['field_event_start_time_value']['expose']['label'] = 'Start and End Time -  start date (field_event_start_time)';
  $handler->display->display_options['filters']['field_event_start_time_value']['expose']['operator'] = 'field_event_start_time_value_op';
  $handler->display->display_options['filters']['field_event_start_time_value']['expose']['identifier'] = 'field_event_start_time_value';
  $handler->display->display_options['filters']['field_event_start_time_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_event_start_time_value']['form_type'] = 'date_text';
  /* Filter criterion: Content: Start and End Time - end date (field_event_start_time:value2) */
  $handler->display->display_options['filters']['field_event_start_time_value2']['id'] = 'field_event_start_time_value2';
  $handler->display->display_options['filters']['field_event_start_time_value2']['table'] = 'field_data_field_event_start_time';
  $handler->display->display_options['filters']['field_event_start_time_value2']['field'] = 'field_event_start_time_value2';
  $handler->display->display_options['filters']['field_event_start_time_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_start_time_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_start_time_value2']['expose']['operator_id'] = 'field_event_start_time_value2_op';
  $handler->display->display_options['filters']['field_event_start_time_value2']['expose']['label'] = 'Start and End Time - end date (field_event_start_time:value2)';
  $handler->display->display_options['filters']['field_event_start_time_value2']['expose']['operator'] = 'field_event_start_time_value2_op';
  $handler->display->display_options['filters']['field_event_start_time_value2']['expose']['identifier'] = 'field_event_start_time_value2';
  $handler->display->display_options['filters']['field_event_start_time_value2']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_event_start_time_value2']['form_type'] = 'date_text';
  $handler->display->display_options['path'] = 'newsroom/calendar';
  $export['calendar'] = $view;

  return $export;
}
