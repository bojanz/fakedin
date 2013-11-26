<?php

/**
 * Implements hook_form_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function fakedin_form_install_configure_form_alter(&$form, $form_state) {
  // Set a default name for the site.
  $form['site_information']['site_name']['#default_value'] = t('FakedIn');

  // Set a default country so we can benefit from it on Address Fields.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';

  // Use "admin" as the default username.
  $form['admin_account']['account']['name']['#default_value'] = 'admin';

  // Hide Update Notifications.
  $form['update_notifications']['#access'] = FALSE;
}
