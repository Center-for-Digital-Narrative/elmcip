<?php
/**
 * @file
 * elmcip_field_instances.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elmcip_field_instances_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
