<?php

/**
 * @file nuke-faq.php
 * Remove broken faq module from the system.
 */

Database::getConnection()->query(
  "CREATE TABLE field_revision_taxonomyextra ( 
    `entity_type` VARCHAR(128) NOT NULL DEFAULT '',  
    `bundle` VARCHAR(128) NOT NULL DEFAULT '',  
    `deleted` TINYINT NOT NULL DEFAULT 0,  
    `entity_id` INT unsigned NOT NULL,  
    `revision_id` INT unsigned NOT NULL,  
    `language` VARCHAR(32) NOT NULL DEFAULT '',  
    `delta` INT unsigned NOT NULL,  
    `taxonomyextra_tid` INT unsigned NULL DEFAULT NULL,  PRIMARY KEY (
      `entity_type`, 
      `entity_id`, 
      `revision_id`, 
      `deleted`, 
      `delta`, 
      `language`),  
    INDEX `entity_type` (`entity_type`),  
    INDEX `bundle` (`bundle`),  
    INDEX `deleted` (`deleted`),  
    INDEX `entity_id` (`entity_id`),  
    INDEX `revision_id` (`revision_id`),  
    INDEX `language` (`language`),  
    INDEX `taxonomyextra_tid` (`taxonomyextra_tid`) ) 
    ENGINE = InnoDB DEFAULT CHARACTER SET utf8"
);

node_delete_multiple(array(970, 972, 1001, 1002, 1005, 1006, 1287, 1500));
drush_invoke_process("@site", "dl faq -y");
drush_invoke_process("@site", "pmu faq -y");
$faq = drupal_get_path('module', 'faq');
$result = shell_exec('rm -vfr ' . $faq);
print $result . PHP_EOL;
