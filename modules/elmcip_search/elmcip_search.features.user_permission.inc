<?php

/**
 * @file
 * elmcip_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elmcip_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access search_api_page'.
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  return $permissions;
}
