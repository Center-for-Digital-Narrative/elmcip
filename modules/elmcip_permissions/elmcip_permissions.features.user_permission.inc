<?php
/**
 * @file
 * elmcip_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elmcip_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access mollom statistics'.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer RDF field mappings'.
  $permissions['administer RDF field mappings'] = array(
    'name' => 'administer RDF field mappings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rdfui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer mollom'.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panel-nodes'.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(),
    'module' => 'panels_node',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer rdf'.
  $permissions['administer rdf'] = array(
    'name' => 'administer rdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rdfx',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer stylizer'.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(),
    'module' => 'stylizer',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'assign administrative editor role'.
  $permissions['assign administrative editor role'] = array(
    'name' => 'assign administrative editor role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign contributor role'.
  $permissions['assign contributor role'] = array(
    'name' => 'assign contributor role',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign editor role'.
  $permissions['assign editor role'] = array(
    'name' => 'assign editor role',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign submitter role'.
  $permissions['assign submitter role'] = array(
    'name' => 'assign submitter role',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign supereditor role'.
  $permissions['assign supereditor role'] = array(
    'name' => 'assign supereditor role',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign teacher role'.
  $permissions['assign teacher role'] = array(
    'name' => 'assign teacher role',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass mollom protection'.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure flickr'.
  $permissions['configure flickr'] = array(
    'name' => 'configure flickr',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_flickr',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create class_group content'.
  $permissions['create class_group content'] = array(
    'name' => 'create class_group content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create critical_writing content'.
  $permissions['create critical_writing content'] = array(
    'name' => 'create critical_writing content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create databases_and_archives content'.
  $permissions['create databases_and_archives content'] = array(
    'name' => 'create databases_and_archives content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_anthology_selection'.
  $permissions['create field_anthology_selection'] = array(
    'name' => 'create field_anthology_selection',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_anthology_submission'.
  $permissions['create field_anthology_submission'] = array(
    'name' => 'create field_anthology_submission',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_auth_email'.
  $permissions['create field_auth_email'] = array(
    'name' => 'create field_auth_email',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_author_noted'.
  $permissions['create field_author_noted'] = array(
    'name' => 'create field_author_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cw_noted'.
  $permissions['create field_cw_noted'] = array(
    'name' => 'create field_cw_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_editorial_notes'.
  $permissions['create field_editorial_notes'] = array(
    'name' => 'create field_editorial_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_event_noted'.
  $permissions['create field_event_noted'] = array(
    'name' => 'create field_event_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_notebok'.
  $permissions['create field_notebok'] = array(
    'name' => 'create field_notebok',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_record_status_tax'.
  $permissions['create field_record_status_tax'] = array(
    'name' => 'create field_record_status_tax',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_students'.
  $permissions['create field_students'] = array(
    'name' => 'create field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_teacher_link'.
  $permissions['create field_teacher_link'] = array(
    'name' => 'create field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_work_noted'.
  $permissions['create field_work_noted'] = array(
    'name' => 'create field_work_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_your_notes'.
  $permissions['create field_your_notes'] = array(
    'name' => 'create field_your_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create notebook content'.
  $permissions['create notebook content'] = array(
    'name' => 'create notebook content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create notebook_entry content'.
  $permissions['create notebook_entry content'] = array(
    'name' => 'create notebook_entry content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create organization content'.
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel-nodes'.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(),
    'module' => 'panels_node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create platform_software content'.
  $permissions['create platform_software content'] = array(
    'name' => 'create platform_software content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create publisher content'.
  $permissions['create publisher content'] = array(
    'name' => 'create publisher content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create research_collection content'.
  $permissions['create research_collection content'] = array(
    'name' => 'create research_collection content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create story content'.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create teaching_resource content'.
  $permissions['create teaching_resource content'] = array(
    'name' => 'create teaching_resource content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create work content'.
  $permissions['create work content'] = array(
    'name' => 'create work content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any class_group content'.
  $permissions['delete any class_group content'] = array(
    'name' => 'delete any class_group content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any critical_writing content'.
  $permissions['delete any critical_writing content'] = array(
    'name' => 'delete any critical_writing content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any databases_and_archives content'.
  $permissions['delete any databases_and_archives content'] = array(
    'name' => 'delete any databases_and_archives content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any notebook content'.
  $permissions['delete any notebook content'] = array(
    'name' => 'delete any notebook content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any notebook_entry content'.
  $permissions['delete any notebook_entry content'] = array(
    'name' => 'delete any notebook_entry content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organization content'.
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel-nodes'.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any platform_software content'.
  $permissions['delete any platform_software content'] = array(
    'name' => 'delete any platform_software content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any publisher content'.
  $permissions['delete any publisher content'] = array(
    'name' => 'delete any publisher content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any research_collection content'.
  $permissions['delete any research_collection content'] = array(
    'name' => 'delete any research_collection content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any story content'.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any teaching_resource content'.
  $permissions['delete any teaching_resource content'] = array(
    'name' => 'delete any teaching_resource content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any work content'.
  $permissions['delete any work content'] = array(
    'name' => 'delete any work content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own class_group content'.
  $permissions['delete own class_group content'] = array(
    'name' => 'delete own class_group content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own critical_writing content'.
  $permissions['delete own critical_writing content'] = array(
    'name' => 'delete own critical_writing content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own databases_and_archives content'.
  $permissions['delete own databases_and_archives content'] = array(
    'name' => 'delete own databases_and_archives content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own notebook content'.
  $permissions['delete own notebook content'] = array(
    'name' => 'delete own notebook content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own notebook_entry content'.
  $permissions['delete own notebook_entry content'] = array(
    'name' => 'delete own notebook_entry content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organization content'.
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel-nodes'.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own platform_software content'.
  $permissions['delete own platform_software content'] = array(
    'name' => 'delete own platform_software content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publisher content'.
  $permissions['delete own publisher content'] = array(
    'name' => 'delete own publisher content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own research_collection content'.
  $permissions['delete own research_collection content'] = array(
    'name' => 'delete own research_collection content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own story content'.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own teaching_resource content'.
  $permissions['delete own teaching_resource content'] = array(
    'name' => 'delete own teaching_resource content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own work content'.
  $permissions['delete own work content'] = array(
    'name' => 'delete own work content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in gender'.
  $permissions['delete terms in gender'] = array(
    'name' => 'delete terms in gender',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in language'.
  $permissions['delete terms in language'] = array(
    'name' => 'delete terms in language',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in project_type'.
  $permissions['delete terms in project_type'] = array(
    'name' => 'delete terms in project_type',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in publication_type'.
  $permissions['delete terms in publication_type'] = array(
    'name' => 'delete terms in publication_type',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in publication_venue'.
  $permissions['delete terms in publication_venue'] = array(
    'name' => 'delete terms in publication_venue',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in record_status'.
  $permissions['delete terms in record_status'] = array(
    'name' => 'delete terms in record_status',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_1'.
  $permissions['delete terms in vocabulary_1'] = array(
    'name' => 'delete terms in vocabulary_1',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_2'.
  $permissions['delete terms in vocabulary_2'] = array(
    'name' => 'delete terms in vocabulary_2',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_4'.
  $permissions['delete terms in vocabulary_4'] = array(
    'name' => 'delete terms in vocabulary_4',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_5'.
  $permissions['delete terms in vocabulary_5'] = array(
    'name' => 'delete terms in vocabulary_5',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any class_group content'.
  $permissions['edit any class_group content'] = array(
    'name' => 'edit any class_group content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any critical_writing content'.
  $permissions['edit any critical_writing content'] = array(
    'name' => 'edit any critical_writing content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any databases_and_archives content'.
  $permissions['edit any databases_and_archives content'] = array(
    'name' => 'edit any databases_and_archives content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any notebook content'.
  $permissions['edit any notebook content'] = array(
    'name' => 'edit any notebook content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any notebook_entry content'.
  $permissions['edit any notebook_entry content'] = array(
    'name' => 'edit any notebook_entry content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organization content'.
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel-nodes'.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any platform_software content'.
  $permissions['edit any platform_software content'] = array(
    'name' => 'edit any platform_software content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any publisher content'.
  $permissions['edit any publisher content'] = array(
    'name' => 'edit any publisher content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any research_collection content'.
  $permissions['edit any research_collection content'] = array(
    'name' => 'edit any research_collection content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any story content'.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any teaching_resource content'.
  $permissions['edit any teaching_resource content'] = array(
    'name' => 'edit any teaching_resource content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any work content'.
  $permissions['edit any work content'] = array(
    'name' => 'edit any work content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_anthology_selection'.
  $permissions['edit field_anthology_selection'] = array(
    'name' => 'edit field_anthology_selection',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_anthology_submission'.
  $permissions['edit field_anthology_submission'] = array(
    'name' => 'edit field_anthology_submission',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_auth_email'.
  $permissions['edit field_auth_email'] = array(
    'name' => 'edit field_auth_email',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_author_noted'.
  $permissions['edit field_author_noted'] = array(
    'name' => 'edit field_author_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cw_noted'.
  $permissions['edit field_cw_noted'] = array(
    'name' => 'edit field_cw_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_editorial_notes'.
  $permissions['edit field_editorial_notes'] = array(
    'name' => 'edit field_editorial_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_event_noted'.
  $permissions['edit field_event_noted'] = array(
    'name' => 'edit field_event_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_notebok'.
  $permissions['edit field_notebok'] = array(
    'name' => 'edit field_notebok',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_record_status_tax'.
  $permissions['edit field_record_status_tax'] = array(
    'name' => 'edit field_record_status_tax',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_students'.
  $permissions['edit field_students'] = array(
    'name' => 'edit field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_teacher_link'.
  $permissions['edit field_teacher_link'] = array(
    'name' => 'edit field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_work_noted'.
  $permissions['edit field_work_noted'] = array(
    'name' => 'edit field_work_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_your_notes'.
  $permissions['edit field_your_notes'] = array(
    'name' => 'edit field_your_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own class_group content'.
  $permissions['edit own class_group content'] = array(
    'name' => 'edit own class_group content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own critical_writing content'.
  $permissions['edit own critical_writing content'] = array(
    'name' => 'edit own critical_writing content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own databases_and_archives content'.
  $permissions['edit own databases_and_archives content'] = array(
    'name' => 'edit own databases_and_archives content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_anthology_selection'.
  $permissions['edit own field_anthology_selection'] = array(
    'name' => 'edit own field_anthology_selection',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_anthology_submission'.
  $permissions['edit own field_anthology_submission'] = array(
    'name' => 'edit own field_anthology_submission',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_auth_email'.
  $permissions['edit own field_auth_email'] = array(
    'name' => 'edit own field_auth_email',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_author_noted'.
  $permissions['edit own field_author_noted'] = array(
    'name' => 'edit own field_author_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cw_noted'.
  $permissions['edit own field_cw_noted'] = array(
    'name' => 'edit own field_cw_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_editorial_notes'.
  $permissions['edit own field_editorial_notes'] = array(
    'name' => 'edit own field_editorial_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_noted'.
  $permissions['edit own field_event_noted'] = array(
    'name' => 'edit own field_event_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_notebok'.
  $permissions['edit own field_notebok'] = array(
    'name' => 'edit own field_notebok',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_record_status_tax'.
  $permissions['edit own field_record_status_tax'] = array(
    'name' => 'edit own field_record_status_tax',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_students'.
  $permissions['edit own field_students'] = array(
    'name' => 'edit own field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_teacher_link'.
  $permissions['edit own field_teacher_link'] = array(
    'name' => 'edit own field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_work_noted'.
  $permissions['edit own field_work_noted'] = array(
    'name' => 'edit own field_work_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_your_notes'.
  $permissions['edit own field_your_notes'] = array(
    'name' => 'edit own field_your_notes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own notebook content'.
  $permissions['edit own notebook content'] = array(
    'name' => 'edit own notebook content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own notebook_entry content'.
  $permissions['edit own notebook_entry content'] = array(
    'name' => 'edit own notebook_entry content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organization content'.
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel-nodes'.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own platform_software content'.
  $permissions['edit own platform_software content'] = array(
    'name' => 'edit own platform_software content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publisher content'.
  $permissions['edit own publisher content'] = array(
    'name' => 'edit own publisher content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own research_collection content'.
  $permissions['edit own research_collection content'] = array(
    'name' => 'edit own research_collection content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own story content'.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own teaching_resource content'.
  $permissions['edit own teaching_resource content'] = array(
    'name' => 'edit own teaching_resource content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own work content'.
  $permissions['edit own work content'] = array(
    'name' => 'edit own work content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in gender'.
  $permissions['edit terms in gender'] = array(
    'name' => 'edit terms in gender',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in language'.
  $permissions['edit terms in language'] = array(
    'name' => 'edit terms in language',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in project_type'.
  $permissions['edit terms in project_type'] = array(
    'name' => 'edit terms in project_type',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in publication_type'.
  $permissions['edit terms in publication_type'] = array(
    'name' => 'edit terms in publication_type',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in publication_venue'.
  $permissions['edit terms in publication_venue'] = array(
    'name' => 'edit terms in publication_venue',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in record_status'.
  $permissions['edit terms in record_status'] = array(
    'name' => 'edit terms in record_status',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_1'.
  $permissions['edit terms in vocabulary_1'] = array(
    'name' => 'edit terms in vocabulary_1',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_2'.
  $permissions['edit terms in vocabulary_2'] = array(
    'name' => 'edit terms in vocabulary_2',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_4'.
  $permissions['edit terms in vocabulary_4'] = array(
    'name' => 'edit terms in vocabulary_4',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_5'.
  $permissions['edit terms in vocabulary_5'] = array(
    'name' => 'edit terms in vocabulary_5',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'location',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use text format 1'.
  $permissions['use text format 1'] = array(
    'name' => 'use text format 1',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format 2'.
  $permissions['use text format 2'] = array(
    'name' => 'use text format 2',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format 3'.
  $permissions['use text format 3'] = array(
    'name' => 'use text format 3',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format basic_text_editor'.
  $permissions['use text format basic_text_editor'] = array(
    'name' => 'use text format basic_text_editor',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view field_anthology_selection'.
  $permissions['view field_anthology_selection'] = array(
    'name' => 'view field_anthology_selection',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_anthology_submission'.
  $permissions['view field_anthology_submission'] = array(
    'name' => 'view field_anthology_submission',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_auth_email'.
  $permissions['view field_auth_email'] = array(
    'name' => 'view field_auth_email',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_author_noted'.
  $permissions['view field_author_noted'] = array(
    'name' => 'view field_author_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cw_noted'.
  $permissions['view field_cw_noted'] = array(
    'name' => 'view field_cw_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_editorial_notes'.
  $permissions['view field_editorial_notes'] = array(
    'name' => 'view field_editorial_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_event_noted'.
  $permissions['view field_event_noted'] = array(
    'name' => 'view field_event_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_notebok'.
  $permissions['view field_notebok'] = array(
    'name' => 'view field_notebok',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_record_status_tax'.
  $permissions['view field_record_status_tax'] = array(
    'name' => 'view field_record_status_tax',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_students'.
  $permissions['view field_students'] = array(
    'name' => 'view field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_teacher_link'.
  $permissions['view field_teacher_link'] = array(
    'name' => 'view field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_work_noted'.
  $permissions['view field_work_noted'] = array(
    'name' => 'view field_work_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_your_notes'.
  $permissions['view field_your_notes'] = array(
    'name' => 'view field_your_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view own field_anthology_selection'.
  $permissions['view own field_anthology_selection'] = array(
    'name' => 'view own field_anthology_selection',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_anthology_submission'.
  $permissions['view own field_anthology_submission'] = array(
    'name' => 'view own field_anthology_submission',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_auth_email'.
  $permissions['view own field_auth_email'] = array(
    'name' => 'view own field_auth_email',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_author_noted'.
  $permissions['view own field_author_noted'] = array(
    'name' => 'view own field_author_noted',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cw_noted'.
  $permissions['view own field_cw_noted'] = array(
    'name' => 'view own field_cw_noted',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_editorial_notes'.
  $permissions['view own field_editorial_notes'] = array(
    'name' => 'view own field_editorial_notes',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_noted'.
  $permissions['view own field_event_noted'] = array(
    'name' => 'view own field_event_noted',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_notebok'.
  $permissions['view own field_notebok'] = array(
    'name' => 'view own field_notebok',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_record_status_tax'.
  $permissions['view own field_record_status_tax'] = array(
    'name' => 'view own field_record_status_tax',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_students'.
  $permissions['view own field_students'] = array(
    'name' => 'view own field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_teacher_link'.
  $permissions['view own field_teacher_link'] = array(
    'name' => 'view own field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_work_noted'.
  $permissions['view own field_work_noted'] = array(
    'name' => 'view own field_work_noted',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_your_notes'.
  $permissions['view own field_your_notes'] = array(
    'name' => 'view own field_your_notes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'supereditor' => 'supereditor',
    ),
    'module' => 'location',
  );

  return $permissions;
}
