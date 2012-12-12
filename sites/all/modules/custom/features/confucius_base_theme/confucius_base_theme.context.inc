<?php
/**
 * @file
 * confucius_base_theme.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function confucius_base_theme_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'base_theme';
  $context->description = '';
  $context->tag = 'Confucius';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'confucius_blocks-confucius_blocks_site_header' => array(
          'module' => 'confucius_blocks',
          'delta' => 'confucius_blocks_site_header',
          'region' => 'header',
          'weight' => '-16',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => 1,
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-20',
        ),
        'menu-menu-taxonomy-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-taxonomy-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-culture_corner_placeholder' => array(
          'module' => 'boxes',
          'delta' => 'culture_corner_placeholder',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'boxes-site_footer' => array(
          'module' => 'boxes',
          'delta' => 'site_footer',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Confucius');
  $export['base_theme'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'Front Page for UCLA CI';
  $context->tag = 'Confucius';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow-block' => array(
          'module' => 'views',
          'delta' => 'slideshow-block',
          'region' => 'content',
          'weight' => '-17',
        ),
        'views-callout-block' => array(
          'module' => 'views',
          'delta' => 'callout-block',
          'region' => 'content',
          'weight' => '-16',
        ),
        'views-callout-block1' => array(
          'module' => 'views',
          'delta' => 'callout-block1',
          'region' => 'content',
          'weight' => '-15',
        ),
        'views-announcements-block' => array(
          'module' => 'views',
          'delta' => 'announcements-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Confucius');
  t('Front Page for UCLA CI');
  $export['front_page'] = $context;

  return $export;
}
