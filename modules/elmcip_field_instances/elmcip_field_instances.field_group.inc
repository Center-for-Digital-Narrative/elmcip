<?php
/**
 * @file
 * elmcip_field_instances.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elmcip_field_instances_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abstracttags|node|critical_writing|default';
  $field_group->group_name = 'group_abstracttags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '15',
    'children' => array(
      0 => 'field_abstract',
      1 => 'field_abstract_lang',
      2 => 'field_orig_lang',
      3 => 'field_pullquote',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-abstracttags field-group-fieldset',
      ),
    ),
  );
  $export['group_abstracttags|node|critical_writing|default'] = $field_group;

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
    'label' => 'Description',
    'weight' => '33',
    'children' => array(
      0 => 'field_orig_lang',
      1 => 'field_pullquote',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-abstracttags field-group-fieldset',
      ),
    ),
  );
  $export['group_abstracttags|node|critical_writing|teaser'] = $field_group;

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
    'label' => 'Biography',
    'weight' => '2',
    'children' => array(
      0 => 'field_textfield',
      1 => 'field_yeardied',
      2 => 'field_yearborn',
      3 => 'field_authorphoto',
      4 => 'field_files',
      5 => 'field_gender',
      6 => 'field_gender_sel',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-bio-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bio_vt|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|node|person|default';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '1',
    'children' => array(
      0 => 'field_textfield',
      1 => 'field_yearborn',
      2 => 'field_yeardied',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bio field-group-fieldset',
      ),
    ),
  );
  $export['group_bio|node|person|default'] = $field_group;

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
    'label' => 'Biography',
    'weight' => '1',
    'children' => array(
      0 => 'field_yeardied',
      1 => 'field_yearborn',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bio field-group-fieldset',
      ),
    ),
  );
  $export['group_bio|node|person|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bookjournal|node|critical_writing|default';
  $field_group->group_name = 'group_bookjournal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information specific to books or journals',
    'weight' => '14',
    'children' => array(
      0 => 'field_eissn',
      1 => 'field_journalissue',
      2 => 'field_inbook',
      3 => 'field_pagenumbers',
      4 => 'field_issn_text',
      5 => 'field_isbn_text',
      6 => 'field_edition',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bookjournal field-group-fieldset',
      ),
    ),
  );
  $export['group_bookjournal|node|critical_writing|default'] = $field_group;

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
    'label' => 'Information specific to books or journals',
    'weight' => '31',
    'children' => array(
      0 => 'field_eissn',
      1 => 'field_journalissue',
      2 => 'field_inbook',
      3 => 'field_pagenumbers',
      4 => 'field_issn_text',
      5 => 'field_isbn_text',
      6 => 'field_edition',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-bookjournal field-group-fieldset',
      ),
    ),
  );
  $export['group_bookjournal|node|critical_writing|teaser'] = $field_group;

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
    'label' => 'Core Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_url',
      1 => 'field_author_name',
      2 => 'field_number',
      3 => 'field_license',
      4 => 'field_node_ref',
      5 => 'field_node_ref_event',
      6 => 'field_archiveurl',
      7 => 'field_downloadurl',
      8 => 'field_contributor',
      9 => 'field_venue_tax',
      10 => 'field_language_tax',
      11 => 'field_worldcat_link',
      12 => 'field_isbn_text',
      13 => 'field_translator',
      14 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-core-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_core_vt|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coreinfo_critical|node|critical_writing|default';
  $field_group->group_name = 'group_coreinfo_critical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core Info',
    'weight' => '13',
    'children' => array(
      0 => 'field_url',
      1 => 'field_author_name',
      2 => 'field_number',
      3 => 'field_license',
      4 => 'field_node_ref',
      5 => 'field_node_ref_event',
      6 => 'field_archiveurl',
      7 => 'field_editor_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-coreinfo-critical field-group-fieldset',
      ),
    ),
  );
  $export['group_coreinfo_critical|node|critical_writing|default'] = $field_group;

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
    'label' => 'Core Info',
    'weight' => '30',
    'children' => array(
      0 => 'field_license',
      1 => 'field_node_ref_event',
      2 => 'field_archiveurl',
      3 => 'field_editor_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-coreinfo-critical field-group-fieldset',
      ),
    ),
  );
  $export['group_coreinfo_critical|node|critical_writing|teaser'] = $field_group;

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
    'label' => 'Core Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_project_type',
      1 => 'field_url',
      2 => 'field_db_org',
      3 => 'field_db_people',
      4 => 'field_contributors',
      5 => 'field_contact_email',
      6 => 'field_year_initiated',
      7 => 'field_db_language',
      8 => 'field_license',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-coreinfo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_coreinfo|node|databases_and_archives|form'] = $field_group;

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
    'label' => 'Book or Journal Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_eissn',
      1 => 'field_journalissue',
      2 => 'field_inbook',
      3 => 'field_pagenumbers',
      4 => 'field_issn_text',
      5 => 'field_isbn_text',
      6 => 'field_edition',
      7 => 'field_other_edition_link',
      8 => 'field_worldcat_link',
      9 => 'field_series_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-book-journal-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cw_book_journal_vt|node|critical_writing|form'] = $field_group;

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
    'label' => 'Core Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_url',
      1 => 'field_author_name',
      2 => 'field_number',
      3 => 'field_license',
      4 => 'field_node_ref',
      5 => 'field_node_ref_event',
      6 => 'field_archiveurl',
      7 => 'field_editor_name',
      8 => 'field_pubtype_tax',
      9 => 'field_language_tax',
      10 => 'field_translator',
      11 => 'field_university',
      12 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-core-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cw_core_vt|node|critical_writing|form'] = $field_group;

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
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_abstract',
      2 => 'field_abstract_lang',
      3 => 'field_orig_lang',
      4 => 'field_other_lang_ver_link',
      5 => 'field_pullquote',
      6 => 'field_abstract_lang_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-description-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cw_description_vt|node|critical_writing|form'] = $field_group;

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
    'label' => 'Record Status',
    'weight' => '4',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Record Status',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-cw-editorial-vt field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_cw_editorial_vt|node|critical_writing|form'] = $field_group;

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
    'label' => 'References and Attachments',
    'weight' => '3',
    'children' => array(
      0 => 'field_node_ref_work',
      1 => 'field_tr_critical',
      2 => 'field_ref_about_event',
      3 => 'field_files',
      4 => 'field_multi_images',
      5 => 'field_media_asset',
      6 => 'field_database_or_archive_refere',
      7 => 'field_electronic_literature_dire',
      8 => 'field_organization_cw',
      9 => 'field_publisher_referenced',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-cw-references-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cw_references_vt|node|critical_writing|form'] = $field_group;

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
    'label' => 'References and Attachments',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'field_files',
      2 => 'field_multi_images',
      3 => 'field_db_cross_event',
      4 => 'field_db_cross_cw',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-db-references field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_db_references|node|databases_and_archives|form'] = $field_group;

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
    'label' => 'Description',
    'weight' => '24',
    'children' => array(
      0 => 'field_node_ref_event',
      1 => 'field_orig_lang',
      2 => 'field_other_lang_ver_link',
      3 => 'field_pullquote',
      4 => 'field_in_anthology',
      5 => 'field_other_edition_work',
      6 => 'field_abstract_lang_tax',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-description-vt field-group-hidden',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description_vt|node|work|data_export'] = $field_group;

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
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_contributors',
      2 => 'field_abstract_lang',
      3 => 'field_orig_lang',
      4 => 'field_other_lang_ver_link',
      5 => 'field_pullquote',
      6 => 'field_textfield',
      7 => 'field_tech_notes',
      8 => 'field_in_anthology',
      9 => 'field_other_edition_work',
      10 => 'field_abstract_lang_tax',
      11 => 'field_part_of_another_work',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-description-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description_vt|node|work|form'] = $field_group;

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
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_db_tags',
      1 => 'field_db_description_english',
      2 => 'field_db_description_original',
      3 => 'field_db_technotes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|node|databases_and_archives|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|work|default';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '0',
    'children' => array(
      0 => 'field_node_ref',
      1 => 'field_node_ref_event',
      2 => 'field_abstract_lang',
      3 => 'field_orig_lang',
      4 => 'field_other_lang_ver_link',
      5 => 'field_pullquote',
      6 => 'field_textfield',
      7 => 'field_tech_notes',
      8 => 'field_in_anthology',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-description field-group-fieldset',
      ),
    ),
  );
  $export['group_description|node|work|default'] = $field_group;

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
    'label' => 'Description',
    'weight' => '26',
    'children' => array(
      0 => 'field_node_ref_event',
      1 => 'field_orig_lang',
      2 => 'field_other_lang_ver_link',
      3 => 'field_pullquote',
      4 => 'field_tech_notes',
      5 => 'field_in_anthology',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-description field-group-fieldset',
      ),
    ),
  );
  $export['group_description|node|work|teaser'] = $field_group;

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
    'label' => 'Documentation',
    'weight' => '25',
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_image',
      2 => 'field_media_asset',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Documentation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-documentation-vt field-group-hidden',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_documentation_vt|node|work|data_export'] = $field_group;

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
    'label' => 'Documentation',
    'weight' => '2',
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_image',
      2 => 'field_media_asset',
      3 => 'field_electronic_literature_dire',
      4 => 'field_i_e_poetry_entry',
      5 => 'field_nt2_entry',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Documentation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-documentation-vt field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_documentation_vt|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documentation|node|event|default';
  $field_group->group_name = 'group_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Documentation',
    'weight' => '1',
    'children' => array(
      0 => 'field_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-documentation field-group-fieldset',
      ),
    ),
  );
  $export['group_documentation|node|event|default'] = $field_group;

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
    'label' => 'Event Documentation',
    'weight' => '1',
    'children' => array(
      0 => 'field_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-documentation field-group-fieldset',
      ),
    ),
  );
  $export['group_documentation|node|event|teaser'] = $field_group;

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
    'label' => 'Editorial Status',
    'weight' => '3',
    'children' => array(
      0 => 'field_record_status_tax',
      1 => 'field_editorial_notes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-editorial-db field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_editorial_db|node|databases_and_archives|form'] = $field_group;

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
    'label' => 'Editorial Status',
    'weight' => '4',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-editorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_editorial_vt|node|event|form'] = $field_group;

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
    'label' => 'Record status',
    'weight' => '4',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-editorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_editorial_vt|node|person|form'] = $field_group;

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
    'label' => 'Record status',
    'weight' => '2',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-editorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_editorial_vt|node|publisher|form'] = $field_group;

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
    'label' => 'Editorial Status',
    'weight' => '29',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Editorial Status',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-editorial-vt field-group-hidden',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_editorial_vt|node|work|data_export'] = $field_group;

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
    'label' => 'Editorial Status',
    'weight' => '6',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Editorial Status',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-editorial-vt field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_editorial_vt|node|work|form'] = $field_group;

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
    'label' => 'Event Information',
    'weight' => '1',
    'children' => array(
      0 => 'taxonomy_vocabulary_2',
      1 => 'field_url',
      2 => 'field_node_ref',
      3 => 'field_archiveurl',
      4 => 'field_date',
      5 => 'field_location',
      6 => 'field_email',
      7 => 'field_associated_event',
      8 => 'field_event_series',
      9 => 'field_curator',
      10 => 'field_individual_organizers',
      11 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Event Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-eveninfo-vt field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_eveninfo_vt|node|event|form'] = $field_group;

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
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_textfield',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-eventdesc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eventdesc_vt|node|event|form'] = $field_group;

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
    'label' => 'Event Documentation',
    'weight' => '3',
    'children' => array(
      0 => 'field_files',
      1 => 'field_media_asset',
      2 => 'field_multi_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-eventdoc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eventdoc_vt|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eventinfo|node|event|default';
  $field_group->group_name = 'group_eventinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Information',
    'weight' => '-1',
    'children' => array(
      0 => 'field_url',
      1 => 'field_node_ref',
      2 => 'field_archiveurl',
      3 => 'field_date',
      4 => 'field_location',
      5 => 'field_email',
      6 => 'field_individual_organizers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-eventinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_eventinfo|node|event|default'] = $field_group;

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
    'label' => 'Event Information',
    'weight' => '-1',
    'children' => array(
      0 => 'field_archiveurl',
      1 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-eventinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_eventinfo|node|event|teaser'] = $field_group;

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
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_textfield',
      1 => 'field_files',
      2 => 'field_multi_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-orgdesc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_orgdesc_vt|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orgdescription|node|organization|default';
  $field_group->group_name = 'group_orgdescription';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '-3',
    'children' => array(
      0 => 'field_textfield',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orgdescription field-group-fieldset',
      ),
    ),
  );
  $export['group_orgdescription|node|organization|default'] = $field_group;

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
    'label' => 'Description',
    'weight' => '3',
    'children' => array(
      0 => 'field_textfield',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orgdescription field-group-fieldset',
      ),
    ),
  );
  $export['group_orgdescription|node|organization|teaser'] = $field_group;

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
        'classes' => ' group-orgeditorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_orgeditorial_vt|node|organization|form'] = $field_group;

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
    'label' => 'Organization Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_url',
      1 => 'field_location',
      2 => 'field_email',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-orginfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_orginfo_vt|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orginfo|node|organization|default';
  $field_group->group_name = 'group_orginfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization Information',
    'weight' => '-4',
    'children' => array(
      0 => 'field_email',
      1 => 'field_location',
      2 => 'field_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orginfo field-group-fieldset',
      ),
    ),
  );
  $export['group_orginfo|node|organization|default'] = $field_group;

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
    'label' => 'Organization Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_url',
      1 => 'field_location',
      2 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-orginfo field-group-fieldset',
      ),
    ),
  );
  $export['group_orginfo|node|organization|teaser'] = $field_group;

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
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_url',
      1 => 'field_last_name',
      2 => 'field_first_name',
      3 => 'field_residency',
      4 => 'field_nationality',
      5 => 'field_middle_name',
      6 => 'field_auth_email',
      7 => 'field_userid_reference',
      8 => 'field_affiliation',
      9 => 'field_alternative_spelling_of_na',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-personinfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personinfo_vt|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personinfo|node|person|default';
  $field_group->group_name = 'group_personinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '-4',
    'children' => array(
      0 => 'field_auth_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_middle_name',
      4 => 'field_nationality',
      5 => 'field_residency',
      6 => 'field_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-personinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_personinfo|node|person|default'] = $field_group;

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
    'label' => 'Information',
    'weight' => '-4',
    'children' => array(
      0 => 'field_url',
      1 => 'field_last_name',
      2 => 'field_first_name',
      3 => 'field_residency',
      4 => 'field_nationality',
      5 => 'field_middle_name',
      6 => 'field_auth_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-personinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_personinfo|node|person|teaser'] = $field_group;

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
    'label' => 'Attachments and Documentation',
    'weight' => '2',
    'children' => array(
      0 => 'field_ps_image',
      1 => 'field_ps_attachment',
      2 => 'field_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ps-attachments field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ps_attachments|node|platform_software|form'] = $field_group;

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
    'label' => 'Core Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_developers',
      1 => 'field_publisher_of_organization',
      2 => 'field_number',
      3 => 'field_url',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ps-core field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ps_core|node|platform_software|form'] = $field_group;

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
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_ps_description',
      1 => 'field_version_history',
      2 => 'field_license',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ps-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ps_description|node|platform_software|form'] = $field_group;

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
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_textfield',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-pubdesc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pubdesc_vt|node|publisher|form'] = $field_group;

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
    'label' => 'Basic Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_url',
      1 => 'field_eissn',
      2 => 'field_editor_name',
      3 => 'field_issn_text',
      4 => 'field_location',
      5 => 'field_email',
      6 => 'field_events',
      7 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-pubinfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pubinfo_vt|node|publisher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pubinfo|node|publisher|default';
  $field_group->group_name = 'group_pubinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publisher Information',
    'weight' => '-4',
    'children' => array(
      0 => 'field_editor_name',
      1 => 'field_eissn',
      2 => 'field_email',
      3 => 'field_issn_text',
      4 => 'field_location',
      5 => 'field_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-pubinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_pubinfo|node|publisher|default'] = $field_group;

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
    'label' => 'Publisher Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_url',
      1 => 'field_eissn',
      2 => 'field_editor_name',
      3 => 'field_issn_text',
      4 => 'field_location',
      5 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-pubinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_pubinfo|node|publisher|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_crit|node|critical_writing|default';
  $field_group->group_name = 'group_references_crit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'critical_writing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References / Attachments',
    'weight' => '16',
    'children' => array(
      0 => 'field_node_ref_work',
      1 => 'field_tr_critical',
      2 => 'field_other_lang_ver_link',
      3 => 'field_ref_about_event',
      4 => 'field_files',
      5 => 'field_multi_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-references-crit field-group-fieldset',
      ),
    ),
  );
  $export['group_references_crit|node|critical_writing|default'] = $field_group;

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
    'label' => 'References / Attachments',
    'weight' => '34',
    'children' => array(
      0 => 'field_node_ref_work',
      1 => 'field_tr_critical',
      2 => 'field_other_lang_ver_link',
      3 => 'field_ref_about_event',
      4 => 'field_files',
      5 => 'field_multi_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-references-crit field-group-fieldset',
      ),
    ),
  );
  $export['group_references_crit|node|critical_writing|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submit_vt|node|work|data_export';
  $field_group->group_name = 'group_submit_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'data_export';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submit to ELMCIP Anthology',
    'weight' => '27',
    'children' => array(
      0 => 'field_anthology_submission',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Submit to ELMCIP Anthology',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-submit-vt field-group-hidden',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_submit_vt|node|work|data_export'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submit_vt|node|work|form';
  $field_group->group_name = 'group_submit_vt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submit to ELMCIP Anthology',
    'weight' => '4',
    'children' => array(
      0 => 'field_anthology_submission',
      1 => 'field_anthology_selection',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Submit to ELMCIP Anthology',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-submit-vt field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_submit_vt|node|work|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_attach|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_attach';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References and Attachments',
    'weight' => '21',
    'children' => array(
      0 => 'field_tr_critical',
      1 => 'field_tr_work',
      2 => 'field_files',
      3 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-attach field-group-fieldset',
      ),
    ),
  );
  $export['group_tr_attach|node|teaching_resource|default'] = $field_group;

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
    'label' => 'References and Attachments',
    'weight' => '22',
    'children' => array(
      0 => 'field_tr_critical',
      1 => 'field_tr_work',
      2 => 'field_files',
      3 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-attach field-group-fieldset',
      ),
    ),
  );
  $export['group_tr_attach|node|teaching_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_basic|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '19',
    'children' => array(
      0 => 'field_url',
      1 => 'field_tr_author',
      2 => 'field_tr_year',
      3 => 'field_tr_org',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-basic field-group-fieldset',
      ),
    ),
  );
  $export['group_tr_basic|node|teaching_resource|default'] = $field_group;

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
    'label' => 'Basic Information',
    'weight' => '20',
    'children' => array(
      0 => 'field_url',
      1 => 'field_tr_author',
      2 => 'field_tr_year',
      3 => 'field_tr_org',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-basic field-group-fieldset',
      ),
    ),
  );
  $export['group_tr_basic|node|teaching_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tr_description|node|teaching_resource|default';
  $field_group->group_name = 'group_tr_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teaching_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '20',
    'children' => array(
      0 => 'field_abstract_lang',
      1 => 'field_orig_lang',
      2 => 'field_tr_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-description field-group-fieldset',
      ),
    ),
  );
  $export['group_tr_description|node|teaching_resource|default'] = $field_group;

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
    'label' => 'Description',
    'weight' => '21',
    'children' => array(
      0 => 'field_abstract_lang',
      1 => 'field_orig_lang',
      2 => 'field_tr_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-tr-description field-group-fieldset',
      ),
    ),
  );
  $export['group_tr_description|node|teaching_resource|teaser'] = $field_group;

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
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'taxonomy_vocabulary_1',
      1 => 'field_abstract_lang',
      2 => 'field_orig_lang',
      3 => 'field_tr_description',
      4 => 'field_abstract_lang_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-trdesc-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_trdesc_vt|node|teaching_resource|form'] = $field_group;

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
    'label' => 'Record status',
    'weight' => '3',
    'children' => array(
      0 => 'field_editorial_notes',
      1 => 'field_record_status_tax',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-treditorial-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_treditorial_vt|node|teaching_resource|form'] = $field_group;

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
    'label' => 'Basic Information',
    'weight' => '0',
    'children' => array(
      0 => 'taxonomy_vocabulary_4',
      1 => 'field_url',
      2 => 'field_tr_author',
      3 => 'field_tr_year',
      4 => 'field_tr_org',
      5 => 'field_language_tax',
      6 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-trinfo-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_trinfo_vt|node|teaching_resource|form'] = $field_group;

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
    'label' => 'References and Attachments',
    'weight' => '2',
    'children' => array(
      0 => 'field_tr_critical',
      1 => 'field_tr_work',
      2 => 'field_files',
      3 => 'field_image',
      4 => 'field_media_asset',
      5 => 'field_tr_tr',
      6 => 'field_database_or_archive_refere',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-trref-vt field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_trref_vt|node|teaching_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workdoc|node|work|default';
  $field_group->group_name = 'group_workdoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documentation',
    'weight' => '2',
    'children' => array(
      0 => 'field_files',
      1 => 'field_multi_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workdoc field-group-fieldset',
      ),
    ),
  );
  $export['group_workdoc|node|work|default'] = $field_group;

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
    'label' => 'Documentation',
    'weight' => '31',
    'children' => array(
      0 => 'field_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workdoc field-group-fieldset',
      ),
    ),
  );
  $export['group_workdoc|node|work|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workinfo|node|work|default';
  $field_group->group_name = 'group_workinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core Information',
    'weight' => '-3',
    'children' => array(
      0 => 'field_contributors',
      1 => 'field_url',
      2 => 'field_author_name',
      3 => 'field_number',
      4 => 'field_license',
      5 => 'field_archiveurl',
      6 => 'field_downloadurl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_workinfo|node|work|default'] = $field_group;

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
    'label' => 'Core Information',
    'weight' => '25',
    'children' => array(
      0 => 'field_contributors',
      1 => 'field_license',
      2 => 'field_archiveurl',
      3 => 'field_downloadurl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-workinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_workinfo|node|work|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_worksubmit|node|work|default';
  $field_group->group_name = 'group_worksubmit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submit to ELMCIP Anthology',
    'weight' => '4',
    'children' => array(
      0 => 'field_anthology_submission',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-worksubmit field-group-fieldset',
      ),
    ),
  );
  $export['group_worksubmit|node|work|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_worksubmit|node|work|teaser';
  $field_group->group_name = 'group_worksubmit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'work';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submit to ELMCIP Anthology',
    'weight' => '33',
    'children' => array(
      0 => 'field_anthology_submission',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-worksubmit field-group-fieldset',
      ),
    ),
  );
  $export['group_worksubmit|node|work|teaser'] = $field_group;

  return $export;
}
