<?php
/**
 * @file
 * confucius_breadcrumb.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function confucius_breadcrumb_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-announcement';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'announcements' => 'announcements',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => '<front>',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-announcement'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-article';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'newsroom/articles',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-article'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-community';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'community' => 'community',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'community',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-community'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-educators';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'educators' => 'educators',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'educators',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-educators'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-event';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'newsroom/calendar',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-event'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-higher-ed';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'higher_education' => 'higher_education',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'higher-ed',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-higher-ed'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-k12';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'k_12' => 'k_12',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'k-12',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-k12'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-photos-videos';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'image_gallery' => 'image_gallery',
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'newsroom/photos-videos/*' => 'newsroom/photos-videos/*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'node/44',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-photos-videos'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-press-release';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_release' => 'press_release',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'newsroom/press-release',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-press-release'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-programs';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'program' => 'program',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'programs' => 'programs',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'programs',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-programs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumbs-resources';
  $context->description = '';
  $context->tag = 'Breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'resources' => 'resources',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  $export['breadcrumbs-resources'] = $context;

  return $export;
}
