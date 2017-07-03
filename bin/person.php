<?php

$storage = 'public';

$query = db_select('file_managed', 'f')
  ->fields('f', array('fid', 'uri', 'filemime', 'filename'))
  ->condition('f.uri', '%' . db_like($storage) . '%', 'LIKE');
$result = $query->execute();

foreach ($result as $source) {
  $file = '';
  $uri = explode('/', $source->uri);

  if ($uri[3] == 'news') {
    $new_destination = $uri[0] . '//' . 'media/story/images/' . array_pop($uri);
    print 'Source: ' . $source->uri . PHP_EOL;
    print 'New: ' . $new_destination . PHP_EOL;
    $file = file_load($source->fid);
    $file->uri = $new_destination;
//    file_save($file);

    if ($file->uri != $new_destination) {
      print 'Failed to save file' . PHP_EOL;
    }
  }
}
