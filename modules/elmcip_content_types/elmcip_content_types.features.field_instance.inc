<?php
/**
 * @file
 * elmcip_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function elmcip_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-critical_writing-field_criticalw_platform_ref'
  $field_instances['node-critical_writing-field_criticalw_platform_ref'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Platform/Software',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_criticalw_platform_ref',
    'label' => 'Platform referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-critical_writing-field_cw_in_platform_software'
  $field_instances['node-critical_writing-field_cw_in_platform_software'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this critical writing is made for the computer, use this field to indicate what platforms were used in its production (for example Flash, Scalar, etc.). This is an autocomplete field. Type the name of the platform or software in the field. If the platform is in the database, the name will autocomplete. If it is not, first <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a> before completing this record.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_cw_in_platform_software',
    'label' => 'Platform/Software',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_po_ex_entry'
  $field_instances['node-critical_writing-field_po_ex_entry'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this critical writing has an entry in the Po.Ex database, add a reference here by linking the complete URL of the page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_po_ex_entry',
    'label' => 'Po.Ex entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Po.Ex record',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_database_platform_ref'
  $field_instances['node-databases_and_archives-field_database_platform_ref'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to indicate what platforms and software are involved in the production of this database or archive (for example Drupal, Dspace, Drupal, etc.). This is an autocomplete field. Type the name of the platform or software in the field. If the platform is in the database, the name will autocomplete. If it is not, first <a href="node/add/platform-software">add a record for the platform or software</a> before completing this record.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_database_platform_ref',
    'label' => 'Platform',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_editorial_notes'
  $field_instances['node-platform_software-field_editorial_notes'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add notes about editorial status here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB Editor Notes',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_platform_developers'
  $field_instances['node-platform_software-field_platform_developers'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use the autocomplete field to credit individuals who were key tot he development of this platform, if applicable (e.g. Daniel Howe for RITA libraries). If the person is not yet in the database, first <a href="/node/add/person" target="_blank">create the new person record</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_platform_developers',
    'label' => 'Developers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_platform_versions'
  $field_instances['node-platform_software-field_platform_versions'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to link to a stable URL documenting the version history of the software or platform, if available. Provide a title and URL.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_platform_versions',
    'label' => 'Version history (link)',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_platform_year'
  $field_instances['node-platform_software-field_platform_year'] = array(
    'bundle' => 'platform_software',
    'deleted' => 0,
    'description' => 'Indicate the year that this platform was first released.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_platform_year',
    'label' => 'Year initiated',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-platform_software-field_publisher_or_organization'
  $field_instances['node-platform_software-field_publisher_or_organization'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use the autocomplete field to indicate the publisher or organization responsible for this platform. If they are not yet in the database, first <a href="/node/add/organization" target="_blank">create the new organization or <a href="/node/add/organization" target="_blank">publisher</a> record.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_publisher_or_organization',
    'label' => 'Publisher or organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_record_status_tax'
  $field_instances['node-platform_software-field_record_status_tax'] = array(
    'bundle' => 'platform_software',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_repository'
  $field_instances['node-platform_software-field_repository'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to add a URL for link to repository or version control system such as Github or bitbucket where source code can be accessed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_repository',
    'label' => 'Repository',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_version_history'
  $field_instances['node-platform_software-field_version_history'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a brief version history of the platform if available. Indicate major changes in functionality over time. Note that specific versions of given platforms (e.g. HTML 2.0, HTML 5) should not have individual records, though tags can be used to indicate versions used on individual works. Cite the source of the version history.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_version_history',
    'label' => 'Version history (text)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-research_collection-field_collection_platform_ref'
  $field_instances['node-research_collection-field_collection_platform_ref'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Platform/Software',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_collection_platform_ref',
    'label' => 'Platform referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-work-field_po_ex_entry'
  $field_instances['node-work-field_po_ex_entry'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a description of this work in the Po.Ex database, add a cross reference to it here.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_po_ex_entry',
    'label' => 'Po.Ex entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Po.Ex record',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-work-field_repository'
  $field_instances['node-work-field_repository'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to add a URL for link to repository or version control system such as Github or bitbucket where source code can be accessed.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_repository',
    'label' => 'Repository',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-work-field_work_platform_software'
  $field_instances['node-work-field_work_platform_software'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to indicate what platforms and software are involved in the production of this work (for example HTML, Flash, CAVE, iPad, etc.). This is an autocomplete field. Type the name of the platform or software in the field. If the platform is in the database, the name will autocomplete. If it is not, first <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a> before completing this record.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_work_platform_software',
    'label' => 'Platform/Software',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add notes about editorial status here.');
  t('Developers');
  t('If there is a description of this work in the Po.Ex database, add a cross reference to it here.');
  t('If this critical writing has an entry in the Po.Ex database, add a reference here by linking the complete URL of the page.');
  t('If this critical writing is made for the computer, use this field to indicate what platforms were used in its production (for example Flash, Scalar, etc.). This is an autocomplete field. Type the name of the platform or software in the field. If the platform is in the database, the name will autocomplete. If it is not, first <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a> before completing this record.');
  t('Indicate the year that this platform was first released.');
  t('KB Editor Notes');
  t('Platform');
  t('Platform referenced');
  t('Platform/Software');
  t('Po.Ex entry');
  t('Provide a brief version history of the platform if available. Indicate major changes in functionality over time. Note that specific versions of given platforms (e.g. HTML 2.0, HTML 5) should not have individual records, though tags can be used to indicate versions used on individual works. Cite the source of the version history.');
  t('Publisher or organization');
  t('Record Status');
  t('Repository');
  t('Use the autocomplete field to credit individuals who were key tot he development of this platform, if applicable (e.g. Daniel Howe for RITA libraries). If the person is not yet in the database, first <a href="/node/add/person" target="_blank">create the new person record</a>.');
  t('Use the autocomplete field to indicate the publisher or organization responsible for this platform. If they are not yet in the database, first <a href="/node/add/organization" target="_blank">create the new organization or <a href="/node/add/organization" target="_blank">publisher</a> record.');
  t('Use this field to add a URL for link to repository or version control system such as Github or bitbucket where source code can be accessed.');
  t('Use this field to indicate what platforms and software are involved in the production of this database or archive (for example Drupal, Dspace, Drupal, etc.). This is an autocomplete field. Type the name of the platform or software in the field. If the platform is in the database, the name will autocomplete. If it is not, first <a href="node/add/platform-software">add a record for the platform or software</a> before completing this record.');
  t('Use this field to indicate what platforms and software are involved in the production of this work (for example HTML, Flash, CAVE, iPad, etc.). This is an autocomplete field. Type the name of the platform or software in the field. If the platform is in the database, the name will autocomplete. If it is not, first <a target="_blank" href="/node/add/platform-software">add a record for the platform or software</a> before completing this record.');
  t('Use this field to link to a stable URL documenting the version history of the software or platform, if available. Provide a title and URL.');
  t('Version history (link)');
  t('Version history (text)');
  t('Year initiated');

  return $field_instances;
}
