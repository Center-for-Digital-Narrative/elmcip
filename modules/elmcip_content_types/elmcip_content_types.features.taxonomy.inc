<?php
/**
 * @file
 * elmcip_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function elmcip_content_types_taxonomy_default_vocabularies() {
  return array(
    'news_tags' => array(
      'name' => 'News tags',
      'machine_name' => 'news_tags',
      'description' => 'Tags used in news related articles',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
