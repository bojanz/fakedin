<?php

/**
 * Defines products imported via hook_fakedin_demo_content_install().
 */
function fakedin_core_demo_products() {
  return array(
    array(
      'sku' => 'FREE-TRIAL',
      'title' => 'Free trial',
      'price' => 0,
      'free posts' => 1,
      'role' => 'trial member',
      'usage product' => array(
        'sku' => 'FREE-TRIAL-USAGE',
        'title' => 'Free trial usage',
        'price' => 100,
      ),
    ),
    array(
      'sku' => 'BASIC-PLAN',
      'title' => 'Basic plan',
      'price' => 1000,
      'free posts' => 3,
      'role' => 'basic member',
      'usage product' => array(
        'sku' => 'BASIC-PLAN-USAGE',
        'title' => 'Basic plan usage',
        'price' => 80,
      ),
    ),
    array(
      'sku' => 'PREMIUM-PLAN',
      'title' => 'Premium plan',
      'price' => 5000,
      'free posts' => 5,
      'role' => 'premium member',
      'usage product' => array(
        'sku' => 'PREMIUM-PLAN-USAGE',
        'title' => 'Premium plan usage',
        'price' => 50,
      ),
    ),
  );
}
