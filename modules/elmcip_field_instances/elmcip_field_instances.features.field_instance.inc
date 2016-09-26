<?php
/**
 * @file
 * elmcip_field_instances.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function elmcip_field_instances_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_book-comment_body'.
  $field_instances['comment-comment_node_book-comment_body'] = array(
    'bundle' => 'comment_node_book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_class_group-comment_body'.
  $field_instances['comment-comment_node_class_group-comment_body'] = array(
    'bundle' => 'comment_node_class_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_critical_writing-comment_body'.
  $field_instances['comment-comment_node_critical_writing-comment_body'] = array(
    'bundle' => 'comment_node_critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_databases_and_archives-comment_body'.
  $field_instances['comment-comment_node_databases_and_archives-comment_body'] = array(
    'bundle' => 'comment_node_databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_event-comment_body'.
  $field_instances['comment-comment_node_event-comment_body'] = array(
    'bundle' => 'comment_node_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_faq-comment_body'.
  $field_instances['comment-comment_node_faq-comment_body'] = array(
    'bundle' => 'comment_node_faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_notebook-comment_body'.
  $field_instances['comment-comment_node_notebook-comment_body'] = array(
    'bundle' => 'comment_node_notebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_notebook_entry-comment_body'.
  $field_instances['comment-comment_node_notebook_entry-comment_body'] = array(
    'bundle' => 'comment_node_notebook_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_organization-comment_body'.
  $field_instances['comment-comment_node_organization-comment_body'] = array(
    'bundle' => 'comment_node_organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_page-comment_body'.
  $field_instances['comment-comment_node_page-comment_body'] = array(
    'bundle' => 'comment_node_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_panel-comment_body'.
  $field_instances['comment-comment_node_panel-comment_body'] = array(
    'bundle' => 'comment_node_panel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_person-comment_body'.
  $field_instances['comment-comment_node_person-comment_body'] = array(
    'bundle' => 'comment_node_person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_platform_software-comment_body'.
  $field_instances['comment-comment_node_platform_software-comment_body'] = array(
    'bundle' => 'comment_node_platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_publisher-comment_body'.
  $field_instances['comment-comment_node_publisher-comment_body'] = array(
    'bundle' => 'comment_node_publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_research_collection-comment_body'.
  $field_instances['comment-comment_node_research_collection-comment_body'] = array(
    'bundle' => 'comment_node_research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_story-comment_body'.
  $field_instances['comment-comment_node_story-comment_body'] = array(
    'bundle' => 'comment_node_story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_teaching_resource-comment_body'.
  $field_instances['comment-comment_node_teaching_resource-comment_body'] = array(
    'bundle' => 'comment_node_teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_work-comment_body'.
  $field_instances['comment-comment_node_work-comment_body'] = array(
    'bundle' => 'comment_node_work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'file-audio-field_description'.
  $field_instances['file-audio-field_description'] = array(
    'bundle' => 'audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe the contents of the file.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'file',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-book-body'.
  $field_instances['node-book-body'] = array(
    'bundle' => 'book',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '',
        'format' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-book-field_multi_images'.
  $field_instances['node-book-field_multi_images'] = array(
    'bundle' => 'book',
    'deleted' => 0,
    'description' => 'Field to add screenshot to book pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_multi_images',
    'label' => 'Screenshot',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-class_group-field_students'.
  $field_instances['node-class_group-field_students'] = array(
    'bundle' => 'class_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the students to the class group, by entering their knowledge base usernames in this field. Add a new item for each student. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_students',
    'label' => 'Students',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-class_group-field_teacher_link'.
  $field_instances['node-class_group-field_teacher_link'] = array(
    'bundle' => 'class_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The teacher of the course. This is an autocomplete field. The teacher must be a Knowledge Base user who has been assigned "teacher" permissions by a KB administrator. Multiple teachers may be added to a class group.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teacher_link',
    'label' => 'Teacher',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-class_group-field_tr_link'.
  $field_instances['node-class_group-field_tr_link'] = array(
    'bundle' => 'class_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to link to your syllabus or other material you have created as a teaching resource in the Knowledge Base. The field will autocomplete. If the teaching resource is not yet in the Knowledge Base, first <a href="node/add/teaching-resource">add the teaching resource</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tr_link',
    'label' => 'Course Syllabus (Teaching Resource)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_abstract'.
  $field_instances['node-critical_writing-field_abstract'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter a brief abstract in English describing the critical work or article in fewer than 350 words. ',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract (in English)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 36,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-critical_writing-field_abstract_lang'.
  $field_instances['node-critical_writing-field_abstract_lang'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<b>If the work is not written in English</b> write an abstract of fewer than 350 words in the original language. Leave this field empty if the language of the work is English.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract_lang',
    'label' => 'Abstract (in original language)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 37,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-critical_writing-field_abstract_lang_tax'.
  $field_instances['node-critical_writing-field_abstract_lang_tax'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the human language of the additional language abstract. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 39,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 42,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_abstract_lang_tax',
    'label' => 'Language of abstract (Taxonomy)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_archiveurl'.
  $field_instances['node-critical_writing-field_archiveurl'] = array(
    'bundle' => 'critical_writing',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'If the critical writing is available at a web-based archive, such as the Internet Archive, or a university open research archive, link here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 24,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_archiveurl',
    'label' => 'Archive URL',
    'required' => FALSE,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 12,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'multistep' => 0,
      ),
      'type' => 'link_field',
      'weight' => 10,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-critical_writing-field_author_name'.
  $field_instances['node-critical_writing-field_author_name'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the author. The author\'s name will autocomplete if it is in the database. If the author is not yet in the database, <a href="/node/add/person" target="_blank">add the author</a>.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author_name',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-critical_writing-field_database_or_archive_refere'.
  $field_instances['node-critical_writing-field_database_or_archive_refere'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this critical writing references a database or archive, enter it using this autocomplete field, otherwise first add the database.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 30,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_database_or_archive_refere',
    'label' => 'Database or Archive reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_edition'.
  $field_instances['node-critical_writing-field_edition'] = array(
    'bundle' => 'critical_writing',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'If this critical writing has been published in multiple editions, enter information about this edition here (e.g. 2nd edition).',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_edition',
    'label' => 'Edition',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 35,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'multistep' => 0,
        'rows' => 5,
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-critical_writing-field_editor_name'.
  $field_instances['node-critical_writing-field_editor_name'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the editor if applicable. The name will autocomplete if the editor is already in the database. Otherwise <a href="/node/add/person" target="_blank">add the editor</a> now. If you are entering an article or chapter from an anthology, do <i>not</i> enter the editor of the volume here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 15,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_editor_name',
    'label' => 'Editor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_editorial_notes'.
  $field_instances['node-critical_writing-field_editorial_notes'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'KB editors should use this field to provide a brief indication of revisions required. This field will only be visible to KB editor and to original authors of the record. This field should be wiped when the record is marked as approved.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB editor notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_eissn'.
  $field_instances['node-critical_writing-field_eissn'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If a publication has an eISSN number enter it here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_eissn',
    'label' => 'eISSN',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 25,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance:
  // 'node-critical_writing-field_electronic_literature_dire'.
  $field_instances['node-critical_writing-field_electronic_literature_dire'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this critical writing has an entry in the ELO\'s Electronic Literature Directory, add a reference here by linking the complete URL of the page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 29,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_electronic_literature_dire',
    'label' => 'Electronic Literature Directory entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Electronic Literature Directory entry',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_files'.
  $field_instances['node-critical_writing-field_files'] = array(
    'bundle' => 'critical_writing',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Attach relevant files here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 32,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 49,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 35,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 42,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 46,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/attachments/criticalwriting',
      'file_extensions' => 'txt pdf ppt mp3 html htm rtf pptx zip epub',
      'max_filesize' => '500  MB',
      'user_register_form' => FALSE,
    ),
    'weight' => 46,
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 19,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-critical_writing-field_inbook'.
  $field_instances['node-critical_writing-field_inbook'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the essay or article appears in a book, anthology, or special issue of a journal enter the title here. Also use this field to indicate that a conference paper appears in a particular panel session of a conference. If the publication is not yet in the Knowledge Base, you should first <a href="/node/add/critical-writing">add the critical writing</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 16,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 28,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 36,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 36,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_inbook',
    'label' => 'Appears in',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 36,
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
    'widget_type' => 'nodereference_autocomplete',
  );

  // Exported field_instance: 'node-critical_writing-field_isbn_text'.
  $field_instances['node-critical_writing-field_isbn_text'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the ISBN-13 (preferred) or ISBN-10, including the hyphens, if listed. If a book is published in hardcover and paperback editions, enter the hardcover edition first. Note: The International Standard Book Number (ISBN) is a numeric identifier assigned to each edition and variation of a book. You will only enter this number you are entering a book. The number is typically found on the copyright page and on the back cover or jacket of the book. You can also find the ISBN by looking the book up in WorldCat, a library catalog, or an online bookstore, such as Amazon.com.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_isbn_text',
    'label' => 'ISBN',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 34,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 25,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-critical_writing-field_issn_text'.
  $field_instances['node-critical_writing-field_issn_text'] = array(
    'bundle' => 'critical_writing',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issn_text',
    'label' => 'ISSN',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 40,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 25,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-critical_writing-field_journalissue'.
  $field_instances['node-critical_writing-field_journalissue'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If an article appears in a numbered and/or dated serial, enter the volume number first, followed by a period and the issue number. For a publication paginated by issue, e.g. (volume 42, issue 1), simply enter: 42.1.
For an article published in a weekly or monthly periodical, enter the day first, then the month (abbreviated except for May, June, and July), e.g. 20 Oct. or 01 May. ',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_journalissue',
    'label' => 'Journal volume and issue',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 39,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-critical_writing-field_language_tax'.
  $field_instances['node-critical_writing-field_language_tax'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the human language the work was written in. Select multiple if the work includes multiple languages. Note: this is a taxonomy field, which will replace the previous Language field, which will be deleted once the data is migrated from it. For new records, disregard the other Language field above and use this one.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 38,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_language_tax',
    'label' => 'Language',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_license'.
  $field_instances['node-critical_writing-field_license'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'If the license of the work is known, select it here. ',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_license',
    'label' => 'License',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 14,
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-critical_writing-field_media_asset'.
  $field_instances['node-critical_writing-field_media_asset'] = array(
    'bundle' => 'critical_writing',
    'deleted' => 0,
    'description' => 'Use this field to display Vimeo and YouTube videos, Flickr sets, and other multimedia content. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'full',
        ),
        'type' => 'file_rendered',
        'weight' => 46,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 47,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media_asset',
    'label' => 'Multimedia',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_multi_images'.
  $field_instances['node-critical_writing-field_multi_images'] = array(
    'bundle' => 'critical_writing',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Attach an image of the book cover or other images.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 34,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => 'large',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 32,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 37,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 41,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_multi_images',
    'label' => 'Images',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/critical-writing/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 44,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 0,
          'reference' => 'reference',
          'remote' => 'remote',
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 16,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-critical_writing-field_node_ref'.
  $field_instances['node-critical_writing-field_node_ref'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the <b>publisher of book, title of journal</b>, or other publishing entity. The publisher\'s name will autocomplete if it is in the database. If the publisher is not yet in the database, <a href="/node/add/publisher" target="_blank">add the publisher</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 28,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_node_ref',
    'label' => 'Publisher',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_node_ref_event'.
  $field_instances['node-critical_writing-field_node_ref_event'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the critical article was presented at a conference, select here. The event will autocomplete if it is in the database. If the author is not yet in the database, <a href="/node/add/event" target="_blank">add the event</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 16,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_node_ref_event',
    'label' => 'Presented at Event',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_node_ref_work'.
  $field_instances['node-critical_writing-field_node_ref_work'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the title of a work of electronic literature or digital art referenced in the critical writing. If the work is not in the knowledge base, <a href="/node/add/work" target="_blank">add the work</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 35,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 40,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_node_ref_work',
    'label' => 'Creative Works referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 40,
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
    'widget_type' => 'nodereference_autocomplete',
  );

  // Exported field_instance: 'node-critical_writing-field_organization_cw'.
  $field_instances['node-critical_writing-field_organization_cw'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If an organization is referenced in the article, select the organization in the autocomplete field. If the organization is not yet in the KB, first add the <a href="/node/add/organiztion" target="_blank">organization</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_organization_cw',
    'label' => 'Organization referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_other_edition_link'.
  $field_instances['node-critical_writing-field_other_edition_link'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record in the Knowledge Base of another edition of this item, cross reference it here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 37,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_other_edition_link',
    'label' => 'Other edition',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_other_lang_ver_link'.
  $field_instances['node-critical_writing-field_other_lang_ver_link'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record in the knowledge base of another version of this item published in another language, link to it here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 29,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 30,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 28,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 40,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 43,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_other_lang_ver_link',
    'label' => 'Other language version',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_pagenumbers'.
  $field_instances['node-critical_writing-field_pagenumbers'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the critical writing is published in a journal or book, enter the start and end page numbers, separated by a hyphen (e.g. 65-77). Use the complete number (e.g. 277-297).',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pagenumbers',
    'label' => 'Page Numbers',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 37,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 14,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance:
  // 'node-critical_writing-field_publisher_referenced'.
  $field_instances['node-critical_writing-field_publisher_referenced'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the critical writing references a particular publisher or journal (for example, a conference paper about a particular online journal), use this node reference field to add the publisher. If it is not yet in the Knowledge Base, first add the <a href="/node/add/publisher" target="_blank">publisher</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_publisher_referenced',
    'label' => 'Publisher Referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_pubtype_tax'.
  $field_instances['node-critical_writing-field_pubtype_tax'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the publication type of this critical writing. Multiple selections may apply if the same item fits multiple categories (e.g. a conference paper that is also published as a journal publication), but a single selection is usually adequate. 
<b>Note:</B> Only select the term that describes the specific record type. For instance, a review is a review no matter where it is published. An article in a special issue of a print journal is an article in a print publication. The special issue as a whole that contains the article is the special issue, and has a separate record from the article itself.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pubtype_tax',
    'label' => 'Publication Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_pullquote'.
  $field_instances['node-critical_writing-field_pullquote'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a significant passage (1-2 sentences) excerpted from the text that will help to contextualize it. The quote may displayed on the Knowledge Base and should be representative of the text, pinpointing its primary claim(s) or identifying a key topic, so as to entice readers to access and read the work. <i>Note</i>: Do <b>not</b> put quotation marks around the pull quote.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 31,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 31,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pullquote',
    'label' => 'Pull Quotes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 39,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-critical_writing-field_record_status_tax'.
  $field_instances['node-critical_writing-field_record_status_tax'] = array(
    'bundle' => 'critical_writing',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => 'Editorial status of record, as a taxonomy term. This field can only modified by editors. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 23,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 36,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_ref_about_event'.
  $field_instances['node-critical_writing-field_ref_about_event'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the critical writing is <b>about an event</b>, e.g. a review or trip report of a conference, enter the event here. The field will autocomplete if the event is in the KB, otherwise add the <a href="/node/add/event" target="_blank">event</a> first.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 39,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 42,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ref_about_event',
    'label' => 'Event Referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 42,
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 9,
    ),
    'widget_type' => 'nodereference_autocomplete',
  );

  // Exported field_instance: 'node-critical_writing-field_series_ref'.
  $field_instances['node-critical_writing-field_series_ref'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the critical work was published as part of a series, enter the series title here.  The series title will autocomplete if a node record for it exists in the database. If the series is not yet in the database, <a href="/node/add/critical-writing" target="_blank">add the series</a>. <b>Note:</b> Typically, you will be entering the name of book series (e.g. <i>Electronic Mediations</i> on the University of Minnesota Press), though there are a few exceptions (e.g. <i>ebr</i> threads, such as <i>electropoetics</i> and <i>critical ecologies</I>, are series).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 34,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_series_ref',
    'label' => 'Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_tr_critical'.
  $field_instances['node-critical_writing-field_tr_critical'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If one work of critical writing references another in a substantial way (sustained critical engagement) cross-reference it here by entering the title in the autocomplete field. If it is not yet in the knowledge base, first <a href="/node/add/critical-writing" target="_blank">add the critical writing</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 37,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tr_critical',
    'label' => 'Critical Writing referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
    'widget_type' => 'nodereference_autocomplete',
  );

  // Exported field_instance: 'node-critical_writing-field_translator'.
  $field_instances['node-critical_writing-field_translator'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this item is a translation, indicate the translator here by typing the name, If the translator is in the Knowledge Base, the field will autocomplete. Otherwise, first  <a href="/node/add/person" target="_blank">add the translator</a>. before completing the record.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 31,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_translator',
    'label' => 'Translator',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_university'.
  $field_instances['node-critical_writing-field_university'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Note: for dissertations and theses only, indicate the university in which the thesis was produced. If the university is not yet in the database, first add the <a href="/node/add/organization">university as an organization</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_university',
    'label' => 'University',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-critical_writing-field_url'.
  $field_instances['node-critical_writing-field_url'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If more than one URL exists for the work, enter the publisher in parentheses after the title. For example: Locating the Literary in New Media (Contemporary Literature), Locating the Literary in New Media  (ebr), etc.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 40,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 11,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-critical_writing-field_worldcat_link'.
  $field_instances['node-critical_writing-field_worldcat_link'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If a record for this item is available on the WorldCat library database, enter the Permalink here. Use the URL title field to indicate the edition year (e.g. 1996 ed.). Multiple entries allowed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 33,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_worldcat_link',
    'label' => 'WorldCat Permalink',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-critical_writing-taxonomy_vocabulary_1'.
  $field_instances['node-critical_writing-taxonomy_vocabulary_1'] = array(
    'bundle' => 'critical_writing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A comma-separated list of terms, keywords, or phrases that describe and/or contextualize this piece of critical writing. Example: digital poetics, poetry, procedural poetics, generative, intentionality, materiality, structuralism. As a rule of thumb, use a singular noun rather than a plural for the tag. Also generally try to avoid using people\'s names as tags.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 50,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_contact_email'.
  $field_instances['node-databases_and_archives-field_contact_email'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the resource\'s primary e-mail address (often listed on an "about" page) or the email of an administrator or another person closely affiliated with the resource.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_contact_email',
    'label' => 'Contact e-mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_contributors'.
  $field_instances['node-databases_and_archives-field_contributors'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide notes about the various roles key people (indicated above) played in this project.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_contributors',
    'label' => 'Contributors\' notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_db_cross_cw'.
  $field_instances['node-databases_and_archives-field_db_cross_cw'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Critical Writing about the database or resource.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_cross_cw',
    'label' => 'Critical Writing',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_db_cross_event'.
  $field_instances['node-databases_and_archives-field_db_cross_event'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Events where this resource or database has been featured. Only events can be referenced on this node.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_cross_event',
    'label' => 'Events',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_db_description_english'.
  $field_instances['node-databases_and_archives-field_db_description_english'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A brief description (fewer than 350 words) in English about the database or resource.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_description_english',
    'label' => 'Description (English)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_db_description_original'.
  $field_instances['node-databases_and_archives-field_db_description_original'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A brief description (fewer than 350 words) of the database or resource in the resource\'s original language. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_description_original',
    'label' => 'Description (Original Language)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_db_language'.
  $field_instances['node-databases_and_archives-field_db_language'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the primary human language(s) of the database or resource. Select multiple using the Crtl (or Apple) key.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_language',
    'label' => 'Language',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_db_org'.
  $field_instances['node-databases_and_archives-field_db_org'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If an organization is responsible for developing and maintaining this project, indicate which one using the autocomplete field. If the organization is not yet in the database, <a href="/node/add/organization" target="_blank">add the organization</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_org',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_db_people'.
  $field_instances['node-databases_and_archives-field_db_people'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the names of the people who have played key roles in designing and developing this digital-humanities resource (e.g. leaders, developers, editors). Enter the name of each person separately. The name will autocomplete if the person is already in the database. If the person is not yet in the database, <a href="/node/add/person" target="_blank">add the person</a>.<br><br>
Note: Before adding a new person record, check to see if he or she is already listed as an author.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_people',
    'label' => 'Key People',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_db_tags'.
  $field_instances['node-databases_and_archives-field_db_tags'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A comma-separated list of terms, keywords, or phrases that describe and/or contextualize this resource. Some tags may be similar to the subject headings assigned by librarians. Example: digital poetry -- history and criticism, digital poetics, procedural poetics, generative, intentionality, materiality.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_db_technotes'.
  $field_instances['node-databases_and_archives-field_db_technotes'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Important technical notes about the database or archive.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_db_technotes',
    'label' => 'Technical Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_editorial_notes'.
  $field_instances['node-databases_and_archives-field_editorial_notes'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Editors should use this field to provide short indications of revisions required. The field will only be visible to KB editors and to the original authors of the record. This field should be wiped once the record is marked as approved.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB Editor Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_files'.
  $field_instances['node-databases_and_archives-field_files'] = array(
    'bundle' => 'databases_and_archives',
    'deleted' => 0,
    'description' => 'PDF Attachment for the database or resource, only PDF files are allowed here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 21,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'PDF Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 0,
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 'default',
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_image'.
  $field_instances['node-databases_and_archives-field_image'] = array(
    'bundle' => 'databases_and_archives',
    'deleted' => 0,
    'description' => 'Screenshots of the database or archive.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image (Screenshot)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/databases/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '120 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_license'.
  $field_instances['node-databases_and_archives-field_license'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the license of the work is known, select it from the pull-down menu.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_license',
    'label' => 'License',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_multi_images'.
  $field_instances['node-databases_and_archives-field_multi_images'] = array(
    'bundle' => 'databases_and_archives',
    'deleted' => 0,
    'description' => 'Multimedia content related to the database or archive. For example, screencasts or tutorials.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 20,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_multi_images',
    'label' => 'Multimedia ',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 0,
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'default' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_project_type'.
  $field_instances['node-databases_and_archives-field_project_type'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Using the pulldown menu, identify whether the resource is an archive, database, or special collection. <br><br>In the "Title" field, just above, enter the official name of the resource. If the resource is commonly referred to by an acronymn (e.g. <i>ELD</i> for the <i>Electronic Literature Directory</i>), this can be specified in description.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_project_type',
    'label' => 'Project Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_record_status_tax'.
  $field_instances['node-databases_and_archives-field_record_status_tax'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => array(
      0 => array(
        'tid' => 1490,
      ),
    ),
    'deleted' => 0,
    'description' => 'This is the editorial status of a record, now a taxonomy. This value can only be changed by KB editors. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-databases_and_archives-field_url'.
  $field_instances['node-databases_and_archives-field_url'] = array(
    'bundle' => 'databases_and_archives',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the URL where the resource where the resource can be accessed online. For example, <i>http://elmcip.net/knowledgebase</i> for the ELMCIP Electronic Literature Knowledge Base). Enter the name of the resource in the "Tltle" field just to the left.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'required',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-databases_and_archives-field_year_initiated'.
  $field_instances['node-databases_and_archives-field_year_initiated'] = array(
    'bundle' => 'databases_and_archives',
    'deleted' => 0,
    'description' => 'Select the year this resource was first made available. A more detailed chronology can be provided in the description.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_year_initiated',
    'label' => 'Year Initiated',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-25:+3',
      ),
      'type' => 'date_text',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_archiveurl'.
  $field_instances['node-event-field_archiveurl'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If information about the event is available at a web-based archive, such as the Internet Archive, or a university open research archive, link here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_archiveurl',
    'label' => 'Archive URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 5,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-event-field_associated_event'.
  $field_instances['node-event-field_associated_event'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this event is associated with another event (for instance a night of readings presented at a conference), link to that event here. The event will autocomplete if it is database. If it is not, first <a href="/node/add/event" target="_blank">add the event</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_associated_event',
    'label' => 'Associated with another event',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-event-field_curator'.
  $field_instances['node-event-field_curator'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this event is an exhibition, curated by an individual or multiple people, please indicate the curator using the autocomplete field here. If the curator is not yet in the KB,  <a href="/node/add/person" target="_blank">add the person</a> first.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_curator',
    'label' => 'Curator',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_date'.
  $field_instances['node-event-field_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'default',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => '',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'hidden',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 8,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'default',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-40:+10',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
    'widget_type' => 'date_popup',
  );

  // Exported field_instance: 'node-event-field_editorial_notes'.
  $field_instances['node-event-field_editorial_notes'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB editor notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-event-field_email'.
  $field_instances['node-event-field_email'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
    'widget_type' => 'email_textfield',
  );

  // Exported field_instance: 'node-event-field_event_series'.
  $field_instances['node-event-field_event_series'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the event is part of a series, link to it by typing the name of the series. The name will autocomplete if it is in the database. If the series has not yet been added, first <a href="/node/add/event" target="_blank">create an event record for the series</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_series',
    'label' => 'Event series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event-field_files'.
  $field_instances['node-event-field_files'] = array(
    'bundle' => 'event',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Attach relevant files from the event, such as .pdfs of printed program or posters, or audio recordings in mp3 format.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 19,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/attachments/event',
      'file_extensions' => 'txt jpg jpeg mp3 pdf png zip',
      'max_filesize' => '128 MB',
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 11,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-event-field_individual_organizers'.
  $field_instances['node-event-field_individual_organizers'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to indicate individual people who served as conference chairs or other principal roles in this event. The field will autocomplete. If the person is not yet in the database first <a href="/node/add/person" target="_blank">add the person</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_individual_organizers',
    'label' => 'Individual Organizers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_location'.
  $field_instances['node-event-field_location'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Note: You may add multiple locations here. Note that the form appears twice. <b>Unless you are entering more than one location, only fill out the first location field.</b> If you are adding more than two locations, hit the add another button, fill out the fields, and repeat for all locations.',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 3,
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 7,
    ),
    'widget_type' => 'location',
  );

  // Exported field_instance: 'node-event-field_media_asset'.
  $field_instances['node-event-field_media_asset'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'Use this field to display Vimeo and YouTube videos, and other multimedia content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'media_original',
        ),
        'type' => 'file_rendered',
        'weight' => 21,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media_asset',
    'label' => 'Multimedia',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-event-field_multi_images'.
  $field_instances['node-event-field_multi_images'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'You may upload and attach individual images (20MB max) documenting the event here. Note: use multimedia field to link flickr sets or video.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 20,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_multi_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '20MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-event-field_node_ref'.
  $field_instances['node-event-field_node_ref'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the organization that arranged the event. If the organization does not autocomplete, <a href="/node/add/organization" target="_blank">add the organization</a> now before completing this record.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_node_ref',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event-field_record_status_tax'.
  $field_instances['node-event-field_record_status_tax'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => 'Editorial status of record, as a taxonomy term. This field can only modified by editors.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-event-field_textfield'.
  $field_instances['node-event-field_textfield'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_textfield',
    'label' => 'Short description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 1,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-event-field_url'.
  $field_instances['node-event-field_url'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 4,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-event-taxonomy_vocabulary_1'.
  $field_instances['node-event-taxonomy_vocabulary_1'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Tags',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event-taxonomy_vocabulary_2'.
  $field_instances['node-event-taxonomy_vocabulary_2'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'tid' => 6,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_2',
    'label' => 'Event type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-faq-body'.
  $field_instances['node-faq-body'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 1200,
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-faq-taxonomyextra'.
  $field_instances['node-faq-taxonomyextra'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Debris left over after upgrade from Drupal 6',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomyextra',
    'label' => 'Taxonomy upgrade extras',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-notebook_entry-field_author_noted'.
  $field_instances['node-notebook_entry-field_author_noted'] = array(
    'bundle' => 'notebook_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the author discussed in this note. This is an autocomplete field that will only complete on authors that already have records in the knowledge base. If the work is not in the KB, first <a href="/node/add/person" target="_blank">add the person</a>. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author_noted',
    'label' => 'Author noted',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-notebook_entry-field_cw_noted'.
  $field_instances['node-notebook_entry-field_cw_noted'] = array(
    'bundle' => 'notebook_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the title of the critical writing discussed in this note. This is an autocomplete field that will only complete on items that already have records in the knowledge base. If the critical writing is not in the KB, first <a href="/node/add/critical_writing" target="_blank">add the critical writing</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cw_noted',
    'label' => 'Critical Writing noted',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-notebook_entry-field_event_noted'.
  $field_instances['node-notebook_entry-field_event_noted'] = array(
    'bundle' => 'notebook_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the note discusses an event, enter the name of the event here. This is an autocomplete field that will only reference records of events that are already in the Knowledge Base. If the name of the event does not autocomplete, first <a href="/node/add/event" target="_blank">add the event</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_noted',
    'label' => 'Event noted',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-notebook_entry-field_notebok'.
  $field_instances['node-notebook_entry-field_notebok'] = array(
    'bundle' => 'notebook_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select which of your notebooks you want the note to be attached to.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_notebok',
    'label' => 'Notebook',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-notebook_entry-field_work_noted'.
  $field_instances['node-notebook_entry-field_work_noted'] = array(
    'bundle' => 'notebook_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the title of the creative work or works discussed in this note. This is an autocomplete field that will only complete on works that already have records in the knowledge base. If the work is not in the KB, first <a href="/node/add/work" target="_blank">add the creative work</a>. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_work_noted',
    'label' => 'Work noted',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-notebook_entry-field_your_notes'.
  $field_instances['node-notebook_entry-field_your_notes'] = array(
    'bundle' => 'notebook_entry',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter your notes here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_your_notes',
    'label' => 'Your notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-organization-field_editorial_notes'.
  $field_instances['node-organization-field_editorial_notes'] = array(
    'bundle' => 'organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'KB editors should use this field to provide a brief indication of revisions required. This field will only be visible to KB editor and to original authors of the record. This field should be wiped when the record is marked as approved.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB editor notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-organization-field_email'.
  $field_instances['node-organization-field_email'] = array(
    'bundle' => 'organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
    'widget_type' => 'email_textfield',
  );

  // Exported field_instance: 'node-organization-field_files'.
  $field_instances['node-organization-field_files'] = array(
    'bundle' => 'organization',
    'deleted' => 0,
    'description' => 'You may attach files, such as PDFs, to this record.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/attachments/organization',
      'file_extensions' => 'txt pdf ppt zip',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-organization-field_location'.
  $field_instances['node-organization-field_location'] = array(
    'bundle' => 'organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -3,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 1,
    ),
    'widget_type' => 'location',
  );

  // Exported field_instance: 'node-organization-field_multi_images'.
  $field_instances['node-organization-field_multi_images'] = array(
    'bundle' => 'organization',
    'deleted' => 0,
    'description' => 'Upload screenshots or other images related to the organization.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'medium',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_multi_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-organization-field_record_status_tax'.
  $field_instances['node-organization-field_record_status_tax'] = array(
    'bundle' => 'organization',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => 'Editorial status of record, as a taxonomy term. This field can only modified by editors. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-organization-field_textfield'.
  $field_instances['node-organization-field_textfield'] = array(
    'bundle' => 'organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_textfield',
    'label' => 'Short description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-organization-field_url'.
  $field_instances['node-organization-field_url'] = array(
    'bundle' => 'organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -1,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 100,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-page-field_files'.
  $field_instances['node-page-field_files'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'page/attachments',
      'file_extensions' => 'txt pdf mp3 doc docx odt ppt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-person-field_affiliation'.
  $field_instances['node-person-field_affiliation'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of organizations this person is closely affiliated with. Examples include: artist-and-writer collectives, employers, nonprofit organizations, research groups, universities. The text in the short biography can elaborate and clarify the nature and duration of the person\'s affiliation with this organization. If the organization is not yet in the KB, first <a href="/node/add/organization" target="_blank">add the organization</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_affiliation',
    'label' => 'Affiliations - Organizations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-person-field_alternative_spelling_of_na'.
  $field_instances['node-person-field_alternative_spelling_of_na'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the author\'s name has another spelling in the author\'s native language (e.g. a Russian name in Cyrillic) enter it in this field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_alternative_spelling_of_na',
    'label' => 'Alternative spelling of name in original language alphabet',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-person-field_auth_email'.
  $field_instances['node-person-field_auth_email'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The author\'s email will <I>not</i> be displayed publicly. ELMCIP editors and administrators may use this email to communicate with authors.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_auth_email',
    'label' => 'Author email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 1,
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 7,
    ),
    'widget_type' => 'email_textfield',
  );

  // Exported field_instance: 'node-person-field_authorphoto'.
  $field_instances['node-person-field_authorphoto'] = array(
    'bundle' => 'person',
    'deleted' => 0,
    'description' => 'Upload a photo of the author.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_authorphoto',
    'label' => 'Author photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/author_photos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '400x400',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-person-field_editorial_notes'.
  $field_instances['node-person-field_editorial_notes'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB editor notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-person-field_files'.
  $field_instances['node-person-field_files'] = array(
    'bundle' => 'person',
    'deleted' => 0,
    'description' => 'Use this field to attach a text or pdf document, such as a CV.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 26,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/attachments/person',
      'file_extensions' => 'txt pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-person-field_first_name'.
  $field_instances['node-person-field_first_name'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Given name (e.g. "John" in "John Smith")',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-person-field_gender_sel'.
  $field_instances['node-person-field_gender_sel'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_gender_sel',
    'label' => 'Gender',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-person-field_last_name'.
  $field_instances['node-person-field_last_name'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Family name of the individual (e.g. "Smith" in "John Smith"). If the work is authored by a collective, indicate the name of the collective in the last name field.',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-person-field_middle_name'.
  $field_instances['node-person-field_middle_name'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_middle_name',
    'label' => 'Middle name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-person-field_nationality'.
  $field_instances['node-person-field_nationality'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide the person\'s nationality (passport country).',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 5,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 3,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_nationality',
    'label' => 'Nationality',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 3,
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 10,
    ),
    'widget_type' => 'location',
  );

  // Exported field_instance: 'node-person-field_record_status_tax'.
  $field_instances['node-person-field_record_status_tax'] = array(
    'bundle' => 'person',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => 'Editorial status of record, as a taxonomy term. This field can only modified by editors. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-person-field_residency'.
  $field_instances['node-person-field_residency'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide about the author\'s location.  Only city, state, and country will be publicly displayed.',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 4,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_residency',
    'label' => 'Residency',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 9,
    ),
    'widget_type' => 'location',
  );

  // Exported field_instance: 'node-person-field_textfield'.
  $field_instances['node-person-field_textfield'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a short biography of the author if available. Provide basic professional details, as well as year of birth, etc.',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_textfield',
    'label' => 'Short biography',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 13,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-person-field_url'.
  $field_instances['node-person-field_url'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'Personal website',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-person-field_userid_reference'.
  $field_instances['node-person-field_userid_reference'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the author is a contributor to the ELMCIP Knowledge Base, enter the author\'s KB username here, usually first and last name. The field will autocomplete. Please only enter if you are the author, or an editor of the KB. Identifying the KB user ID will allow us to display works entered by others on each individual author\'s profile page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_userid_reference',
    'label' => 'KB User ID',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'user_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'user_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'user_reference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-person-field_yearborn'.
  $field_instances['node-person-field_yearborn'] = array(
    'bundle' => 'person',
    'deleted' => 0,
    'description' => 'Year of birth.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_yearborn',
    'label' => 'Born',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 11,
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '\'Y\'',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-130:+0',
      ),
      'type' => 'date_text',
      'weight' => 2,
    ),
    'widget_type' => 'date_select',
  );

  // Exported field_instance: 'node-person-field_yeardied'.
  $field_instances['node-person-field_yeardied'] = array(
    'bundle' => 'person',
    'deleted' => 0,
    'description' => 'Year of death.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'user_attach_person_refs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_yeardied',
    'label' => 'Died',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 12,
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '\'Y\'',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-80:+0',
      ),
      'type' => 'date_text',
      'weight' => 3,
    ),
    'widget_type' => 'date_select',
  );

  // Exported field_instance: 'node-platform_software-field_license'.
  $field_instances['node-platform_software-field_license'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the license that the platform is released under from the list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_license',
    'label' => 'License',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_media'.
  $field_instances['node-platform_software-field_media'] = array(
    'bundle' => 'platform_software',
    'deleted' => 0,
    'description' => 'Attach remote media, such as video tutorials on Vimeo or YouTube.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'softwareplatform/images',
      'file_extensions' => 'mp3',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'private' => 0,
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_ps_attachment'.
  $field_instances['node-platform_software-field_ps_attachment'] = array(
    'bundle' => 'platform_software',
    'deleted' => 0,
    'description' => 'Attach documentation such as user\'s manuals or source code in a .zip file.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ps_attachment',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'softwareplatform/attachment',
      'file_extensions' => 'txt pdf zip',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_ps_description'.
  $field_instances['node-platform_software-field_ps_description'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a written description of the platform and its distinguishing features. Indicate the source of the description.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ps_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_ps_image'.
  $field_instances['node-platform_software-field_ps_image'] = array(
    'bundle' => 'platform_software',
    'deleted' => 0,
    'description' => 'Attach relevant images, such as screenshots of the development environment or other useful images.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ps_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'platform_images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-platform_software-field_url'.
  $field_instances['node-platform_software-field_url'] = array(
    'bundle' => 'platform_software',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to indicate URLs associated with the platform (e.g. download, documentation sites, etc.) Indicate the nature of the link using the title field. Multiple URLs are permitted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-publisher-field_editor_name'.
  $field_instances['node-publisher-field_editor_name'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter editors if applicable. The name will autocomplete if the editor is in the database. Otherwise <a href="/node/add/person" target="_blank">add the editor</a> now.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_editor_name',
    'label' => 'Editors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-publisher-field_editorial_notes'.
  $field_instances['node-publisher-field_editorial_notes'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB editor notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-publisher-field_eissn'.
  $field_instances['node-publisher-field_eissn'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If a publication has an e-ISSN number enter it here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eissn',
    'label' => 'e-ISSN',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 25,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-publisher-field_email'.
  $field_instances['node-publisher-field_email'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
    'widget_type' => 'email_textfield',
  );

  // Exported field_instance: 'node-publisher-field_events'.
  $field_instances['node-publisher-field_events'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this autocomplete field to indicate events where this publisher or journal was showcased or exhibited. If the event is not yet in the database, first add it before completing the record.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 16,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_events',
    'label' => 'Events',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-publisher-field_issn_text'.
  $field_instances['node-publisher-field_issn_text'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issn_text',
    'label' => 'ISSN',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 1,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 25,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-publisher-field_location'.
  $field_instances['node-publisher-field_location'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please include physical location information for the publisher. The city name is particularly important for bibliographic citation.',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -3,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => -3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 1,
    ),
    'widget_type' => 'location',
  );

  // Exported field_instance: 'node-publisher-field_record_status_tax'.
  $field_instances['node-publisher-field_record_status_tax'] = array(
    'bundle' => 'publisher',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => 'Editorial status of record, as a taxonomy term. This field can only modified by editors.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-publisher-field_textfield'.
  $field_instances['node-publisher-field_textfield'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_textfield',
    'label' => 'Short decription',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-publisher-field_url'.
  $field_instances['node-publisher-field_url'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL of the publisher or journal homepage.',
    'display' => array(
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance:
  // 'node-research_collection-field_collection_contributors'.
  $field_instances['node-research_collection-field_collection_contributors'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add links to additional contributors to this collection.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_collection_contributors',
    'label' => 'Collection contributors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-research_collection-field_collection_curated_by'.
  $field_instances['node-research_collection-field_collection_curated_by'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add links to the author record of the primary contributors to curating and developing this Research Collection.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_collection_curated_by',
    'label' => 'Collection curated by',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_creative_works'.
  $field_instances['node-research_collection-field_creative_works'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to creative works included in this collection. If the work is not yet in the KB, first <a href="http://elmcip.net/node/add/work">add the creative work</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_creative_works',
    'label' => 'Creative works',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_critical_writing'.
  $field_instances['node-research_collection-field_critical_writing'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to the critical writing included in this collection. If the critical writing is not yet in the KB, first <a href="http://elmcip.net/node/add/critical-writing">add the critical writing</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_critical_writing',
    'label' => 'Critical writing',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_events'.
  $field_instances['node-research_collection-field_events'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to events included in this collection. If the event is not yet in the KB, first <a href="http://elmcip.net/node/add/critical-writing">add the event</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_events',
    'label' => 'Events',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_media'.
  $field_instances['node-research_collection-field_media'] = array(
    'bundle' => 'research_collection',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'media/research_collection/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'private' => 0,
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_organizations'.
  $field_instances['node-research_collection-field_organizations'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to organizations included in this collection. If the organization is not yet in the KB, first <a href="http://elmcip.net/node/add/organization">add the organization</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_organizations',
    'label' => 'Organizations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_people'.
  $field_instances['node-research_collection-field_people'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to person records included in this collection. If the person is not yet in the KB, first <a href="http://elmcip.net/node/add/person">add the person</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_people',
    'label' => 'People',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_publishers'.
  $field_instances['node-research_collection-field_publishers'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to publishers included in this collection. If the publisher is not yet in the KB, first <a href="http://elmcip.net/node/add/publisher">add the publisher</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_publishers',
    'label' => 'Publishers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_rc_db_archive'.
  $field_instances['node-research_collection-field_rc_db_archive'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to database or archives included in this collection. If they are not yet in the KB, first <a href="http://elmcip.net/node/add/databases-and-archives">add the database</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_rc_db_archive',
    'label' => 'Database or Archive reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-research_collection-field_rc_description'.
  $field_instances['node-research_collection-field_rc_description'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a general description of the research collection.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_rc_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'basic_text_editor' => 'basic_text_editor',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -5,
            ),
            2 => array(
              'weight' => -8,
            ),
            3 => array(
              'weight' => -9,
            ),
            4 => array(
              'weight' => -7,
            ),
            'basic_text_editor' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-research_collection-field_teaching_resources'.
  $field_instances['node-research_collection-field_teaching_resources'] = array(
    'bundle' => 'research_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide references to teaching resources included in this collection. If the teaching resource is not yet in the KB, first <a href="http://elmcip.net/node/add/teaching-resource">add the teaching resource</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_teaching_resources',
    'label' => 'Teaching Resources',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-story-body'.
  $field_instances['node-story-body'] = array(
    'bundle' => 'story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
      'teaser_600' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'teaser_abbreviated' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-story-field_files'.
  $field_instances['node-story-field_files'] = array(
    'bundle' => 'story',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -1,
      ),
      3 => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -1,
      ),
      4 => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser_600' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -2,
      ),
      'teaser_abbreviated' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/attachments/story',
      'file_extensions' => 'txt pdf ppt mp3 html htm rtf mv4 mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => -1,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-story-field_image'.
  $field_instances['node-story-field_image'] = array(
    'bundle' => 'story',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -4,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -4,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => 'large',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'medium',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 0,
      ),
      'teaser_600' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser_abbreviated' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/news/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => -4,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 'imce',
          'reference' => 'reference',
          'remote' => 'remote',
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-story-field_media_asset'.
  $field_instances['node-story-field_media_asset'] = array(
    'bundle' => 'story',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 3,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'teaser_600' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser_abbreviated' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media_asset',
    'label' => 'Multimedia',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-story-field_multi_image'.
  $field_instances['node-story-field_multi_image'] = array(
    'bundle' => 'story',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      4 => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'thumbnail',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_600' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'teaser_abbreviated' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_multi_image',
    'label' => 'More pictures',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/news/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 0,
          'reference' => 'reference',
          'remote' => 'remote',
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => -2,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-teaching_resource-field_abstract_lang'.
  $field_instances['node-teaching_resource-field_abstract_lang'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 3,
        '_error_element' => 'default_value_widget][field_abstract_lang][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '<b>If the teaching resource is not written in English</b> write an description of fewer than 500 words in the original language. Leave this field empty if the language of the teaching resource is English.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract_lang',
    'label' => 'Abstract (in original language)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 22,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'multistep' => 0,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-teaching_resource-field_abstract_lang_tax'.
  $field_instances['node-teaching_resource-field_abstract_lang_tax'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the human language of the additional language abstract.  Note: this is a taxonomy field, which will replace the previous Language of abstract field, which will be deleted once the data is migrated from it. For new records, disregard the other Language of abstract field above and use this one.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract_lang_tax',
    'label' => 'Language of abstract (Taxonomy)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-teaching_resource-field_database_or_archive_refere'.
  $field_instances['node-teaching_resource-field_database_or_archive_refere'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this teaching resource references a database or archive link to it with this node reference field. If the resource is already in Knowledge Base it will autocomplete as you type, otherwise first <a href="node/add/databases-and-archives">add the database or archive</a> before completing this record.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_database_or_archive_refere',
    'label' => 'Database or Archive Referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_editorial_notes'.
  $field_instances['node-teaching_resource-field_editorial_notes'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'KB editors should use this field to provide a brief indication of revisions required. This field will only be visible to KB editor and to original authors of the record. This field should be wiped when the record is marked as approved.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB editor notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_files'.
  $field_instances['node-teaching_resource-field_files'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Attach relevant files here. Examples include PDFs of handouts, mp3 file of audio recordings, and slides used in lectures.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 11,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 19,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/attachments/teaching',
      'file_extensions' => 'txt pdf ppt mp3 html htm rtf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 28,
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 32,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-teaching_resource-field_image'.
  $field_instances['node-teaching_resource-field_image'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Add an image file by using the "Choose File" button to select it from your hard drive. Then press the "Upload" button.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 12,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 17,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/tr/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 27,
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 30,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-teaching_resource-field_language_tax'.
  $field_instances['node-teaching_resource-field_language_tax'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the human language of the teaching resource. Select multiple if the work includes multiple languages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_language_tax',
    'label' => 'Language',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_media_asset'.
  $field_instances['node-teaching_resource-field_media_asset'] = array(
    'bundle' => 'teaching_resource',
    'deleted' => 0,
    'description' => 'Use this field to display Vimeo and YouTube videos, and other multimedia content. Note: flickr photo sets are not currently working with this field. We are waiting for an update to the module, so please wait until the issue is resolved before adding them.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 18,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media_asset',
    'label' => 'Multimedia',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_record_status_tax'.
  $field_instances['node-teaching_resource-field_record_status_tax'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => 'Editorial status of the record. This field can only be modified by KB editors.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_tr_author'.
  $field_instances['node-teaching_resource-field_tr_author'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the person or people who developed this resource. The author\'s name will autocomplete if it is in the database. If the author is not yet in the database, <a href="/node/add/person" target="_blank">add the author</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tr_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_tr_critical'.
  $field_instances['node-teaching_resource-field_tr_critical'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the titles of critical writing in the teaching resource. If it is not in the knowledge base, <a href="/node/add/critical-writing" target="_blank">add the critical writing</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tr_critical',
    'label' => 'Critical Writing Referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 26,
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 27,
    ),
    'widget_type' => 'nodereference_autocomplete',
  );

  // Exported field_instance: 'node-teaching_resource-field_tr_description'.
  $field_instances['node-teaching_resource-field_tr_description'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_tr_description][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'Briefly describe this teaching resource -- its purpose, intended audience, and content. If this is a resource produced for a course, please also include the name of the institution and program in the description.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tr_description',
    'label' => 'Abstract (in English)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 21,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-teaching_resource-field_tr_org'.
  $field_instances['node-teaching_resource-field_tr_org'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the resource was developed as part of a curriculum, enter the organization responsible (for example University of Bergen, program in Digital Culture). The field will autocomplete if you have already added the organization. if If the work is not in the knowledge base, first <a href="/node/add/organization" target="_blank">add the organization</a> before completing this record.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tr_org',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_tr_tr'.
  $field_instances['node-teaching_resource-field_tr_tr'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this teaching resource is connected to another teaching resource (e.g. an assignment connected to syllabus), cross-reference it using this autocomplete field. The other teaching resource must already be in the Knowledge Base before you can reference it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tr_tr',
    'label' => 'Teaching Resource Referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_tr_work'.
  $field_instances['node-teaching_resource-field_tr_work'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter titles of works of electronic literature or digital art referenced in the teaching resource. If the work is not in the knowledge base, <a href="/node/add/work" target="_blank">add the work</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 22,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tr_work',
    'label' => 'Creative Works Referenced',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-field_tr_year'.
  $field_instances['node-teaching_resource-field_tr_year'] = array(
    'bundle' => 'teaching_resource',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tr_year',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'default_format' => 'medium',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 21,
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'Y M j - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'none',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-20:+0',
      ),
      'type' => 'date_text',
      'weight' => 4,
    ),
    'widget_type' => 'date_select',
  );

  // Exported field_instance: 'node-teaching_resource-field_url'.
  $field_instances['node-teaching_resource-field_url'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 22,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-teaching_resource-taxonomy_vocabulary_1'.
  $field_instances['node-teaching_resource-taxonomy_vocabulary_1'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Tags',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-teaching_resource-taxonomy_vocabulary_4'.
  $field_instances['node-teaching_resource-taxonomy_vocabulary_4'] = array(
    'bundle' => 'teaching_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<b>Note:</b> If the teaching resource is a syllabus for a course, enter the title of the course in the "Title of Resource" field in the following format: Title: Subtitle (Course number, Semester year). For example, <i>Digital Genres: Digital Art, Electronic Literature, and Computer Games (DIKULT 103, Spring 2011)</i>. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_4',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-work-field_abstract_lang'.
  $field_instances['node-work-field_abstract_lang'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<b>If the work is not written in English</b>, write a short description, fewer than 350 words, in the original language. Leave this field empty if the original language of the work is English.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_abstract_lang',
    'label' => 'Description (in original language)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 3,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-work-field_abstract_lang_tax'.
  $field_instances['node-work-field_abstract_lang_tax'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the human language of the additional language description.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_abstract_lang_tax',
    'label' => 'Language of description (Taxonomy)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-work-field_archiveurl'.
  $field_instances['node-work-field_archiveurl'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the work is available at a web-based archive, such as the Internet Archive, or a university open-research archive, link here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => -1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'data_export' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_archiveurl',
    'label' => 'Archive URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-work-field_author_name'.
  $field_instances['node-work-field_author_name'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the author. The author\'s name will autocomplete if it is in the database. If the author is not yet in the database, <a href="/node/add/person" target="_blank">add the author</a>.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
      'data_export' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_author_name',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-work-field_contributor'.
  $field_instances['node-work-field_contributor'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If a person\'s role on the project is described in a way other than author or co-author (e.g. sound designer, illustrator, etc.) attribute the person here. If the contributor\'s name does not auto-complete, <a href="/node/add/person" target="_blank">add the contributor</a> first. Use the contributors notes field to describe the different roles individuals played.',
    'display' => array(
      'data_export' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contributor',
    'label' => 'Contributor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-work-field_contributors'.
  $field_instances['node-work-field_contributors'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter information about different author/contributor roles in this field (e.g. Sound designer:, programmer: etc.)',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'data_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_contributors',
    'label' => 'Contributors note',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-work-field_downloadurl'.
  $field_instances['node-work-field_downloadurl'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a URL where the entire work or source files may be downloaded, if applicable. <b>Note: submissions to the ELMCIP anthology should include this information, indicating a URL where the work may be downloaded as a .zip or .tar file.</b>',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => 0,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'data_export' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_downloadurl',
    'label' => 'Download URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-work-field_editorial_notes'.
  $field_instances['node-work-field_editorial_notes'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Editors should use this field to provide short indications of revisions required. The field will only be visible to KB editors and to the original authors of the record. This field should be wiped once the record is marked as approved.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_notes',
    'label' => 'KB Editor Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-work-field_electronic_literature_dire'.
  $field_instances['node-work-field_electronic_literature_dire'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record for this work in the Electronic Literature Directory, enter the URL of the entry here (for example http://directory.eliterature.org/node/407) to create a cross-reference between the databases.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 23,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_electronic_literature_dire',
    'label' => 'Electronic Literature Directory entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Electronic Literature Directory entry',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-work-field_files'.
  $field_instances['node-work-field_files'] = array(
    'bundle' => 'work',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Attach relevant files here.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 39,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'files/attachments/work',
      'file_extensions' => 'txt pdf ppt mp3 html htm rtf zip',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 13,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-work-field_i_e_poetry_entry'.
  $field_instances['node-work-field_i_e_poetry_entry'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a description of this work in the I ♥ E-Poetry project, add a cross reference to it here.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 24,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_i_e_poetry_entry',
    'label' => 'I ♥ E-Poetry entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'I ♥ E-Poetry entry',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-work-field_in_anthology'.
  $field_instances['node-work-field_in_anthology'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the work was published in an anthology, collection, or special issue of a journal link to it here using the autocomplete field. If the field does not complete, <a href="/node/add/critical-writing">add the anthology</a> to the Knowledge Base.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'data_export' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_in_anthology',
    'label' => 'Appears in',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-work-field_isbn_text'.
  $field_instances['node-work-field_isbn_text'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the creative work has an ISBN, add it here.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_isbn_text',
    'label' => 'ISBN',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-work-field_language_tax'.
  $field_instances['node-work-field_language_tax'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the human language the work was written in. Select multiple if the work includes multiple languages. Note: this is a taxonomy field, which will replace the previous Language field, which will be deleted once the data is migrated from it. For new records, disregard the other Language field above and use this one.',
    'display' => array(
      'data_export' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 16,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_language_tax',
    'label' => 'Language',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-work-field_license'.
  $field_instances['node-work-field_license'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'If the license of the work is known, select here.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'data_export' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_license',
    'label' => 'License',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 3,
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-work-field_media_asset'.
  $field_instances['node-work-field_media_asset'] = array(
    'bundle' => 'work',
    'deleted' => 0,
    'description' => 'Use this field to display Vimeo and YouTube videos, and other multimedia content.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'full',
        ),
        'type' => 'file_rendered',
        'weight' => 38,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'file_view_mode' => 'media_original',
        ),
        'type' => 'file_default',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media_asset',
    'label' => 'Multimedia',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-work-field_multi_image'.
  $field_instances['node-work-field_multi_image'] = array(
    'bundle' => 'work',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Upload screenshots or other relevant imagery of the work here.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'large',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 36,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_multi_image',
    'label' => 'Screen shots',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/work/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 11,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-work-field_node_ref'.
  $field_instances['node-work-field_node_ref'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the work was not self-published, enter the publisher (journal, publishing house, etc.) or organization (organizer of conference or event, e.g. Electronic Literature Organization). The publisher or organization\'s name will autocomplete if it is in the database. If it does not autocomplete, <a href="/node/add/publisher" target="_blank">add the publisher</a> or <a href="/node/add/organization" target="_blank">add the organization</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'data_export' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_node_ref',
    'label' => 'Publisher',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-work-field_node_ref_event'.
  $field_instances['node-work-field_node_ref_event'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mark the event(s) where the work has been presented. If an event is missing from the list follow the link to add a new <a href="/node/add/event" target="_blank">event</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'data_export' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 16,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_node_ref_event',
    'label' => 'Event',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-work-field_nt2_entry'.
  $field_instances['node-work-field_nt2_entry'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a description of this work in the NT2 Répertoire des arts et littératures hypermédiatiques, add a cross reference to it here.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 25,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_nt2_entry',
    'label' => 'NT2 entry',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'NT2 entry (français)',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-work-field_other_edition_work'.
  $field_instances['node-work-field_other_edition_work'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record for another edition of this work in the same language in the knowledge base, link to it here. ',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 29,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_edition_work',
    'label' => 'Other edition',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-work-field_other_lang_ver_link'.
  $field_instances['node-work-field_other_lang_ver_link'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is version of this creative work in the knowledge base published in another language, link to it here. If the work is not in the knowledge base, <a href="/node/add/work" target="_blank">add the work</a>.',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'data_export' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 27,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_lang_ver_link',
    'label' => 'Other language version',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-work-field_part_of_another_work'.
  $field_instances['node-work-field_part_of_another_work'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this work is part of another creative work (e.g. one piece in a trilogy) reference that work here. The title will autocomplete if in the KB, otherwise first <a href="node/add/work">add the new work</a>.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 28,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_part_of_another_work',
    'label' => 'Part of another work',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-work-field_pullquote'.
  $field_instances['node-work-field_pullquote'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a significant passage (1-2 sentences) excerpted from the text that will help to contextualize it. The quote may displayed on the Knowledge Base and should be representative of the text, so as to entice readers to access and read the work. ',
    'display' => array(
      2 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'sticky' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pullquote',
    'label' => 'Pull Quotes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 6,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 37,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-work-field_record_status_tax'.
  $field_instances['node-work-field_record_status_tax'] = array(
    'bundle' => 'work',
    'default_value' => array(
      0 => array(
        'tid' => 1489,
      ),
    ),
    'deleted' => 0,
    'description' => 'This is the editorial status of a record, now a taxonomy. This value can only be changed by KB editors. ',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_record_status_tax',
    'label' => 'Record Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-work-field_tech_notes'.
  $field_instances['node-work-field_tech_notes'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter relevant notes about the platform, etc. used in the creation of the work, and in particular any plug-ins  or other information required for the user to access the work.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'data_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tech_notes',
    'label' => 'Technical notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 7,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 38,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-work-field_textfield'.
  $field_instances['node-work-field_textfield'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a brief description of the work in English, up to 350 words.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_textfield',
    'label' => 'Description (in English)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 29,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-work-field_translator'.
  $field_instances['node-work-field_translator'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this work is a translation, please use this autocomplete field to indicate the translator. If the translator is not yet in the KB, <a href="/node/add/person" target="_blank">add the translator</a> first.',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_translator',
    'label' => 'Translator',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-work-field_url'.
  $field_instances['node-work-field_url'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indicate the title of the work in the title field, which will display as the link label. If more than one URL exists for the work, enter the publisher in parentheses after the title. For example: Lexia to Perplexia (ebr Electronic Book Review), Lexia to Perpexia (The Iowa Review Web), etc.',
    'display' => array(
      3 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      4 => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => -2,
      ),
      'css-class' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'data_export' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'ds_weight' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'format' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'reference' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'region' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => -2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-work-field_venue_tax'.
  $field_instances['node-work-field_venue_tax'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indicate the types of publication. Multiple selections permitted. ',
    'display' => array(
      'data_export' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_venue_tax',
    'label' => 'Publication Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-work-field_work_year'.
  $field_instances['node-work-field_work_year'] = array(
    'bundle' => 'work',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'data_export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_work_year',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-work-field_worldcat_link'.
  $field_instances['node-work-field_worldcat_link'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If there is a record for this work in the WorldCat library database, enter the Permalink here. Please indicate the year of publication in the title field of the URL (e.g. 1996. ed.) Multiple entries are allowed.',
    'display' => array(
      'data_export' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_worldcat_link',
    'label' => 'WorldCat Permalink',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-work-taxonomy_vocabulary_1'.
  $field_instances['node-work-taxonomy_vocabulary_1'] = array(
    'bundle' => 'work',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A comma-separated list of terms, keywords, or phrases that describe and/or contextualize this creative work. Tags should be used for aspects of the work such as technical platform, theme, and genre. Example: collaboration, comedy, death, hypertext fiction, network fiction, parody, pastiche, picaresque, satire. As a rule of thumb, use a singular noun rather than a plural for the tag.',
    'display' => array(
      'data_export' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 20,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'elmcip_creative_work',
        'settings' => array(),
        'type' => 'elmcip_creative_work_oai_pmh',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 28,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<b>If the teaching resource is not written in English</b> write an description of fewer than 500 words in the original language. Leave this field empty if the language of the teaching resource is English.');
  t('<b>If the work is not written in English</b> write an abstract of fewer than 350 words in the original language. Leave this field empty if the language of the work is English.');
  t('<b>If the work is not written in English</b>, write a short description, fewer than 350 words, in the original language. Leave this field empty if the original language of the work is English.');
  t('<b>Note:</b> If the teaching resource is a syllabus for a course, enter the title of the course in the "Title of Resource" field in the following format: Title: Subtitle (Course number, Semester year). For example, <i>Digital Genres: Digital Art, Electronic Literature, and Computer Games (DIKULT 103, Spring 2011)</i>. ');
  t('A brief description (fewer than 350 words) in English about the database or resource.');
  t('A brief description (fewer than 350 words) of the database or resource in the resource\'s original language. ');
  t('A comma-separated list of terms, keywords, or phrases that describe and/or contextualize this creative work. Tags should be used for aspects of the work such as technical platform, theme, and genre. Example: collaboration, comedy, death, hypertext fiction, network fiction, parody, pastiche, picaresque, satire. As a rule of thumb, use a singular noun rather than a plural for the tag.');
  t('A comma-separated list of terms, keywords, or phrases that describe and/or contextualize this piece of critical writing. Example: digital poetics, poetry, procedural poetics, generative, intentionality, materiality, structuralism. As a rule of thumb, use a singular noun rather than a plural for the tag. Also generally try to avoid using people\'s names as tags.');
  t('A comma-separated list of terms, keywords, or phrases that describe and/or contextualize this resource. Some tags may be similar to the subject headings assigned by librarians. Example: digital poetry -- history and criticism, digital poetics, procedural poetics, generative, intentionality, materiality.
');
  t('Abstract (in English)');
  t('Abstract (in original language)');
  t('Add an image file by using the "Choose File" button to select it from your hard drive. Then press the "Upload" button.');
  t('Add links to additional contributors to this collection.');
  t('Add links to the author record of the primary contributors to curating and developing this Research Collection.');
  t('Add the URL where the resource where the resource can be accessed online. For example, <i>http://elmcip.net/knowledgebase</i> for the ELMCIP Electronic Literature Knowledge Base). Enter the name of the resource in the "Tltle" field just to the left.');
  t('Add the resource\'s primary e-mail address (often listed on an "about" page) or the email of an administrator or another person closely affiliated with the resource.');
  t('Add the students to the class group, by entering their knowledge base usernames in this field. Add a new item for each student. ');
  t('Affiliations - Organizations');
  t('Alternative spelling of name in original language alphabet');
  t('Appears in');
  t('Archive URL');
  t('Associated with another event');
  t('Attach an image of the book cover or other images.');
  t('Attach documentation such as user\'s manuals or source code in a .zip file.');
  t('Attach relevant files from the event, such as .pdfs of printed program or posters, or audio recordings in mp3 format.');
  t('Attach relevant files here.');
  t('Attach relevant files here. Examples include PDFs of handouts, mp3 file of audio recordings, and slides used in lectures.');
  t('Attach relevant images, such as screenshots of the development environment or other useful images.');
  t('Attach remote media, such as video tutorials on Vimeo or YouTube.');
  t('Attachment');
  t('Attachments');
  t('Author');
  t('Author email');
  t('Author noted');
  t('Author photo');
  t('Body');
  t('Born');
  t('Briefly describe this teaching resource -- its purpose, intended audience, and content. If this is a resource produced for a course, please also include the name of the institution and program in the description.');
  t('Collection contributors');
  t('Collection curated by');
  t('Comment');
  t('Contact e-mail');
  t('Contributor');
  t('Contributors note');
  t('Contributors\' notes');
  t('Course Syllabus (Teaching Resource)');
  t('Creative Works Referenced');
  t('Creative Works referenced');
  t('Creative works');
  t('Critical Writing');
  t('Critical Writing Referenced');
  t('Critical Writing about the database or resource.');
  t('Critical Writing noted');
  t('Critical Writing referenced');
  t('Critical writing');
  t('Curator');
  t('Database or Archive Referenced');
  t('Database or Archive reference');
  t('Date');
  t('Debris left over after upgrade from Drupal 6');
  t('Describe the contents of the file.');
  t('Description');
  t('Description (English)');
  t('Description (Original Language)');
  t('Description (in English)');
  t('Description (in original language)');
  t('Died');
  t('Download URL');
  t('Edition');
  t('Editor');
  t('Editorial status of record, as a taxonomy term. This field can only modified by editors.');
  t('Editorial status of record, as a taxonomy term. This field can only modified by editors. ');
  t('Editorial status of the record. This field can only be modified by KB editors.');
  t('Editors');
  t('Editors should use this field to provide short indications of revisions required. The field will only be visible to KB editors and to the original authors of the record. This field should be wiped once the record is marked as approved.');
  t('Electronic Literature Directory entry');
  t('Email');
  t('Enter a URL where the entire work or source files may be downloaded, if applicable. <b>Note: submissions to the ELMCIP anthology should include this information, indicating a URL where the work may be downloaded as a .zip or .tar file.</b>');
  t('Enter a significant passage (1-2 sentences) excerpted from the text that will help to contextualize it. The quote may displayed on the Knowledge Base and should be representative of the text, pinpointing its primary claim(s) or identifying a key topic, so as to entice readers to access and read the work. <i>Note</i>: Do <b>not</b> put quotation marks around the pull quote.');
  t('Enter a significant passage (1-2 sentences) excerpted from the text that will help to contextualize it. The quote may displayed on the Knowledge Base and should be representative of the text, so as to entice readers to access and read the work. ');
  t('Enter editors if applicable. The name will autocomplete if the editor is in the database. Otherwise <a href="/node/add/person" target="_blank">add the editor</a> now.');
  t('Enter relevant notes about the platform, etc. used in the creation of the work, and in particular any plug-ins  or other information required for the user to access the work.');
  t('Enter the ISBN-13 (preferred) or ISBN-10, including the hyphens, if listed. If a book is published in hardcover and paperback editions, enter the hardcover edition first. Note: The International Standard Book Number (ISBN) is a numeric identifier assigned to each edition and variation of a book. You will only enter this number you are entering a book. The number is typically found on the copyright page and on the back cover or jacket of the book. You can also find the ISBN by looking the book up in WorldCat, a library catalog, or an online bookstore, such as Amazon.com.');
  t('Enter the editor if applicable. The name will autocomplete if the editor is already in the database. Otherwise <a href="/node/add/person" target="_blank">add the editor</a> now. If you are entering an article or chapter from an anthology, do <i>not</i> enter the editor of the volume here.');
  t('Enter the name of organizations this person is closely affiliated with. Examples include: artist-and-writer collectives, employers, nonprofit organizations, research groups, universities. The text in the short biography can elaborate and clarify the nature and duration of the person\'s affiliation with this organization. If the organization is not yet in the KB, first <a href="/node/add/organization" target="_blank">add the organization</a>.');
  t('Enter the name of the <b>publisher of book, title of journal</b>, or other publishing entity. The publisher\'s name will autocomplete if it is in the database. If the publisher is not yet in the database, <a href="/node/add/publisher" target="_blank">add the publisher</a>.');
  t('Enter the name of the author discussed in this note. This is an autocomplete field that will only complete on authors that already have records in the knowledge base. If the work is not in the KB, first <a href="/node/add/person" target="_blank">add the person</a>. ');
  t('Enter the name of the author. The author\'s name will autocomplete if it is in the database. If the author is not yet in the database, <a href="/node/add/person" target="_blank">add the author</a>.');
  t('Enter the name of the organization that arranged the event. If the organization does not autocomplete, <a href="/node/add/organization" target="_blank">add the organization</a> now before completing this record.');
  t('Enter the name of the person or people who developed this resource. The author\'s name will autocomplete if it is in the database. If the author is not yet in the database, <a href="/node/add/person" target="_blank">add the author</a>.');
  t('Enter the names of the people who have played key roles in designing and developing this digital-humanities resource (e.g. leaders, developers, editors). Enter the name of each person separately. The name will autocomplete if the person is already in the database. If the person is not yet in the database, <a href="/node/add/person" target="_blank">add the person</a>.<br><br>
Note: Before adding a new person record, check to see if he or she is already listed as an author.');
  t('Enter the title of a work of electronic literature or digital art referenced in the critical writing. If the work is not in the knowledge base, <a href="/node/add/work" target="_blank">add the work</a>.');
  t('Enter the title of the creative work or works discussed in this note. This is an autocomplete field that will only complete on works that already have records in the knowledge base. If the work is not in the KB, first <a href="/node/add/work" target="_blank">add the creative work</a>. ');
  t('Enter the title of the critical writing discussed in this note. This is an autocomplete field that will only complete on items that already have records in the knowledge base. If the critical writing is not in the KB, first <a href="/node/add/critical_writing" target="_blank">add the critical writing</a>');
  t('Enter the titles of critical writing in the teaching resource. If it is not in the knowledge base, <a href="/node/add/critical-writing" target="_blank">add the critical writing</a>.');
  t('Enter titles of works of electronic literature or digital art referenced in the teaching resource. If the work is not in the knowledge base, <a href="/node/add/work" target="_blank">add the work</a>.');
  t('Enter your notes here.');
  t('Event');
  t('Event Referenced');
  t('Event noted');
  t('Event series');
  t('Event type');
  t('Events');
  t('Events where this resource or database has been featured. Only events can be referenced on this node.');
  t('Family name of the individual (e.g. "Smith" in "John Smith"). If the work is authored by a collective, indicate the name of the collective in the last name field.');
  t('Field to add screenshot to book pages.');
  t('First name');
  t('Gender');
  t('Given name (e.g. "John" in "John Smith")');
  t('I ♥ E-Poetry entry');
  t('ISBN');
  t('ISSN');
  t('If a person\'s role on the project is described in a way other than author or co-author (e.g. sound designer, illustrator, etc.) attribute the person here. If the contributor\'s name does not auto-complete, <a href="/node/add/person" target="_blank">add the contributor</a> first. Use the contributors notes field to describe the different roles individuals played.');
  t('If a publication has an e-ISSN number enter it here.');
  t('If a publication has an eISSN number enter it here.');
  t('If a record for this item is available on the WorldCat library database, enter the Permalink here. Use the URL title field to indicate the edition year (e.g. 1996 ed.). Multiple entries allowed.');
  t('If an article appears in a numbered and/or dated serial, enter the volume number first, followed by a period and the issue number. For a publication paginated by issue, e.g. (volume 42, issue 1), simply enter: 42.1.
For an article published in a weekly or monthly periodical, enter the day first, then the month (abbreviated except for May, June, and July), e.g. 20 Oct. or 01 May. ');
  t('If an organization is referenced in the article, select the organization in the autocomplete field. If the organization is not yet in the KB, first add the <a href="/node/add/organiztion" target="_blank">organization</a>.');
  t('If an organization is responsible for developing and maintaining this project, indicate which one using the autocomplete field. If the organization is not yet in the database, <a href="/node/add/organization" target="_blank">add the organization</a>.');
  t('If information about the event is available at a web-based archive, such as the Internet Archive, or a university open research archive, link here.');
  t('If more than one URL exists for the work, enter the publisher in parentheses after the title. For example: Locating the Literary in New Media (Contemporary Literature), Locating the Literary in New Media  (ebr), etc.');
  t('If one work of critical writing references another in a substantial way (sustained critical engagement) cross-reference it here by entering the title in the autocomplete field. If it is not yet in the knowledge base, first <a href="/node/add/critical-writing" target="_blank">add the critical writing</a>.');
  t('If the author is a contributor to the ELMCIP Knowledge Base, enter the author\'s KB username here, usually first and last name. The field will autocomplete. Please only enter if you are the author, or an editor of the KB. Identifying the KB user ID will allow us to display works entered by others on each individual author\'s profile page.');
  t('If the author\'s name has another spelling in the author\'s native language (e.g. a Russian name in Cyrillic) enter it in this field.');
  t('If the creative work has an ISBN, add it here.');
  t('If the critical article was presented at a conference, select here. The event will autocomplete if it is in the database. If the author is not yet in the database, <a href="/node/add/event" target="_blank">add the event</a>.');
  t('If the critical work was published as part of a series, enter the series title here.  The series title will autocomplete if a node record for it exists in the database. If the series is not yet in the database, <a href="/node/add/critical-writing" target="_blank">add the series</a>. <b>Note:</b> Typically, you will be entering the name of book series (e.g. <i>Electronic Mediations</i> on the University of Minnesota Press), though there are a few exceptions (e.g. <i>ebr</i> threads, such as <i>electropoetics</i> and <i>critical ecologies</I>, are series).');
  t('If the critical writing is <b>about an event</b>, e.g. a review or trip report of a conference, enter the event here. The field will autocomplete if the event is in the KB, otherwise add the <a href="/node/add/event" target="_blank">event</a> first.');
  t('If the critical writing is available at a web-based archive, such as the Internet Archive, or a university open research archive, link here.');
  t('If the critical writing is published in a journal or book, enter the start and end page numbers, separated by a hyphen (e.g. 65-77). Use the complete number (e.g. 277-297).');
  t('If the critical writing references a particular publisher or journal (for example, a conference paper about a particular online journal), use this node reference field to add the publisher. If it is not yet in the Knowledge Base, first add the <a href="/node/add/publisher" target="_blank">publisher</a>.');
  t('If the essay or article appears in a book, anthology, or special issue of a journal enter the title here. Also use this field to indicate that a conference paper appears in a particular panel session of a conference. If the publication is not yet in the Knowledge Base, you should first <a href="/node/add/critical-writing">add the critical writing</a>.');
  t('If the event is part of a series, link to it by typing the name of the series. The name will autocomplete if it is in the database. If the series has not yet been added, first <a href="/node/add/event" target="_blank">create an event record for the series</a>.');
  t('If the license of the work is known, select here.');
  t('If the license of the work is known, select it from the pull-down menu.');
  t('If the license of the work is known, select it here. ');
  t('If the note discusses an event, enter the name of the event here. This is an autocomplete field that will only reference records of events that are already in the Knowledge Base. If the name of the event does not autocomplete, first <a href="/node/add/event" target="_blank">add the event</a>.');
  t('If the resource was developed as part of a curriculum, enter the organization responsible (for example University of Bergen, program in Digital Culture). The field will autocomplete if you have already added the organization. if If the work is not in the knowledge base, first <a href="/node/add/organization" target="_blank">add the organization</a> before completing this record.');
  t('If the work is available at a web-based archive, such as the Internet Archive, or a university open-research archive, link here.');
  t('If the work was not self-published, enter the publisher (journal, publishing house, etc.) or organization (organizer of conference or event, e.g. Electronic Literature Organization). The publisher or organization\'s name will autocomplete if it is in the database. If it does not autocomplete, <a href="/node/add/publisher" target="_blank">add the publisher</a> or <a href="/node/add/organization" target="_blank">add the organization</a>.');
  t('If the work was published in an anthology, collection, or special issue of a journal link to it here using the autocomplete field. If the field does not complete, <a href="/node/add/critical-writing">add the anthology</a> to the Knowledge Base.');
  t('If there is a description of this work in the I ♥ E-Poetry project, add a cross reference to it here.');
  t('If there is a description of this work in the NT2 Répertoire des arts et littératures hypermédiatiques, add a cross reference to it here.');
  t('If there is a record for another edition of this work in the same language in the knowledge base, link to it here. ');
  t('If there is a record for this work in the Electronic Literature Directory, enter the URL of the entry here (for example http://directory.eliterature.org/node/407) to create a cross-reference between the databases.');
  t('If there is a record for this work in the WorldCat library database, enter the Permalink here. Please indicate the year of publication in the title field of the URL (e.g. 1996. ed.) Multiple entries are allowed.');
  t('If there is a record in the Knowledge Base of another edition of this item, cross reference it here.');
  t('If there is a record in the knowledge base of another version of this item published in another language, link to it here.');
  t('If there is version of this creative work in the knowledge base published in another language, link to it here. If the work is not in the knowledge base, <a href="/node/add/work" target="_blank">add the work</a>.');
  t('If this critical writing has an entry in the ELO\'s Electronic Literature Directory, add a reference here by linking the complete URL of the page.');
  t('If this critical writing has been published in multiple editions, enter information about this edition here (e.g. 2nd edition).');
  t('If this critical writing references a database or archive, enter it using this autocomplete field, otherwise first add the database.');
  t('If this event is an exhibition, curated by an individual or multiple people, please indicate the curator using the autocomplete field here. If the curator is not yet in the KB,  <a href="/node/add/person" target="_blank">add the person</a> first.');
  t('If this event is associated with another event (for instance a night of readings presented at a conference), link to that event here. The event will autocomplete if it is database. If it is not, first <a href="/node/add/event" target="_blank">add the event</a>');
  t('If this item is a translation, indicate the translator here by typing the name, If the translator is in the Knowledge Base, the field will autocomplete. Otherwise, first  <a href="/node/add/person" target="_blank">add the translator</a>. before completing the record.');
  t('If this teaching resource is connected to another teaching resource (e.g. an assignment connected to syllabus), cross-reference it using this autocomplete field. The other teaching resource must already be in the Knowledge Base before you can reference it.');
  t('If this teaching resource references a database or archive link to it with this node reference field. If the resource is already in Knowledge Base it will autocomplete as you type, otherwise first <a href="node/add/databases-and-archives">add the database or archive</a> before completing this record.');
  t('If this work is a translation, please use this autocomplete field to indicate the translator. If the translator is not yet in the KB, <a href="/node/add/person" target="_blank">add the translator</a> first.');
  t('If this work is part of another creative work (e.g. one piece in a trilogy) reference that work here. The title will autocomplete if in the KB, otherwise first <a href="node/add/work">add the new work</a>.');
  t('Image');
  t('Image (Screenshot)');
  t('Images');
  t('Important technical notes about the database or archive.');
  t('Indicate the title of the work in the title field, which will display as the link label. If more than one URL exists for the work, enter the publisher in parentheses after the title. For example: Lexia to Perplexia (ebr Electronic Book Review), Lexia to Perpexia (The Iowa Review Web), etc.');
  t('Indicate the types of publication. Multiple selections permitted. ');
  t('Individual Organizers');
  t('Journal volume and issue');
  t('KB Editor Notes');
  t('KB User ID');
  t('KB editor notes');
  t('KB editors should use this field to provide a brief indication of revisions required. This field will only be visible to KB editor and to original authors of the record. This field should be wiped when the record is marked as approved.');
  t('Key People');
  t('Language');
  t('Language of abstract (Taxonomy)');
  t('Language of description (Taxonomy)');
  t('Last name');
  t('License');
  t('Location');
  t('Mark the event(s) where the work has been presented. If an event is missing from the list follow the link to add a new <a href="/node/add/event" target="_blank">event</a>.');
  t('Media');
  t('Middle name');
  t('More pictures');
  t('Multimedia');
  t('Multimedia ');
  t('Multimedia content related to the database or archive. For example, screencasts or tutorials.');
  t('NT2 entry');
  t('Nationality');
  t('Note: You may add multiple locations here. Note that the form appears twice. <b>Unless you are entering more than one location, only fill out the first location field.</b> If you are adding more than two locations, hit the add another button, fill out the fields, and repeat for all locations.');
  t('Note: for dissertations and theses only, indicate the university in which the thesis was produced. If the university is not yet in the database, first add the <a href="/node/add/organization">university as an organization</a>.');
  t('Notebook');
  t('Organization');
  t('Organization referenced');
  t('Organizations');
  t('Other edition');
  t('Other language version');
  t('PDF Attachment');
  t('PDF Attachment for the database or resource, only PDF files are allowed here.');
  t('Page Numbers');
  t('Part of another work');
  t('People');
  t('Personal website');
  t('Please enter a brief abstract in English describing the critical work or article in fewer than 350 words. ');
  t('Please enter information about different author/contributor roles in this field (e.g. Sound designer:, programmer: etc.)');
  t('Please include physical location information for the publisher. The city name is particularly important for bibliographic citation.');
  t('Please provide about the author\'s location.  Only city, state, and country will be publicly displayed.');
  t('Please provide notes about the various roles key people (indicated above) played in this project.');
  t('Please provide the person\'s nationality (passport country).');
  t('Presented at Event');
  t('Project Type');
  t('Provide a brief description of the work in English, up to 350 words.');
  t('Provide a general description of the research collection.');
  t('Provide a short biography of the author if available. Provide basic professional details, as well as year of birth, etc.');
  t('Provide a written description of the platform and its distinguishing features. Indicate the source of the description.');
  t('Provide references to creative works included in this collection. If the work is not yet in the KB, first <a href="http://elmcip.net/node/add/work">add the creative work</a>.');
  t('Provide references to database or archives included in this collection. If they are not yet in the KB, first <a href="http://elmcip.net/node/add/databases-and-archives">add the database</a>.');
  t('Provide references to events included in this collection. If the event is not yet in the KB, first <a href="http://elmcip.net/node/add/critical-writing">add the event</a>.');
  t('Provide references to organizations included in this collection. If the organization is not yet in the KB, first <a href="http://elmcip.net/node/add/organization">add the organization</a>.');
  t('Provide references to person records included in this collection. If the person is not yet in the KB, first <a href="http://elmcip.net/node/add/person">add the person</a>.');
  t('Provide references to publishers included in this collection. If the publisher is not yet in the KB, first <a href="http://elmcip.net/node/add/publisher">add the publisher</a>.');
  t('Provide references to teaching resources included in this collection. If the teaching resource is not yet in the KB, first <a href="http://elmcip.net/node/add/teaching-resource">add the teaching resource</a>.');
  t('Provide references to the critical writing included in this collection. If the critical writing is not yet in the KB, first <a href="http://elmcip.net/node/add/critical-writing">add the critical writing</a>.');
  t('Publication Type');
  t('Publisher');
  t('Publisher Referenced');
  t('Publishers');
  t('Pull Quotes');
  t('Record Status');
  t('Residency');
  t('Screen shots');
  t('Screenshot');
  t('Screenshots of the database or archive.');
  t('Select the human language of the additional language abstract. ');
  t('Select the human language of the additional language abstract.  Note: this is a taxonomy field, which will replace the previous Language of abstract field, which will be deleted once the data is migrated from it. For new records, disregard the other Language of abstract field above and use this one.');
  t('Select the human language of the additional language description.');
  t('Select the human language of the teaching resource. Select multiple if the work includes multiple languages.');
  t('Select the human language the work was written in. Select multiple if the work includes multiple languages. Note: this is a taxonomy field, which will replace the previous Language field, which will be deleted once the data is migrated from it. For new records, disregard the other Language field above and use this one.');
  t('Select the license that the platform is released under from the list.');
  t('Select the primary human language(s) of the database or resource. Select multiple using the Crtl (or Apple) key.');
  t('Select the publication type of this critical writing. Multiple selections may apply if the same item fits multiple categories (e.g. a conference paper that is also published as a journal publication), but a single selection is usually adequate. 
<b>Note:</B> Only select the term that describes the specific record type. For instance, a review is a review no matter where it is published. An article in a special issue of a print journal is an article in a print publication. The special issue as a whole that contains the article is the special issue, and has a separate record from the article itself.');
  t('Select the year this resource was first made available. A more detailed chronology can be provided in the description.');
  t('Select which of your notebooks you want the note to be attached to.');
  t('Series');
  t('Short biography');
  t('Short decription');
  t('Short description');
  t('Students');
  t('Tags');
  t('Taxonomy upgrade extras');
  t('Teacher');
  t('Teaching Resource Referenced');
  t('Teaching Resources');
  t('Technical Notes');
  t('Technical notes');
  t('The author\'s email will <I>not</i> be displayed publicly. ELMCIP editors and administrators may use this email to communicate with authors.');
  t('The teacher of the course. This is an autocomplete field. The teacher must be a Knowledge Base user who has been assigned "teacher" permissions by a KB administrator. Multiple teachers may be added to a class group.');
  t('This is the editorial status of a record, now a taxonomy. This value can only be changed by KB editors. ');
  t('Translator');
  t('Type');
  t('URL');
  t('URL of the publisher or journal homepage.');
  t('University');
  t('Upload a photo of the author.');
  t('Upload screenshots or other images related to the organization.');
  t('Upload screenshots or other relevant imagery of the work here.');
  t('Use this autocomplete field to indicate events where this publisher or journal was showcased or exhibited. If the event is not yet in the database, first add it before completing the record.');
  t('Use this field to attach a text or pdf document, such as a CV.');
  t('Use this field to display Vimeo and YouTube videos, Flickr sets, and other multimedia content. ');
  t('Use this field to display Vimeo and YouTube videos, and other multimedia content.');
  t('Use this field to display Vimeo and YouTube videos, and other multimedia content. Note: flickr photo sets are not currently working with this field. We are waiting for an update to the module, so please wait until the issue is resolved before adding them.');
  t('Use this field to indicate URLs associated with the platform (e.g. download, documentation sites, etc.) Indicate the nature of the link using the title field. Multiple URLs are permitted.');
  t('Use this field to indicate individual people who served as conference chairs or other principal roles in this event. The field will autocomplete. If the person is not yet in the database first <a href="/node/add/person" target="_blank">add the person</a>.');
  t('Use this field to link to your syllabus or other material you have created as a teaching resource in the Knowledge Base. The field will autocomplete. If the teaching resource is not yet in the Knowledge Base, first <a href="node/add/teaching-resource">add the teaching resource</a>.');
  t('Using the pulldown menu, identify whether the resource is an archive, database, or special collection. <br><br>In the "Title" field, just above, enter the official name of the resource. If the resource is commonly referred to by an acronymn (e.g. <i>ELD</i> for the <i>Electronic Literature Directory</i>), this can be specified in description.');
  t('Work noted');
  t('WorldCat Permalink');
  t('Year');
  t('Year Initiated');
  t('Year of birth.');
  t('Year of death.');
  t('You may attach files, such as PDFs, to this record.');
  t('You may upload and attach individual images (20MB max) documenting the event here. Note: use multimedia field to link flickr sets or video.');
  t('Your notes');
  t('e-ISSN');
  t('eISSN');

  return $field_instances;
}
