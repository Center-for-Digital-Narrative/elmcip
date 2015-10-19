<?php
/**
 * @file
 * elmcip_creative_work.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elmcip_creative_work_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'creative_work_oai_pmh';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Creative Work  OAI-PMH';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'uri';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'uri';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['label'] = '';
  $handler->display->display_options['fields']['base_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_url']['show_link'] = 0;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => '',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => '',
    'link_target' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[base_url]/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'source-database';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'http://cellproject.net/authorities/source-database';
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'ELMCIP';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'ELMCIP';
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'local';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'local';
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = TRUE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'creator url';
  $handler->display->display_options['fields']['field_author_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['alter']['text'] = 'http://beta.elmcip.net/node/[field_author_name-target_id]';
  $handler->display->display_options['fields']['field_author_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'creator title';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'marcrelator';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'marcrelator';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'code';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = 'code';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_2']['id'] = 'field_author_name_2';
  $handler->display->display_options['fields']['field_author_name_2']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_2']['label'] = 'art';
  $handler->display->display_options['fields']['field_author_name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author_name_2']['alter']['text'] = 'art';
  $handler->display->display_options['fields']['field_author_name_2']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_2']['delta_offset'] = '0';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_contributor']['id'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['label'] = 'creator url';
  $handler->display->display_options['fields']['field_contributor']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contributor']['alter']['text'] = 'http://beta.elmcip.net/node/[field_contributor-target_id]';
  $handler->display->display_options['fields']['field_contributor']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_contributor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contributor']['delta_offset'] = '0';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_contributor_1']['id'] = 'field_contributor_1';
  $handler->display->display_options['fields']['field_contributor_1']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['label'] = 'creator title';
  $handler->display->display_options['fields']['field_contributor_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contributor_1']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['label'] = 'marcrelator';
  $handler->display->display_options['fields']['nothing_7']['alter']['text'] = 'marcrelator';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['label'] = 'code';
  $handler->display->display_options['fields']['nothing_8']['alter']['text'] = 'code';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_contributor_2']['id'] = 'field_contributor_2';
  $handler->display->display_options['fields']['field_contributor_2']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor_2']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor_2']['label'] = 'ctb';
  $handler->display->display_options['fields']['field_contributor_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contributor_2']['alter']['text'] = 'ctb';
  $handler->display->display_options['fields']['field_contributor_2']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_contributor_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contributor_2']['delta_offset'] = '0';
  /* Field: Content: Translator */
  $handler->display->display_options['fields']['field_translator']['id'] = 'field_translator';
  $handler->display->display_options['fields']['field_translator']['table'] = 'field_data_field_translator';
  $handler->display->display_options['fields']['field_translator']['field'] = 'field_translator';
  $handler->display->display_options['fields']['field_translator']['label'] = 'creator url';
  $handler->display->display_options['fields']['field_translator']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_translator']['alter']['text'] = 'http://beta.elmcip.net/node/[field_translator-target_id]';
  $handler->display->display_options['fields']['field_translator']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_translator']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_translator']['delta_offset'] = '0';
  /* Field: Content: Translator */
  $handler->display->display_options['fields']['field_translator_1']['id'] = 'field_translator_1';
  $handler->display->display_options['fields']['field_translator_1']['table'] = 'field_data_field_translator';
  $handler->display->display_options['fields']['field_translator_1']['field'] = 'field_translator';
  $handler->display->display_options['fields']['field_translator_1']['label'] = 'creator title';
  $handler->display->display_options['fields']['field_translator_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_translator_1']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_9']['id'] = 'nothing_9';
  $handler->display->display_options['fields']['nothing_9']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_9']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_9']['label'] = 'marcrelator';
  $handler->display->display_options['fields']['nothing_9']['alter']['text'] = 'marcrelator';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_10']['id'] = 'nothing_10';
  $handler->display->display_options['fields']['nothing_10']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_10']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_10']['label'] = 'code';
  $handler->display->display_options['fields']['nothing_10']['alter']['text'] = 'code';
  /* Field: Content: Translator */
  $handler->display->display_options['fields']['field_translator_2']['id'] = 'field_translator_2';
  $handler->display->display_options['fields']['field_translator_2']['table'] = 'field_data_field_translator';
  $handler->display->display_options['fields']['field_translator_2']['field'] = 'field_translator';
  $handler->display->display_options['fields']['field_translator_2']['label'] = 'trl';
  $handler->display->display_options['fields']['field_translator_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_translator_2']['alter']['text'] = 'trl';
  $handler->display->display_options['fields']['field_translator_2']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_translator_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_translator_2']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'w3cdtf';
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = 'w3cdtf';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_work_year']['id'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['table'] = 'field_data_field_work_year';
  $handler->display->display_options['fields']['field_work_year']['field'] = 'field_work_year';
  $handler->display->display_options['fields']['field_work_year']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_work_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_11']['id'] = 'nothing_11';
  $handler->display->display_options['fields']['nothing_11']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_11']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_11']['label'] = 'rfc3066';
  $handler->display->display_options['fields']['nothing_11']['alter']['text'] = 'rfc3066';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['label'] = '';
  $handler->display->display_options['fields']['field_language_tax']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['label'] = 'Publisher(s)';
  $handler->display->display_options['fields']['field_node_ref']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_1']['id'] = 'field_node_ref_1';
  $handler->display->display_options['fields']['field_node_ref_1']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_1']['label'] = 'Publisher(s) URI';
  $handler->display->display_options['fields']['field_node_ref_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_node_ref_1']['alter']['text'] = 'http://beta.elmcip.net/node/[field_node_ref_1-target_id] ';
  $handler->display->display_options['fields']['field_node_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_1']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref_2']['id'] = 'field_node_ref_2';
  $handler->display->display_options['fields']['field_node_ref_2']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_2']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref_2']['label'] = 'Publisher(s)';
  $handler->display->display_options['fields']['field_node_ref_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref_2']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author(s) of the source entry';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Archive URL */
  $handler->display->display_options['fields']['field_archiveurl']['id'] = 'field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl']['table'] = 'field_data_field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl']['field'] = 'field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl']['label'] = 'Work URL';
  $handler->display->display_options['fields']['field_archiveurl']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archiveurl']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_archiveurl']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_archiveurl']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_archiveurl']['delta_offset'] = '0';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_textfield']['id'] = 'field_textfield';
  $handler->display->display_options['fields']['field_textfield']['table'] = 'field_data_field_textfield';
  $handler->display->display_options['fields']['field_textfield']['field'] = 'field_textfield';
  $handler->display->display_options['fields']['field_textfield']['label'] = '';
  $handler->display->display_options['fields']['field_textfield']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_textfield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_textfield']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_textfield']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_13']['id'] = 'nothing_13';
  $handler->display->display_options['fields']['nothing_13']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_13']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_13']['label'] = 'iso8601';
  $handler->display->display_options['fields']['nothing_13']['alter']['text'] = 'iso8601';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Source entry creation date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_14']['id'] = 'nothing_14';
  $handler->display->display_options['fields']['nothing_14']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_14']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_14']['label'] = 'iso8601';
  $handler->display->display_options['fields']['nothing_14']['alter']['text'] = 'iso8601';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Source entry change date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_12']['id'] = 'nothing_12';
  $handler->display->display_options['fields']['nothing_12']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_12']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_12']['label'] = 'rfc3066';
  $handler->display->display_options['fields']['nothing_12']['alter']['text'] = 'rfc3066';
  /* Field: Content: Language of abstract (Taxonomy) */
  $handler->display->display_options['fields']['field_abstract_lang_tax']['id'] = 'field_abstract_lang_tax';
  $handler->display->display_options['fields']['field_abstract_lang_tax']['table'] = 'field_data_field_abstract_lang_tax';
  $handler->display->display_options['fields']['field_abstract_lang_tax']['field'] = 'field_abstract_lang_tax';
  $handler->display->display_options['fields']['field_abstract_lang_tax']['label'] = '';
  $handler->display->display_options['fields']['field_abstract_lang_tax']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_abstract_lang_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_abstract_lang_tax']['type'] = 'ds_taxonomy_view_mode';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );

  /* Display: OAI-PMH */
  $handler = $view->new_display('views_oai_pmh', 'OAI-PMH', 'views_oai_pmh_1');
  $handler->display->display_options['style_plugin'] = 'views_oai_pmh_style';
  $handler->display->display_options['style_options']['enabled_formats'] = array(
    'oai_dc' => 'oai_dc',
    'mods' => 'mods',
    'oai_etdms' => 0,
    'oai_ilox' => 0,
    'oai_lom' => 0,
    'oai_lre' => 0,
  );
  $handler->display->display_options['style_options']['field_mappings'] = array(
    'oai_dc' => array(
      'nothing' => 'none',
      'base_url' => 'none',
      'nid' => 'dc:identifier',
      'nothing_1' => 'none',
      'nothing_2' => 'none',
      'title' => 'dc:title',
      'nothing_3' => 'none',
      'field_author_name' => 'none',
      'field_author_name_1' => 'dc:creator',
      'nothing_4' => 'none',
      'nothing_5' => 'none',
      'field_author_name_2' => 'none',
      'field_contributor' => 'none',
      'field_contributor_1' => 'none',
      'nothing_7' => 'none',
      'nothing_8' => 'none',
      'field_contributor_2' => 'none',
      'field_translator' => 'none',
      'field_translator_1' => 'none',
      'nothing_9' => 'none',
      'nothing_10' => 'none',
      'field_translator_2' => 'none',
      'nothing_6' => 'none',
      'field_work_year' => 'dc:date',
      'nothing_11' => 'none',
      'field_language_tax' => 'dc:language',
      'field_node_ref' => 'none',
      'field_node_ref_1' => 'none',
      'field_node_ref_2' => 'none',
      'name' => 'none',
      'field_archiveurl' => 'dc:relation',
      'field_textfield' => 'dc:description',
      'nothing_13' => 'none',
      'created' => 'none',
      'nothing_14' => 'none',
      'changed' => 'none',
      'nothing_12' => 'none',
      'field_abstract_lang_tax' => 'none',
    ),
    'oai_etdms' => array(
      'nothing' => 'none',
      'base_url' => 'none',
      'nid' => 'none',
      'nothing_1' => 'none',
      'nothing_2' => 'none',
      'title' => 'none',
      'nothing_3' => 'none',
      'field_author_name' => 'none',
      'field_author_name_1' => 'none',
      'nothing_4' => 'none',
      'nothing_5' => 'none',
      'field_author_name_2' => 'none',
      'field_contributor' => 'none',
      'field_contributor_1' => 'none',
      'nothing_7' => 'none',
      'nothing_8' => 'none',
      'field_contributor_2' => 'none',
      'field_translator' => 'none',
      'field_translator_1' => 'none',
      'nothing_9' => 'none',
      'nothing_10' => 'none',
      'field_translator_2' => 'none',
      'nothing_6' => 'none',
      'field_work_year' => 'none',
      'nothing_11' => 'none',
      'field_language_tax' => 'none',
      'field_node_ref' => 'none',
      'field_node_ref_1' => 'none',
      'field_node_ref_2' => 'none',
      'name' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'nothing_13' => 'none',
      'created' => 'none',
      'nothing_14' => 'none',
      'changed' => 'none',
      'nothing_12' => 'none',
      'field_abstract_lang_tax' => 'none',
    ),
    'oai_ilox' => array(
      'nothing' => 'none',
      'base_url' => 'none',
      'nid' => 'none',
      'nothing_1' => 'none',
      'nothing_2' => 'none',
      'title' => 'none',
      'nothing_3' => 'none',
      'field_author_name' => 'none',
      'field_author_name_1' => 'none',
      'nothing_4' => 'none',
      'nothing_5' => 'none',
      'field_author_name_2' => 'none',
      'field_contributor' => 'none',
      'field_contributor_1' => 'none',
      'nothing_7' => 'none',
      'nothing_8' => 'none',
      'field_contributor_2' => 'none',
      'field_translator' => 'none',
      'field_translator_1' => 'none',
      'nothing_9' => 'none',
      'nothing_10' => 'none',
      'field_translator_2' => 'none',
      'nothing_6' => 'none',
      'field_work_year' => 'none',
      'nothing_11' => 'none',
      'field_language_tax' => 'none',
      'field_node_ref' => 'none',
      'field_node_ref_1' => 'none',
      'field_node_ref_2' => 'none',
      'name' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'nothing_13' => 'none',
      'created' => 'none',
      'nothing_14' => 'none',
      'changed' => 'none',
      'nothing_12' => 'none',
      'field_abstract_lang_tax' => 'none',
    ),
    'oai_lom' => array(
      'nothing' => 'none',
      'base_url' => 'none',
      'nid' => 'none',
      'nothing_1' => 'none',
      'nothing_2' => 'none',
      'title' => 'none',
      'nothing_3' => 'none',
      'field_author_name' => 'none',
      'field_author_name_1' => 'none',
      'nothing_4' => 'none',
      'nothing_5' => 'none',
      'field_author_name_2' => 'none',
      'field_contributor' => 'none',
      'field_contributor_1' => 'none',
      'nothing_7' => 'none',
      'nothing_8' => 'none',
      'field_contributor_2' => 'none',
      'field_translator' => 'none',
      'field_translator_1' => 'none',
      'nothing_9' => 'none',
      'nothing_10' => 'none',
      'field_translator_2' => 'none',
      'nothing_6' => 'none',
      'field_work_year' => 'none',
      'nothing_11' => 'none',
      'field_language_tax' => 'none',
      'field_node_ref' => 'none',
      'field_node_ref_1' => 'none',
      'field_node_ref_2' => 'none',
      'name' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'nothing_13' => 'none',
      'created' => 'none',
      'nothing_14' => 'none',
      'changed' => 'none',
      'nothing_12' => 'none',
      'field_abstract_lang_tax' => 'none',
    ),
    'oai_lre' => array(
      'nothing' => 'none',
      'base_url' => 'none',
      'nid' => 'none',
      'nothing_1' => 'none',
      'nothing_2' => 'none',
      'title' => 'none',
      'nothing_3' => 'none',
      'field_author_name' => 'none',
      'field_author_name_1' => 'none',
      'nothing_4' => 'none',
      'nothing_5' => 'none',
      'field_author_name_2' => 'none',
      'field_contributor' => 'none',
      'field_contributor_1' => 'none',
      'nothing_7' => 'none',
      'nothing_8' => 'none',
      'field_contributor_2' => 'none',
      'field_translator' => 'none',
      'field_translator_1' => 'none',
      'nothing_9' => 'none',
      'nothing_10' => 'none',
      'field_translator_2' => 'none',
      'nothing_6' => 'none',
      'field_work_year' => 'none',
      'nothing_11' => 'none',
      'field_language_tax' => 'none',
      'field_node_ref' => 'none',
      'field_node_ref_1' => 'none',
      'field_node_ref_2' => 'none',
      'name' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'nothing_13' => 'none',
      'created' => 'none',
      'nothing_14' => 'none',
      'changed' => 'none',
      'nothing_12' => 'none',
      'field_abstract_lang_tax' => 'none',
    ),
    'mods' => array(
      'nothing' => '@type',
      'base_url' => 'none',
      'nid' => 'identifier',
      'nothing_1' => '@authorityURI',
      'nothing_2' => 'recordInfo/recordContentSource',
      'title' => 'titleInfo/title',
      'nothing_3' => '@authority',
      'field_author_name' => '@xlink:href',
      'field_author_name_1' => 'name[]/namePart',
      'nothing_4' => '@authority',
      'nothing_5' => '@type',
      'field_author_name_2' => 'name[]/role/roleTerm',
      'field_contributor' => 'none',
      'field_contributor_1' => 'none',
      'nothing_7' => 'none',
      'nothing_8' => 'none',
      'field_contributor_2' => 'none',
      'field_translator' => 'none',
      'field_translator_1' => 'none',
      'nothing_9' => 'none',
      'nothing_10' => 'none',
      'field_translator_2' => 'none',
      'nothing_6' => '@encoding',
      'field_work_year' => 'originInfo/dateIssued',
      'nothing_11' => '@authority',
      'field_language_tax' => 'language[]/languageTerm',
      'field_node_ref' => 'originInfo/publisher',
      'field_node_ref_1' => '@xlink:href',
      'field_node_ref_2' => 'none',
      'name' => 'none',
      'field_archiveurl' => 'location/url',
      'field_textfield' => 'abstract',
      'nothing_13' => '@encoding',
      'created' => 'recordInfo/recordCreationDate',
      'nothing_14' => '@encoding',
      'changed' => 'recordInfo/recordChangeDate',
      'nothing_12' => '@authority',
      'field_abstract_lang_tax' => 'recordInfo/languageOfCataloging/languageTerm',
    ),
  );
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'data/work/oai-pmh';
  $translatables['creative_work_oai_pmh'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('uri'),
    t('[base_url]/node/[nid]'),
    t('source-database'),
    t('http://cellproject.net/authorities/source-database'),
    t('ELMCIP'),
    t('local'),
    t('creator url'),
    t('http://beta.elmcip.net/node/[field_author_name-target_id]'),
    t('creator title'),
    t('marcrelator'),
    t('code'),
    t('art'),
    t('http://beta.elmcip.net/node/[field_contributor-target_id]'),
    t('ctb'),
    t('http://beta.elmcip.net/node/[field_translator-target_id]'),
    t('trl'),
    t('w3cdtf'),
    t('Year'),
    t('rfc3066'),
    t('Publisher(s)'),
    t('Publisher(s) URI'),
    t('http://beta.elmcip.net/node/[field_node_ref_1-target_id] '),
    t('Author(s) of the source entry'),
    t('Work URL'),
    t('iso8601'),
    t('Source entry creation date'),
    t('Source entry change date'),
    t('OAI-PMH'),
  );
  $export['creative_work_oai_pmh'] = $view;

  return $export;
}
