<?php
/**
 * @file
 * confucius_sidebar_image.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function confucius_sidebar_image_image_default_styles() {
  $styles = array();

  // Exported image style: side_bar_image
  $styles['side_bar_image'] = array(
    'name' => 'side_bar_image',
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
          'width' => '300',
          'height' => '178',
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
function confucius_sidebar_image_node_info() {
  $items = array(
    'sidebarimage' => array(
      'name' => t('Side Bar Image'),
      'base' => 'node_content',
      'description' => t('The right sidebar of any list page or individual node should be able to display up to three vertical images.

To do this, we\'re going to need an Image content type with a multiple value image field, as well as a themed nodeblock that can be placed via context reaction.

The title of the node is displayed at the bottom of the images. In the attachment it is "Culture Corner." '),
      'has_title' => '1',
      'title_label' => t('Side Bar Image'),
      'help' => '',
    ),
  );
  return $items;
}
