<?php

/**
 * @file
 * elmcip_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function elmcip_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Librarian.
  $roles['Librarian'] = array(
    'name' => 'Librarian',
    'weight' => 2,
  );

  return $roles;
}
