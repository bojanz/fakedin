<?php
/**
 * @file
 * fakedin_core.features.inc
 */

/**
 * Implements hook_default_cl_billing_cycle_type().
 */
function fakedin_core_default_cl_billing_cycle_type() {
  $items = array();
  $items['monthly'] = entity_import('cl_billing_cycle_type', '{
    "engine" : "periodic",
    "name" : "monthly",
    "title" : "Monthly",
    "prepaid" : null,
    "wrapper" : {},
    "pce_period" : { "und" : [ { "value" : "month" } ] },
    "pce_async" : { "und" : [ { "value" : "0" } ] }
  }');
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function fakedin_core_commerce_product_default_types() {
  $items = array(
    'plan' => array(
      'type' => 'plan',
      'name' => 'Plan',
      'description' => 'A membership level',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function fakedin_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
