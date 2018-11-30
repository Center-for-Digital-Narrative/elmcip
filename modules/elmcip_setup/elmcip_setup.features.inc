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

/**
 * Implements hook_flag_default_flags().
 */
function elmcip_setup_flag_default_flags() {
  $flags = array();
  // Exported flag: "Librarian approved".
  $flags['librarian_approved'] = array(
    'entity_type' => 'node',
    'title' => 'Librarian approved',
    'global' => 1,
    'types' => array(
      0 => 'work',
      1 => 'critical_writing',
      2 => 'databases_and_archives',
      3 => 'event',
      4 => 'organization',
      5 => 'person',
      6 => 'platform_software',
      7 => 'publisher',
      8 => 'research_collection',
      9 => 'teaching_resource',
    ),
    'flag_short' => 'Approve record',
    'flag_long' => 'Approve record by liberian',
    'flag_message' => 'Record [node:title] is now approved by Librarian',
    'unflag_short' => 'Revoke approvement',
    'unflag_long' => 'Revoke approvement',
    'unflag_message' => 'Library revoked approvement to [node:title]',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'data_export' => 0,
      'teaser_abbreviated' => 0,
      'revision' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Confirm approvement',
    'unflag_confirmation' => 'Confirm revoking approvement',
    'module' => 'elmcip_setup',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function elmcip_setup_image_default_styles() {
  $styles = array();

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
