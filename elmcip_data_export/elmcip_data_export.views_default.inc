<?php
/**
 * @file
 * elmcip_data_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elmcip_data_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'author_data_export';
  $view->description = 'Author data export';
  $view->tag = 'data export, Person';
  $view->base_table = 'node';
  $view->human_name = 'Data Export Author records';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Authors';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all creative works';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'field_last_name' => 'field_last_name',
    'field_number' => 'field_number',
    'changed' => 'changed',
    'term_node_tid' => 'term_node_tid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_number' => array(
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
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work">creative work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ELMCIP Node ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Person name';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Content: Record Status */
  $handler->display->display_options['fields']['field_record_status_tax']['id'] = 'field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['table'] = 'field_data_field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['field'] = 'field_record_status_tax';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Residency (field_residency) */
  $handler->display->display_options['arguments']['field_residency_lid']['id'] = 'field_residency_lid';
  $handler->display->display_options['arguments']['field_residency_lid']['table'] = 'field_data_field_residency';
  $handler->display->display_options['arguments']['field_residency_lid']['field'] = 'field_residency_lid';
  $handler->display->display_options['arguments']['field_residency_lid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_residency_lid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_residency_lid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_residency_lid']['summary_options']['items_per_page'] = '25';
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
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

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
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'ELMCIP_%view._%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'person-data-export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['author_data_export'] = array(
    t('Defaults'),
    t('Authors'),
    t('See all creative works'),
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
    t('Add a new <a href="/node/add/work">creative work</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.'),
    t('ELMCIP Node ID'),
    t('Person name'),
    t('Country'),
    t('Post date'),
    t('URL'),
    t('Updated date'),
    t('Record Status'),
    t('All'),
    t('Data export'),
    t('more'),
  );
  $export['author_data_export'] = $view;

  $view = new view();
  $view->name = 'author_nid_data';
  $view->description = '';
  $view->tag = 'author, data export';
  $view->base_table = 'node';
  $view->human_name = 'author_NID_data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'author_NID_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_first_name' => 'field_first_name',
    'field_middle_name' => 'field_middle_name',
    'field_last_name' => 'field_last_name',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'path' => 'path',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'http://elmcip.net/node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Node Path';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'http://elmcip.net/node/[nid]';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias Path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = 'http://elmcip.net';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
    'person' => 'person',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'author-nid-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'http://elmcip.net/node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Node Path';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'http://elmcip.net/node/[nid]';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias Path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = 'http://elmcip.net';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['path'] = 'author-nid-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['author_nid_data'] = array(
    t('Master'),
    t('author_NID_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Name'),
    t('First name'),
    t('Middle name'),
    t('Last name'),
    t('Nid'),
    t('Node Path'),
    t('http://elmcip.net/node/[nid]'),
    t('Alias Path'),
    t('Page'),
    t('Data export'),
  );
  $export['author_nid_data'] = $view;

  $view = new view();
  $view->name = 'conference_presentations_data_export';
  $view->description = '';
  $view->tag = 'data export, event';
  $view->base_table = 'node';
  $view->human_name = 'Conference Presentations Data Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conference Presentations Detail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['label'] = 'Author NID';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event_1']['id'] = 'field_node_ref_event_1';
  $handler->display->display_options['fields']['field_node_ref_event_1']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event_1']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event_1']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_event_1']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'critical_writing' => 'critical_writing',
  );
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_nid']['id'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['field'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'conference-presentations-data-export';

  /* Display: Data export -- Author Event Tag */
  $handler = $view->new_display('views_data_export', 'Data export -- Author Event Tag', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'elo-conference-data';

  /* Display: Data export -- Author Event with NIDS */
  $handler = $view->new_display('views_data_export', 'Data export -- Author Event with NIDS', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'conference-critwrit-author-export';
  $translatables['conference_presentations_data_export'] = array(
    t('Master'),
    t('Conference Presentations Detail'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Author'),
    t('Author NID'),
    t('Presented at Event'),
    t('Event NID'),
    t('Year'),
    t('Page'),
    t('Data export -- Author Event Tag'),
    t('Data export -- Author Event with NIDS'),
  );
  $export['conference_presentations_data_export'] = $view;

  $view = new view();
  $view->name = 'critical_writing_nid_event';
  $view->description = '';
  $view->tag = 'critical writing, data export';
  $view->base_table = 'node';
  $view->human_name = 'critical_writing_NID_event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'cw_NID_event_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_author_name']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
    'critical_writing' => 'critical_writing',
  );
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_nid']['id'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['field'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'criticalwriting_nid-event-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'criticalwritingnid_event_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['critical_writing_nid_event'] = array(
    t('Master'),
    t('cw_NID_event_data'),
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
    t('Nid'),
    t('Event NID'),
    t('Author'),
    t('Title'),
    t('Page'),
    t('Data export'),
  );
  $export['critical_writing_nid_event'] = $view;

  $view = new view();
  $view->name = 'event_nid_data';
  $view->description = '';
  $view->tag = 'author, data export';
  $view->base_table = 'node';
  $view->human_name = 'event_NID_data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'event_NID_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'event-nid-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'event-nid-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['event_nid_data'] = array(
    t('Master'),
    t('event_NID_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Event Name'),
    t('Nid'),
    t('Page'),
    t('Data export'),
  );
  $export['event_nid_data'] = $view;

  $view = new view();
  $view->name = 'node_date_nid';
  $view->description = '';
  $view->tag = 'data export, nodes';
  $view->base_table = 'node';
  $view->human_name = 'Nodes -- creation date -- nid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nodes -- creation date -- nid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'created' => 'created',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Label';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Id';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'start';
  $handler->display->display_options['fields']['created']['date_format'] = 'iso';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'critical_writing' => 'critical_writing',
    'databases_and_archives' => 'databases_and_archives',
    'event' => 'event',
    'organization' => 'organization',
    'person' => 'person',
    'publisher' => 'publisher',
    'research_collection' => 'research_collection',
    'teaching_resource' => 'teaching_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node_date_id';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'node_date_nid_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['node_date_nid'] = array(
    t('Master'),
    t('Nodes -- creation date -- nid'),
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
    t('Label'),
    t('Id'),
    t('start'),
    t('Type'),
    t('Page'),
    t('Data export'),
  );
  $export['node_date_nid'] = $view;

  $view = new view();
  $view->name = 'timeline_data_export_all_works';
  $view->description = 'Work';
  $view->tag = 'data export, Work';
  $view->base_table = 'node';
  $view->human_name = 'Timeline data export all works';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative Works';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all creative works';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'field_last_name' => 'field_last_name',
    'field_number' => 'field_number',
    'changed' => 'changed',
    'term_node_tid' => 'term_node_tid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_number' => array(
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
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work">creative work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Author (field_author_name) */
  $handler->display->display_options['relationships']['field_author_name_nid']['id'] = 'field_author_name_nid';
  $handler->display->display_options['relationships']['field_author_name_nid']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['relationships']['field_author_name_nid']['field'] = 'field_author_name_nid';
  $handler->display->display_options['relationships']['field_author_name_nid']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Nid Link';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'http://elmcip.net/node/[nid]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = 'Work URL';
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_url']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Tags';
  $handler->display->display_options['fields']['term_node_tid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
    'vocabulary_2' => 0,
    'vocabulary_5' => 0,
    'language' => 0,
    'publication_type' => 0,
    'publication_venue' => 0,
    'record_status' => 0,
    'vocabulary_4' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'work-data-export-timeline';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $translatables['timeline_data_export_all_works'] = array(
    t('Defaults'),
    t('Creative Works'),
    t('See all creative works'),
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
    t('Add a new <a href="/node/add/work">creative work</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.'),
    t('field_author_name'),
    t('Nid'),
    t('Nid Link'),
    t('http://elmcip.net/node/[nid]'),
    t('Title'),
    t('Author'),
    t('Year'),
    t('Work URL'),
    t('Tags'),
    t('Data export'),
    t('more'),
  );
  $export['timeline_data_export_all_works'] = $view;

  $view = new view();
  $view->name = 'work_data_export';
  $view->description = 'Work';
  $view->tag = 'data export, Work';
  $view->base_table = 'node';
  $view->human_name = 'Data export all works';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Creative Works';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all creative works';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'field_last_name' => 'field_last_name',
    'field_number' => 'field_number',
    'changed' => 'changed',
    'term_node_tid' => 'term_node_tid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_number' => array(
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
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = 'Add a new <a href="/node/add/work">creative work</a>.';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Author (field_author_name) */
  $handler->display->display_options['relationships']['field_author_name_nid']['id'] = 'field_author_name_nid';
  $handler->display->display_options['relationships']['field_author_name_nid']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['relationships']['field_author_name_nid']['field'] = 'field_author_name_nid';
  $handler->display->display_options['relationships']['field_author_name_nid']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ELMCIP Node ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_contributor']['id'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_contributor']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_contributor']['delta_offset'] = '0';
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_venue_tax']['id'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['table'] = 'field_data_field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['field'] = 'field_venue_tax';
  $handler->display->display_options['fields']['field_venue_tax']['label'] = 'Publication Venue';
  $handler->display->display_options['fields']['field_venue_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_venue_tax']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_venue_tax']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_node_ref']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language_tax']['id'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['table'] = 'field_data_field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['field'] = 'field_language_tax';
  $handler->display->display_options['fields']['field_language_tax']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_language_tax']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language_tax']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_url']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Tags';
  $handler->display->display_options['fields']['term_node_tid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
    'vocabulary_2' => 0,
    'vocabulary_5' => 0,
    'language' => 0,
    'publication_type' => 0,
    'publication_venue' => 0,
    'record_status' => 0,
    'vocabulary_4' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Content: Record Status */
  $handler->display->display_options['fields']['field_record_status_tax']['id'] = 'field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['table'] = 'field_data_field_record_status_tax';
  $handler->display->display_options['fields']['field_record_status_tax']['field'] = 'field_record_status_tax';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'work-data-export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $translatables['work_data_export'] = array(
    t('Defaults'),
    t('Creative Works'),
    t('See all creative works'),
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
    t('Add a new <a href="/node/add/work">creative work</a>.'),
    t('The site contain not any content of this type. Be the first to <a href="/node/add/work">add new</a> work content.'),
    t('field_author_name'),
    t('ELMCIP Node ID'),
    t('Title'),
    t('Author'),
    t('Contributor'),
    t('Publication Venue'),
    t('Publisher'),
    t('Language'),
    t('Year'),
    t('URL'),
    t('Tags'),
    t('Post date'),
    t('Updated date'),
    t('Record Status'),
    t('Data export'),
    t('more'),
  );
  $export['work_data_export'] = $view;

  $view = new view();
  $view->name = 'work_nid_data';
  $view->description = '';
  $view->tag = 'work, data export';
  $view->base_table = 'node';
  $view->human_name = 'work_NID_data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'work_NID_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
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
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'work-nid-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_tr_year']['id'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['table'] = 'field_data_field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['field'] = 'field_tr_year';
  $handler->display->display_options['fields']['field_tr_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tr_year']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_tr_year']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'work-nid-year-authorid-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Data export 2 */
  $handler = $view->new_display('views_data_export', 'Data export 2', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name_1']['id'] = 'field_author_name_1';
  $handler->display->display_options['fields']['field_author_name_1']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name_1']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_author_name_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name_1']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author ID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
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
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_number_1']['id'] = 'field_number_1';
  $handler->display->display_options['fields']['field_number_1']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number_1']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number_1']['label'] = 'Year ID';
  $handler->display->display_options['fields']['field_number_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_number_1']['alter']['text'] = '3000[field_number]';
  $handler->display->display_options['fields']['field_number_1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_number_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'work_nid_auth_tags';
  $handler->display->display_options['use_batch'] = 'batch';
  $translatables['work_nid_data'] = array(
    t('Master'),
    t('work_NID_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Name'),
    t('Nid'),
    t('Author'),
    t('Author ID'),
    t('Tags'),
    t('Tag ID'),
    t('2000[taxonomy_vocabulary_1_1-tid]'),
    t('Year'),
    t('Page'),
    t('Data export'),
    t('Data export 2'),
    t('Year ID'),
    t('3000[field_number]'),
  );
  $export['work_nid_data'] = $view;

  $view = new view();
  $view->name = 'work_nid_event';
  $view->description = '';
  $view->tag = 'work, data export';
  $view->base_table = 'node';
  $view->human_name = 'work_NID_event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'work_NID_event_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_nid']['id'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['field'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'work-nid-event-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'work-nid-event-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['work_nid_event'] = array(
    t('Master'),
    t('work_NID_event_data'),
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
    t('Nid'),
    t('Event NID'),
    t('Page'),
    t('Data export'),
    t('Title'),
  );
  $export['work_nid_event'] = $view;

  $view = new view();
  $view->name = 'workauthor_nid_event';
  $view->description = '';
  $view->tag = 'work, data export';
  $view->base_table = 'node';
  $view->human_name = 'workauthor_NID_event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'workauthor_NID_event_data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author NID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
  /* Filter criterion: Content: Presented at Event (field_node_ref_event) */
  $handler->display->display_options['filters']['field_node_ref_event_nid']['id'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['field'] = 'field_node_ref_event_nid';
  $handler->display->display_options['filters']['field_node_ref_event_nid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'workauthor-nid-event-page';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_name']['id'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['table'] = 'field_data_field_author_name';
  $handler->display->display_options['fields']['field_author_name']['field'] = 'field_author_name';
  $handler->display->display_options['fields']['field_author_name']['label'] = 'Author NID';
  $handler->display->display_options['fields']['field_author_name']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_author_name']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_author_name']['delta_offset'] = '0';
  /* Field: Content: Presented at Event */
  $handler->display->display_options['fields']['field_node_ref_event']['id'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['table'] = 'field_data_field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['field'] = 'field_node_ref_event';
  $handler->display->display_options['fields']['field_node_ref_event']['label'] = 'Event NID';
  $handler->display->display_options['fields']['field_node_ref_event']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_event']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref_event']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'workauthor_event_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['workauthor_nid_event'] = array(
    t('Master'),
    t('workauthor_NID_event_data'),
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
    t('Event NID'),
    t('Author NID'),
    t('Title'),
    t('Page'),
    t('Data export'),
  );
  $export['workauthor_nid_event'] = $view;

  $view = new view();
  $view->name = 'works_multiple_refs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'works_multiple_refs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'works_multiple_refs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Creative Works referenced (field_node_ref_work) - reverse */
  $handler->display->display_options['relationships']['reverse_field_node_ref_work_node']['id'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['relationships']['reverse_field_node_ref_work_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_node_ref_work_node']['field'] = 'reverse_field_node_ref_work_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Crit Writing Nid';
  /* Field: Content: Creative Works referenced */
  $handler->display->display_options['fields']['field_node_ref_work']['id'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['table'] = 'field_data_field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['field'] = 'field_node_ref_work';
  $handler->display->display_options['fields']['field_node_ref_work']['relationship'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['fields']['field_node_ref_work']['label'] = 'Other Creative Works referenced';
  $handler->display->display_options['fields']['field_node_ref_work']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_node_ref_work']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_node_ref_work_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'works-multiple-refs';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['path'] = 'works_referred_to_data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['works_multiple_refs'] = array(
    t('Master'),
    t('works_multiple_refs'),
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
    t('field_node_ref_work'),
    t('Nid'),
    t('Crit Writing Nid'),
    t('Other Creative Works referenced'),
    t('All'),
    t('Page'),
    t('Data export'),
  );
  $export['works_multiple_refs'] = $view;

  return $export;
}
