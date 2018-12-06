<?php

/**
 * @file
 * elmcip_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elmcip_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function elmcip_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
