<?php

/**
 * @file
 * elmcip_field_instances.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elmcip_field_instances_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abstracttags|node|critical_writing|default';
  $field_group->group_name = 'group_abstracttags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_abstract',
      1 => 'field_abstract_lang',
      2 => 'field_pullquote',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-abstracttags field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '18',
  );
  $field_groups['group_abstracttags|node|critical_writing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abstracttags|node|critical_writing|teaser';
  $field_group->group_name = 'group_abstracttags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_pullquote',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-abstracttags field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '48',
  );
  $field_groups['group_abstracttags|node|critical_writing|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio_vt|node|person|form';
  $field_group->group_name = 'group_bio_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_textfield',
      1 => 'field_yeardied',
      2 => 'field_yearborn',
      3 => 'field_authorphoto',
      4 => 'field_files',
      5 => 'field_gender_sel',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-bio-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Biography',
    'weight' => '2',
  );
  $field_groups['group_bio_vt|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|node|person|default';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_textfield',
      1 => 'field_yeardied',
      2 => 'field_yearborn',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bio field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Biography',
    'weight' => '1',
  );
  $field_groups['group_bio|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|node|person|teaser';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_yeardied',
      1 => 'field_yearborn',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bio field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Biography',
    'weight' => '1',
  );
  $field_groups['group_bio|node|person|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bookjournal|node|critical_writing|default';
  $field_group->group_name = 'group_bookjournal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_eissn',
      1 => 'field_journalissue',
      2 => 'field_pagenumbers',
      3 => 'field_issn_text',
      4 => 'field_isbn_text',
      5 => 'field_edition',
      6 => 'field_inbook',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bookjournal field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Information specific to books or journals',
    'weight' => '17',
  );
  $field_groups['group_bookjournal|node|critical_writing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bookjournal|node|critical_writing|teaser';
  $field_group->group_name = 'group_bookjournal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_eissn',
      1 => 'field_journalissue',
      2 => 'field_pagenumbers',
      3 => 'field_issn_text',
      4 => 'field_isbn_text',
      5 => 'field_edition',
      6 => 'field_inbook',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bookjournal field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Information specific to books or journals',
    'weight' => '46',
  );
  $field_groups['group_bookjournal|node|critical_writing|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_vt|node|work|form';
  $field_group->group_name = 'group_core_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_license',
      2 => 'field_archiveurl',
      3 => 'field_downloadurl',
      4 => 'field_venue_tax',
      5 => 'field_language_tax',
      6 => 'field_worldcat_link',
      7 => 'field_isbn_text',
      8 => 'field_node_ref',
      9 => 'field_author_name',
      10 => 'field_contributor',
      11 => 'field_translator',
      12 => 'field_node_ref_event',
      13 => 'field_work_platform_software',
      14 => 'field_work_year',
      15 => 'field_doi',
      16 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-core-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Core Information',
    'weight' => '0',
  );
  $field_groups['group_core_vt|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coreinfo_critical|node|critical_writing|default';
  $field_group->group_name = 'group_coreinfo_critical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_license',
      2 => 'field_archiveurl',
      3 => 'field_node_ref',
      4 => 'field_author_name',
      5 => 'field_node_ref_event',
      6 => 'field_editor_name',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-coreinfo-critical field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Core Info',
    'weight' => '16',
  );
  $field_groups['group_coreinfo_critical|node|critical_writing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coreinfo_critical|node|critical_writing|teaser';
  $field_group->group_name = 'group_coreinfo_critical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_license',
      1 => 'field_archiveurl',
      2 => 'field_node_ref_event',
      3 => 'field_editor_name',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-coreinfo-critical field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Core Info',
    'weight' => '45',
  );
  $field_groups['group_coreinfo_critical|node|critical_writing|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coreinfo|node|databases_and_archives|form';
  $field_group->group_name = 'group_coreinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'databases_and_archives';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_project_type',
      1 => 'field_url',
      2 => 'field_contributors',
      3 => 'field_contact_email',
      4 => 'field_year_initiated',
      5 => 'field_db_language',
      6 => 'field_license',
      7 => 'field_database_platform_ref',
      8 => 'field_db_org',
      9 => 'field_db_people',
      10 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-coreinfo field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Core Information',
    'weight' => '0',
  );
  $field_groups['group_coreinfo|node|databases_and_archives|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cw_book_journal_vt|node|critical_writing|form';
  $field_group->group_name = 'group_cw_book_journal_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_eissn',
      1 => 'field_journalissue',
      2 => 'field_pagenumbers',
      3 => 'field_issn_text',
      4 => 'field_isbn_text',
      5 => 'field_edition',
      6 => 'field_worldcat_link',
      7 => 'field_other_edition_link',
      8 => 'field_series_ref',
      9 => 'field_inbook',
      10 => 'field_doi',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-book-journal-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Book or Journal Information',
    'weight' => '1',
  );
  $field_groups['group_cw_book_journal_vt|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cw_core_vt|node|critical_writing|form';
  $field_group->group_name = 'group_cw_core_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_license',
      2 => 'field_archiveurl',
      3 => 'field_pubtype_tax',
      4 => 'field_language_tax',
      5 => 'field_node_ref',
      6 => 'field_author_name',
      7 => 'field_translator',
      8 => 'field_node_ref_event',
      9 => 'field_cw_in_platform_software',
      10 => 'field_editor_name',
      11 => 'field_university',
      12 => 'field_critical_writing_year',
      13 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-core-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Core Information',
    'weight' => '0',
  );
  $field_groups['group_cw_core_vt|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cw_description_vt|node|critical_writing|form';
  $field_group->group_name = 'group_cw_description_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_abstract',
      2 => 'field_abstract_lang',
      3 => 'field_pullquote',
      4 => 'field_abstract_lang_tax',
      5 => 'field_other_lang_ver_link',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-description-vt field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Description',
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '2',
  );
  $field_groups['group_cw_description_vt|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cw_editorial_vt|node|critical_writing|form';
  $field_group->group_name = 'group_cw_editorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
      2 => 'field_record_status_lib',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-editorial-vt field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Record Status',
    ),
    'format_type' => 'tab',
    'label' => 'Record Status',
    'weight' => '4',
  );
  $field_groups['group_cw_editorial_vt|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cw_references_vt|node|critical_writing|form';
  $field_group->group_name = 'group_cw_references_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_images',
      2 => 'field_media_asset',
      3 => 'field_electronic_literature_dire',
      4 => 'field_po_ex_entry',
      5 => 'field_criticalw_platform_ref',
      6 => 'field_node_ref_work',
      7 => 'field_tr_critical',
      8 => 'field_ref_about_event',
      9 => 'field_organization_cw',
      10 => 'field_publisher_referenced',
      11 => 'field_database_or_archive_refere',
      12 => 'field_the_next',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-references-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'References and Attachments',
    'weight' => '3',
  );
  $field_groups['group_cw_references_vt|node|critical_writing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_references|node|databases_and_archives|form';
  $field_group->group_name = 'group_db_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'databases_and_archives';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_image',
      1 => 'field_files',
      2 => 'field_multi_images',
      3 => 'field_db_cross_event',
      4 => 'field_db_cross_cw',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-db-references field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'References and Attachments',
    'weight' => '2',
  );
  $field_groups['group_db_references|node|databases_and_archives|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_vt|node|work|data_export';
  $field_group->group_name = 'group_description_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'data_export';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_pullquote',
      1 => 'field_abstract_lang_tax',
      2 => 'field_node_ref_event',
      3 => 'field_other_lang_ver_link',
      4 => 'field_other_edition_work',
      5 => 'field_in_anthology',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-description-vt field-group-hidden',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'hidden',
    'label' => 'Description',
    'weight' => '24',
  );
  $field_groups['group_description_vt|node|work|data_export'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_vt|node|work|form';
  $field_group->group_name = 'group_description_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_contributors',
      2 => 'field_abstract_lang',
      3 => 'field_pullquote',
      4 => 'field_textfield',
      5 => 'field_tech_notes',
      6 => 'field_abstract_lang_tax',
      7 => 'field_other_lang_ver_link',
      8 => 'field_other_edition_work',
      9 => 'field_part_of_another_work',
      10 => 'field_in_anthology',
      11 => 'field_series_ref',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-description-vt field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Description',
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '1',
  );
  $field_groups['group_description_vt|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|databases_and_archives|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'databases_and_archives';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_db_tags',
      1 => 'field_db_description_english',
      2 => 'field_db_description_original',
      3 => 'field_db_technotes',
      4 => 'field_db_description_org_lang',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-description field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '1',
  );
  $field_groups['group_description|node|databases_and_archives|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|work|default';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_abstract_lang',
      1 => 'field_pullquote',
      2 => 'field_textfield',
      3 => 'field_tech_notes',
      4 => 'field_node_ref',
      5 => 'field_node_ref_event',
      6 => 'field_other_lang_ver_link',
      7 => 'field_in_anthology',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-description field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '0',
  );
  $field_groups['group_description|node|work|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|work|teaser';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_pullquote',
      1 => 'field_tech_notes',
      2 => 'field_node_ref_event',
      3 => 'field_other_lang_ver_link',
      4 => 'field_in_anthology',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-description field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '36',
  );
  $field_groups['group_description|node|work|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documentation_vt|node|work|data_export';
  $field_group->group_name = 'group_documentation_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'data_export';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_image',
      2 => 'field_media_asset',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-documentation-vt field-group-hidden',
        'description' => '',
        'required_fields' => 0,
      ),
      'label' => 'Documentation',
    ),
    'format_type' => 'hidden',
    'label' => 'Documentation',
    'weight' => '25',
  );
  $field_groups['group_documentation_vt|node|work|data_export'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documentation_vt|node|work|form';
  $field_group->group_name = 'group_documentation_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_image',
      2 => 'field_media_asset',
      3 => 'field_electronic_literature_dire',
      4 => 'field_i_e_poetry_entry',
      5 => 'field_nt2_entry',
      6 => 'field_po_ex_entry',
      7 => 'field_repository',
      8 => 'field_authoring_software_entry',
      9 => 'field_brown_digital_repository',
      10 => 'field_the_next',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-documentation-vt field-group-tab',
        'description' => '',
        'required_fields' => 0,
      ),
      'label' => 'Documentation',
    ),
    'format_type' => 'tab',
    'label' => 'Documentation',
    'weight' => '2',
  );
  $field_groups['group_documentation_vt|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documentation|node|event|default';
  $field_group->group_name = 'group_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-documentation field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Event Documentation',
    'weight' => '1',
  );
  $field_groups['group_documentation|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documentation|node|event|teaser';
  $field_group->group_name = 'group_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-documentation field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Event Documentation',
    'weight' => '1',
  );
  $field_groups['group_documentation|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_db|node|databases_and_archives|form';
  $field_group->group_name = 'group_editorial_db';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'databases_and_archives';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_record_status_tax',
      1 => 'field_editorial_notes',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-editorial-db field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Editorial Status',
    'weight' => '3',
  );
  $field_groups['group_editorial_db|node|databases_and_archives|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_vt|node|event|form';
  $field_group->group_name = 'group_editorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
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
        'classes' => ' group-editorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Editorial Status',
    'weight' => '4',
  );
  $field_groups['group_editorial_vt|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_vt|node|person|form';
  $field_group->group_name = 'group_editorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
      2 => 'flag',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-editorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Record status',
    'weight' => '4',
  );
  $field_groups['group_editorial_vt|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_vt|node|publisher|form';
  $field_group->group_name = 'group_editorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publisher';
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
        'classes' => ' group-editorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Record status',
    'weight' => '2',
  );
  $field_groups['group_editorial_vt|node|publisher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_vt|node|work|data_export';
  $field_group->group_name = 'group_editorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'data_export';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-editorial-vt field-group-hidden',
        'description' => '',
        'required_fields' => 0,
      ),
      'label' => 'Editorial Status',
    ),
    'format_type' => 'hidden',
    'label' => 'Editorial Status',
    'weight' => '29',
  );
  $field_groups['group_editorial_vt|node|work|data_export'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_vt|node|work|form';
  $field_group->group_name = 'group_editorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
      2 => 'field_record_status_lib',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-editorial-vt field-group-tab',
        'description' => '',
        'required_fields' => 0,
      ),
      'label' => 'Editorial Status',
    ),
    'format_type' => 'tab',
    'label' => 'Editorial Status',
    'weight' => '6',
  );
  $field_groups['group_editorial_vt|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eveninfo_vt|node|event|form';
  $field_group->group_name = 'group_eveninfo_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'taxonomy_vocabulary_2',
      1 => 'field_url',
      2 => 'field_archiveurl',
      3 => 'field_date',
      4 => 'field_location',
      5 => 'field_email',
      6 => 'field_node_ref',
      7 => 'field_individual_organizers',
      8 => 'field_curator',
      9 => 'field_associated_event',
      10 => 'field_event_series',
      11 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-eveninfo-vt field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Event Information',
    ),
    'format_type' => 'tab',
    'label' => 'Event Information',
    'weight' => '1',
  );
  $field_groups['group_eveninfo_vt|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eventdesc_vt|node|event|form';
  $field_group->group_name = 'group_eventdesc_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_textfield',
      2 => 'field_event_abstract_lang',
      3 => 'field_event_abstract_lang_tax',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-eventdesc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '2',
  );
  $field_groups['group_eventdesc_vt|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eventdoc_vt|node|event|form';
  $field_group->group_name = 'group_eventdoc_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_media_asset',
      2 => 'field_multi_images',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-eventdoc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Event Documentation',
    'weight' => '3',
  );
  $field_groups['group_eventdoc_vt|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eventinfo|node|event|default';
  $field_group->group_name = 'group_eventinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_archiveurl',
      2 => 'field_date',
      3 => 'field_location',
      4 => 'field_email',
      5 => 'field_node_ref',
      6 => 'field_individual_organizers',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-eventinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Event Information',
    'weight' => '-1',
  );
  $field_groups['group_eventinfo|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eventinfo|node|event|teaser';
  $field_group->group_name = 'group_eventinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_archiveurl',
      1 => 'field_email',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-eventinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Event Information',
    'weight' => '-1',
  );
  $field_groups['group_eventinfo|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|event|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'attributes' => '',
        'classes' => 'group-meta',
        'element' => 'div',
        'id' => '',
        'label_element' => '',
        'show_label' => '0',
      ),
      'label' => 'Meta data',
    ),
    'format_type' => 'html-element',
    'label' => 'Meta data',
    'weight' => '24',
  );
  $field_groups['group_meta|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|work|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'purl',
      1 => 'author',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'attributes' => '',
        'classes' => 'group-meta',
        'element' => 'div',
        'id' => '',
        'label_element' => '',
        'show_label' => '0',
      ),
      'label' => 'Meta data',
    ),
    'format_type' => 'html-element',
    'label' => 'Meta data',
    'weight' => '46',
  );
  $field_groups['group_meta|node|work|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orgdesc_vt|node|organization|form';
  $field_group->group_name = 'group_orgdesc_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_textfield',
      1 => 'field_files',
      2 => 'field_multi_images',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-orgdesc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '1',
  );
  $field_groups['group_orgdesc_vt|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orgdescription|node|organization|default';
  $field_group->group_name = 'group_orgdescription';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_textfield',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orgdescription field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '-3',
  );
  $field_groups['group_orgdescription|node|organization|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orgdescription|node|organization|teaser';
  $field_group->group_name = 'group_orgdescription';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_textfield',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orgdescription field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '3',
  );
  $field_groups['group_orgdescription|node|organization|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orgeditorial_vt|node|organization|form';
  $field_group->group_name = 'group_orgeditorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
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
        'classes' => ' group-orgeditorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Editorial Status',
    'weight' => '3',
  );
  $field_groups['group_orgeditorial_vt|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orginfo_vt|node|organization|form';
  $field_group->group_name = 'group_orginfo_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_location',
      2 => 'field_email',
      3 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-orginfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Organization Information',
    'weight' => '0',
  );
  $field_groups['group_orginfo_vt|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orginfo|node|organization|default';
  $field_group->group_name = 'group_orginfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_location',
      2 => 'field_email',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orginfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Organization Information',
    'weight' => '-4',
  );
  $field_groups['group_orginfo|node|organization|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orginfo|node|organization|teaser';
  $field_group->group_name = 'group_orginfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_location',
      2 => 'field_email',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orginfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Organization Information',
    'weight' => '2',
  );
  $field_groups['group_orginfo|node|organization|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personinfo_vt|node|person|form';
  $field_group->group_name = 'group_personinfo_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_last_name',
      2 => 'field_first_name',
      3 => 'field_residency',
      4 => 'field_nationality',
      5 => 'field_middle_name',
      6 => 'field_auth_email',
      7 => 'field_alternative_spelling_of_na',
      8 => 'field_affiliation',
      9 => 'field_userid_reference',
      10 => 'field_orcid',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-personinfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Basic Information',
    'weight' => '1',
  );
  $field_groups['group_personinfo_vt|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personinfo|node|person|default';
  $field_group->group_name = 'group_personinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_last_name',
      2 => 'field_first_name',
      3 => 'field_residency',
      4 => 'field_nationality',
      5 => 'field_middle_name',
      6 => 'field_auth_email',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-personinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Information',
    'weight' => '-4',
  );
  $field_groups['group_personinfo|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personinfo|node|person|teaser';
  $field_group->group_name = 'group_personinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_last_name',
      2 => 'field_first_name',
      3 => 'field_residency',
      4 => 'field_nationality',
      5 => 'field_middle_name',
      6 => 'field_auth_email',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-personinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Information',
    'weight' => '-4',
  );
  $field_groups['group_personinfo|node|person|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ps_attachments|node|platform_software|form';
  $field_group->group_name = 'group_ps_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_ps_image',
      1 => 'field_ps_attachment',
      2 => 'field_media',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Attachments and Documentation',
    'weight' => '2',
  );
  $field_groups['group_ps_attachments|node|platform_software|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ps_core|node|platform_software|form';
  $field_group->group_name = 'group_ps_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_platform_developers',
      2 => 'field_platform_year',
      3 => 'field_publisher_or_organization',
      4 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Core Information',
    'weight' => '0',
  );
  $field_groups['group_ps_core|node|platform_software|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ps_description|node|platform_software|form';
  $field_group->group_name = 'group_ps_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'platform_software';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_ps_description',
      1 => 'field_version_history',
      2 => 'field_license',
      3 => 'field_repository',
      4 => 'field_platform_versions',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '1',
  );
  $field_groups['group_ps_description|node|platform_software|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pubdesc_vt|node|publisher|form';
  $field_group->group_name = 'group_pubdesc_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_textfield',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-pubdesc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '1',
  );
  $field_groups['group_pubdesc_vt|node|publisher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pubinfo_vt|node|publisher|form';
  $field_group->group_name = 'group_pubinfo_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_eissn',
      2 => 'field_issn_text',
      3 => 'field_location',
      4 => 'field_email',
      5 => 'field_editor_name',
      6 => 'field_events',
      7 => 'field_publishing_type',
      8 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-pubinfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Basic Information',
    'weight' => '0',
  );
  $field_groups['group_pubinfo_vt|node|publisher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pubinfo|node|publisher|default';
  $field_group->group_name = 'group_pubinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_eissn',
      2 => 'field_issn_text',
      3 => 'field_location',
      4 => 'field_email',
      5 => 'field_editor_name',
      6 => 'content_type',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-pubinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Publisher Information',
    'weight' => '17',
  );
  $field_groups['group_pubinfo|node|publisher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pubinfo|node|publisher|teaser';
  $field_group->group_name = 'group_pubinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_eissn',
      2 => 'field_issn_text',
      3 => 'field_location',
      4 => 'field_email',
      5 => 'field_editor_name',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-pubinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Publisher Information',
    'weight' => '2',
  );
  $field_groups['group_pubinfo|node|publisher|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_crit|node|critical_writing|default';
  $field_group->group_name = 'group_references_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_images',
      2 => 'field_other_lang_ver_link',
      3 => 'field_ref_about_event',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-references-crit field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'References / Attachments',
    'weight' => '19',
  );
  $field_groups['group_references_crit|node|critical_writing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_crit|node|critical_writing|teaser';
  $field_group->group_name = 'group_references_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_images',
      2 => 'field_other_lang_ver_link',
      3 => 'field_node_ref_work',
      4 => 'field_tr_critical',
      5 => 'field_ref_about_event',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-references-crit field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'References / Attachments',
    'weight' => '49',
  );
  $field_groups['group_references_crit|node|critical_writing|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_attach|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_attach';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_tr_critical',
      1 => 'field_tr_work',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-attach field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'References and Attachments',
    'weight' => '34',
  );
  $field_groups['group_tr_attach|node|teaching_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_attach|node|teaching_resource|teaser';
  $field_group->group_name = 'group_tr_attach';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_image',
      2 => 'field_tr_critical',
      3 => 'field_tr_work',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-attach field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'References and Attachments',
    'weight' => '22',
  );
  $field_groups['group_tr_attach|node|teaching_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_basic|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-basic field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Basic Information',
    'weight' => '32',
  );
  $field_groups['group_tr_basic|node|teaching_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_basic|node|teaching_resource|teaser';
  $field_group->group_name = 'group_tr_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_url',
      1 => 'field_tr_year',
      2 => 'field_tr_author',
      3 => 'field_tr_org',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-basic field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Basic Information',
    'weight' => '20',
  );
  $field_groups['group_tr_basic|node|teaching_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_description|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-description field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '33',
  );
  $field_groups['group_tr_description|node|teaching_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_description|node|teaching_resource|teaser';
  $field_group->group_name = 'group_tr_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_abstract_lang',
      1 => 'field_tr_description',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-description field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '21',
  );
  $field_groups['group_tr_description|node|teaching_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trdesc_vt|node|teaching_resource|form';
  $field_group->group_name = 'group_trdesc_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_abstract_lang',
      2 => 'field_tr_description',
      3 => 'field_abstract_lang_tax',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-trdesc-vt field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Description',
    ),
    'format_type' => 'tab',
    'label' => 'Description',
    'weight' => '1',
  );
  $field_groups['group_trdesc_vt|node|teaching_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_treditorial_vt|node|teaching_resource|form';
  $field_group->group_name = 'group_treditorial_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
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
        'classes' => ' group-treditorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Record status',
    'weight' => '3',
  );
  $field_groups['group_treditorial_vt|node|teaching_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trinfo_vt|node|teaching_resource|form';
  $field_group->group_name = 'group_trinfo_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'taxonomy_vocabulary_4',
      1 => 'field_url',
      2 => 'field_tr_year',
      3 => 'field_language_tax',
      4 => 'field_tr_author',
      5 => 'field_tr_org',
      6 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-trinfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Basic Information',
    'weight' => '0',
  );
  $field_groups['group_trinfo_vt|node|teaching_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trref_vt|node|teaching_resource|form';
  $field_group->group_name = 'group_trref_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_image',
      2 => 'field_media_asset',
      3 => 'field_tr_critical',
      4 => 'field_database_or_archive_refere',
      5 => 'field_tr_work',
      6 => 'field_tr_tr',
      7 => 'field_platform_software_referenc',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-trref-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'References and Attachments',
    'weight' => '2',
  );
  $field_groups['group_trref_vt|node|teaching_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workdoc|node|work|default';
  $field_group->group_name = 'group_workdoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_image',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workdoc field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Documentation',
    'weight' => '2',
  );
  $field_groups['group_workdoc|node|work|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workdoc|node|work|teaser';
  $field_group->group_name = 'group_workdoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_files',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workdoc field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Documentation',
    'weight' => '41',
  );
  $field_groups['group_workdoc|node|work|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workinfo|node|work|default';
  $field_group->group_name = 'group_workinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_contributors',
      1 => 'field_url',
      2 => 'field_license',
      3 => 'field_archiveurl',
      4 => 'field_downloadurl',
      5 => 'field_author_name',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Core Information',
    'weight' => '-3',
  );
  $field_groups['group_workinfo|node|work|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workinfo|node|work|teaser';
  $field_group->group_name = 'group_workinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_contributors',
      1 => 'field_license',
      2 => 'field_archiveurl',
      3 => 'field_downloadurl',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workinfo field-group-fieldset',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Core Information',
    'weight' => '35',
  );
  $field_groups['group_workinfo|node|work|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments and Documentation');
  t('Basic Information');
  t('Biography');
  t('Book or Journal Information');
  t('Core Info');
  t('Core Information');
  t('Description');
  t('Documentation');
  t('Editorial Status');
  t('Event Documentation');
  t('Event Information');
  t('Information');
  t('Information specific to books or journals');
  t('Meta data');
  t('Organization Information');
  t('Publisher Information');
  t('Record Status');
  t('Record status');
  t('References / Attachments');
  t('References and Attachments');

  return $field_groups;
}
