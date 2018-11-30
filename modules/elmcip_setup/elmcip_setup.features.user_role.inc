<?php

/**
 * @file
 * elmcip_setup.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function elmcip_setup_user_default_roles() {
  $roles = array();

  // Exported role: administrative editor.
  $roles['administrative editor'] = array(
    'name' => 'administrative editor',
    'weight' => 0,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 0,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 0,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 0,
  );

  // Exported role: submitter.
  $roles['submitter'] = array(
    'name' => 'submitter',
    'weight' => 0,
  );

  // Exported role: supereditor.
  $roles['supereditor'] = array(
    'name' => 'supereditor',
    'weight' => 0,
  );

  // Exported role: teacher.
  $roles['teacher'] = array(
    'name' => 'teacher',
    'weight' => 1,
  );

  return $roles;
}
