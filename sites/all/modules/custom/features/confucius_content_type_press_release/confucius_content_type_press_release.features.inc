<?php
/**
 * @file
 * confucius_content_type_press_release.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function confucius_content_type_press_release_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function confucius_content_type_press_release_node_info() {
  $items = array(
    'press_release' => array(
      'name' => t('Press Release'),
      'base' => 'node_content',
      'description' => t('Press Releases (internal and external.'),
      'has_title' => '1',
      'title_label' => t('Press Release Title'),
      'help' => '',
    ),
  );
  return $items;
}
