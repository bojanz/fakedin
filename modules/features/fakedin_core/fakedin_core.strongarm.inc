<?php
/**
 * @file
 * fakedin_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fakedin_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_auto_invoice';
  $strongarm->value = 1;
  $export['commerce_billy_auto_invoice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_invoice_nr_method';
  $strongarm->value = 'infinite';
  $export['commerce_billy_invoice_nr_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_invoice_nr_pattern_infinite';
  $strongarm->value = 'FI-[date:custom:ymd]-{id}';
  $export['commerce_billy_invoice_nr_pattern_infinite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_registration_account_notification';
  $strongarm->value = 0;
  $export['commerce_checkout_registration_account_notification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_registration_confirmation_text';
  $strongarm->value = array(
    'value' => 'Thank you for becoming a FakedIn member. You can now create your account.',
    'format' => 'filtered_html',
  );
  $export['commerce_checkout_registration_confirmation_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_registration_password_required';
  $strongarm->value = 1;
  $export['commerce_checkout_registration_password_required'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_license_line_item_types';
  $strongarm->value = array(
    'product' => 'product',
    'recurring' => 0,
  );
  $export['commerce_license_line_item_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_license_product_types';
  $strongarm->value = array(
    'plan' => 'plan',
    'product' => 0,
  );
  $export['commerce_license_product_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_license_role_product_types';
  $strongarm->value = array(
    'plan' => 'plan',
  );
  $export['commerce_license_role_product_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
