<?php
/**
 * @file
 * fakedin_core.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fakedin_core_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_product-plan-field_free_posts_quota'
  $field_instances['commerce_product-plan-field_free_posts_quota'] = array(
    'bundle' => 'plan',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The number of posts a user can make during one billing cycle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_free_posts_quota',
    'label' => 'Free posts quota',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'commerce_product-plan-field_usage_product'
  $field_instances['commerce_product-plan-field_usage_product'] = array(
    'bundle' => 'plan',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Usage product',
    ),
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Used to charge posts over the free quota.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_usage_product',
    'label' => 'Usage product',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Free posts quota');
  t('The number of posts a user can make during one billing cycle.');
  t('Usage product');
  t('Used to charge posts over the free quota.');

  return $field_instances;
}
