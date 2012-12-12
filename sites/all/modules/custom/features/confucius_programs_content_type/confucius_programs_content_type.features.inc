<?php
/**
 * @file
 * confucius_programs_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function confucius_programs_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function confucius_programs_content_type_node_info() {
  $items = array(
    'program' => array(
      'name' => t('Program'),
      'base' => 'node_content',
      'description' => t('This is the program content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
