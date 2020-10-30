<?php

/**
 * @file
 * elmcip_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elmcip_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flagged_librarian';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flagged_librarian';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library approved records';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'flagged' => 'flagged',
    'edit_node' => 'edit_node',
    'field_record_status_lib' => 'field_record_status_lib',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'flagged' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_record_status_lib' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No records found.';
  $handler->display->display_options['empty']['area']['format'] = 'basic_text_editor';
  /* Relationship: Flags: librarian_approved */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'librarian_approved';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Content: Librarian status */
  $handler->display->display_options['fields']['field_record_status_lib']['id'] = 'field_record_status_lib';
  $handler->display->display_options['fields']['field_record_status_lib']['table'] = 'field_data_field_record_status_lib';
  $handler->display->display_options['fields']['field_record_status_lib']['field'] = 'field_record_status_lib';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'work' => 'work',
    'critical_writing' => 'critical_writing',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Record type';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
    2 => '2',
    7 => 0,
    3 => 0,
    1 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Publication Type (field_pubtype_tax) */
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['id'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['table'] = 'field_data_field_pubtype_tax';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['field'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['operator_id'] = 'field_pubtype_tax_tid_op';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['label'] = 'Publication Type';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['operator'] = 'field_pubtype_tax_tid_op';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['identifier'] = 'field_pubtype_tax_tid';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pubtype_tax_tid']['vocabulary'] = 'publication_type';
  /* Filter criterion: Content: Librarian status (field_record_status_lib) */
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['id'] = 'field_record_status_lib_value_1';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['table'] = 'field_data_field_record_status_lib';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['field'] = 'field_record_status_lib_value';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['expose']['operator_id'] = 'field_record_status_lib_value_1_op';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['expose']['label'] = 'Got a librarian status';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['expose']['operator'] = 'field_record_status_lib_value_1_op';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['expose']['identifier'] = 'field_record_status_lib_value_1';
  $handler->display->display_options['filters']['field_record_status_lib_value_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Librarian status (field_record_status_lib) */
  $handler->display->display_options['filters']['field_record_status_lib_value']['id'] = 'field_record_status_lib_value';
  $handler->display->display_options['filters']['field_record_status_lib_value']['table'] = 'field_data_field_record_status_lib';
  $handler->display->display_options['filters']['field_record_status_lib_value']['field'] = 'field_record_status_lib_value';
  $handler->display->display_options['filters']['field_record_status_lib_value']['group'] = 1;
  $handler->display->display_options['filters']['field_record_status_lib_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_status_lib_value']['expose']['operator_id'] = 'field_record_status_lib_value_op';
  $handler->display->display_options['filters']['field_record_status_lib_value']['expose']['label'] = 'Librarian status';
  $handler->display->display_options['filters']['field_record_status_lib_value']['expose']['operator'] = 'field_record_status_lib_value_op';
  $handler->display->display_options['filters']['field_record_status_lib_value']['expose']['identifier'] = 'field_record_status_lib_value';
  $handler->display->display_options['filters']['field_record_status_lib_value']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'knowledgebase/library_status';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Library approved';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['flagged_librarian'] = array(
    t('Master'),
    t('Library approved records'),
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
    t('Displaying @start - @end of @total'),
    t('No records found.'),
    t('flag'),
    t('Title'),
    t('Updated'),
    t('Librarian status'),
    t('Record type'),
    t('Publication Type'),
    t('Got a librarian status'),
    t('Page'),
  );
  $export['flagged_librarian'] = $view;

  return $export;
}
