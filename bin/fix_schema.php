<?php

/**
 * @file
 * Respect original default value in module schema definitions.
 * https://www.drupal.org/node/2781545.
 */

// Initialise schema.
$schema = array();

// Include all module install files.
module_load_all_includes('install');

// Get complete schema.
foreach (module_implements('schema') as $module) {
  $current = (array) module_invoke($module, 'schema');
  _drupal_schema_initialize($current, $module, FALSE);
  $schema = array_merge($schema, $current);
}

// Apply schema modifications.
drupal_alter('schema', $schema);

// Get the database schema
$db_schema = schema_dbobject()->inspect();

// Loop through each declared schema table
foreach ($schema as $table_name => $schema_table) {
  $db_table = $db_schema[$table_name];

  // Loop through each column
  foreach ($schema_table['fields'] as $colname => $col) {
    $db_col = $db_table['fields'][$colname];

    // Only touch varchar, char, and text
    if (!in_array($col['type'], array('varchar', 'char', 'text'))) continue;

    if (
      // Not null is/isn't set
      (isset($col['not null']) != isset($db_col['not null'])) ||

      // Not null set in schema and set in db; doesn't match
      (isset($col['not null']) && isset($db_col['not null']) && $col['not null'] != $db_col['not null']) ||

      // Default is/isn't set
      (isset($col['default']) != isset($db_col['default'])) ||

      // Default set in schema and set in db; doesn't match
      (isset($col['default']) && isset($db_col['default']) && $col['default'] != $db_col['default']) ||

      // Description is/isn't set
      (isset($col['description']) != isset($db_col['description'])) ||

      // Description set in schema and set in db; doesn't match
      (isset($col['description']) && isset($db_col['description']) && $col['description'] != $db_col['description']) ) {

      // Fix nulls if set to not null and there's a default.
      // This prevents errors updating tables with new information that may have nulls where they aren't allowed.
      if (isset($col['not null']) && $col['not null'] && isset($col['default'])) {
        db_update($table_name)
          ->fields(array(
            $colname => $col['default'],
          ))
          ->isNull($colname)
          ->execute();
      }

      // Update field in db
      db_change_field($table_name, $colname, $colname, $col);
    }
  }
}
