<?php
/**
 * @file
 * fakedin_wall.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fakedin_wall_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'administrator' => 'administrator',
      'basic member' => 'basic member',
      'premium member' => 'premium member',
      'trial member' => 'trial member',
    ),
    'module' => 'message',
  );

  return $permissions;
}
