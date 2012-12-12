<?php
/**
 * @file
 * list_view_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function list_view_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_list_view_page';
  $strongarm->value = array();
  $export['menu_options_list_view_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_list_view_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_list_view_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_list_view_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_list_view_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_list_view_page';
  $strongarm->value = '1';
  $export['node_preview_list_view_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_list_view_page';
  $strongarm->value = 0;
  $export['node_submitted_list_view_page'] = $strongarm;

  return $export;
}
