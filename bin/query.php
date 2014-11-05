<?php

define('EXPORT_DIR', '../export/');

function get_changes($type = 'node') {
  print "Searching for new or alterted entities of type: $type\n";
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', $type)
    ->addMetaData('account', user_load(1))
    ->propertyCondition('changed', array(
        mktime(0, 0, 0, 10, 15, date('Y')),
        mktime(0, 0, 0, date('n'), date('j'), date('Y'))
      ),
    'BETWEEN');

  $result = $query->execute();

  if (isset($result['node'])) {
    $nids = array_keys($result['node']);
    return $nids;
  }

  return array();
}

function get_values($nids) {
  // $types = array();
  foreach ($nids as $nid) {
    $node = entity_metadata_wrapper('node', $nid);
      print "Bundle: " . $node->getBundle() . "\n";
      print "tile: " . $node->label() . "\n";
      print "User: " . $node->getIdentifier() . "\n";
      $instances = field_info_instances('node', $node->getBundle());
      $fields = array_keys($instances);
      foreach ($fields as $field) {
        print "Field: " . $field . "\n";

        switch ($field) {
          case 'field_textfield':
            // print $node->$field->value->value(array('decode' => TRUE)) . "\n";
            break;

          case 'field_residency':
            // Do nothing, until we know how to work with location module.
            break;

          case 'field_location':
            // Do nothing, until we know how to work with location module.
            break;

          case 'field_nationality':
            // Do nothing, until we know how to work with location module.
            break;

          default:
            print_r($node->$field->value()) . "\n";
            break;
        }

      }
    // }
  }
}

function get_nodes($nids) {
  if (!$nids) {
    return;
  }
  $nodes = array();
  foreach ($nids as $nid) {
    $node = node_load($nid);
    unset($node->rdf_mapping);
    unset($node->created);
    unset($node->changed);
    unset($node->tnid);
    unset($node->translate);
    unset($node->revision_timestamp);
    unset($node->revision_uid);
    unset($node->ds_switch);
    unset($node->log);
    unset($node->vid);
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

    if (!node_load($node->nid)) {
      $node->is_new = TRUE;
    }
    $file_name = EXPORT_DIR . $node->type . '_' . $node->nid . '_.txt';
    print "Node " . $node->nid . " exported to $file_name\n";
    $node = serialize(get_object_vars($node));
    file_put_contents($file_name, print_r($node, TRUE));
  }
}

$entity_types = array('node', 'file', 'user');
mkdir(EXPORT_DIR);
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
      $result = db_query("SELECT fid FROM {file_managed} WHERE `timestamp` > 1413334800");
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
      $nids = get_changes($entity_type);
      if ($nids) {
        get_nodes($nids);
      }
      break;
  }
}

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
                unset($entity['fid']);
                $file = entity_create($content, $entity);
                $file = entity_save($content, $user);
                if ($file->fid) {
                  print "Imported from $file and create file entity $file->fid \n";
                }
              }

              break;

            default:
              if (!node_load($entity['nid'])) {
                unset($entity['nid']);
                $entity = entity_create('node', $entity);
                entity_save('node', $entity);
                if ($entity->nid) {
                  print "Saved node $entity->nid\n";
                }
              }
              break;
          }
        }
      }
    }
  }

}

import_content();
