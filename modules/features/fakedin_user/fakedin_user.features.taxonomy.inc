<?php
/**
 * @file
 * fakedin_user.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fakedin_user_taxonomy_default_vocabularies() {
  return array(
    'companies' => array(
      'name' => 'Companies',
      'machine_name' => 'companies',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'industries' => array(
      'name' => 'Industries',
      'machine_name' => 'industries',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
