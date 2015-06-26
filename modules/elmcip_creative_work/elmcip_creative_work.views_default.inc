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
    ),
    'oai_etdms' => array(
      'title' => 'none',
    ),
    'oai_ilox' => array(
      'title' => 'none',
    ),
    'oai_lom' => array(
      'title' => 'none',
    ),
    'oai_lre' => array(
      'title' => 'none',
    ),
    'mods' => array(
      'title' => 'none',
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
