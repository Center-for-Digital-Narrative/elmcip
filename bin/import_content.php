<?php

/**
 * @file
 * Import exported data and update/create entities.
 */

define('EXPORT_DIR', '../export/');
define('EXPIRE_DATE', '1413334800');

import_content();

/**
 * Import content from separate files.
 * @return [type] [description]
 */
function import_content() {
  // Create content.
  $contents = array(
    'user',
    'file',
    'person',
    'event',
    'organization',
    'teaching_resource',
    'work',
    'critical_writing',
    'research_collection',
  );
  $files = scandir(EXPORT_DIR);
  foreach ($contents as $key => $content) {
    foreach ($files as $file) {
      $result = strstr($file, $content . '_');
      if ($result) {
        $entity = file_get_contents(EXPORT_DIR . $file);
          if ($entity) {
            $entity = unserialize($entity);
          switch ($content) {
            case 'user':
              $user = entity_create($content, $entity);
              $user = entity_save($content, $user);
              break;

            case 'file':
              if (!file_load($entity['fid'])) {
                $fid = $entity['fid'];
                unset($entity['fid']);
                $entity = (object) $entity;
                $new_file = file_save($entity);

                if ($new_file->fid) {
                  $fids[$fid] = $new_file->fid;
                  print "Imported from $file and create $content $new_file->fid \n";
                }
              }
              break;

            default:
              // Check to see if the node is new.
              if ($entity['is_new']) {
                $status = "Created new $content " . $entity['nid'];
                unset($entity['nid']);
                unset($entity['vid']);
                $entity = entity_create('node', $entity);
              }
              else {
                $entity = node_load($entity['nid']);
                $status = "Updated $content $entity->nid";
              }

              // if (!node_load($entity['nid'])) {
              //   // unset($entity['nid']);
              //   $entity = entity_create('node', $entity);
              // }
              // print_r($entity);
              entity_save('node', $entity);
              if ($entity->nid) {
                print "$status \n";
              }
              break;
          }
        }
      }
    }
  }
}
