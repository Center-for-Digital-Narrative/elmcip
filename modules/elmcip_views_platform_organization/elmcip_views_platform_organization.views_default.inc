<?php
/**
 * @file
 * elmcip_views_platform_organization.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function elmcip_views_platform_organization_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organization_platform';
  $view->description = 'Lists platform information on publisher and organization';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Organization and platform';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Platforms developed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_platform_developers' => 'field_platform_developers',
    'field_platform_year' => 'field_platform_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_platform_developers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_platform_year' => array(
      'sortable' => 0,
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
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Publisher or organization (field_publisher_or_organization) */
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['id'] = 'field_publisher_or_organization_target_id';
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['table'] = 'field_data_field_publisher_or_organization';
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['field'] = 'field_publisher_or_organization_target_id';
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_publisher_or_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Platforms and publishers referenced */
  $handler = $view->new_display('entity_view', 'Platforms and publishers referenced', 'entity_view_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'organization',
    1 => 'publisher',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['organization_platform'] = array(
    t('Defaults'),
    t('Platforms developed'),
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
    t('Title'),
    t('Developers'),
    t('Year initiated'),
    t('All'),
    t('Platforms and publishers referenced'),
  );
  $export['organization_platform'] = $view;

  $view = new view();
  $view->name = 'organization_platform_critical_writing';
  $view->description = 'Lists platform information on critical writing';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Organization and platform';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Platforms referenced';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_platform_developers' => 'field_platform_developers',
    'field_platform_year' => 'field_platform_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_platform_developers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_platform_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_criticalw_platform_ref_target_id']['id'] = 'field_criticalw_platform_ref_target_id';
  $handler->display->display_options['relationships']['field_criticalw_platform_ref_target_id']['table'] = 'field_data_field_criticalw_platform_ref';
  $handler->display->display_options['relationships']['field_criticalw_platform_ref_target_id']['field'] = 'field_criticalw_platform_ref_target_id';
  $handler->display->display_options['relationships']['field_criticalw_platform_ref_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_criticalw_platform_ref_target_id';
  /* Field: Content: Developers */
  $handler->display->display_options['fields']['field_platform_developers']['id'] = 'field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['table'] = 'field_data_field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['field'] = 'field_platform_developers';
  $handler->display->display_options['fields']['field_platform_developers']['relationship'] = 'field_criticalw_platform_ref_target_id';
  $handler->display->display_options['fields']['field_platform_developers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_platform_developers']['delta_offset'] = '0';
  /* Field: Content: Year initiated */
  $handler->display->display_options['fields']['field_platform_year']['id'] = 'field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['table'] = 'field_data_field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['field'] = 'field_platform_year';
  $handler->display->display_options['fields']['field_platform_year']['relationship'] = 'field_criticalw_platform_ref_target_id';
  $handler->display->display_options['fields']['field_platform_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Platforms referenced */
  $handler = $view->new_display('entity_view', 'Platforms referenced', 'entity_view_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'critical_writing',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['organization_platform_critical_writing'] = array(
    t('Defaults'),
    t('Platforms referenced'),
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
    t('Content entity referenced from field_criticalw_platform_ref'),
    t('Title'),
    t('Developers'),
    t('Year initiated'),
    t('All'),
  );
  $export['organization_platform_critical_writing'] = $view;

  $view = new view();
  $view->name = 'organization_platform_person';
  $view->description = 'Lists platform information on person';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Organization and platform on person';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Platforms developed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_platform_developers' => 'field_platform_developers',
    'field_platform_year' => 'field_platform_year',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_platform_developers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_platform_year' => array(
      'sortable' => 0,
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
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Developers (field_platform_developers) */
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['id'] = 'field_platform_developers_target_id';
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['table'] = 'field_data_field_platform_developers';
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['field'] = 'field_platform_developers_target_id';
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_platform_developers_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Platforms and publishers referenced */
  $handler = $view->new_display('entity_view', 'Platforms and publishers referenced', 'entity_view_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'person',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['organization_platform_person'] = array(
    t('Defaults'),
    t('Platforms developed'),
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
    t('Title'),
    t('Developers'),
    t('Year initiated'),
    t('All'),
    t('Platforms and publishers referenced'),
  );
  $export['organization_platform_person'] = $view;

  return $export;
}
