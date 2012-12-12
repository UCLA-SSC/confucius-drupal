<?php
/**
 * @file
 * confucius_content_type_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function confucius_content_type_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calendar_view';
  $context->description = 'This context includes the calendar block view on the event page';
  $context->tag = 'Confucius';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'newsroom/calendar' => 'newsroom/calendar',
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'calendar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Confucius');
  t('This context includes the calendar block view on the event page');
  $export['calendar_view'] = $context;

  return $export;
}
