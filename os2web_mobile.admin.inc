<?php
/**
 *  @file os2web_mobile_extras.admin.inc
 */

/**
 * Implements hook_menu().
 */
function os2web_mobile_extras_menu() {
  $items = array();
  $items['admin/config/os2web_mobile'] = array(
    'title' => 'O2web mobile settings',
    'description' => 'General settings ',
    'position' => 'right',
    'weight' => -10,
    'page callback' => 'system_admin_menu_block_page',
    'file' => 'system.admin.inc',
    'file path' => drupal_get_path('module', 'system'),
    'access arguments' => array('administer site configuration'),
  );

  $items['admin/config/os2web_mobile/settings'] = array(
    'title' => 'OS2web mobile settings',
    'description' => 'Change settings for OS2web mobile',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('os2web_borger_dk_settings_form'),
    'access arguments' => array('administer site configuration'),
    'file' => 'os2web_mobile_extras.admin.inc',
  );
  return $items;
}
