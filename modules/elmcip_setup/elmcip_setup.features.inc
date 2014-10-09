<?php
/**
 * @file
 * elmcip_setup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elmcip_setup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function elmcip_setup_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
