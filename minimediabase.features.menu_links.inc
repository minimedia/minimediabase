<?php
/**
 * @file
 * minimediabase.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function minimediabase_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-editor-menu:<front>
  $menu_links['menu-editor-menu:<front>'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Start',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-editor-menu:admin/config/search/metatags/config/global
  $menu_links['menu-editor-menu:admin/config/search/metatags/config/global'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'admin/config/search/metatags/config/global',
    'router_path' => 'admin/config/search/metatags/config/%',
    'link_title' => 'Ändra SEO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-editor-menu:admin/config/system/site-information
  $menu_links['menu-editor-menu:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Ändra sajtnamn',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-editor-menu:admin/manage/content/articles
  $menu_links['menu-editor-menu:admin/manage/content/articles'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'admin/manage/content/articles',
    'router_path' => 'admin/manage/content/articles',
    'link_title' => 'Lista artiklar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-editor-menu:admin/manage/order/articles/start
  $menu_links['menu-editor-menu:admin/manage/order/articles/start'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'admin/manage/order/articles/start',
    'router_path' => 'admin/manage/order/articles/start',
    'link_title' => 'Ordna startsida',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-editor-menu:admin/manage/order/articles/under
  $menu_links['menu-editor-menu:admin/manage/order/articles/under'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'admin/manage/order/articles/under',
    'router_path' => 'admin/manage/order/articles/under',
    'link_title' => 'Ordna undersidor',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-editor-menu:admin/settings/platformoptions
  $menu_links['menu-editor-menu:admin/settings/platformoptions'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'admin/settings/platformoptions',
    'router_path' => 'admin/settings/platformoptions',
    'link_title' => 'Kampanjinställningar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-editor-menu:admin/structure/menu/manage/main-menu
  $menu_links['menu-editor-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Ändra huvudnavigering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-editor-menu:node/add/article
  $menu_links['menu-editor-menu:node/add/article'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Skapa artikel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-editor-menu:user/logout
  $menu_links['menu-editor-menu:user/logout'] = array(
    'menu_name' => 'menu-editor-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logga ut',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Kampanjinställningar');
  t('Lista artiklar');
  t('Logga ut');
  t('Ordna startsida');
  t('Ordna undersidor');
  t('Skapa artikel');
  t('Start');
  t('Ändra SEO');
  t('Ändra huvudnavigering');
  t('Ändra sajtnamn');


  return $menu_links;
}
