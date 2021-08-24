<?php declare(strict_types=1);

use Phpoaipmh\Client;
use Phpoaipmh\Endpoint;

include_once __DIR__ . '/vendor/autoload.php';

$client = new Client('http://elmcip-d9.local/oai/request');
try {
  $myEndpoint = new Endpoint($client);
} catch (Exception $e) {
}

//$iterator = $myEndpoint->listRecords('oai_dc');
//echo "Dublin Core - Total count is " . ($iterator->getTotalRecordCount() . PHP_EOL ?: 'unknown');

//$iterator = $myEndpoint->listRecords('oai_raw');
//echo "MODS - Total count is " . ($iterator->getTotalRecordCount() . PHP_EOL ?: 'unknown');

//$result = $myEndpoint->identify();
//var_dump($result);

$resultSet = [];
echo "End point formats" . PHP_EOL;
$results = $myEndpoint->listMetadataFormats();
foreach($results as $item) {
  $format = (string) $item->metadataPrefix;
  $iterator = $myEndpoint->listRecords($format);
  echo 'Format: ' . $format . ' Total count is: ' . ($iterator->getTotalRecordCount() . PHP_EOL ?: 'unknown');


  foreach ($iterator as $record) {
    var_dump($record);
//  $id = $record->metadata->$format->identifier;
//    $resultSet[$format][] = $record;
  }

}

//$creativeWorks = $myEndpoint->listRecords('oai_dc');
//$resultSet = [];
//foreach ($creativeWorks as $creativeWork) {
//  $resultSet[] = $creativeWork->metadata->oai_dc->identifier;
//  echo $creativeWork->metadata->oai_dc->identifier . PHP_EOL;
//}
