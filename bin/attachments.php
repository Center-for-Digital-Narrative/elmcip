<?php

$storage = 'public';

$query = db_select('file_managed', 'f')
  ->fields('f', array('fid', 'uri', 'filemime', 'filename'))
  ->condition('f.uri', '%' . db_like($storage) . '%', 'LIKE');
$result = $query->execute();

foreach ($result as $source) {
  $file = '';
  $uri = explode('/', $source->uri);

  if ($uri[2] == 'files') {
    $file = file_load($source->fid);
    $bundle = $uri[4];
    switch ($uri[4]) {
      case 'criticalwriting':
        $bundle = 'critical_writing';
      break;
      case 'news':
        $bundle = 'story';
      break;
    }

    $new_destination = $uri[0] . '//' . 'media/' . $bundle . '/attachments/' . array_pop($uri);
    print 'Source: ' . $source->uri . PHP_EOL;
    print 'New: ' . $new_destination . PHP_EOL;
//    $file->uri = $new_destination;
//    file_save($file);
    file_move($file, $new_destination);

    if ($file->uri != $new_destination) {
      print 'Failed to save file' . PHP_EOL;
    }
  }
}
