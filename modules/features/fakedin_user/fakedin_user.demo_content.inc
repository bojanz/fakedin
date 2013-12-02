<?php

/**
 * Defines terms imported via hook_fakedin_demo_content_install().
 */
function fakedin_user_demo_terms() {
  return array(
    'industries' => array(
      'Computer & Network Security',
      'Computer Games',
      'Computer Hardware',
      'Computer Software',
      'Consumer Electronics',
      'Dairy',
      'E-Learning',
      'Government Administration',
    ),
  );
}

/**
 * Defines users and profiles imported via hook_fakedin_demo_content_install().
 */
function fakedin_user_demo_users() {
  return array(
    array(
      'name' => 'bojanz',
      'password' => 'bojanz',
      'email' => 'bojanz@bojanz.com',
      'profile' => array(
        'full name' => 'Bojan Zivanovic',
        'headline' => 'Chief Bagel Officer at Commerce Guys',
        'country' => 'RS',
        'industry' => 'Computer Software',
        'background' => 'I like ice cream.',
        'experience' => array(
          array(
            'title' => 'Developer',
            'company' => 'Commerce Guys',
            'duration' => array('start' => '2011-03-01'),
            'description' => 'Making Drupal Commerce the #1 ecommerce solution in the world.',
          ),
          array(
            'title' => 'Developer',
            'company' => 'Google Summer of Code',
            'duration' => array('start' => '2010-06-01', 'end' => '2010-09-01'),
            'description' => 'Making Drupal Commerce the #1 ecommerce solution in the world.',
          ),
        ),
        'image' => 'bojanz.jpg',
      ),
    ),
    array(
      'name' => 'jsacksick',
      'password' => 'jsacksick',
      'email' => 'jsacksick@jsacksick.com',
      'profile' => array(
        'full name' => 'Jonathan Sacksick',
        'headline' => 'Drupal Developer At Commerce Guys',
        'country' => 'FR',
        'industry' => 'Government Administration',
        'background' => 'My friends call me Jack.',
        'experience' => array(
          array(
            'title' => 'Drupal Developer',
            'company' => 'Commerce Guys',
            'duration' => array('start' => '2011-06-01'),
            'description' => '',
          ),
          array(
            'title' => 'Web Developer',
            'company' => 'EaNet',
            'duration' => array('start' => '2009-12-01', 'end' => '2011-06-01'),
            'description' => 'Making EaNet the #1 Acid Deposition Monitoring Network in East Asia.',
          ),
        ),
        'image' => 'jsacksick.jpg',
      ),
    ),
    array(
      'name' => 'balintk',
      'password' => 'balintk',
      'email' => 'balintk@balintk.com',
      'profile' => array(
        'full name' => 'Balint Kleri',
        'headline' => 'Drupal Web Developer at Commerce Guys',
        'country' => 'HU',
        'industry' => 'Dairy',
        'background' => 'Startup founder, trance music lover.',
        'experience' => array(
          array(
            'title' => 'Drupal Web Developer',
            'company' => 'Commerce Guys',
            'duration' => array('start' => '2013-03-01'),
            'description' => '',
          ),
          array(
            'title' => 'Software Developer',
            'company' => 'Wunderkraut',
            'duration' => array('start' => '2011-11-01', 'end' => '2013-03-01'),
            'description' => '',
          ),
        ),
        'image' => 'balintk.jpg',
      ),
    ),
    array(
      'name' => 'guguss',
      'password' => 'guguss',
      'email' => 'guguss@guguss.com',
      'profile' => array(
        'full name' => 'Guss Tissier',
        'headline' => 'Multi-purpose manager at Commerce Guys',
        'country' => 'CN',
        'industry' => 'Computer & Network Security',
        'background' => 'Twin brother of Augustin Delaporte, celebrated project manager.',
        'experience' => array(
          array(
            'title' => 'Multi-purpose manager',
            'company' => 'Commerce Guys',
            'duration' => array('start' => '2011-03-01'),
            'description' => '',
          ),
          array(
            'title' => 'Developper',
            'company' => 'Dissidence Distribution',
            'duration' => array('start' => '2010-09-01', 'end' => '2011-01-01'),
            'description' => '',
          ),
        ),
        'image' => 'guguss.jpg',
      ),
    ),
    array(
      'name' => 'kotnik',
      'password' => 'kotnik',
      'email' => 'kotnik@kotnik.com',
      'profile' => array(
        'full name' => 'Nikola Kotur',
        'headline' => 'Developer at Commerce Guys',
        'country' => 'FR',
        'industry' => 'E-Learning',
        'background' => 'Got mugged once, then persuaded the mugger to give him back half of his money.',
        'experience' => array(
          array(
            'title' => 'Developer at Commerce Guys',
            'company' => 'Commerce Guys',
            'duration' => array('start' => '2012-01-01'),
            'description' => 'Experiencing the beauty of Python.',
          ),
        ),
        'image' => 'kotnik.jpg',
      ),
    ),
    array(
      'name' => 'damz',
      'password' => 'damz',
      'email' => 'damz@damz.com',
      'profile' => array(
        'full name' => 'Damien Tournoud',
        'headline' => "Co-founder and CTO at Commerce Guys",
        'country' => 'FR',
        'industry' => 'Computer Games',
        'background' => "Never cared about Norway.",
        'experience' => array(
          array(
            'title' => 'Co-founder and CTO',
            'company' => 'Commerce Guys',
            'duration' => array('start' => '2010-04-01'),
            'description' => '',
          ),
          array(
            'title' => 'Director of the Drupal department',
            'company' => 'AF83',
            'duration' => array('start' => '2009-01-01', 'end' => '2010-04-01'),
            'description' => '',
          ),
        ),
        'image' => 'damz.jpg',
      ),
    ),
    array(
      'name' => 'aaron',
      'password' => 'aaron',
      'email' => 'aaron@aaron.com',
      'profile' => array(
        'full name' => 'Aaron Dudenhofer',
        'headline' => "Themer at Commerce Guys",
        'country' => 'US',
        'industry' => 'Consumer Electronics',
        'background' => "People are always asking me if I know The Dude.",
        'experience' => array(
          array(
            'title' => 'Themer',
            'company' => 'Commerce Guys',
            'duration' => array('start' => '2011-12-01'),
            'description' => '',
          ),
        ),
        'image' => 'aaron.jpg',
      ),
    ),
  );
}
