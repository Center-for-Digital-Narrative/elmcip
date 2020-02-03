<?php
declare(strict_types = 1);

final class Process
{
  private $contentType;
  private $fields;
  private $goodFormats;

  public function __construct(string $contentType, array $fields, array $goodFormats)
  {
    if (!$fields) {
      new Exception('No fields found');
    }

    $this->contentType = $contentType;
    $this->fields = $fields;
    $this->goodFormats = $goodFormats;
  }

  public function process()
  {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', [$this->contentType]);
    $result = $query->execute();

    if (!$result) {
      return;
    }

    $news_items_nids = array_keys($result['node']);

    foreach ($news_items_nids as $nid) {
      $entity = entity_metadata_wrapper('node', $nid);
      $this->field($entity);
    }
  }

  private function field($entity)
  {
    foreach ($this->fields as $field) {
      $name = $field['field_name'];
      $info = $entity->getPropertyInfo();

      if ($info[$name]['type'] === 'text_formatted') {
        $this->validateFormat($entity->$name->raw(), $field);
      }
    }
  }

  private function validateFormat($raw, array $field): void {
    if (!$raw) {
      return;
    }

    if (!in_array($raw['format'], $this->goodFormats, FALSE)) {
      print $field['field_name'] . PHP_EOL;
      print $raw['format'] . PHP_EOL;
    }
  }
}

$entityType = 'node';
$goodFormats = ['basic_text_editor', 3, 4, 1];
Echo "Get all node bundles types \n";
$bundles = array_keys(node_type_get_names());

foreach ($bundles as $bundle) {
  echo "Processing $bundle \n";
  $fields = field_info_instances($entityType, $bundle);
  $content = new Process($bundle, $fields, $goodFormats);
  $content->process();
}
