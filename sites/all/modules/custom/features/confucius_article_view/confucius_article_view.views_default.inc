<?php
/**
 * @file
 * confucius_article_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function confucius_article_view_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'articles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'article-view-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla sapien neque, vulputate sit amet commodo et, convallis at augue. Phasellus volutpat accumsan tortor eget vestibulum. Duis ac tellus vel ipsum tempus sollicitudin. Quisque libero elit, commodo eu in';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search returned no results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['label'] = '';
  $handler->display->display_options['fields']['field_article_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_article_url']['empty'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_article_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_article_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_url']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_article_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_class'] = 'article-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['empty'] = 'Your search returned no results.';
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_publication_name']['id'] = 'field_publication_name';
  $handler->display->display_options['fields']['field_publication_name']['table'] = 'field_data_field_publication_name';
  $handler->display->display_options['fields']['field_publication_name']['field'] = 'field_publication_name';
  $handler->display->display_options['fields']['field_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_publication_name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_publication_name']['alter']['text'] = '[field_publication_name],';
  $handler->display->display_options['fields']['field_publication_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_publication_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_publication_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['element_class'] = 'article-publication-name';
  $handler->display->display_options['fields']['field_publication_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_publication_name']['empty'] = 'Your search returned no results.';
  $handler->display->display_options['fields']['field_publication_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_publication_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_publication_name']['field_api_classes'] = 0;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_article_publication_date']['id'] = 'field_article_publication_date';
  $handler->display->display_options['fields']['field_article_publication_date']['table'] = 'field_data_field_article_publication_date';
  $handler->display->display_options['fields']['field_article_publication_date']['field'] = 'field_article_publication_date';
  $handler->display->display_options['fields']['field_article_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_publication_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_article_publication_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_publication_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_article_publication_date']['settings'] = array(
    'format_type' => 'date_format_simple_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_article_publication_date']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'article' => 'article',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = '<span>Browse Archive:</span>';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-10:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'newsroom/articles';
  $export['articles'] = $view;

  return $export;
}
