<?php

$fields = [
  'field_authorphoto',
  'field_image',
  'field_media',
  'field_multi_image',
  'field_multi_images',
  'field_ps_image',
  'field_files',
  'field_media_asset',
  'field_ps_attachment',
];
$storage = 'public';

foreach ($fields as $field) {
  $query = db_select('file_managed', 'f')
    ->fields('f', array('fid', 'uri', 'filemime', 'filename'))
    ->fields('fdata', array('entity_type', 'bundle'))
    ->condition('f.uri', '%' . db_like($storage) . '%', 'LIKE')
    ->condition('fdata.entity_type', 'node', '=');

  $query->join("field_data_$field", 'fdata', "f.fid = $field" . "_fid");
  $result = $query->execute();

  foreach ($result as $source) {
    if ($field == 'field_ps_attachment' || $field == 'field_files') {
      $new_destination = 'public://media/' . $source->bundle . '/attachments/' . $source->filename;
    }
    else {
      $new_destination = 'public://media/' . $source->bundle . '/images/' . $source->filename;
    }

    if ($source->uri != $new_destination) {
      print "Old: $source->uri \n";
      print 'New: ' . $new_destination . PHP_EOL;
      $target_directory = drupal_dirname($new_destination);

      if (!file_exists($target_directory)) {
        print 'Creating directory: ' . $target_directory . PHP_EOL;
        drupal_mkdir($target_directory, NULL, TRUE);
      }

      $result = file_move($source, $new_destination, FILE_EXISTS_ERROR);
      print_r($result);
    }
  }
}
