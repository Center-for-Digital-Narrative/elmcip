<?php
/**
 * @file
 * elmcip_platform.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elmcip_platform_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'platform';
  $view->description = 'Critical Writing views on work nodes';
  $view->tag = 'Critical Writing, Page, Block, Front, data export';
  $view->base_table = 'node';
  $view->human_name = 'Platform';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Platform/Software';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all critical writing';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'field_last_name_value' => 'field_last_name_value',
    'field_pubtype_value' => 'field_pubtype_value',
    'field_number_value' => 'field_number_value',
    'title_2' => 'title_2',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name_value';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_last_name_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_pubtype_value' => array(
      'separator' => '',
    ),
    'field_number_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title_2' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'platform_software' => 'platform_software',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language (field_language_tax) */
  $handler->display->display_options['filters']['field_language_tax_tid']['id'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['filters']['field_language_tax_tid']['field'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_language_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['operator_id'] = 'field_language_tax_tid_op';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['operator'] = 'field_language_tax_tid_op';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['identifier'] = 'field_language_tax_tid';
  $handler->display->display_options['filters']['field_language_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_language_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_language_tax_tid']['vocabulary'] = 'language';
  /* Filter criterion: Content: Year (field_number) */
  $handler->display->display_options['filters']['field_number_value']['id'] = 'field_number_value';
  $handler->display->display_options['filters']['field_number_value']['table'] = 'field_data_field_number';
  $handler->display->display_options['filters']['field_number_value']['field'] = 'field_number_value';
  $handler->display->display_options['filters']['field_number_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_number_value']['expose']['operator_id'] = 'field_number_value_op';
  $handler->display->display_options['filters']['field_number_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_number_value']['expose']['operator'] = 'field_number_value_op';
  $handler->display->display_options['filters']['field_number_value']['expose']['identifier'] = 'field_number_value';
  $handler->display->display_options['filters']['field_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Publication Type (field_pubtype_tax) */
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['id'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['field'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['operator_id'] = 'field_pubtype_tax_tid_op';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['label'] = 'Publication Type';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['operator'] = 'field_pubtype_tax_tid_op';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['identifier'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['vocabulary'] = 'publication_type';

  /* Display: Export preview */
  $handler = $view->new_display('page', 'Export preview', 'page_1');
  $handler->display->display_options['display_description'] = 'Preview of data export';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_author_name' => 'field_author_name',
    'field_pubtype' => 'field_pubtype',
    'field_inbook' => 'field_inbook',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_author_name' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_pubtype' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_inbook' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'data/platform';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Critical Writing Data';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%exposed_%view.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_author_name_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook_1']['id'] = 'field_inbook_1';
  $handler->display->display_options['fields']['field_inbook_1']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook_1']['field'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook_1']['label'] = 'Journal NID';
  $handler->display->display_options['fields']['field_inbook_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_inbook_1']['alter']['text'] = '[field_inbook_1-nid]';
  $handler->display->display_options['fields']['field_inbook_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_inbook_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'data/platform/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_pubtype_tax']['id'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['field'] = 'field_pubtype_tax';
  $handler->display->display_options['fields']['field_pubtype_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pubtype_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Appears in */
  $handler->display->display_options['fields']['field_inbook']['id'] = 'field_inbook';
  $handler->display->display_options['fields']['field_inbook']['table'] = 'field_data_field_inbook';
  $handler->display->display_options['fields']['field_inbook']['field'] = 'field_inbook';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'platform_software' => 'platform_software',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Platform/Software';
  $handler->display->display_options['pane_description'] = 'Used on KB front page';
  $translatables['platform'] = array(
    t('Defaults'),
    t('Platform/Software'),
    t('See all critical writing'),
    t('Filter'),
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
    t('@total records'),
    t('Add new <a href="/node/add/critical-writing" target="_blank">critical writing</a>.'),
    t('Title'),
    t('Nid'),
    t('Author'),
    t('Publication Type'),
    t('Year'),
    t('Appears in'),
    t('Updated'),
    t('Language'),
    t('Export preview'),
    t('Preview of data export'),
    t('more'),
    t('Data export'),
    t('Author ID'),
    t('Journal NID'),
    t('[field_inbook_1-nid]'),
    t('Content pane'),
    t('Used on KB front page'),
    t('View panes'),
  );
  $export['platform'] = $view;

  return $export;
}
