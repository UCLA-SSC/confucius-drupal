<?php
/**
 * @file
 * confucius_announcements.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function confucius_announcements_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_announcements';
  $strongarm->value = array();
  $export['menu_options_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_announcements';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_announcements';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_announcements';
  $strongarm->value = '1';
  $export['node_preview_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_announcements';
  $strongarm->value = 0;
  $export['node_submitted_announcements'] = $strongarm;

  return $export;
}
