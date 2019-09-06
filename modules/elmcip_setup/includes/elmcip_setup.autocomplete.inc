<?php
declare(strict_types = 1);

/**
 * Menu callback. Take over control from entity reference to allow us to
 * alter the number of matches returned by the autocomplete widget.
 *
 * Ref. https://www.drupal.org/project/drupal/issues/2863188
 *      https://www.drupal.org/project/entityreference/issues/1700112
 *
 * @param $type
 * @param $field_name
 * @param $entity_type
 * @param $bundle_name
 * @param string $entity_id
 * @param string $string
 * @return int
 */
function elmcip_autocomplete_callback(
  $type,
  $field_name,
  $entity_type,
  $bundle_name,
  $entity_id = ''
) {
  // If the request has a '/' in the search text, then the menu system will have
  // split it into multiple arguments and $string will only be a partial.
  // We want to make sure we recover the intended $string.
  $args = func_get_args();
  // Shift off the $type, $field_name, $entity_type,
  // $bundle_name, and $entity_id args.
  array_shift($args);
  array_shift($args);
  array_shift($args);
  array_shift($args);
  array_shift($args);
  $string = implode('/', $args);

  $field = field_info_field($field_name);
  $instance = field_info_instance($entity_type, $field_name, $bundle_name);

  return elmcip_autocomplete_callback_get_matches($type, $field, $instance, $entity_type, $entity_id, $string);
}

/**
 * Return JSON based on given field, instance and string.
 *
 * This function can be used by other modules that wish to pass a mocked
 * definition of the field on instance.
 *
 * @param $type
 *   The widget type (i.e. 'single' or 'tags').
 * @param $field
 *   The field array defintion.
 * @param $instance
 *   The instance array defintion.
 * @param $entity_type
 *   The entity type.
 * @param $entity_id
 *   Optional; The entity ID the entity-reference field is attached to.
 *   Defaults to ''.
 * @param $string
 *   The label of the entity to query by.
 *
 * @return
 */
function elmcip_autocomplete_callback_get_matches(
  $type,
  $field,
  $instance,
  $entity_type,
  $entity_id = '',
  $string = ''
) {
  $matches = array();
  $prefix = '';

  $entity = NULL;
  if ($entity_id !== 'NULL') {
    $entity = entity_load_single($entity_type, $entity_id);
    $has_view_access = (entity_access('view', $entity_type, $entity) !== FALSE);
    $has_update_access = (entity_access('update', $entity_type, $entity) !== FALSE);
    if (!$entity || !($has_view_access || $has_update_access)) {
      return MENU_ACCESS_DENIED;
    }
  }

  $handler = entityreference_get_selection_handler($field, $instance, $entity_type, $entity);

  if ($type === 'tags') {
    // The user enters a comma-separated list of tags.
    // We only autocomplete the last tag.
    $tags_typed = drupal_explode_tags($string);
    $tag_last = drupal_strtolower(array_pop($tags_typed));
    if (!empty($tag_last)) {
      $prefix = count($tags_typed) ? implode(', ', $tags_typed) . ', ' : '';
    }
  }
  else {
    // The user enters a single tag.
    $tag_last = $string;
  }

  if (isset($tag_last)) {
    // Get an array of matching entities.
    $entity_labels = $handler->getReferencableEntities(
      $tag_last,
      $instance['widget']['settings']['match_operator']
    );

    foreach ($entity_labels as $values) {
      $matches = elmcip_setup_autocomplete_convert($values, $prefix);
    }
  }

  drupal_json_output($matches);
}

/**
 * Loop through the products and convert them into autocomplete output.
 * @param array $values
 * @param string $prefix
 * @return array
 */
function elmcip_setup_autocomplete_convert(array $values, string $prefix): array {
  $denied_label = t(ENTITYREFERENCE_DENIED);
  $matches = [];

  foreach ($values as $entity_id => $label) {
    // Never autocomplete entities that aren't accessible.
    if ($label === $denied_label) {
      continue;
    }

    $key = "$label ($entity_id)";
    // Strip starting/trailing white spaces, line breaks and tags.
    $key = preg_replace('/\s\s+/', ' ', str_replace("\n", '', trim(decode_entities(strip_tags($key)))));
    // Names containing commas or quotes must be wrapped in quotes.
    if (strpos($key, ',') !== FALSE || strpos($key, '"') !== FALSE) {
      $key = '"' . str_replace('"', '""', $key) . '"';
    }
    $matches[$prefix . $key] = '<div class="reference-autocomplete">' . $label . '</div>';
  }

  return $matches;
}
