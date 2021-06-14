<?php

/**
 * @file
 * elmcip_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function elmcip_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content::field_critical_writing_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = '';
  $facet->facet = 'field_critical_writing_year';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'date_granularity' => 'YEAR',
    'date_granularity_min' => 'YEAR',
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'selected',
      'bundle_selected' => array(
        'book' => 0,
        'class_group' => 0,
        'critical_writing' => 'critical_writing',
        'databases_and_archives' => 0,
        'event' => 0,
        'notebook' => 0,
        'notebook_entry' => 0,
        'organization' => 0,
        'page' => 0,
        'panel' => 0,
        'person' => 0,
        'platform_software' => 0,
        'publisher' => 0,
        'research_collection' => 0,
        'story' => 0,
        'teaching_resource' => 0,
        'work' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'date',
  );
  $export['search_api@kb_content::field_critical_writing_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content::field_platform_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = '';
  $facet->facet = 'field_platform_year';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'date_granularity' => 'YEAR',
    'date_granularity_min' => 'YEAR',
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'selected',
      'bundle_selected' => array(
        'book' => 0,
        'class_group' => 0,
        'critical_writing' => 0,
        'databases_and_archives' => 0,
        'event' => 0,
        'notebook' => 0,
        'notebook_entry' => 0,
        'organization' => 0,
        'page' => 0,
        'panel' => 0,
        'person' => 0,
        'platform_software' => 'platform_software',
        'publisher' => 0,
        'research_collection' => 0,
        'story' => 0,
        'teaching_resource' => 0,
        'work' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'date',
  );
  $export['search_api@kb_content::field_platform_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content::field_tr_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = '';
  $facet->facet = 'field_tr_year';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'date_granularity' => 'YEAR',
    'date_granularity_min' => 'YEAR',
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'selected',
      'bundle_selected' => array(
        'book' => 0,
        'class_group' => 0,
        'critical_writing' => 0,
        'databases_and_archives' => 0,
        'event' => 0,
        'notebook' => 0,
        'notebook_entry' => 0,
        'organization' => 0,
        'page' => 0,
        'panel' => 0,
        'person' => 0,
        'platform_software' => 0,
        'publisher' => 0,
        'research_collection' => 0,
        'story' => 0,
        'teaching_resource' => 'teaching_resource',
        'work' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'date',
  );
  $export['search_api@kb_content::field_tr_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content::field_work_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = '';
  $facet->facet = 'field_work_year';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'date_granularity' => 'YEAR',
    'date_granularity_min' => 'YEAR',
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'selected',
      'bundle_selected' => array(
        'book' => 0,
        'class_group' => 0,
        'critical_writing' => 0,
        'databases_and_archives' => 0,
        'event' => 0,
        'notebook' => 0,
        'notebook_entry' => 0,
        'organization' => 0,
        'page' => 0,
        'panel' => 0,
        'person' => 0,
        'platform_software' => 0,
        'publisher' => 0,
        'research_collection' => 0,
        'story' => 0,
        'teaching_resource' => 0,
        'work' => 'work',
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'date',
  );
  $export['search_api@kb_content::field_work_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content::field_year_initiated';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = '';
  $facet->facet = 'field_year_initiated';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'date_granularity' => 'YEAR',
    'date_granularity_min' => 'YEAR',
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'book' => 0,
        'class_group' => 0,
        'critical_writing' => 0,
        'databases_and_archives' => 0,
        'event' => 0,
        'notebook' => 0,
        'notebook_entry' => 0,
        'organization' => 0,
        'page' => 0,
        'panel' => 0,
        'person' => 0,
        'platform_software' => 0,
        'publisher' => 0,
        'research_collection' => 0,
        'story' => 0,
        'teaching_resource' => 0,
        'work' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'date',
  );
  $export['search_api@kb_content::field_year_initiated'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:author';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'author';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Author',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:changed';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'changed';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Date changed',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:changed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:created';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'created';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Date created',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_abstract:value';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_abstract:value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Abstract (in English) » Text',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_abstract:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_critical_writing_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_critical_writing_year';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '5',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'year of critical writing first publication',
    'title_override' => 1,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:field_critical_writing_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_db_description_english:value';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_db_description_english:value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Description (English) » Text',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_db_description_english:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_node_ref_event';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_node_ref_event';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '5',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Presented at Event',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:field_node_ref_event'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_node_ref_work';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_node_ref_work';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Creative Works referenced',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_node_ref_work'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_platform_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_platform_year';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '5',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Year platform/software initiated',
    'title_override' => 1,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:field_platform_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_ps_description:value';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_ps_description:value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Description » Text',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_ps_description:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_rc_description:value';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_rc_description:value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Description » Text',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_rc_description:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_textfield:value';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_textfield:value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Short description » Text',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_textfield:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_tr_critical';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_tr_critical';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Critical Writing Referenced',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_tr_critical'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_tr_org';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_tr_org';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Organization',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:field_tr_org'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_tr_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_tr_year';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '5',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Year teaching resource introduced',
    'title_override' => 1,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:field_tr_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_work_year';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_work_year';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '5',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'year of creative work first publication',
    'title_override' => 1,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:field_work_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:field_year_initiated';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'field_year_initiated';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '5',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Year Initiated',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:field_year_initiated'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:search_api_language';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Item language',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '10',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Tags',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:taxonomy_vocabulary_2';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_2';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Event type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:taxonomy_vocabulary_2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:taxonomy_vocabulary_4';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_4';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:taxonomy_vocabulary_4'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:title';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@kb_content:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@kb_content:block:type';
  $facet->searcher = 'search_api@kb_content';
  $facet->realm = 'block';
  $facet->facet = 'type';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'basic_text_editor',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-49',
      'indexed' => '-47',
    ),
    'title' => 'Content type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@kb_content:block:type'] = $facet;

  return $export;
}
