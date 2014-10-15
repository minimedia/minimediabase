<?php
/**
 * @file
 * minimediabase.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function minimediabase_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access draggableviews.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format script.
  $permissions['use text format script'] = array(
    'name' => 'use text format script',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: view any unpublished content.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
