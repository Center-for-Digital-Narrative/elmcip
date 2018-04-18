<?php
/**
 * @file
 * elmcip_layout.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function elmcip_layout_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|class_group|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'class_group';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|class_group|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|class_group|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'class_group';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|class_group|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|critical_writing|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'critical_writing';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '49',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '50',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
    'taxonomy_vocabulary_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-tags-inline',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|critical_writing|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|databases_and_archives|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'databases_and_archives';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '25',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '26',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
    'field_db_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-tags-inline',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_db_cross_event' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Exhibited at',
        ),
      ),
    ),
  );
  $export['node|databases_and_archives|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '24',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '23',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '22',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '23',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
    'taxonomy_vocabulary_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-tags-inline',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|notebook_entry|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'notebook_entry';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|notebook_entry|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|notebook_entry|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'notebook_entry';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|notebook_entry|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|organization|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'organization';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'purl' => array(
      'weight' => '17',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '16',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
  );
  $export['node|organization|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|organization|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'organization';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '15',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page:',
        ),
      ),
    ),
    'author' => array(
      'weight' => '16',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
  );
  $export['node|organization|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|organization|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'organization';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|organization|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'full_name' => array(
      'weight' => '28',
      'label' => 'inline',
      'format' => 'default',
    ),
    'purl' => array(
      'weight' => '29',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '30',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
    'field_alternative_spelling_of_na' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Name (original language)',
        ),
      ),
    ),
  );
  $export['node|person|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|platform_software|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'platform_software';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '16',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The Permanent URL of this record',
        ),
      ),
    ),
    'author' => array(
      'weight' => '17',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
  );
  $export['node|platform_software|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publisher|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publisher';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|publisher|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publisher|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publisher';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '17',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '18',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
    'field_events' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Events where this publisher has been presented',
        ),
      ),
    ),
  );
  $export['node|publisher|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publisher|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publisher';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|publisher|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|research_collection|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'research_collection';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '14',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '15',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Posted by',
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '16',
      'label' => 'inline',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|research_collection|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story|teaser_abbreviated';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story';
  $ds_fieldsetting->view_mode = 'teaser_abbreviated';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|story|teaser_abbreviated'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaching_resource|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaching_resource';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'author' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'taxonomy_vocabulary_4' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|teaching_resource|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaching_resource|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaching_resource';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '21',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '22',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
    'taxonomy_vocabulary_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-tags-inline',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Web',
        ),
      ),
    ),
  );
  $export['node|teaching_resource|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaching_resource|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaching_resource';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'author' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'author',
    ),
  );
  $export['node|teaching_resource|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|work|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'work';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'purl' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'The permanent URL of this page',
        ),
      ),
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Record posted by',
        ),
      ),
    ),
    'taxonomy_vocabulary_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-tags-inline',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|work|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|vocabulary_1|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'vocabulary_1';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|vocabulary_1|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function elmcip_layout_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'basic_citation_info';
  $ds_field->label = 'Basic Citation Info';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>[node:field_author_name], <em>[node:title]</em> ([node:field_node_ref],[node:field-number]), [node:field_url].</p>',
      'format' => '2',
    ),
    'use_token' => 1,
  );
  $export['basic_citation_info'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'content_type';
  $ds_field->label = 'Content Type';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:content-type]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['content_type'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'full_name';
  $ds_field->label = 'Full Name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field_first_name] [node:field_middle_name] [node:field_last_name]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['full_name'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'purl';
  $ds_field->label = 'PURL';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[current-page:url:unaliased]',
      'format' => '4',
    ),
    'use_token' => 1,
  );
  $export['purl'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function elmcip_layout_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|class_group|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'class_group';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'content_type',
        2 => 'field_tr_link',
      ),
      'right' => array(
        3 => 'field_teacher_link',
        4 => 'field_students',
        5 => 'post_date',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'content_type' => 'left',
      'field_tr_link' => 'left',
      'field_teacher_link' => 'right',
      'field_students' => 'right',
      'post_date' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|class_group|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|class_group|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'class_group';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_tr_link',
      ),
      'right' => array(
        2 => 'field_teacher_link',
        3 => 'field_students',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_tr_link' => 'left',
      'field_teacher_link' => 'right',
      'field_students' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|class_group|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|critical_writing|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'critical_writing';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_author_name',
        2 => 'field_pubtype_tax',
        3 => 'field_language_tax',
        4 => 'field_translator',
        5 => 'field_editor_name',
        6 => 'field_critical_writing_year',
        7 => 'field_node_ref_event',
        8 => 'field_node_ref',
        9 => 'field_university',
        10 => 'field_series_ref',
        11 => 'field_url',
        12 => 'field_archiveurl',
        13 => 'field_worldcat_link',
        14 => 'field_isbn_text',
        15 => 'field_edition',
        16 => 'field_inbook',
        17 => 'field_pagenumbers',
        18 => 'field_journalissue',
        19 => 'field_issn_text',
        20 => 'field_eissn',
        21 => 'field_cw_in_platform_software',
        22 => 'field_license',
        23 => 'field_record_status_tax',
        24 => 'field_editorial_notes',
      ),
      'right' => array(
        25 => 'taxonomy_vocabulary_1',
        26 => 'field_abstract',
        27 => 'field_abstract_lang',
        28 => 'field_po_ex_entry',
        29 => 'field_electronic_literature_dire',
        30 => 'field_other_lang_ver_link',
        31 => 'field_pullquote',
        32 => 'field_multi_images',
        33 => 'other_editions_entity_view_1',
        34 => 'Critical_writing_in_book_entity_view_1',
        35 => 'Creative_works_in_anthology_entity_view_1',
        36 => 'series_reference_critical_writin_entity_view_1',
        37 => 'Work_critical_writing_entity_view_1',
        38 => 'critical_writin_critical_writing_entity_view_1',
        39 => 'organization_platform_critical_writing_entity_view_1',
        40 => 'publisher_on_critical_writing_entity_view_1',
        41 => 'publisher_referenced_on_critical_writing_entity_view_1',
        42 => 'organization_referenced_on_critical_writing_entity_view_1',
        43 => 'database_on_critical_writing_entity_view_1',
        44 => 'event_ref_on_cw_entity_view_1',
        45 => 'cw_reference_critical_writing_entity_view_1',
        46 => 'Tr_critical_writing_entity_view_1',
        47 => 'research_collection_critical_writing_entity_view_1',
        48 => 'purl',
        49 => 'field_media_asset',
        50 => 'author',
        51 => 'field_files',
        52 => 'group_meta',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_author_name' => 'left',
      'field_pubtype_tax' => 'left',
      'field_language_tax' => 'left',
      'field_translator' => 'left',
      'field_editor_name' => 'left',
      'field_critical_writing_year' => 'left',
      'field_node_ref_event' => 'left',
      'field_node_ref' => 'left',
      'field_university' => 'left',
      'field_series_ref' => 'left',
      'field_url' => 'left',
      'field_archiveurl' => 'left',
      'field_worldcat_link' => 'left',
      'field_isbn_text' => 'left',
      'field_edition' => 'left',
      'field_inbook' => 'left',
      'field_pagenumbers' => 'left',
      'field_journalissue' => 'left',
      'field_issn_text' => 'left',
      'field_eissn' => 'left',
      'field_cw_in_platform_software' => 'left',
      'field_license' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'taxonomy_vocabulary_1' => 'right',
      'field_abstract' => 'right',
      'field_abstract_lang' => 'right',
      'field_po_ex_entry' => 'right',
      'field_electronic_literature_dire' => 'right',
      'field_other_lang_ver_link' => 'right',
      'field_pullquote' => 'right',
      'field_multi_images' => 'right',
      'other_editions_entity_view_1' => 'right',
      'Critical_writing_in_book_entity_view_1' => 'right',
      'Creative_works_in_anthology_entity_view_1' => 'right',
      'series_reference_critical_writin_entity_view_1' => 'right',
      'Work_critical_writing_entity_view_1' => 'right',
      'critical_writin_critical_writing_entity_view_1' => 'right',
      'organization_platform_critical_writing_entity_view_1' => 'right',
      'publisher_on_critical_writing_entity_view_1' => 'right',
      'publisher_referenced_on_critical_writing_entity_view_1' => 'right',
      'organization_referenced_on_critical_writing_entity_view_1' => 'right',
      'database_on_critical_writing_entity_view_1' => 'right',
      'event_ref_on_cw_entity_view_1' => 'right',
      'cw_reference_critical_writing_entity_view_1' => 'right',
      'Tr_critical_writing_entity_view_1' => 'right',
      'research_collection_critical_writing_entity_view_1' => 'right',
      'purl' => 'right',
      'field_media_asset' => 'right',
      'author' => 'right',
      'field_files' => 'right',
      'group_meta' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|critical_writing|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|databases_and_archives|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'databases_and_archives';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_url',
        2 => 'field_project_type',
        3 => 'field_db_org',
        4 => 'field_db_people',
        5 => 'field_contact_email',
        6 => 'field_db_language',
        7 => 'field_database_platform_ref',
        8 => 'field_year_initiated',
        9 => 'field_db_cross_event',
        10 => 'field_license',
        11 => 'field_editorial_notes',
        12 => 'field_record_status_tax',
      ),
      'right' => array(
        13 => 'field_db_tags',
        14 => 'field_db_description_english',
        15 => 'field_db_description_original',
        16 => 'field_contributors',
        17 => 'field_db_technotes',
        18 => 'critical_writing_db_archive_entity_view_1',
        19 => 'teaching_resource_db_archive_entity_view_1',
        20 => 'research_collection_db_arcive_entity_view_1',
        21 => 'field_image',
        22 => 'field_multi_images',
        23 => 'field_files',
        24 => 'group_meta',
        25 => 'purl',
        26 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_url' => 'left',
      'field_project_type' => 'left',
      'field_db_org' => 'left',
      'field_db_people' => 'left',
      'field_contact_email' => 'left',
      'field_db_language' => 'left',
      'field_database_platform_ref' => 'left',
      'field_year_initiated' => 'left',
      'field_db_cross_event' => 'left',
      'field_license' => 'left',
      'field_editorial_notes' => 'left',
      'field_record_status_tax' => 'left',
      'field_db_tags' => 'right',
      'field_db_description_english' => 'right',
      'field_db_description_original' => 'right',
      'field_contributors' => 'right',
      'field_db_technotes' => 'right',
      'critical_writing_db_archive_entity_view_1' => 'right',
      'teaching_resource_db_archive_entity_view_1' => 'right',
      'research_collection_db_arcive_entity_view_1' => 'right',
      'field_image' => 'right',
      'field_multi_images' => 'right',
      'field_files' => 'right',
      'group_meta' => 'right',
      'purl' => 'right',
      'author' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|databases_and_archives|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'taxonomy_vocabulary_2',
        2 => 'field_date',
        3 => 'field_location',
        4 => 'field_url',
        5 => 'field_archiveurl',
        6 => 'field_node_ref',
        7 => 'field_curator',
        8 => 'field_individual_organizers',
        9 => 'field_event_series',
        10 => 'field_associated_event',
        11 => 'field_record_status_tax',
        12 => 'field_editorial_notes',
      ),
      'right' => array(
        13 => 'taxonomy_vocabulary_1',
        14 => 'field_textfield',
        15 => 'field_event_abstract_lang',
        16 => 'event_series_entity_view_1',
        17 => 'Event_critical_writing_entity_view_1',
        18 => 'Event_work_entity_view_1',
        19 => 'cw_reference_event_entity_view_1',
        20 => 'field_files',
        21 => 'field_multi_images',
        22 => 'author',
        23 => 'field_media_asset',
        24 => 'purl',
        25 => 'group_meta',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'taxonomy_vocabulary_2' => 'left',
      'field_date' => 'left',
      'field_location' => 'left',
      'field_url' => 'left',
      'field_archiveurl' => 'left',
      'field_node_ref' => 'left',
      'field_curator' => 'left',
      'field_individual_organizers' => 'left',
      'field_event_series' => 'left',
      'field_associated_event' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'taxonomy_vocabulary_1' => 'right',
      'field_textfield' => 'right',
      'field_event_abstract_lang' => 'right',
      'event_series_entity_view_1' => 'right',
      'Event_critical_writing_entity_view_1' => 'right',
      'Event_work_entity_view_1' => 'right',
      'cw_reference_event_entity_view_1' => 'right',
      'field_files' => 'right',
      'field_multi_images' => 'right',
      'author' => 'right',
      'field_media_asset' => 'right',
      'purl' => 'right',
      'group_meta' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'taxonomy_vocabulary_2',
        2 => 'field_date',
        3 => 'field_location',
        4 => 'field_url',
        5 => 'field_archiveurl',
        6 => 'field_node_ref',
        7 => 'field_curator',
        8 => 'field_individual_organizers',
        9 => 'field_event_series',
        10 => 'field_associated_event',
        11 => 'field_record_status_tax',
        12 => 'field_editorial_notes',
      ),
      'right' => array(
        13 => 'taxonomy_vocabulary_1',
        14 => 'field_textfield',
        15 => 'event_series_entity_view_1',
        16 => 'Event_critical_writing_entity_view_1',
        17 => 'Event_work_entity_view_1',
        18 => 'cw_reference_event_entity_view_1',
        19 => 'field_files',
        20 => 'field_multi_images',
        21 => 'field_media_asset',
        22 => 'purl',
        23 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'taxonomy_vocabulary_2' => 'left',
      'field_date' => 'left',
      'field_location' => 'left',
      'field_url' => 'left',
      'field_archiveurl' => 'left',
      'field_node_ref' => 'left',
      'field_curator' => 'left',
      'field_individual_organizers' => 'left',
      'field_event_series' => 'left',
      'field_associated_event' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'taxonomy_vocabulary_1' => 'right',
      'field_textfield' => 'right',
      'event_series_entity_view_1' => 'right',
      'Event_critical_writing_entity_view_1' => 'right',
      'Event_work_entity_view_1' => 'right',
      'cw_reference_event_entity_view_1' => 'right',
      'field_files' => 'right',
      'field_multi_images' => 'right',
      'field_media_asset' => 'right',
      'purl' => 'right',
      'author' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'content_type',
        1 => 'title',
        2 => 'taxonomy_vocabulary_2',
        3 => 'field_date',
      ),
    ),
    'fields' => array(
      'content_type' => 'ds_content',
      'title' => 'ds_content',
      'taxonomy_vocabulary_2' => 'ds_content',
      'field_date' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|event|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|notebook_entry|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'notebook_entry';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
      ),
      'right' => array(
        1 => 'field_notebok',
        2 => 'field_author_noted',
        3 => 'field_work_noted',
        4 => 'field_cw_noted',
        5 => 'field_event_noted',
        6 => 'field_your_notes',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_notebok' => 'right',
      'field_author_noted' => 'right',
      'field_work_noted' => 'right',
      'field_cw_noted' => 'right',
      'field_event_noted' => 'right',
      'field_your_notes' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|notebook_entry|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|notebook_entry|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'notebook_entry';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'author',
        2 => 'field_notebok',
      ),
      'right' => array(
        3 => 'title',
        4 => 'field_work_noted',
        5 => 'field_cw_noted',
        6 => 'field_author_noted',
        7 => 'field_event_noted',
        8 => 'field_your_notes',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'author' => 'left',
      'field_notebok' => 'left',
      'title' => 'right',
      'field_work_noted' => 'right',
      'field_cw_noted' => 'right',
      'field_author_noted' => 'right',
      'field_event_noted' => 'right',
      'field_your_notes' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|notebook_entry|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organization|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organization';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_url',
        2 => 'field_location',
        3 => 'field_email',
        4 => 'field_record_status_tax',
        5 => 'field_editorial_notes',
      ),
      'right' => array(
        6 => 'field_textfield',
        7 => 'Event_organizer_entity_view_1',
        8 => 'Critical_writing_organization_entity_view_1',
        9 => 'work_organization_entity_view_1',
        10 => 'organization_platform_entity_view_1',
        11 => 'people_afil_on_organization_entity_view_1',
        12 => 'research_collection_organization_entity_view_1',
        13 => 'field_multi_images',
        14 => 'field_files',
        15 => 'group_meta',
        16 => 'author',
        17 => 'purl',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_url' => 'left',
      'field_location' => 'left',
      'field_email' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'field_textfield' => 'right',
      'Event_organizer_entity_view_1' => 'right',
      'Critical_writing_organization_entity_view_1' => 'right',
      'work_organization_entity_view_1' => 'right',
      'organization_platform_entity_view_1' => 'right',
      'people_afil_on_organization_entity_view_1' => 'right',
      'research_collection_organization_entity_view_1' => 'right',
      'field_multi_images' => 'right',
      'field_files' => 'right',
      'group_meta' => 'right',
      'author' => 'right',
      'purl' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|organization|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organization|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organization';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_url',
        2 => 'field_location',
        3 => 'field_email',
        4 => 'field_record_status_tax',
        5 => 'field_editorial_notes',
      ),
      'right' => array(
        6 => 'field_textfield',
        7 => 'Event_organizer_entity_view_1',
        8 => 'Critical_writing_organization_entity_view_1',
        9 => 'work_organization_entity_view_1',
        10 => 'organization_platform_entity_view_1',
        11 => 'people_afil_on_organization_entity_view_1',
        12 => 'research_collection_organization_entity_view_1',
        13 => 'field_multi_images',
        14 => 'field_files',
        15 => 'purl',
        16 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_url' => 'left',
      'field_location' => 'left',
      'field_email' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'field_textfield' => 'right',
      'Event_organizer_entity_view_1' => 'right',
      'Critical_writing_organization_entity_view_1' => 'right',
      'work_organization_entity_view_1' => 'right',
      'organization_platform_entity_view_1' => 'right',
      'people_afil_on_organization_entity_view_1' => 'right',
      'research_collection_organization_entity_view_1' => 'right',
      'field_multi_images' => 'right',
      'field_files' => 'right',
      'purl' => 'right',
      'author' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|organization|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organization|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organization';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'content_type',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'content_type' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|organization|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_alternative_spelling_of_na',
        2 => 'field_url',
        3 => 'field_auth_email',
        4 => 'field_residency',
        5 => 'field_nationality',
        6 => 'field_gender_sel',
        7 => 'field_yearborn',
        8 => 'field_yeardied',
        9 => 'field_record_status_tax',
        10 => 'field_editorial_notes',
      ),
      'right' => array(
        11 => 'field_authorphoto',
        12 => 'field_textfield',
        13 => 'organization_platform_person_entity_view_1',
        14 => 'Work_entity_view_1',
        15 => 'Work_entity_view_2',
        16 => 'Critical_writing_entity_view_1',
        17 => 'translated_by_person_translated_by_person',
        18 => 'edited_by_person_edited_by_person',
        19 => 'Journal_Editedby_entity_view_1',
        20 => 'events_on_individual_organizer_page_entity_view_1',
        21 => 'curator_of_edited_by_person',
        22 => 'TeachingResourceby_entity_view_1',
        23 => 'resource_collection_curated_by_person_edited_by_person',
        24 => 'org_affil_person_affiliation_person',
        25 => 'research_collection_person_entity_view_1',
        26 => 'field_files',
        27 => 'group_meta',
        28 => 'full_name',
        29 => 'purl',
        30 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_alternative_spelling_of_na' => 'left',
      'field_url' => 'left',
      'field_auth_email' => 'left',
      'field_residency' => 'left',
      'field_nationality' => 'left',
      'field_gender_sel' => 'left',
      'field_yearborn' => 'left',
      'field_yeardied' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'field_authorphoto' => 'right',
      'field_textfield' => 'right',
      'organization_platform_person_entity_view_1' => 'right',
      'Work_entity_view_1' => 'right',
      'Work_entity_view_2' => 'right',
      'Critical_writing_entity_view_1' => 'right',
      'translated_by_person_translated_by_person' => 'right',
      'edited_by_person_edited_by_person' => 'right',
      'Journal_Editedby_entity_view_1' => 'right',
      'events_on_individual_organizer_page_entity_view_1' => 'right',
      'curator_of_edited_by_person' => 'right',
      'TeachingResourceby_entity_view_1' => 'right',
      'resource_collection_curated_by_person_edited_by_person' => 'right',
      'org_affil_person_affiliation_person' => 'right',
      'research_collection_person_entity_view_1' => 'right',
      'field_files' => 'right',
      'group_meta' => 'right',
      'full_name' => 'right',
      'purl' => 'right',
      'author' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|person|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|platform_software|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'platform_software';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_repository',
        2 => 'field_platform_year',
        3 => 'field_url',
        4 => 'field_platform_developers',
        5 => 'field_publisher_or_organization',
        6 => 'field_license',
        7 => 'field_record_status_tax',
        8 => 'field_editorial_notes',
      ),
      'right' => array(
        9 => 'field_ps_description',
        10 => 'works_developed_in_this_platform_entity_view_1',
        11 => 'field_platform_versions',
        12 => 'field_version_history',
        13 => 'field_ps_image',
        14 => 'field_media',
        15 => 'field_ps_attachment',
        16 => 'purl',
        17 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_repository' => 'left',
      'field_platform_year' => 'left',
      'field_url' => 'left',
      'field_platform_developers' => 'left',
      'field_publisher_or_organization' => 'left',
      'field_license' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'field_ps_description' => 'right',
      'works_developed_in_this_platform_entity_view_1' => 'right',
      'field_platform_versions' => 'right',
      'field_version_history' => 'right',
      'field_ps_image' => 'right',
      'field_media' => 'right',
      'field_ps_attachment' => 'right',
      'purl' => 'right',
      'author' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|platform_software|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publisher|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publisher';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_eissn',
        2 => 'title',
        3 => 'field_url',
        4 => 'field_location',
        5 => 'field_record_status_tax',
        6 => 'field_editor_name',
        7 => 'field_editorial_notes',
        9 => 'field_email',
        11 => 'field_issn_text',
      ),
      'right' => array(
        8 => 'field_textfield',
        10 => 'critical_writing_on_publisher_entity_view_1',
        12 => 'Work_publisher_entity_view_1',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_eissn' => 'left',
      'title' => 'left',
      'field_url' => 'left',
      'field_location' => 'left',
      'field_record_status_tax' => 'left',
      'field_editor_name' => 'left',
      'field_editorial_notes' => 'left',
      'field_textfield' => 'right',
      'field_email' => 'left',
      'critical_writing_on_publisher_entity_view_1' => 'right',
      'field_issn_text' => 'left',
      'Work_publisher_entity_view_1' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|publisher|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publisher|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publisher';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_location',
        2 => 'field_url',
        3 => 'field_editor_name',
        4 => 'field_email',
        5 => 'field_issn_text',
        6 => 'field_eissn',
        7 => 'field_record_status_tax',
        8 => 'field_editorial_notes',
      ),
      'right' => array(
        9 => 'field_textfield',
        10 => 'organization_platform_entity_view_1',
        11 => 'critical_writing_on_publisher_entity_view_1',
        12 => 'critical_writing_on_referenced_publisher_entity_view_1',
        13 => 'Work_publisher_entity_view_1',
        14 => 'series_on_publisher_entity_view_1',
        15 => 'research_collection_publisher_entity_view_1',
        16 => 'field_events',
        17 => 'purl',
        18 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_location' => 'left',
      'field_url' => 'left',
      'field_editor_name' => 'left',
      'field_email' => 'left',
      'field_issn_text' => 'left',
      'field_eissn' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'field_textfield' => 'right',
      'organization_platform_entity_view_1' => 'right',
      'critical_writing_on_publisher_entity_view_1' => 'right',
      'critical_writing_on_referenced_publisher_entity_view_1' => 'right',
      'Work_publisher_entity_view_1' => 'right',
      'series_on_publisher_entity_view_1' => 'right',
      'research_collection_publisher_entity_view_1' => 'right',
      'field_events' => 'right',
      'purl' => 'right',
      'author' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|publisher|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publisher|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publisher';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'content_type',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'content_type' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|publisher|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_collection|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_collection';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_collection_curated_by',
        2 => 'field_collection_contributors',
        3 => 'field_collection_platform_ref',
      ),
      'right' => array(
        4 => 'field_rc_description',
        5 => 'field_media',
        6 => 'people_listed_in_research_collection_entity_view_1',
        7 => 'works_listed_on_research_collection_entity_view_1',
        8 => 'cw_listed_in_research_collection_entity_view_1',
        9 => 'organizations_listed_in_research_collection_entity_view_1',
        10 => 'teaching_resources_listed_in_research_collection_entity_view_1',
        11 => 'publishers_listed_in_research_collection_entity_view_1',
        12 => 'databases_archives_listed_in_research_collection_entity_view_1',
        13 => 'events_listed_in_research_collection_entity_view_1',
        14 => 'purl',
        15 => 'author',
        16 => 'post_date',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_collection_curated_by' => 'left',
      'field_collection_contributors' => 'left',
      'field_collection_platform_ref' => 'left',
      'field_rc_description' => 'right',
      'field_media' => 'right',
      'people_listed_in_research_collection_entity_view_1' => 'right',
      'works_listed_on_research_collection_entity_view_1' => 'right',
      'cw_listed_in_research_collection_entity_view_1' => 'right',
      'organizations_listed_in_research_collection_entity_view_1' => 'right',
      'teaching_resources_listed_in_research_collection_entity_view_1' => 'right',
      'publishers_listed_in_research_collection_entity_view_1' => 'right',
      'databases_archives_listed_in_research_collection_entity_view_1' => 'right',
      'events_listed_in_research_collection_entity_view_1' => 'right',
      'purl' => 'right',
      'author' => 'right',
      'post_date' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|research_collection|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|teaser_abbreviated';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'teaser_abbreviated';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|story|teaser_abbreviated'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaching_resource|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaching_resource';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'field_tr_year',
        2 => 'field_url',
        3 => 'field_tr_author',
        4 => 'field_tr_org',
        5 => 'author',
        6 => 'taxonomy_vocabulary_4',
        7 => 'field_language_tax',
        8 => 'field_editorial_notes',
      ),
      'right' => array(
        9 => 'field_tr_description',
        10 => 'field_abstract_lang',
        11 => 'field_files',
        12 => 'field_image',
        13 => 'field_media_asset',
        14 => 'taxonomy_vocabulary_1',
        15 => 'Work_tr_entity_view_1',
        16 => 'critical_writing_tr_entity_view_1',
        17 => 'field_tr_tr',
        18 => 'field_database_or_archive_refere',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'field_tr_year' => 'left',
      'field_url' => 'left',
      'field_tr_author' => 'left',
      'field_tr_org' => 'left',
      'author' => 'left',
      'taxonomy_vocabulary_4' => 'left',
      'field_language_tax' => 'left',
      'field_editorial_notes' => 'left',
      'field_tr_description' => 'right',
      'field_abstract_lang' => 'right',
      'field_files' => 'right',
      'field_image' => 'right',
      'field_media_asset' => 'right',
      'taxonomy_vocabulary_1' => 'right',
      'Work_tr_entity_view_1' => 'right',
      'critical_writing_tr_entity_view_1' => 'right',
      'field_tr_tr' => 'right',
      'field_database_or_archive_refere' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|teaching_resource|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaching_resource|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaching_resource';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'taxonomy_vocabulary_4',
        2 => 'field_language_tax',
        3 => 'field_tr_author',
        4 => 'field_tr_org',
        5 => 'field_url',
        6 => 'field_tr_year',
        7 => 'field_record_status_tax',
        8 => 'field_editorial_notes',
      ),
      'right' => array(
        9 => 'taxonomy_vocabulary_1',
        10 => 'field_tr_description',
        11 => 'field_abstract_lang',
        12 => 'Work_tr_entity_view_1',
        13 => 'critical_writing_tr_entity_view_1',
        14 => 'teaching_ressource_tr_entity_view_1',
        15 => 'database_listed_on_teaching_resource_entity_view_1',
        16 => 'research_collection_teaching_resource_entity_view_1',
        17 => 'platform_tr_entity_view_1',
        18 => 'field_image',
        19 => 'field_media_asset',
        20 => 'field_files',
        21 => 'purl',
        22 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'taxonomy_vocabulary_4' => 'left',
      'field_language_tax' => 'left',
      'field_tr_author' => 'left',
      'field_tr_org' => 'left',
      'field_url' => 'left',
      'field_tr_year' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'taxonomy_vocabulary_1' => 'right',
      'field_tr_description' => 'right',
      'field_abstract_lang' => 'right',
      'Work_tr_entity_view_1' => 'right',
      'critical_writing_tr_entity_view_1' => 'right',
      'teaching_ressource_tr_entity_view_1' => 'right',
      'database_listed_on_teaching_resource_entity_view_1' => 'right',
      'research_collection_teaching_resource_entity_view_1' => 'right',
      'platform_tr_entity_view_1' => 'right',
      'field_image' => 'right',
      'field_media_asset' => 'right',
      'field_files' => 'right',
      'purl' => 'right',
      'author' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|teaching_resource|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaching_resource|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaching_resource';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'content_type',
        1 => 'title',
        2 => 'taxonomy_vocabulary_4',
        3 => 'author',
      ),
    ),
    'fields' => array(
      'content_type' => 'ds_content',
      'title' => 'ds_content',
      'taxonomy_vocabulary_4' => 'ds_content',
      'author' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|teaching_resource|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|work|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'work';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        3 => 'field_author_name',
        4 => 'field_translator',
        5 => 'field_contributor',
        6 => 'field_work_year',
        7 => 'field_in_anthology',
        8 => 'field_node_ref',
        9 => 'field_archiveurl',
        10 => 'field_url',
        11 => 'field_downloadurl',
        12 => 'field_language_tax',
        13 => 'field_venue_tax',
        14 => 'field_work_platform_software',
        15 => 'field_worldcat_link',
        16 => 'field_isbn_text',
        17 => 'field_node_ref_event',
        18 => 'field_license',
        19 => 'field_record_status_tax',
        20 => 'field_editorial_notes',
        21 => 'field_repository',
      ),
      'right' => array(
        1 => 'purl',
        2 => 'author',
        22 => 'taxonomy_vocabulary_1',
        23 => 'field_textfield',
        24 => 'field_abstract_lang',
        25 => 'field_electronic_literature_dire',
        26 => 'field_i_e_poetry_entry',
        27 => 'field_nt2_entry',
        28 => 'field_authoring_software_entry',
        29 => 'field_po_ex_entry',
        30 => 'field_other_lang_ver_link',
        31 => 'field_part_of_another_work',
        32 => 'field_other_edition_work',
        33 => 'field_pullquote',
        34 => 'field_tech_notes',
        35 => 'field_contributors',
        36 => 'Tr_work_entity_view_1',
        37 => 'clone_of_research_collection_creative_work_entity_view_1',
        38 => 'Critical_writing_work_entity_view_1',
        39 => 'field_multi_image',
        40 => 'field_media_asset',
        41 => 'field_files',
        42 => 'group_meta',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'purl' => 'right',
      'author' => 'right',
      'field_author_name' => 'left',
      'field_translator' => 'left',
      'field_contributor' => 'left',
      'field_work_year' => 'left',
      'field_in_anthology' => 'left',
      'field_node_ref' => 'left',
      'field_archiveurl' => 'left',
      'field_url' => 'left',
      'field_downloadurl' => 'left',
      'field_language_tax' => 'left',
      'field_venue_tax' => 'left',
      'field_work_platform_software' => 'left',
      'field_worldcat_link' => 'left',
      'field_isbn_text' => 'left',
      'field_node_ref_event' => 'left',
      'field_license' => 'left',
      'field_record_status_tax' => 'left',
      'field_editorial_notes' => 'left',
      'field_repository' => 'left',
      'taxonomy_vocabulary_1' => 'right',
      'field_textfield' => 'right',
      'field_abstract_lang' => 'right',
      'field_electronic_literature_dire' => 'right',
      'field_i_e_poetry_entry' => 'right',
      'field_nt2_entry' => 'right',
      'field_authoring_software_entry' => 'right',
      'field_po_ex_entry' => 'right',
      'field_other_lang_ver_link' => 'right',
      'field_part_of_another_work' => 'right',
      'field_other_edition_work' => 'right',
      'field_pullquote' => 'right',
      'field_tech_notes' => 'right',
      'field_contributors' => 'right',
      'Tr_work_entity_view_1' => 'right',
      'clone_of_research_collection_creative_work_entity_view_1' => 'right',
      'Critical_writing_work_entity_view_1' => 'right',
      'field_multi_image' => 'right',
      'field_media_asset' => 'right',
      'field_files' => 'right',
      'group_meta' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|work|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_1|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_1';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|vocabulary_1|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_1|term_description';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_1';
  $ds_layout->view_mode = 'term_description';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|vocabulary_1|term_description'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function elmcip_layout_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'data_export';
  $ds_view_mode->label = 'Data Export';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['data_export'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'taxonomy_term_tag';
  $ds_view_mode->label = 'Taxonomy Term: Tag';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['taxonomy_term_tag'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_abbreviated';
  $ds_view_mode->label = 'Teaser_abbreviated';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_abbreviated'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'term_description';
  $ds_view_mode->label = 'Term Description';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['term_description'] = $ds_view_mode;

  return $export;
}
