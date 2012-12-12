<?php
/**
 * @file
 * confucius_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function confucius_announcements_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function confucius_announcements_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function confucius_announcements_node_info() {
  $items = array(
    'announcements' => array(
      'name' => t('Announcements'),
      'base' => 'node_content',
      'description' => t('Official site announcements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
