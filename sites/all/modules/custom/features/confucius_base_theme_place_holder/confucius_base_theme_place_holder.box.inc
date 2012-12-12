<?php
/**
 * @file
 * confucius_base_theme_place_holder.box.inc
 */

/**
 * Implements hook_default_box().
 */
function confucius_base_theme_place_holder_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'confucius_ph_sidebar';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'PlaceHolder SideBar';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/all/themes/confucius/images/confucius/confucius-ph-sidebar-right.png"/>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['confucius_ph_sidebar'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ph_content_bottom';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Placeholder Content Bottom';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/all/themes/confucius/images/confucius/confucius-ph-content-bottom.png"/>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ph_content_bottom'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ph_content_slider';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Placeholder Content Front Slider';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/all/themes/confucius/images/confucius/confucius-ph-content-slider.png"/>',
      'format' => 'full_html',
    ),
  );
  $export['ph_content_slider'] = $box;

  return $export;
}
