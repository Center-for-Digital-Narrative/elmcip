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
  if (!$files) {
    return;
  }
  foreach ($contents as $content) {
    foreach ($files as $file) {
      $result = strstr($file, $content . '_');
      if ($result) {
        $entity = file_get_contents(EXPORT_DIR . $result);
        if ($entity) {
          $entity = unserialize($entity);

          switch ($content) {
            case 'user':
              $user = entity_create($content, $entity);
              entity_save($content, $user);
              break;

            case 'file':
              if (!file_load($entity['fid'])) {
                $fid = $entity['fid'];
                unset($entity['fid']);
                $entity = (object) $entity;

                $new_file = file_save($entity);
                if ($new_file->fid) {
                  $fids[$fid] = $new_file->fid;
                  print "Imported $result, created: $content $new_file->fid \n";
                }
              }
              else {
                print "File: " . $entity['fid'] . " exists. Skipping\n";
              }
              break;

            default:
              $nid = $entity['nid'];
              if (!node_load($nid)) {
                // Check to see if the node is new.
                if ($entity['is_new']) {
                  unset($entity['nid']);
                  unset($entity['vid']);
                  $entity = entity_create('node', $entity);
                  $status = "Imported file $file. Created $content " . $nid . " alterd to ";
                }
                else {
                  $entity = node_load($entity['nid']);
                  $status = "Updated $content $entity->nid from $file ";
                }

                entity_save('node', $entity);
                if ($entity->nid) {
                  print "$status $entity->nid \n";
                }
              }
              else {
                print "Node: $content " . $nid . " exists. Skipping\n";
              }
              break;
          }
        }
        else {
          print "Aiai $entity was empty\n";
        }
      }
    }
  }
}
