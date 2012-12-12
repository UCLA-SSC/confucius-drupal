<?php
/**
 * @file
 * confucius_content_list_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function confucius_content_list_view_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'bio';
  $view->description = 'This is the view of the Bio content_type';
  $view->tag = 'bio';
  $view->base_table = 'node';
  $view->human_name = 'Bio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MEET OUR TEAM';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_team_group',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a class="colorbox-inline" href="/node/1?width=500&height=500&inline=true#content">[title]</a>';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'colorbox-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: image */
  $handler->display->display_options['fields']['field_bio_image']['id'] = 'field_bio_image';
  $handler->display->display_options['fields']['field_bio_image']['table'] = 'field_data_field_bio_image';
  $handler->display->display_options['fields']['field_bio_image']['field'] = 'field_bio_image';
  $handler->display->display_options['fields']['field_bio_image']['label'] = '';
  $handler->display->display_options['fields']['field_bio_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bio_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bio_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bio_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bio_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bio_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bio_image']['settings'] = array(
    'image_style' => 'bio_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_bio_image']['field_api_classes'] = 0;
  /* Field: Content: image */
  $handler->display->display_options['fields']['field_bio_image_1']['id'] = 'field_bio_image_1';
  $handler->display->display_options['fields']['field_bio_image_1']['table'] = 'field_data_field_bio_image';
  $handler->display->display_options['fields']['field_bio_image_1']['field'] = 'field_bio_image';
  $handler->display->display_options['fields']['field_bio_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_bio_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bio_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bio_image_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bio_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bio_image_1']['settings'] = array(
    'image_style' => 'bio_popup_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_bio_image_1']['field_api_classes'] = 0;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['external'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['colorbox']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['colorbox']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['html'] = 0;
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['colorbox']['hide_empty'] = 0;
  $handler->display->display_options['fields']['colorbox']['empty_zero'] = 0;
  $handler->display->display_options['fields']['colorbox']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_bio_image';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[title] [field_bio_image_1] [body]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 0;
  $handler->display->display_options['fields']['colorbox']['height'] = '160px';
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox_1']['id'] = 'colorbox_1';
  $handler->display->display_options['fields']['colorbox_1']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox_1']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox_1']['label'] = '';
  $handler->display->display_options['fields']['colorbox_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['colorbox_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['colorbox_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['colorbox_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['colorbox_1']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox_1']['popup'] = '[title] [field_bio_image_1] [body]';
  $handler->display->display_options['fields']['colorbox_1']['gid'] = 0;
  $handler->display->display_options['fields']['colorbox_1']['height'] = '160px';
  /* Field: Content: position held */
  $handler->display->display_options['fields']['field_position_held']['id'] = 'field_position_held';
  $handler->display->display_options['fields']['field_position_held']['table'] = 'field_data_field_position_held';
  $handler->display->display_options['fields']['field_position_held']['field'] = 'field_position_held';
  $handler->display->display_options['fields']['field_position_held']['label'] = '';
  $handler->display->display_options['fields']['field_position_held']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_position_held']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_position_held']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_position_held']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_position_held']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position_held']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_position_held']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_position_held']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_position_held']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_position_held']['field_api_classes'] = 0;
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_affiliation']['id'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['field'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_affiliation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_affiliation']['alter']['path'] = 'www.ucla.edu';
  $handler->display->display_options['fields']['field_affiliation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_affiliation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_affiliation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_affiliation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_affiliation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_affiliation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_affiliation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_affiliation']['field_api_classes'] = 0;
  /* Field: Content: Team Group */
  $handler->display->display_options['fields']['field_team_group']['id'] = 'field_team_group';
  $handler->display->display_options['fields']['field_team_group']['table'] = 'field_data_field_team_group';
  $handler->display->display_options['fields']['field_team_group']['field'] = 'field_team_group';
  $handler->display->display_options['fields']['field_team_group']['label'] = '';
  $handler->display->display_options['fields']['field_team_group']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_group']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_team_group']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_team_group']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_team_group']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_team_group']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_group']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_team_group']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_team_group']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_team_group']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_team_group']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
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
    'bio' => 'bio',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about-us/team';
  $export['bio'] = $view;

  $view = new view;
  $view->name = 'callout';
  $view->description = 'Displays a list of nodes in queue Callout';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Callout';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'frontpage_content_callout_blocks' => 'frontpage_content_callout_blocks',
    'slideshow' => 0,
  );
  /* Relationship: Content: Link (field_content_callout_link) */
  $handler->display->display_options['relationships']['field_content_callout_link_nid']['id'] = 'field_content_callout_link_nid';
  $handler->display->display_options['relationships']['field_content_callout_link_nid']['table'] = 'field_data_field_content_callout_link';
  $handler->display->display_options['relationships']['field_content_callout_link_nid']['field'] = 'field_content_callout_link_nid';
  $handler->display->display_options['relationships']['field_content_callout_link_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_content_callout_link_nid']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_content_callout_link_nid';
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_content_callout_image']['id'] = 'field_content_callout_image';
  $handler->display->display_options['fields']['field_content_callout_image']['table'] = 'field_data_field_content_callout_image';
  $handler->display->display_options['fields']['field_content_callout_image']['field'] = 'field_content_callout_image';
  $handler->display->display_options['fields']['field_content_callout_image']['label'] = '';
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_callout_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_content_callout_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_content_callout_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_content_callout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_callout_image']['settings'] = array(
    'image_style' => 'callout_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_callout_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
    'content_callout' => 'content_callout',
  );
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['value']['value'] = '1';

  /* Display: Call out 1 */
  $handler = $view->new_display('block', 'Call out 1', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Call out 2 */
  $handler = $view->new_display('block', 'Call out 2', 'block1');
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
    'content_callout' => 'content_callout',
  );
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['value']['value'] = '2';
  $export['callout'] = $view;

  $view = new view;
  $view->name = 'educational_resources';
  $view->description = 'This is the view of the resource content type';
  $view->tag = 'resource';
  $view->base_table = 'node';
  $view->human_name = 'Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_resource_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Educational';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Educational</h2>
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resource_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resource_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resource_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_resource_type']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_resource_type']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['separator'] = '';
  $handler->display->display_options['fields']['field_resource_type']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    11 => '11',
    6 => '6',
    12 => '12',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'test';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Page Educational */
  $handler = $view->new_display('page', 'Page Educational', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Educational';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Educational</h2>
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    11 => '11',
    6 => '6',
    12 => '12',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'resource';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'resources';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Cultural';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Cultural</h2>
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    13 => '13',
    14 => '14',
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'resource';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['educational_resources'] = $view;

  return $export;
}
