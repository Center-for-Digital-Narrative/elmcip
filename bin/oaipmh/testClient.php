<?php declare(strict_types=1);

use Phpoaipmh\Client;
use Phpoaipmh\Endpoint;

include_once __DIR__ . '/vendor/autoload.php';

$client = new Client('http://elmcip.local/data/work/oai-pmh');
try {
  $myEndpoint = new Endpoint($client);
} catch (Exception $e) {
}

$iterator = $myEndpoint->listRecords('oai_dc');
echo "Dublin Core - Total count is " . ($iterator->getTotalRecordCount() . PHP_EOL ?: 'unknown');

$iterator = $myEndpoint->listRecords('mods');
echo "MODS - Total count is " . ($iterator->getTotalRecordCount() . PHP_EOL ?: 'unknown');

$result = $myEndpoint->identify();
var_dump($result);

echo "End point formats" . PHP_EOL;
$results = $myEndpoint->listMetadataFormats();
foreach($results as $item) {
  print_r($item);
}

$creativeWorks = $myEndpoint->listRecords('mods');
$resultSet = [];
foreach ($creativeWorks as $creativeWork) {
  $resultSet[] = $creativeWork->metadata->mods->identifier;
  echo $creativeWork->metadata->mods->identifier . PHP_EOL;
}
