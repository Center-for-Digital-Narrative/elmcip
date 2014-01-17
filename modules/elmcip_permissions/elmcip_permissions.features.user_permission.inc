<?php
/**
 * @file
 * elmcip_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elmcip_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'aggregator',
  );

  return $permissions;
}
