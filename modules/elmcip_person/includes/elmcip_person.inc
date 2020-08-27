<?php declare(strict_types=1);


final class elmcip_person {

  private $first_name;
  private $middle_name;
  private $last_name;

  public function __construct($first_name,
                              $middle_name,
                              $last_name) {
    $this->last_name = $last_name;
    $this->first_name = $first_name;
    $this->middle_name = $middle_name;
  }

  private function trim($content): string {
    if ($content) {
      return trim($content);
    }

    return (string) $content;
  }

  private function add_space($name): string {
    if ($name) {
      return $name . ' ';
    }

    return $name;
  }

  private function first_name(): string {
    return $this->add_space($this->trim($this->first_name));
  }

  private function middle_name(): string {
    return $this->add_space($this->trim($this->middle_name));
 }

  private function last_name(): string {
    return $this->trim($this->last_name);
  }

  public function person_title(): string {
    return $this->first_name() . $this->middle_name() . $this->last_name();
  }

}
