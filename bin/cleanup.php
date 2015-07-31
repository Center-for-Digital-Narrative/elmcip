<?php

/**
 * @file cleanup.php
 * Small tool that clean out any views_data_export tables and cache objects.
 */

$result = Database::getConnection()->query("show tables like '%views_data_export_index%'");
if ($result) {
  while ($row = $result->fetchAssoc()) {
    $table = $row['Tables_in_elmcip (%views_data_export_index%)'];
    Database::getConnection()->query("DROP TABLE $table");
    print "Dropped table $table from databse" . PHP_EOL;
  }
}

Database::getConnection()->query("TRUNCATE views_data_export_object_cache;");
print "Truncated Views export cache (views_data_export_object_cache)" . PHP_EOL;
Database::getConnection()->query("TRUNCATE views_data_export;");
print "Truncated views_data_export" . PHP_EOL;
