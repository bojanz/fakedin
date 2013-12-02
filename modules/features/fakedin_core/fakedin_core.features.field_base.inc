<?php
/**
 * @file
 * fakedin_core.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fakedin_core_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_free_posts_quota'
  $field_bases['field_free_posts_quota'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_free_posts_quota',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_usage_product'
  $field_bases['field_usage_product'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_usage_product',
    'foreign keys' => array(),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'product' => 'product',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'commerce_product',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
