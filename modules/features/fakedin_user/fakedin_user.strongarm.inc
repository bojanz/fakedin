<?php
/**
 * @file
 * fakedin_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fakedin_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:profile-profile:field-full-name]';
  $export['realname_pattern'] = $strongarm;

  return $export;
}
