<?php
/**
 * @file
 * confucius_programs_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function confucius_programs_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_program';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_program';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_program';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_program';
  $strongarm->value = '1';
  $export['node_preview_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_program';
  $strongarm->value = 0;
  $export['node_submitted_program'] = $strongarm;

  return $export;
}
