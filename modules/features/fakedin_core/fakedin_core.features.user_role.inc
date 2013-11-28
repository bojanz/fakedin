<?php
/**
 * @file
 * fakedin_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fakedin_core_user_default_roles() {
  $roles = array();

  // Exported role: basic member.
  $roles['basic member'] = array(
    'name' => 'basic member',
    'weight' => 4,
  );

  // Exported role: premium member.
  $roles['premium member'] = array(
    'name' => 'premium member',
    'weight' => 5,
  );

  // Exported role: trial member.
  $roles['trial member'] = array(
    'name' => 'trial member',
    'weight' => 3,
  );

  return $roles;
}
