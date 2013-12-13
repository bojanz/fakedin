<?php
/**
 * @file
 * fakedin_wall.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fakedin_wall_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fakedin_wall_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function fakedin_wall_default_message_type() {
  $items = array();
  $items['fakedin_post'] = entity_import('message_type', '{
    "name" : "fakedin_post",
    "description" : "Wall Post",
    "argument_keys" : [],
    "argument" : [],
    "category" : "fakedin_wall",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null
  }');
  return $items;
}
