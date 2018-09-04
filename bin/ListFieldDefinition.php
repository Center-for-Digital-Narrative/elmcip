<?php

/**
 * @file
 * List all field definitions from selected list.
 */


class ListFieldDefinition {

  const FIELD_INFORMATION = [
    'Title' => 'label',
    'Field name' => 'field_name',
    'Description' => 'description',
    ];
  protected $entity_type = '';
  protected $bundles = [];
  protected $info = [];

  public function __construct(string $entity_type, array $bundles) {

    $this->entity_type = $entity_type;
    $this->bundles = $bundles;
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
   * Get a list of field names of a specific bundle.
   *
   * @param $bundle
   *
   * @return array
   *   A list of fields, a empty array if no fields was found.
   */
  public function getFieldNames($bundle): array {
    $this->info = field_info_instances($this->entity_type, $bundle);

    return array_keys($this->info);
  }

  /**
   * Extract field information for a given bundle.
   *
   * @param string $bundle
   *
   * @return array
   */
  protected function extractFieldInfo($bundle): array {

    $info = [];
    $fields = $this->getFieldNames($bundle);

    foreach ($fields as $field) {

      foreach (self::FIELD_INFORMATION as $key => $property) {
        $info[] = [$key => $this->info[$field][$property]];
      }
    }

    return $info;
  }

  /**
   * Get field definitions.
   *
   * @return array
   */
  public function getFieldProperties(): array {

    $list = [];

    foreach ($this->bundles as $bundle) {
      $list[$bundle] = $this->extractFieldInfo($bundle);
    }

    return $list;
  }
}

$list = new ListFieldDefinition('node', [
  'critical_writing',
  'work',
  'organization',
  'publisher',
  'platform_software',
  'book',
]);

$fields = $list->getFieldProperties();
foreach ($fields as $bundle => $field) {

  print PHP_EOL . '----------------------------------' . PHP_EOL;
  print "$bundle \n";
  print '----------------------------------' . PHP_EOL;

  foreach ($field as $property) {
    $key = key($property);

    if ($key === 'Title') {
      print PHP_EOL;
    }

    $string = $key . ': ' . $property[$key];
    print $string . PHP_EOL;
  }

}
