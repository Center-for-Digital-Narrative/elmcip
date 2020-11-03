<?php

/**
 * @file
 * Drupal local development settings. Change to match your local config.
 */

$base_url = 'http://elmcip.local';  // NO trailing slash!

$databases['default']['default'] = array (
  'driver' => 'mysql',
  'database' => 'elmcip',
  'username' => 'elmcip',
  'password' => 'elmcip',
  'host' => 'localhost',
  'charset' => 'utf8mb4',
  'collation' => 'utf8mb4_general_ci',
  'port' => '',
  'prefix' => '',
);

$conf['stage_file_proxy_origin'] = 'https://elmcip.net';
$conf['theme_debug'] = TRUE;
