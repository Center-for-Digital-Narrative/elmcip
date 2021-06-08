<?php

/**
 * @file
 * elmcip_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elmcip_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_platform_editorial_status|node|platform_software|form';
  $field_group->group_name = 'group_platform_editorial_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-platform-editorial-status field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Editorial Status',
    'weight' => '3',
  );
  $field_groups['group_platform_editorial_status|node|platform_software|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Editorial Status');

  return $field_groups;
}
