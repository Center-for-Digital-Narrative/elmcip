<?php

/**
 * @file
 * List all field definitions from selected list.
 */


class ListFieldDefinition {

  protected $field_information = ['label', 'field_name', 'description', 'type'];
  protected $entity_type = '';
  protected $bundles = [];
  protected $info = [];

  public function __construct(string $entity_type, array $bundles) {

    $this->entity_type = $entity_type;
    $this->bundles = $bundles;
    $this->createList();
  }

  /**
   * Get all bundles from a specific entity type.
   *
   * @return array
   *   List of bundles.
   */
  public function getAllBundleNames(): array {
    $info = entity_get_property_info($this->entity_type);

    return array_keys($info['bundles']);
  }

  /**
   * Get a list of field names.
   *
   * @param $bundle
   *
   * @return array
   *   A list of fields, a empty array if no fields was found.
   */
  public function getFieldNames($bundle): array {

    return array_keys(field_info_instances($this->entity_type, $bundle));
  }

  /**
   * Create list of fields.
   */
  protected function createList() {
    entity_get_all_property_info($this->entity_type);

    $info = entity_get_property_info($this->entity_type);
    $info += [
      'properties' => [],
      'bundles' => [],
    ];
    // Add all bundle properties.
    foreach ($info['bundles'] as $bundle => $bundle_info) {
      $bundle_info += array('properties' => []);
      $info['properties'] += $bundle_info['properties'];
    }

    $this->info = $info;
  }


  /**
   * Extract all field definitions needed.
   *
   * @param $extract
   *
   * @return array
   */
  protected function extractInfo($bundle) {

    $extracted = [];
    $fields = array_keys($bundle['properties']);

    foreach ($fields as $field) {
      foreach ($this->field_information as $foo) {
        $extracted[] = $bundle['properties'][$field][$foo];
      }
    }

    return $extracted;
  }

  /**
   * Get list of definitions.
   *
   * @return array
   */
  public function getFieldList($bundle): array {

    $list = [];

    foreach ($this->bundles as $bundle) {
      $list[] = $this->extractInfo($this->info['bundles'][$bundle]);
    }

    return $list;
  }
}

$list = new ListFieldDefinition('node', [
  'critical_writing',
]);

print_r($list->getAllBundleNames());
print_r($list->getFieldNames('event'));
