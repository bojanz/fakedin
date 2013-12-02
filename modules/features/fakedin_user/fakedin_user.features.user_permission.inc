<?php
/**
 * @file
 * fakedin_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fakedin_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit own profile profile'.
  $permissions['edit own profile profile'] = array(
    'name' => 'edit own profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'basic member' => 'basic member',
      'premium member' => 'premium member',
      'trial member' => 'trial member',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any profile profile'.
  $permissions['view any profile profile'] = array(
    'name' => 'view any profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'basic member' => 'basic member',
      'premium member' => 'premium member',
      'trial member' => 'trial member',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own profile profile'.
  $permissions['view own profile profile'] = array(
    'name' => 'view own profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'basic member' => 'basic member',
      'premium member' => 'premium member',
      'trial member' => 'trial member',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
