<?php

$modules = [
  'views',
  'views_oai_pmh',
];
foreach ($modules as $module) {
  $schemas = drupal_get_schema_unprocessed($module, 'cache');
  if ($schemas) {
    __elmcip_fix_schema($schemas);
  }
}

function __elmcip_fix_schema(array $schemas) {
  foreach ($schemas as $name => $schema) {
    if ($name == 'cache_views' || $name == 'cache_views_data') {
      if (!db_table_exists($name)) {
        db_create_table($name, $schema);
      }
    }
    if ($name== 'cache_views_oai_pmh') {
      if (!db_table_exists($name)) {
        db_create_table($name, $schema);
      }
    }
  }
}
