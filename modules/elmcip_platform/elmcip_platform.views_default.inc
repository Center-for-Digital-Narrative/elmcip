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
  $view->description = 'Platform KB Front page and Data Export View';
  $view->tag = 'Platform, Front page, Data Export';
  $view->base_table = 'node';
  $view->human_name = 'Platform KB Front';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Platform/Software';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all Platform/Software';
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
  $handler->display->display_options['header']['result']['label'] = 'Total number of records';
  $handler->display->display_options['header']['result']['content'] = '@total records';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['label'] = 'Add new';
  $handler->display->display_options['footer']['text']['content'] = 'Add new <a href="/node/add/platform-software" target="_blank">platform/software</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Publisher or organization */
  $handler->display->display_options['fields']['field_publisher_or_organization']['id'] = 'field_publisher_or_organization';
  $handler->display->display_options['fields']['field_publisher_or_organization']['table'] = 'field_data_field_publisher_or_organization';
  $handler->display->display_options['fields']['field_publisher_or_organization']['field'] = 'field_publisher_or_organization';
  $handler->display->display_options['fields']['field_publisher_or_organization']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_publisher_or_organization']['delta_offset'] = '0';
  /* Field: Content: Developers */
  $handler->display->display_options['fields']['field_platform_developers']['id'] = 'field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['table'] = 'field_data_field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['field'] = 'field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_platform_developers']['delta_offset'] = '0';
  /* Field: Content: Year initiated */
  $handler->display->display_options['fields']['field_platform_year']['id'] = 'field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['table'] = 'field_data_field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['field'] = 'field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
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
  /* Field: Content: Publisher or organization */
  $handler->display->display_options['fields']['field_publisher_or_organization']['id'] = 'field_publisher_or_organization';
  $handler->display->display_options['fields']['field_publisher_or_organization']['table'] = 'field_data_field_publisher_or_organization';
  $handler->display->display_options['fields']['field_publisher_or_organization']['field'] = 'field_publisher_or_organization';
  $handler->display->display_options['fields']['field_publisher_or_organization']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_publisher_or_organization']['delta_offset'] = '0';
  /* Field: Content: Developers */
  $handler->display->display_options['fields']['field_platform_developers']['id'] = 'field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['table'] = 'field_data_field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['field'] = 'field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_platform_developers']['delta_offset'] = '0';
  /* Field: Content: Year initiated */
  $handler->display->display_options['fields']['field_platform_year']['id'] = 'field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['table'] = 'field_data_field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['field'] = 'field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
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
    t('See all Platform/Software'),
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
    t('Total number of records'),
    t('@total records'),
    t('Add new'),
    t('Add new <a href="/node/add/platform-software" target="_blank">platform/software</a>.'),
    t('Title'),
    t('Nid'),
    t('Publisher or organization'),
    t('Developers'),
    t('Year initiated'),
    t('Updated'),
    t('Export preview'),
    t('Preview of data export'),
    t('more'),
    t('Data export'),
    t('Content pane'),
    t('Used on KB front page'),
    t('View panes'),
  );
  $export['platform'] = $view;

  $view = new view();
  $view->name = 'works_developed_in_this_platform';
  $view->description = 'Work records viewed on Platform node';
  $view->tag = 'Work, Platform';
  $view->base_table = 'node';
  $view->human_name = 'Works Developed in this Platform';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Works Developed in this Platform';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_number' => 'field_number',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Creative works in this platform';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work" target="_blank">work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Platform/Software (field_work_platform_software) */
  $handler->display->display_options['arguments']['field_work_platform_software_target_id']['id'] = 'field_work_platform_software_target_id';
  $handler->display->display_options['arguments']['field_work_platform_software_target_id']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['arguments']['field_work_platform_software_target_id']['field'] = 'field_work_platform_software_target_id';
  $handler->display->display_options['arguments']['field_work_platform_software_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_work_platform_software_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_work_platform_software_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_work_platform_software_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work' => 'work',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'platform_software',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Data export - Basic */
  $handler = $view->new_display('views_data_export', 'Data export - Basic', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Data export - Basic';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%1-value_basic.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Creative works in this platform';
  $handler->display->display_options['header']['area']['content'] = 'Works in this platform : %1 ';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
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
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software']['id'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'platform_works_export';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Data export - with Tags */
  $handler = $view->new_display('views_data_export', 'Data export - with Tags', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Data export - with Tags';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%1-value_tags.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Creative works in this platform';
  $handler->display->display_options['header']['area']['content'] = 'Works in this platform : %1 ';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'text';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = TRUE;
  $handler->display->display_options['footer']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Work title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
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
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['id'] = 'taxonomy_vocabulary_1_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['label'] = 'Tag ID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['alter']['text'] = '2000[taxonomy_vocabulary_1_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1_1']['delta_offset'] = '0';
  /* Field: Content: Platform/Software */
  $handler->display->display_options['fields']['field_work_platform_software']['id'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['table'] = 'field_data_field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['field'] = 'field_work_platform_software';
  $handler->display->display_options['fields']['field_work_platform_software']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_work_platform_software']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'platform_works_export_tags';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['works_developed_in_this_platform'] = array(
    t('Defaults'),
    t('Works Developed in this Platform'),
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
    t('Creative works in this platform'),
    t('Add a new <a href="/node/add/work" target="_blank">work</a>.'),
    t('Work title'),
    t('Author'),
    t('Language'),
    t('Year'),
    t('All'),
    t('Entity content'),
    t('Data export - Basic'),
    t('Works in this platform : %1 '),
    t('Nid'),
    t('Author ID'),
    t('Platform/Software'),
    t('Data export - with Tags'),
    t('Tags'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
  );
  $export['works_developed_in_this_platform'] = $view;

  return $export;
}
