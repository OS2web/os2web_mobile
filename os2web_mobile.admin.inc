<?php
/**
 *  @file os2web_mobile_extras.admin.inc
 */

/**
 * Implements hook_settings_form().
 */
function os2web_mobile_settings_form() {
  $form = array();

  $form['os2web_mobile_item'] = array(
    '#type' => 'item',
    '#description' => t('Configure how the site reacts to mobile use.'),
  );

  // Domain trigger.
  $form['os2web_mobile_domain'] = array(
    '#title' => t('Mobile domain'),
    '#default_value' => variable_get('os2web_mobile_domain', ''),
    '#description' => t('Which domain should trigger mobile view (ex. m.domain.tld)'),
    '#type' => 'textfield',
  );

  // Mobile frontpage.
  $form['os2web_mobile_mobile_frontpage'] = array(
    '#title' => t('Mobile frontpage'),
    '#default_value' => variable_get('os2web_mobile_mobile_frontpage', 'mobile'),
    '#description' => t('path to mobile frontpage (default: mobile)'),
    '#type' => 'textfield',
  );

  return system_settings_form($form);
}
