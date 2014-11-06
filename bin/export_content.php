<?php

/**
 * @file
 * Export all entity type altered after a defined expire date.
 */

define('EXPORT_DIR', '../export/');
define('EXPIRE_DATE', '1413334800');

if (!file_exists(EXPORT_DIR)) {
  mkdir(EXPORT_DIR);
}
$entity_types = array('node', 'file', 'user');

foreach ($entity_types as $entity_type) {
  switch ($entity_type) {
    case 'user':
      $user = FALSE;
      $users = array(40796);
      foreach ($users as $uid) {
        $user = user_load($uid, TRUE);
        if ($user) {
          $file_name = EXPORT_DIR . $entity_type . '_' . $user->uid . '_.txt';
          unset($user->rdf_mapping);
          unset($user->created);
          unset($user->access);
          unset($user->login);
          unset($user->uid);
          unset($user->init);
          unset($user->data);
          print "User " . $user->uid . " exported to $file_name \n";
          $user = serialize(get_object_vars($user));
          file_put_contents($file_name, print_r($user, TRUE));
        }
      }
      break;

    case 'file':
      $result = db_query("SELECT fid FROM {file_managed} WHERE `timestamp` > " . EXPIRE_DATE);
      if ($result) {
        while ($row = $result->fetchAssoc()) {
          $files = entity_load($entity_type, array($row['fid']));
          foreach ($files as $file) {
            $file_name = EXPORT_DIR . $entity_type . '_' . $file->fid . '_.txt';
            print "File " . $file->fid . " exported to $file_name \n";
            $file = serialize(get_object_vars($file));
            file_put_contents($file_name, print_r($file, TRUE));
          }
        }
      }
      break;

    default:
      $result = db_query("SELECT nid FROM {node} WHERE `changed` > " . EXPIRE_DATE);
      if ($result) {
        while ($row = $result->fetchAssoc()) {
          $nids[] = $row['nid'];
        }
      }

      if ($nids) {
        $nodes = array();
        foreach ($nids as $nid) {
          $node = node_load($nid);
          unset($node->rdf_mapping);
          unset($node->tnid);
          unset($node->translate);
          unset($node->revision_timestamp);
          unset($node->revision_uid);
          unset($node->ds_switch);
          unset($node->log);
          unset($node->cid);
          unset($node->last_comment_timestamp);
          unset($node->last_comment_name);
          unset($node->last_comment_uid);
          unset($node->comment_count);
          unset($node->picture);
          unset($node->data);

          $node->auto_nodetitle_applied = TRUE;
          $nodes = array($node->type => $node);
          $node->revision = FALSE;

          if ($node->created > EXPIRE_DATE) {
            // Considerd a node new.
            $node->is_new = TRUE;
          }

          $file_name = EXPORT_DIR . $node->type . '_' . $node->nid . '_.txt';
          print "Node " . $node->nid . " exported to $file_name\n";
          $node = serialize(get_object_vars($node));
          file_put_contents($file_name, print_r($node, TRUE));
        }
      }
      break;

  }
}
