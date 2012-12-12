<?php
/**
 * @file
 * confucius_front_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function confucius_front_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function confucius_front_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function confucius_front_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: fontpage_slideshow
  $styles['fontpage_slideshow'] = array(
    'name' => 'fontpage_slideshow',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '620',
          'height' => '374',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function confucius_front_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Front Slide Show'),
      'base' => 'node_content',
      'description' => t('Provides Confucius CI with front slide show content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
