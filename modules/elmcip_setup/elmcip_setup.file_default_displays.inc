<?php
/**
 * @file
 * elmcip_setup.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function elmcip_setup_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['audio__default__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__default__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['default__default__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__media_slideshare_document';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '425',
    'height' => '355',
  );
  $export['default__default__media_slideshare_document'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__default__media_slideshare_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__default__media_slideshare_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_default';
  $file_display->weight = -34;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_rendered';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__default__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_table';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_url_plain';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_styles_file_large';
  $file_display->weight = -36;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_styles_file_medium';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_styles_file_original';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_styles_file_square_thumbnail';
  $file_display->weight = -37;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_styles_file_thumbnail';
  $file_display->weight = -35;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_image';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_large__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_large__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_large__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_vimeo_image';
  $file_display->weight = 2;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_youtube_image';
  $file_display->weight = 2;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__media_youtube_image'] = $file_display;

  return $export;
}
