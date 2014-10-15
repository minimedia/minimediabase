<?php
/**
 * @file
 * minimediabase.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function minimediabase_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-editor-menu.
  $menus['menu-editor-menu'] = array(
    'menu_name' => 'menu-editor-menu',
    'title' => 'Editor Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Editor Menu');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
