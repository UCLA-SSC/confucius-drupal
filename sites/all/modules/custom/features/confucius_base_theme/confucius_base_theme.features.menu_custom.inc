<?php
/**
 * @file
 * confucius_base_theme.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function confucius_base_theme_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-taxonomy-menu
  $menus['menu-taxonomy-menu'] = array(
    'menu_name' => 'menu-taxonomy-menu',
    'title' => 'Taxonomy Menu',
    'description' => 'This is the taxonomy links menu at the bottom of the page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Taxonomy Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('This is the taxonomy links menu at the bottom of the page');


  return $menus;
}
