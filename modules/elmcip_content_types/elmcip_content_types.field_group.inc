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
  $field_group->identifier = 'group_left|node|platform_software|default';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '0',
    'children' => array(
      0 => 'field_url',
      1 => 'field_license',
      2 => 'field_repository',
      3 => 'field_editorial_notes',
      4 => 'field_record_status_tax',
      5 => 'field_platform_developers',
      6 => 'field_platform_year',
      7 => 'field_publisher_or_organization',
      8 => 'content_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left field-group-div group-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left|node|platform_software|default'] = $field_group;

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
    'label' => 'Editorial Status',
    'weight' => '3',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-platform-editorial-status field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_platform_editorial_status|node|platform_software|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|platform_software|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '1',
    'children' => array(
      0 => 'field_ps_description',
      1 => 'field_version_history',
      2 => 'field_ps_image',
      3 => 'field_ps_attachment',
      4 => 'field_media',
      5 => 'field_platform_versions',
      6 => 'cw_developed_in_this_platform_entity_view_2',
      7 => 'works_developed_in_this_platform_entity_view_1',
      8 => 'group_meta',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right field-group-div group-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right|node|platform_software|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Editorial Status');
  t('Left');
  t('Right');

  return $field_groups;
}
