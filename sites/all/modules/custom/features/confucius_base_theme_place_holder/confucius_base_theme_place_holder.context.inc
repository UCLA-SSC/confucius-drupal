<?php
/**
 * @file
 * confucius_base_theme_place_holder.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function confucius_base_theme_place_holder_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'placeholder_front';
  $context->description = '';
  $context->tag = 'Confucius';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Confucius');
  $export['placeholder_front'] = $context;

  return $export;
}
