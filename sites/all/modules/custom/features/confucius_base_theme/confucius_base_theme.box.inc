<?php
/**
 * @file
 * confucius_base_theme.box.inc
 */

/**
 * Implements hook_default_box().
 */
function confucius_base_theme_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'culture_corner_box';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Place holder for culture corner';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/content/culture-corner">Culture Corner</a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['culture_corner_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'culture_corner_placeholder';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Here is the button for the front page Culture corner';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/culture-corner">Culture Corner</a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['culture_corner_placeholder'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'photos_videos_box';
  $box->plugin_key = 'simple';
  $box->title = 'Photos & Videos';
  $box->description = 'Place holder photos and vidoes';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['photos_videos_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'site_footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Site Footer';
  $box->options = array(
    'body' => array(
      'value' => '&copy; 2012, UC Regents <span class="separator"></span>UCLA Confucius Institute<span class="separator"></span>1331 Murphy Hall, Los Angeles, CA 90095-1418<span class="separator"></span>310.825.8839<span class="separator"></span>info@confucius.ucla.edu',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['site_footer'] = $box;

  return $export;
}
