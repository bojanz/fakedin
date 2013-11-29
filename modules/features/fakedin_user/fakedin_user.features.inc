<?php
/**
 * @file
 * fakedin_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fakedin_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fakedin_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function fakedin_user_default_profile2_type() {
  $items = array();
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1, "page_path" : "profile" }
  }');
  return $items;
}
