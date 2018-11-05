<?php

/**
 * @file cleanup.php
 *
 * Small tool that clean out any views_data_export tables and cache objects.
 */

$result = Database::getConnection()->query("show tables like '%views_data_export_index%'");
if ($result) {
  while ($row = $result->fetchAssoc()) {
    $table = $row['Tables_in_elmcip (%views_data_export_index%)'];
    Database::getConnection()->exec("DROP TABLE $table");
    print "Dropped table $table from database" . PHP_EOL;
  }
}

$tables = [
  'cache',
  'cache_block',
  'cache_bootstrap',
  'cache_ds_panels',
  'cache_features',
  'cache_field',
  'cache_filter',
  'cache_form',
  'cache_image',
  'cache_libraries',
  'cache_location',
  'cache_menu',
  'cache_page',
  'cache_panels',
  'cache_path',
  'cache_token',
  'cache_views',
  'cache_views_data',
  'cache_views_oai_pmh',
  'ctools_css_cache',
  'ctools_object_cache',
  'views_data_export_object_cache',
  'views_data_export',
];

foreach ($tables as $table) {
  Database::getConnection()->exec("TRUNCATE $table ;");
  print "Flushed cache: $table from database" . PHP_EOL;
}

$tables_extra = [
  'batch',
  'history',
  'queue',
  'sessions',
];

foreach ($tables_extra as $table) {
  Database::getConnection()->exec("TRUNCATE $table ;");
  print "Flushed all extra table: $table from database" . PHP_EOL;
}
