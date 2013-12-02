<?php

/**
 * @file
 * Plan form content type plugin.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Plan form'),
  'description' => t('Allows the user to select a plan and initiate checkout.'),
  'category' => t('FakedIn'),
);

/**
 * Render the custom content type.
 */
function fakedin_core_plan_form_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'fakedin_core';
  $block->delta   = 'plan_form';
  $block->title   = '';
  $block->content = drupal_get_form('fakedin_core_plan_form');
  return $block;
}
