<?php

declare(strict_types = 1);

define('KUBERNETES_NAME_SPACE', 'elmcip-ns9035k');
define('CLUSTER', 'nird');

final class Pods
{
  private $pods;

  private function __construct() {}

  public static function getPods(array $results): Pods {
    $object = new self();
    $pods = $object->parseResult($results);

    foreach ($pods as $pod) {
      array_walk($pod, [$object, 'podName']);
    }

    return $object;
  }

  private function parseResult(array $results): array {
    $pods = [];

    foreach ($results as $result) {
      if (strpos($result, KUBERNETES_NAME_SPACE) !== false) {
        $pods[] = explode('  ', $result);
      }
    }

    return $pods;
  }

  private function podName($item, $key) {
    if (strpos($item, KUBERNETES_NAME_SPACE) !== false) {
      $this->pods[] = $item;
    }
  }

  public function FirstPod() {
    return $this->pods[0];
  }
}

/**
 * Class Kubernetes
 *
 * Helper service.
 */
final class Kubernetes {

  private $pods;

  public function __construct(Pods $pods) {
    $this->pods = $pods;
  }

  public function renewToken(): array {
    $results = [];
    exec('kubed -renew ' . CLUSTER, $results);

    return $results;
  }

  public function createSnapshot() {
    echo 'Creating production snapshot at POD: ' . $this->pods->FirstPod() . PHP_EOL;
    exec('kubectl exec -it ' . $this->pods->FirstPod() . ' -n ' . KUBERNETES_NAME_SPACE . ' -- /elmcip/create_snapshot', $result);
    print_r($result);
  }

  public function getSnapshot() {
    $fileName = 'latest.elmcip.sql.gz';
    $existingSnapshot = filemtime('site/' . $fileName);

    echo 'Copy production snapshot from ' . $this->pods->FirstPod() . PHP_EOL;
    exec('kubectl cp '. KUBERNETES_NAME_SPACE . '/' . $this->pods->FirstPod() . ':elmcip/latest.elmcip.sql.gz site/latest.elmcip.sql.gz', $result);

    if ($existingSnapshot !== filemtime('site/' . $fileName)){
      echo $fileName . ' was successfully copied from ' . $this->pods->FirstPod() . PHP_EOL;
    }

  }
}


exec('kubectl get pod -n ' . KUBERNETES_NAME_SPACE, $results);
$pods = Pods::getPods($results);
$elmcip = new Kubernetes($pods);
$elmcip->createSnapshot();
$elmcip->getSnapshot();
