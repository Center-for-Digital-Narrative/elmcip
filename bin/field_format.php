<?php
declare(strict_types = 1);

final class Process
{
  private $contentType;
  private $fields;
  private $goodFormats;
  private $entity;

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
      $this->entity = entity_metadata_wrapper('node', $nid);
      $this->field();
    }
  }

  private function field(): void
  {
    foreach ($this->fields as $field) {
      $name = $field['field_name'];
      $info = $this->entity->getPropertyInfo();

      if ($info[$name]['type'] === 'text_formatted') {
        $illegalField = $this->validateFormat($field);
        $this->alterFormat($illegalField, 'basic_text_editor');
      }
    }
  }

  private function validateFormat(array $field): string
  {
    $field_name = $field['field_name'];
    $raw = $this->entity->$field_name->value();

    if (!$raw) {
      return '';
    }

    $format = $this->entity->$field_name->format->value();

    if (!in_array($format, $this->goodFormats, FALSE)) {
      print "Illegal format. Node: {$this->entity->getIdentifier()} {$field_name} Format: {$format} \n";
      return $field_name;
    }

    return '';
  }

  private function alterFormat($field, $format): void
  {
    if (!$field) {
      return;
    }

    $this->entity->$field->format = $format;
    $this->entity->save();
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
