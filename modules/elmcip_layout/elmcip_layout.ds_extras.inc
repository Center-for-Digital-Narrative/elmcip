<?php
/**
 * @file
 * elmcip_layout.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function elmcip_layout_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'Work-entity_view_1';
  $ds_vd->label = 'Work: Entity content (Views template)';
  $export['Work-entity_view_1'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'critical_writing_on_publisher-entity_view_1';
  $ds_vd->label = 'Critical_writing_on_publisher: Entity content';
  $export['critical_writing_on_publisher-entity_view_1'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'event_page-block_1';
  $ds_vd->label = 'Event_page: Block';
  $export['event_page-block_1'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'views_recent_posts-block_1';
  $ds_vd->label = 'Views_recent_posts: Block (Views template)';
  $export['views_recent_posts-block_1'] = $ds_vd;

  return $export;
}
