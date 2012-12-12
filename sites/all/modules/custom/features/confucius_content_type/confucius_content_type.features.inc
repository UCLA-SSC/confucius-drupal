<?php
/**
 * @file
 * confucius_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function confucius_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function confucius_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: bio_image
  $styles['bio_image'] = array(
    'name' => 'bio_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '83',
          'height' => '83',
        ),
        'weight' => '-9',
      ),
    ),
  );

  // Exported image style: bio_popup_image
  $styles['bio_popup_image'] = array(
    'name' => 'bio_popup_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '120',
          'height' => '120',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: callout_image
  $styles['callout_image'] = array(
    'name' => 'callout_image',
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
          'width' => '298',
          'height' => '189',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function confucius_content_type_node_info() {
  $items = array(
    'bio' => array(
      'name' => t('Bio'),
      'base' => 'node_content',
      'description' => t('bio'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'content_callout' => array(
      'name' => t('Content Callout'),
      'base' => 'node_content',
      'description' => t('Provides Confucius CI with front page Content callout'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Resource'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Name, URL, Address, Description,Image'),
    ),
  );
  return $items;
}
