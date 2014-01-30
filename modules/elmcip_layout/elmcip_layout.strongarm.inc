<?php
/**
 * @file
 * elmcip_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elmcip_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'elmcip';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_elmcip_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/elmcip/favicon.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => 'sites/all/themes/elmcip/favicon.png',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'no',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_rebuild_registry' => 0,
    'zen_layout' => 'zen-columns-fixed',
    'zen_jump_link_target' => 'main-menu',
    'zen_jump_link_text' => 'Jump to navigation',
    'zen_wireframes' => 0,
  );
  $export['theme_elmcip_settings'] = $strongarm;

  return $export;
}
