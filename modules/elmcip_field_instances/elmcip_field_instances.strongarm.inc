<?php
/**
 * @file
 * elmcip_field_instances.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elmcip_field_instances_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_flvmediaplayer_url';
  $strongarm->value = '';
  $export['emfield_flvmediaplayer_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_flickr_max_saves';
  $strongarm->value = '10';
  $export['media_flickr_max_saves'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_flickr_store_local';
  $strongarm->value = 0;
  $export['media_flickr_store_local'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_flickr__api_key';
  $strongarm->value = '12f178eebc85858e8640cfffe6d313b6';
  $export['media_flickr__api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_flickr__api_secret';
  $strongarm->value = '45243fcebbaff95e';
  $export['media_flickr__api_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__api_key';
  $strongarm->value = '331757ca8a15a8da159448a0bcb4ec79';
  $export['media_vimeo__api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__api_secret';
  $strongarm->value = '8e4774fcc0125dd2';
  $export['media_vimeo__api_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__color_override';
  $strongarm->value = 0;
  $export['media_vimeo__color_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__full_screen';
  $strongarm->value = 1;
  $export['media_vimeo__full_screen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__on_screen_info';
  $strongarm->value = array(
    'portrait' => 'portrait',
    'title' => 'title',
    'byline' => 'byline',
  );
  $export['media_vimeo__on_screen_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__thumb_size';
  $strongarm->value = '160';
  $export['media_vimeo__thumb_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__universal';
  $strongarm->value = 0;
  $export['media_vimeo__universal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__api_key';
  $strongarm->value = '';
  $export['media_youtube__api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__check_for_duplicates';
  $strongarm->value = 0;
  $export['media_youtube__check_for_duplicates'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__check_for_failed';
  $strongarm->value = 0;
  $export['media_youtube__check_for_failed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__check_for_rejected';
  $strongarm->value = 0;
  $export['media_youtube__check_for_rejected'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__colors_color1';
  $strongarm->value = '#FFFFFF';
  $export['media_youtube__colors_color1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__colors_color2';
  $strongarm->value = '#CCCCCC';
  $export['media_youtube__colors_color2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__cron_limit';
  $strongarm->value = '50';
  $export['media_youtube__cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__cron_time';
  $strongarm->value = '10';
  $export['media_youtube__cron_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__display_info';
  $strongarm->value = 0;
  $export['media_youtube__display_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__full_screen';
  $strongarm->value = 1;
  $export['media_youtube__full_screen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__high_quality';
  $strongarm->value = 1;
  $export['media_youtube__high_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__html5_player';
  $strongarm->value = 0;
  $export['media_youtube__html5_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__media_youtube_update_6012';
  $strongarm->value = TRUE;
  $export['media_youtube__media_youtube_update_6012'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__show_border';
  $strongarm->value = 0;
  $export['media_youtube__show_border'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__show_colors';
  $strongarm->value = 0;
  $export['media_youtube__show_colors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__show_related_videos';
  $strongarm->value = 0;
  $export['media_youtube__show_related_videos'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_0';
  $strongarm->value = '';
  $export['media_youtube__status_display_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_duplicates';
  $strongarm->value = '';
  $export['media_youtube__status_display_duplicates'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_rejected';
  $strongarm->value = '';
  $export['media_youtube__status_display_rejected'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_upload_failed';
  $strongarm->value = '';
  $export['media_youtube__status_display_upload_failed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_update_frequency';
  $strongarm->value = '0';
  $export['media_youtube__status_update_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__store_raw_metadata';
  $strongarm->value = 0;
  $export['media_youtube__store_raw_metadata'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__use_jw_flv';
  $strongarm->value = 0;
  $export['media_youtube__use_jw_flv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__youtube_password';
  $strongarm->value = '';
  $export['media_youtube__youtube_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__youtube_username';
  $strongarm->value = '';
  $export['media_youtube__youtube_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__zend_path';
  $strongarm->value = 'sites/all/libraries/ZendGdata/library';
  $export['media_youtube__zend_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocabulary_1_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_vocabulary_1_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocabulary_2_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_vocabulary_2_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocabulary_4_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_vocabulary_4_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocabulary_5_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_vocabulary_5_pattern'] = $strongarm;

  return $export;
}
