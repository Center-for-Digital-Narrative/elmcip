<?php
/**
 * @file
 * elmcip_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elmcip_layout_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abstracttags|node|critical_writing|form';
  $field_group->group_name = 'group_abstracttags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-abstracttags field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_abstracttags|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bookjournal|node|critical_writing|form';
  $field_group->group_name = 'group_bookjournal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information specific to books or journals',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bookjournal field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_bookjournal|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_vt|node|work|data_export';
  $field_group->group_name = 'group_core_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'data_export';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core Information',
    'weight' => '23',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-core-vt field-group-hidden',
      ),
    ),
  );
  $field_groups['group_core_vt|node|work|data_export'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coreinfo_critical|node|critical_writing|form';
  $field_group->group_name = 'group_coreinfo_critical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core Info',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-coreinfo-critical field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_coreinfo_critical|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_crit|node|critical_writing|default';
  $field_group->group_name = 'group_editorial_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-editorial-crit field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_editorial_crit|node|critical_writing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_crit|node|critical_writing|form';
  $field_group->group_name = 'group_editorial_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-editorial-crit field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_editorial_crit|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_crit|node|critical_writing|teaser';
  $field_group->group_name = 'group_editorial_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '51',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-editorial-crit field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_editorial_crit|node|critical_writing|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial|node|work|default';
  $field_group->group_name = 'group_editorial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-editorial field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_editorial|node|work|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial|node|work|teaser';
  $field_group->group_name = 'group_editorial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '44',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-editorial field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_editorial|node|work|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_crit|node|critical_writing|form';
  $field_group->group_name = 'group_references_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References / Attachments',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-references-crit field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_references_crit|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_editorial|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_editorial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '35',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-editorial field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_tr_editorial|node|teaching_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_editorial|node|teaching_resource|teaser';
  $field_group->group_name = 'group_tr_editorial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial',
    'weight' => '23',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-editorial field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_tr_editorial|node|teaching_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workdoc|node|work|data_export';
  $field_group->group_name = 'group_workdoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'data_export';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documentation',
    'weight' => '26',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-workdoc field-group-hidden',
      ),
    ),
  );
  $field_groups['group_workdoc|node|work|data_export'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workdoc|node|work|form';
  $field_group->group_name = 'group_workdoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documentation',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workdoc field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_workdoc|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_worksubmit|node|work|data_export';
  $field_group->group_name = 'group_worksubmit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'data_export';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submit to ELMCIP Anthology',
    'weight' => '28',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-worksubmit field-group-hidden',
      ),
    ),
  );
  $field_groups['group_worksubmit|node|work|data_export'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_worksubmit|node|work|form';
  $field_group->group_name = 'group_worksubmit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submit to ELMCIP Anthology',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-worksubmit field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_worksubmit|node|work|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core Info');
  t('Core Information');
  t('Description');
  t('Documentation');
  t('Editorial');
  t('Information specific to books or journals');
  t('References / Attachments');
  t('Submit to ELMCIP Anthology');

  return $field_groups;
}
