<?php

/**
 * @file
 * elmcip_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elmcip_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_class_group';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_critical_writing';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_databases_and_archives';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_event';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_notebook';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_notebook_entry';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_organization';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_page';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_person';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_platform_software';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_publisher';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_research_collection';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_story';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_teaching_resource';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_work';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_class_group';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_critical_writing';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_databases_and_archives';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_event';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_notebook';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_notebook_entry';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_organization';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_page';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_person';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_platform_software';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_publisher';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_research_collection';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_story';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_teaching_resource';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_work';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_critical_writing';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_databases_and_archives';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_event';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_person';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_platform_software';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_research_collection';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_story';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_work';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__book';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__class_group';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__critical_writing';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'Creative_works_in_anthology_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '38',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '35',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '41',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '56',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '9',
          ),
        ),
        'Critical_writing_in_book_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '37',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '34',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '51',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '54',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'Tr_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '49',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '47',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '47',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '52',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'Work_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '40',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '37',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '53',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '53',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
        ),
        'critical_writin_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '41',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '38',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '52',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '55',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
        ),
        'cw_reference_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '48',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '45',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '54',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '57',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
        ),
        'database_on_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '46',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '43',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '43',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '44',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'event_ref_on_cw_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '47',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '44',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '45',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '41',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '27',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'organization_platform_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '42',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '39',
          ),
          'search_result' => array(
            'visible' => TRUE,
            'weight' => '7',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '26',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'organization_referenced_on_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '45',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '42',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '42',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '27',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'other_editions_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '36',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '33',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '44',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '43',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'publisher_on_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '43',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '40',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '46',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '23',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'publisher_referenced_on_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '44',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '41',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '50',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '25',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'research_collection_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '51',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '48',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '49',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '24',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'series_reference_critical_writin_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '39',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '36',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '48',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '42',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'Creative_works_in_anthology_node_content_1' => array(
          'weight' => '20',
        ),
        'Critical_writing_in_book_node_content_1' => array(
          'weight' => '19',
        ),
        'Tr_critical_writing_node_content_1' => array(
          'weight' => '21',
        ),
        'Work_critical_writing_node_content_1' => array(
          'weight' => '22',
        ),
        'author' => array(
          'weight' => '30',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'creativecommons' => array(
          'weight' => '25',
        ),
        'critical_writin_critical_writing_node_content_1' => array(
          'weight' => '23',
        ),
        'cw_reference_critical_writing_node_content_1' => array(
          'weight' => '24',
        ),
        'detailed_question' => array(
          'weight' => '26',
        ),
        'flag' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '11',
        ),
        'menu' => array(
          'weight' => '28',
        ),
        'nd_switch_bm' => array(
          'weight' => '33',
        ),
        'options' => array(
          'weight' => '27',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'revision_information' => array(
          'weight' => '29',
        ),
        'taxonomy' => array(
          'weight' => '18',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
    ),
  );
  $export['field_bundle_settings_node__critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__databases_and_archives';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'critical_writing_db_archive_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '18',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '21',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'platform_db_archive_entity_view_1' => array(
          'full' => array(
            'visible' => TRUE,
            'weight' => '20',
          ),
        ),
        'research_collection_db_arcive_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '20',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '19',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '20',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'teaching_resource_db_archive_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '19',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '18',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '19',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '1',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'Event_critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '18',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '16',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '12',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '13',
          ),
        ),
        'Event_work_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '19',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '11',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '15',
          ),
        ),
        'Event_work_entity_view_2' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '36',
          ),
          'full' => array(
            'visible' => FALSE,
            'weight' => '31',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'cw_reference_event_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '20',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '18',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '13',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '18',
          ),
        ),
        'event_series_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'publisher_presented_at_event_entity_view_1' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '34',
          ),
          'full' => array(
            'visible' => FALSE,
            'weight' => '30',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'Event_critical_writing_node_content_1' => array(
          'weight' => '3',
        ),
        'Event_work_node_content_1' => array(
          'weight' => '4',
        ),
        'author' => array(
          'weight' => '9',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'creativecommons' => array(
          'weight' => '13',
        ),
        'detailed_question' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'menu' => array(
          'weight' => '7',
        ),
        'options' => array(
          'weight' => '10',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'revision_information' => array(
          'weight' => '8',
        ),
        'taxonomy' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__notebook';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'notes_in_this_notebook_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '0',
          ),
          'teaser' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__notebook_entry';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__organization';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'Critical_writing_organization_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '8',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '8',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '6',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '20',
          ),
        ),
        'Event_organizer_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '7',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '7',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '5',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '16',
          ),
        ),
        'organization_platform_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'people_afil_on_organization_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '18',
          ),
        ),
        'research_collection_organization_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'tr_org_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '17',
          ),
        ),
        'work_organization_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '9',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '9',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '19',
          ),
        ),
      ),
      'form' => array(
        'Event_organizer_node_content_1' => array(
          'weight' => '0',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'creativecommons' => array(
          'weight' => '7',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'menu' => array(
          'weight' => '1',
        ),
        'options' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'revision_information' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__person';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'Critical_writing_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '16',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '26',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '1',
          ),
          'user_attach_person_refs' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
        ),
        'Editedby_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
          'search_result' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'user_attach_person_refs' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
        ),
        'Journal_Editedby_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '20',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '19',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '27',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '2',
          ),
          'user_attach_person_refs' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
        ),
        'TeachingResourceby_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '23',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '22',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '29',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '4',
          ),
          'user_attach_person_refs' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
        ),
        'Work_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '24',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '0',
          ),
          'user_attach_person_refs' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
        ),
        'Work_entity_view_2' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '16',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '18',
          ),
        ),
        'curator_of_edited_by_person' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '22',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '21',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '19',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'edited_by_person_edited_by_person' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '19',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '18',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '28',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '3',
          ),
          'user_attach_person_refs' => array(
            'visible' => TRUE,
            'weight' => '16',
          ),
        ),
        'eva_research_collection_entity_view_1' => array(
          'full' => array(
            'visible' => TRUE,
            'weight' => '19',
          ),
          'search_result' => NULL,
        ),
        'events_on_individual_organizer_page_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '21',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '20',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '22',
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
        ),
        'org_affil_person_affiliation_person' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '25',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '24',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '23',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'organization_platform_entity_view_1' => array(
          'full' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
        ),
        'organization_platform_person_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
        ),
        'research_collection_person_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '26',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '25',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '20',
          ),
        ),
        'resource_collection_curated_by_person_edited_by_person' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '24',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '23',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '17',
          ),
        ),
        'translated_by_person_translated_by_person' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '18',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '21',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'Critical_writing_node_content_1' => array(
          'weight' => '8',
        ),
        'Editedby_node_content_1' => array(
          'weight' => '9',
        ),
        'Journal_Editedby_node_content_1' => array(
          'weight' => '10',
        ),
        'TeachingResourceby_node_content_1' => array(
          'weight' => '10',
        ),
        'Work_node_content_1' => array(
          'weight' => '7',
        ),
        'author' => array(
          'weight' => '11',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'creativecommons' => array(
          'weight' => '6',
        ),
        'detailed_question' => array(
          'weight' => '10',
        ),
        'flag' => array(
          'weight' => '12',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'menu' => array(
          'weight' => '10',
        ),
        'options' => array(
          'weight' => '13',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'revision_information' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'user_attach_person_refs' => array(
        'custom_settings' => TRUE,
      ),
    ),
  );
  $export['field_bundle_settings_node__person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__platform_software';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'cw_developed_in_this_platform_entity_view_2' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'works_developed_in_this_platform_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'locations' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__publisher';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'Critical_writing_publisher_entity_view_1' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '9',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'Work_publisher_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '6',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '15',
          ),
        ),
        'critical_writing_about_publisher_entity_view_1' => array(
          'full' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'search_result' => NULL,
        ),
        'critical_writing_on_publisher_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '5',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '17',
          ),
        ),
        'critical_writing_on_publisher_entity_view_1_form' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '18',
          ),
          'full' => array(
            'visible' => FALSE,
            'weight' => '26',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '18',
          ),
        ),
        'critical_writing_on_referenced_publisher_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '19',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '27',
          ),
        ),
        'organization_platform_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'research_collection_publisher_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '16',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '21',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'series_on_publisher_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '20',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '16',
          ),
        ),
      ),
      'form' => array(
        'Critical_writing_publisher_node_content_1' => array(
          'weight' => '0',
        ),
        'Work_publisher_node_content_1' => array(
          'weight' => '-1',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'creativecommons' => array(
          'weight' => '7',
        ),
        'flag' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'menu' => array(
          'weight' => '1',
        ),
        'options' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'revision_information' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__research_collection';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'cw_listed_in_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '8',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '8',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '18',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'databases_archives_listed_in_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '13',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'events_listed_in_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '14',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'organizations_listed_in_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '9',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '9',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '11',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'people_listed_in_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '6',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '6',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '15',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'publishers_listed_in_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '11',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '12',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'research_collection_table_of_creative_wroks_entity_view_1' => array(
          'full' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'search_result' => NULL,
        ),
        'teaching_resources_listed_in_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '16',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'works_listed_on_research_collection_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '7',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '7',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '17',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'locations' => array(
          'weight' => '15',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__story';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'attachments' => array(
          'weight' => '5',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'body' => array(
          'weight' => '-3',
        ),
        'creativecommons' => array(
          'weight' => '8',
        ),
        'locations' => array(
          'weight' => '8',
        ),
        'menu' => array(
          'weight' => '1',
        ),
        'options' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'revision_information' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_600' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__teaching_resource';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'Work_tr_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '12',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '15',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '17',
          ),
        ),
        'critical_writing_tr_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '13',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '16',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '18',
          ),
        ),
        'database_listed_on_teaching_resource_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '29',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'platform_tr_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '17',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'research_collection_teaching_resource_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '16',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '16',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '30',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
        'teaching_ressource_tr_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '14',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '31',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
        ),
      ),
      'form' => array(
        'Work_tr_node_content_1' => array(
          'weight' => '11',
        ),
        'author' => array(
          'weight' => '20',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'creativecommons' => array(
          'weight' => '24',
        ),
        'critical_writing_tr_node_content_1' => array(
          'weight' => '10',
        ),
        'detailed_question' => array(
          'weight' => '25',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'menu' => array(
          'weight' => '18',
        ),
        'options' => array(
          'weight' => '21',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'revision_information' => array(
          'weight' => '19',
        ),
        'taxonomy' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__work';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'Critical_writing_work_entity_view_1' => array(
          'data_export' => array(
            'visible' => FALSE,
            'weight' => '42',
          ),
          'default' => array(
            'visible' => TRUE,
            'weight' => '42',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '34',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '38',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '55',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '23',
          ),
        ),
        'Tr_work_entity_view_1' => array(
          'data_export' => array(
            'visible' => FALSE,
            'weight' => '41',
          ),
          'default' => array(
            'visible' => TRUE,
            'weight' => '40',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '35',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '36',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '53',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'clone_of_research_collection_creative_work_entity_view_1' => array(
          'data_export' => array(
            'visible' => TRUE,
            'weight' => '15',
          ),
          'default' => array(
            'visible' => TRUE,
            'weight' => '41',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '37',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '37',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '21',
          ),
          'token' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'flag_liberian' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '19',
          ),
        ),
        'flag_librarian_approved' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '23',
          ),
        ),
      ),
      'form' => array(
        'Critical_writing_work_node_content_1' => array(
          'weight' => '6',
        ),
        'Tr_work_node_content_1' => array(
          'weight' => '10',
        ),
        'author' => array(
          'weight' => '11',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'creativecommons' => array(
          'weight' => '14',
        ),
        'detailed_question' => array(
          'weight' => '10',
        ),
        'flag' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'menu' => array(
          'weight' => '9',
        ),
        'options' => array(
          'weight' => '8',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'revision_information' => array(
          'weight' => '10',
        ),
        'taxonomy' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'data_export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_abbreviated' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_book';
  $strongarm->value = '0';
  $export['language_content_type_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_class_group';
  $strongarm->value = '0';
  $export['language_content_type_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_critical_writing';
  $strongarm->value = '0';
  $export['language_content_type_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_databases_and_archives';
  $strongarm->value = '0';
  $export['language_content_type_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event';
  $strongarm->value = '0';
  $export['language_content_type_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_notebook';
  $strongarm->value = '0';
  $export['language_content_type_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_notebook_entry';
  $strongarm->value = '0';
  $export['language_content_type_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_organization';
  $strongarm->value = '0';
  $export['language_content_type_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '0';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_person';
  $strongarm->value = '0';
  $export['language_content_type_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_platform_software';
  $strongarm->value = '0';
  $export['language_content_type_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_publisher';
  $strongarm->value = '0';
  $export['language_content_type_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_research_collection';
  $strongarm->value = '0';
  $export['language_content_type_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_story';
  $strongarm->value = '0';
  $export['language_content_type_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_teaching_resource';
  $strongarm->value = '0';
  $export['language_content_type_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_work';
  $strongarm->value = '0';
  $export['language_content_type_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_book';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_class_group';
  $strongarm->value = array();
  $export['menu_options_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_critical_writing';
  $strongarm->value = array();
  $export['menu_options_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_databases_and_archives';
  $strongarm->value = array();
  $export['menu_options_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array();
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_notebook';
  $strongarm->value = array();
  $export['menu_options_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_notebook_entry';
  $strongarm->value = array();
  $export['menu_options_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_organization';
  $strongarm->value = array();
  $export['menu_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'menu-conference',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_person';
  $strongarm->value = array();
  $export['menu_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_platform_software';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_publisher';
  $strongarm->value = array();
  $export['menu_options_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_research_collection';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_story';
  $strongarm->value = array();
  $export['menu_options_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_teaching_resource';
  $strongarm->value = array();
  $export['menu_options_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_work';
  $strongarm->value = array();
  $export['menu_options_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_class_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_critical_writing';
  $strongarm->value = 'features:0';
  $export['menu_parent_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_databases_and_archives';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_notebook';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_notebook_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_organization';
  $strongarm->value = 'features:0';
  $export['menu_parent_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'menu-conference:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_person';
  $strongarm->value = 'features:0';
  $export['menu_parent_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_platform_software';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_publisher';
  $strongarm->value = 'features:0';
  $export['menu_parent_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_research_collection';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_story';
  $strongarm->value = 'features:0';
  $export['menu_parent_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_teaching_resource';
  $strongarm->value = 'features:0';
  $export['menu_parent_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_work';
  $strongarm->value = 'features:0';
  $export['menu_parent_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_class_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_critical_writing';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_databases_and_archives';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_notebook';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_notebook_entry';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_organization';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_person';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_platform_software';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_publisher';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_research_collection';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_story';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_teaching_resource';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_work';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_book';
  $strongarm->value = '1';
  $export['node_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_class_group';
  $strongarm->value = '1';
  $export['node_preview_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_critical_writing';
  $strongarm->value = '1';
  $export['node_preview_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_databases_and_archives';
  $strongarm->value = '1';
  $export['node_preview_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '1';
  $export['node_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_notebook';
  $strongarm->value = '1';
  $export['node_preview_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_notebook_entry';
  $strongarm->value = '1';
  $export['node_preview_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_organization';
  $strongarm->value = '1';
  $export['node_preview_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_person';
  $strongarm->value = '1';
  $export['node_preview_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_platform_software';
  $strongarm->value = '1';
  $export['node_preview_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_publisher';
  $strongarm->value = '1';
  $export['node_preview_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_research_collection';
  $strongarm->value = '1';
  $export['node_preview_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_story';
  $strongarm->value = '1';
  $export['node_preview_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_teaching_resource';
  $strongarm->value = '1';
  $export['node_preview_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_work';
  $strongarm->value = '1';
  $export['node_preview_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_book';
  $strongarm->value = 1;
  $export['node_submitted_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_class_group';
  $strongarm->value = 1;
  $export['node_submitted_class_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_critical_writing';
  $strongarm->value = 1;
  $export['node_submitted_critical_writing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_databases_and_archives';
  $strongarm->value = 1;
  $export['node_submitted_databases_and_archives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event';
  $strongarm->value = 0;
  $export['node_submitted_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_notebook';
  $strongarm->value = 1;
  $export['node_submitted_notebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_notebook_entry';
  $strongarm->value = 1;
  $export['node_submitted_notebook_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_organization';
  $strongarm->value = 0;
  $export['node_submitted_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_person';
  $strongarm->value = 0;
  $export['node_submitted_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_platform_software';
  $strongarm->value = 1;
  $export['node_submitted_platform_software'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_publisher';
  $strongarm->value = 0;
  $export['node_submitted_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_research_collection';
  $strongarm->value = 1;
  $export['node_submitted_research_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_story';
  $strongarm->value = 1;
  $export['node_submitted_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_teaching_resource';
  $strongarm->value = 0;
  $export['node_submitted_teaching_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_work';
  $strongarm->value = 0;
  $export['node_submitted_work'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_book_pattern';
  $strongarm->value = '';
  $export['pathauto_node_book_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_class_group_pattern';
  $strongarm->value = '';
  $export['pathauto_node_class_group_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_critical_writing_pattern';
  $strongarm->value = '';
  $export['pathauto_node_critical_writing_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_databases_and_archives_pattern';
  $strongarm->value = '';
  $export['pathauto_node_databases_and_archives_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_notebook_entry_pattern';
  $strongarm->value = '';
  $export['pathauto_node_notebook_entry_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_notebook_pattern';
  $strongarm->value = '[node:content-type]/[current-user:name]/[node:title]';
  $export['pathauto_node_notebook_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_organization_pattern';
  $strongarm->value = '';
  $export['pathauto_node_organization_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_person_pattern';
  $strongarm->value = '';
  $export['pathauto_node_person_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_platform_software_pattern';
  $strongarm->value = '';
  $export['pathauto_node_platform_software_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_publisher_pattern';
  $strongarm->value = '';
  $export['pathauto_node_publisher_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_research_collection_pattern';
  $strongarm->value = '';
  $export['pathauto_node_research_collection_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_story_pattern';
  $strongarm->value = '';
  $export['pathauto_node_story_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_teaching_resource_pattern';
  $strongarm->value = '';
  $export['pathauto_node_teaching_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_work_pattern';
  $strongarm->value = '';
  $export['pathauto_node_work_pattern'] = $strongarm;

  return $export;
}
