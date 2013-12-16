<?php

/**
 * @file
 * Plan form content type plugin.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Create post form'),
  'description' => t('Allows the user to post to the wall.'),
  'category' => t('FakedIn'),
);

/**
 * Render the custom content type.
 */
function fakedin_wall_create_post_form_content_type_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'fakedin_wall';
  $block->delta   = 'create_post_form';
  $block->title   = '';
  $block->content = drupal_get_form('fakedin_wall_create_post_form');
  return $block;
}
