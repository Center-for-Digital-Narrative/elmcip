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
    $file_name = EXPORT_DIR . $node->type . '-' . $node->nid . '.txt';
    print "Node " . $node->nid . " saved.\n";
    unset($node->nid);
    $node = get_object_vars($node);
    file_put_contents($file_name, print_r($node, TRUE));
  }
}

$entity_types = array('node', 'file', 'user');
mkdir(EXPORT_DIR);
foreach ($entity_types as $entity_type) {
  switch ($entity_type) {
    case 'user':
      $users = array(40796);
      foreach ($users as $user) {
        $user = user_load($user, TRUE);
        $file_name = EXPORT_DIR . 'user-' . $user->uid . '.txt';
        unset($user->rdf_mapping);
        unset($user->created);
        unset($user->access);
        unset($user->login);
        unset($user->uid);
        unset($user->init);
        unset($user->data);
        $user = get_object_vars($user);
        file_put_contents($file_name, print_r($user, TRUE));
      }
      break;

    case 'file':
      $result = db_query("SELECT fid FROM {file_managed} WHERE `timestamp` > 1413334800");
      if ($result) {
        while ($row = $result->fetchAssoc()) {
          $files = entity_load('file', array($row['fid']));
          foreach ($files as $file) {
            $file_name = EXPORT_DIR . 'file-' . $file->fid . '.txt';
            $file = get_object_vars($file);
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
      $result = strstr($file, $content . '-');
      if ($result) {
        $entity = file(EXPORT_DIR . $file);
          if ($entity) {
          switch ($content) {
            case 'user':
              // var_dump($entity);
              print_r($entity);

              // print "DEBUG: $content \n";
              // print_r($entity);
              // foreach ($variable as $key => $value) {
                # code...
              // }
              // var_dump($entity);
              $user = entity_create($content, array());
              // print_r($user);
              // $user = entity_save($content, $user);
              // print_r($user);
              break;

            case 'value':
              # code...
              break;

            case 'value':
              # code...
              break;

            default:
              # code...
              break;
          }
        }
      }
    }
  }

}

import_content();
