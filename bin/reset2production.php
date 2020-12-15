#!/usr/bin/env php
<?php declare(strict_types = 1);

define('KUBERNETES_NAME_SPACE', 'elmcip-ns9035k');
define('CLUSTER', 'nird-trd');

$kubectl = new Kubectl();
$kubed = new Kubed();
$pod = new Pods($kubectl, $kubed);
$pods = $pod->getPods();

$elmcip = new Kubernetes($pods);
//$elmcip->createSnapshot();

$backupFiles = ['latest.cellproject.sql.gz', 'latest.elmcip.sql.gz'];
foreach ($backupFiles as $backupFile) {
  echo $elmcip->getSnapshot($backupFile) . PHP_EOL;
}

final class Kubed
{
    private $version;

    public function __construct()
    {
        exec('kubed -version', $kubed);
        if (!$kubed) {
            throw new RuntimeException(
                'kubed is not installed. Read: https://github.com/Uninett/kubed' . PHP_EOL
            );
        }

        $this->version = $kubed;
    }

    public function getVersion(): string
    {
        return $this->version[0];
    }

    public function init()
    {
        exec('kubed -name nird-trd -api-server https://api.nird-trd.sigma2.no -client-id ad21bc46-d77d-4527-8a12-bf7984860957 -issuer https://nird-trd-ti.dataporten-api.no', $results);
        return $results;
    }

    public function renew()
    {
        exec('kubed -renew ' . CLUSTER, $login);
        return $login;
    }
}

final class Kubectl
{
    private $version;

    public function __construct()
    {
        exec('kubectl version --client', $kubectl);
        if (!$kubectl) {
            throw new RuntimeException(
                'kubectl is not installed. Read:  
                    https://kubernetes.io/docs/tasks/tools/install-kubectl'
            );
        }

        $this->version = $kubectl;
    }

    public function getVersion(): string
    {
        return $this->version[0];
    }

    public function pod()
    {
        exec('kubectl get pod -n ' . KUBERNETES_NAME_SPACE, $results);
        return $results;
    }
}

final class Pods
{
    private $pods;
    private $kubectl;
    private $kubed;

    public function __construct(Kubectl $kubectl, Kubed $kubed)
    {
        $this->kubectl = $kubectl;
        $this->kubed = $kubed;
    }

    public function getPods(): Pods
    {
        if (!$this->kubectl->pod()) {
            $renew = $this->kubed->renew();
        }

        $results = $this->kubectl->pod();

        if (!$results) {
            $foo = $this->kubed->init();
            $results = $this->kubectl->pod();
            if (!$results) {
                throw new Exception(
                    'Unable to get pods. ' . PHP_EOL . $renew[0] . PHP_EOL
                );
            }
        }

        $object = new self(new Kubectl(), new Kubed());
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

  private function podName($item, $key): void {
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

  public function __construct(Pods $pods)
  {
    $this->pods = $pods;
  }

  public function renewToken(): array
  {
    $results = [];
    exec('kubed -renew ' . CLUSTER, $results);

    return $results;
  }

  private function nodeExecute(string $command): array
  {
    exec('kubectl exec -it ' . $this->pods->FirstPod() . ' -n ' . KUBERNETES_NAME_SPACE . ' -- ' . $command, $result);
    return $result;
  }

  private function nodeFileSize(string $fileName): array
  {
      return $this->nodeExecute('stat -c %s ' . $fileName);
  }

  public function createSnapshot(): void
  {
    echo 'Creating production snapshot at POD: ' . $this->pods->FirstPod() . PHP_EOL;
    $results = $this->nodeExecute('/elmcip/create_snapshots');
    foreach ($results as $result) {
      print $result . PHP_EOL;
    }
  }

  public function getSnapshot(string $fileName): string
  {
    $nodeMd5sum = $this->nodeMd5Sum($fileName);

    exec('kubectl cp '. KUBERNETES_NAME_SPACE . '/' . $this->pods->FirstPod() . ':elmcip/' . $fileName. ' site/' . $fileName, $result);
    $validate = $this->validateTransfer(
            'site/' . $fileName,
            $nodeMd5sum
    );

    if ($validate){
      return $fileName . ' was successfully copied from ' . $this->pods->FirstPod();
    }

    return 'Copy of ' . $fileName . ' from ' . $this->pods->FirstPod() . ' failed';
  }

  private function nodeMd5Sum(string $fileName): string
  {
    $md5sum = $this->nodeExecute('md5sum /elmcip/' . $fileName)[0];
    return explode('  ', $md5sum)[0];
  }

  private function fileTimeModified(string $fileName): int
  {
    if (file_exists($fileName)) {
        return filemtime($fileName);
      }
    return 0;
  }

  private function validateTransfer(string $fileName, string $nodeMd5sum): bool
  {
    $newTime = $this->fileTimeModified($fileName);
    $newFilesize = filesize($fileName);
    $newMd5sum = md5_file($fileName);

    return $nodeMd5sum === md5_file($fileName);
  }
}
