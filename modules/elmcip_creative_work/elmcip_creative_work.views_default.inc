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
  /* Field: Content: Archive URL */
  $handler->display->display_options['fields']['field_archiveurl']['id'] = 'field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl']['table'] = 'field_data_field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl']['field'] = 'field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl']['label'] = '';
  $handler->display->display_options['fields']['field_archiveurl']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archiveurl']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_archiveurl']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_archiveurl']['delta_offset'] = '0';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_textfield']['id'] = 'field_textfield';
  $handler->display->display_options['fields']['field_textfield']['table'] = 'field_data_field_textfield';
  $handler->display->display_options['fields']['field_textfield']['field'] = 'field_textfield';
  $handler->display->display_options['fields']['field_textfield']['label'] = '';
  $handler->display->display_options['fields']['field_textfield']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_textfield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_textfield']['hide_empty'] = TRUE;
  /* Field: Content: Abstract (in original language) */
  $handler->display->display_options['fields']['field_abstract_lang']['id'] = 'field_abstract_lang';
  $handler->display->display_options['fields']['field_abstract_lang']['table'] = 'field_data_field_abstract_lang';
  $handler->display->display_options['fields']['field_abstract_lang']['field'] = 'field_abstract_lang';
  $handler->display->display_options['fields']['field_abstract_lang']['label'] = '';
  $handler->display->display_options['fields']['field_abstract_lang']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_abstract_lang']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_abstract_lang']['hide_empty'] = TRUE;
  /* Field: Content: Electronic Literature Directory entry */
  $handler->display->display_options['fields']['field_electronic_literature_dire']['id'] = 'field_electronic_literature_dire';
  $handler->display->display_options['fields']['field_electronic_literature_dire']['table'] = 'field_data_field_electronic_literature_dire';
  $handler->display->display_options['fields']['field_electronic_literature_dire']['field'] = 'field_electronic_literature_dire';
  $handler->display->display_options['fields']['field_electronic_literature_dire']['label'] = '';
  $handler->display->display_options['fields']['field_electronic_literature_dire']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_electronic_literature_dire']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_electronic_literature_dire']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_electronic_literature_dire']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_electronic_literature_dire']['type'] = 'link_title_plain';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_contributor']['id'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['label'] = '';
  $handler->display->display_options['fields']['field_contributor']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contributor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contributor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_contributor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contributor']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['label'] = '';
  $handler->display->display_options['fields']['field_node_ref']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: Archive URL */
  $handler->display->display_options['fields']['field_archiveurl_1']['id'] = 'field_archiveurl_1';
  $handler->display->display_options['fields']['field_archiveurl_1']['table'] = 'field_data_field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl_1']['field'] = 'field_archiveurl';
  $handler->display->display_options['fields']['field_archiveurl_1']['label'] = '';
  $handler->display->display_options['fields']['field_archiveurl_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archiveurl_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archiveurl_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_archiveurl_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_archiveurl_1']['delta_offset'] = '0';
  /* Field: Content: Download URL */
  $handler->display->display_options['fields']['field_downloadurl']['id'] = 'field_downloadurl';
  $handler->display->display_options['fields']['field_downloadurl']['table'] = 'field_data_field_downloadurl';
  $handler->display->display_options['fields']['field_downloadurl']['field'] = 'field_downloadurl';
  $handler->display->display_options['fields']['field_downloadurl']['label'] = '';
  $handler->display->display_options['fields']['field_downloadurl']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloadurl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadurl']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_downloadurl']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_downloadurl']['type'] = 'link_plain';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['label'] = '';
  $handler->display->display_options['fields']['field_language_tax']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_language_tax']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Translator */
  $handler->display->display_options['fields']['field_translator']['id'] = 'field_translator';
  $handler->display->display_options['fields']['field_translator']['table'] = 'field_data_field_translator';
  $handler->display->display_options['fields']['field_translator']['field'] = 'field_translator';
  $handler->display->display_options['fields']['field_translator']['label'] = '';
  $handler->display->display_options['fields']['field_translator']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_translator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_translator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_translator']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_translator']['delta_offset'] = '0';
  /* Field: Content: Repository */
  $handler->display->display_options['fields']['field_repository']['id'] = 'field_repository';
  $handler->display->display_options['fields']['field_repository']['table'] = 'field_data_field_repository';
  $handler->display->display_options['fields']['field_repository']['field'] = 'field_repository';
  $handler->display->display_options['fields']['field_repository']['label'] = '';
  $handler->display->display_options['fields']['field_repository']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_repository']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_repository']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_repository']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_repository']['type'] = 'link_plain';
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
    'oai_etdms' => 0,
    'oai_ilox' => 0,
    'oai_lom' => 0,
    'oai_lre' => 0,
    'mods' => 0,
  );
  $handler->display->display_options['style_options']['field_mappings'] = array(
    'oai_dc' => array(
      'title' => 'dc:title',
      'field_archiveurl' => 'dc:relation',
      'field_textfield' => 'dc:description',
      'field_abstract_lang' => 'dc:description',
      'field_electronic_literature_dire' => 'dc:relation',
      'field_author_name' => 'dc:creator',
      'field_contributor' => 'dc:contributor',
      'field_node_ref' => 'dc:relation',
      'field_url' => 'dc:relation',
      'field_archiveurl_1' => 'dc:relation',
      'field_downloadurl' => 'dc:relation',
      'field_language_tax' => 'dc:language',
      'field_translator' => 'dc:contributor',
      'field_repository' => 'dc:relation',
    ),
    'oai_etdms' => array(
      'title' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'field_abstract_lang' => 'none',
      'field_electronic_literature_dire' => 'none',
      'field_author_name' => 'none',
      'field_contributor' => 'none',
      'field_node_ref' => 'none',
      'field_url' => 'none',
      'field_archiveurl_1' => 'none',
      'field_downloadurl' => 'none',
      'field_language_tax' => 'none',
      'field_translator' => 'none',
      'field_repository' => 'none',
    ),
    'oai_ilox' => array(
      'title' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'field_abstract_lang' => 'none',
      'field_electronic_literature_dire' => 'none',
      'field_author_name' => 'none',
      'field_contributor' => 'none',
      'field_node_ref' => 'none',
      'field_url' => 'none',
      'field_archiveurl_1' => 'none',
      'field_downloadurl' => 'none',
      'field_language_tax' => 'none',
      'field_translator' => 'none',
      'field_repository' => 'none',
    ),
    'oai_lom' => array(
      'title' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'field_abstract_lang' => 'none',
      'field_electronic_literature_dire' => 'none',
      'field_author_name' => 'none',
      'field_contributor' => 'none',
      'field_node_ref' => 'none',
      'field_url' => 'none',
      'field_archiveurl_1' => 'none',
      'field_downloadurl' => 'none',
      'field_language_tax' => 'none',
      'field_translator' => 'none',
      'field_repository' => 'none',
    ),
    'oai_lre' => array(
      'title' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'field_abstract_lang' => 'none',
      'field_electronic_literature_dire' => 'none',
      'field_author_name' => 'none',
      'field_contributor' => 'none',
      'field_node_ref' => 'none',
      'field_url' => 'none',
      'field_archiveurl_1' => 'none',
      'field_downloadurl' => 'none',
      'field_language_tax' => 'none',
      'field_translator' => 'none',
      'field_repository' => 'none',
    ),
    'mods' => array(
      'title' => 'none',
      'field_archiveurl' => 'none',
      'field_textfield' => 'none',
      'field_abstract_lang' => 'none',
      'field_electronic_literature_dire' => 'none',
      'field_author_name' => 'none',
      'field_contributor' => 'none',
      'field_node_ref' => 'none',
      'field_url' => 'none',
      'field_archiveurl_1' => 'none',
      'field_downloadurl' => 'none',
      'field_language_tax' => 'none',
      'field_translator' => 'none',
      'field_repository' => 'none',
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
    t('OAI-PMH'),
    t('ELMCIP'),
  );
  $export['creative_work_oai_pmh'] = $view;

  return $export;
}
