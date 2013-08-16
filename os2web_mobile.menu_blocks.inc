<?php
/**
 * @file os2web_mobile.menu_block.inc
 *
 * Implements menublocks for os2web mobile
 */

/**
 * Implements hook_menu_block_blocks().
 */
function os2web_mobile_menu_block_blocks() {
  // The array key is the block delta used by menu block.
  return array(
    'OS2Web_mobile-15' => array(
      'menu_name'   => 'os2web-menu-contentmenu',
      'parent_mlid' => 38533,
      'title_link'  => 0,
      'admin_title' => 'Mobile borger menu',
      'level'       => 1,
      'follow'      => 0,
      'depth'       => 1,
      'expanded'    => 0,
      'sort'        => 0,
    ),
    'OS2Web_mobile-16' => array(
      'menu_name'   => 'os2web-menu-contentmenu',
      'parent_mlid' => 38534,
      'title_link'  => 0,
      'admin_title' => 'Mobile erhverv menu',
      'level'       => 1,
      'follow'      => 0,
      'depth'       => 1,
      'expanded'    => 0,
      'sort'        => 0,
    ),
    'OS2Web_mobile-17' => array(
      'menu_name'   => 'os2web-menu-contentmenu',
      'parent_mlid' => 38535,
      'title_link'  => 0,
      'admin_title' => 'Mobile politik menu',
      'level'       => 1,
      'follow'      => 0,
      'depth'       => 1,
      'expanded'    => 0,
      'sort'        => 0,
    ),
    'OS2Web_mobile-18' => array(
      'menu_name'   => 'os2web-menu-contentmenu',
      'parent_mlid' => 0,
      'title_link'  => 0,
      'admin_title' => 'Mobile menu - level 3-7',
      'level'       => 3,
      'follow'      => 'child',
      'depth'       => 1,
      'expanded'    => 0,
      'sort'        => 1,
    ),
    'OS2Web_mobile-19' => array(
      'menu_name'   => 'os2web-menu-contentmenu',
      'parent_mlid' => 0,
      'title_link'  => 0,
      'admin_title' => 'Mobile menu - level 2',
      'level'       => 2,
      'follow'      => 0,
      'depth'       => 1,
      'expanded'    => 0,
      'sort'        => 1,
    ),
    'OS2Web_mobile-20' => array(
      'menu_name'   => 'os2web-menu-contentmenu',
      'parent_mlid' => 38613,
      'title_link'  => 0,
      'admin_title' => 'Mobile om kommunen menu',
      'level'       => 1,
      'follow'      => 0,
      'depth'       => 1,
      'expanded'    => 0,
      'sort'        => 0,
    ),
    'OS2Web_mobile-21' => array(
      'menu_name'   => 'menu-mobil-genveje',
      'parent_mlid' => 0,
      'title_link'  => 0,
      'admin_title' => 'Mobile shortcuts menu',
      'level'       => 1,
      'follow'      => 0,
      'depth'       => 1,
      'expanded'    => 0,
      'sort'        => 0,
    ),
  );
}
