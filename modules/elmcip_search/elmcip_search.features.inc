<?php
/**
 * @file
 * elmcip_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elmcip_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function elmcip_search_default_search_api_index() {
  $items = array();
  $items['kb_content'] = entity_import('search_api_index', '{
    "name" : "KB content",
    "machine_name" : "kb_content",
    "description" : "Index storing all knowledge base knowledge.",
    "server" : "sql",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "work",
          "critical_writing",
          "databases_and_archives",
          "event",
          "organization",
          "person",
          "platform_software",
          "publisher",
          "research_collection",
          "teaching_resource"
        ]
      },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_abstract:value" : { "type" : "text", "boost" : "2.0" },
        "field_critical_writing_year" : { "type" : "date" },
        "field_db_description_english:value" : { "type" : "text", "boost" : "2.0" },
        "field_node_ref_event" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_node_ref_work" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_platform_year" : { "type" : "date" },
        "field_ps_description:value" : { "type" : "text", "boost" : "2.0" },
        "field_rc_description:value" : { "type" : "text", "boost" : "2.0" },
        "field_textfield:value" : { "type" : "text", "boost" : "2.0" },
        "field_tr_critical" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_tr_org" : { "type" : "integer", "entity_type" : "node" },
        "field_tr_year" : { "type" : "date" },
        "field_work_year" : { "type" : "date" },
        "field_year_initiated" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "taxonomy_vocabulary_1" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_2" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_4" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_abstract:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_abstract:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true, "field_abstract:value" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_abstract:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_abstract:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "768",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function elmcip_search_default_search_api_page() {
  $items = array();
  $items['search_knowledge_base'] = entity_import('search_api_page', '{
    "index_id" : "kb_content",
    "path" : "search",
    "name" : "Search Knowledge Base",
    "machine_name" : "search_knowledge_base",
    "description" : "Search content of the knowledge base.",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_api_page_result",
      "empty_behavior" : ""
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
