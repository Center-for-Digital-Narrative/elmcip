<?php
/**
 * @file
 * elmcip_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function elmcip_layout_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Profile user dash',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4cfe7846-fd86-4562-acc9-af6927dd4d62';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-515c87a4-2751-4f45-871e-29170efe6b4d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'user_profile_dashboard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => '4',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '515c87a4-2751-4f45-871e-29170efe6b4d';
    $display->content['new-515c87a4-2751-4f45-871e-29170efe6b4d'] = $pane;
    $display->panels['middle'][0] = 'new-515c87a4-2751-4f45-871e-29170efe6b4d';
    $pane = new stdClass();
    $pane->pid = 'new-563e6b28-5ea8-4cb9-8f09-f501550b1a52';
    $pane->panel = 'middle';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '563e6b28-5ea8-4cb9-8f09-f501550b1a52';
    $display->content['new-563e6b28-5ea8-4cb9-8f09-f501550b1a52'] = $pane;
    $display->panels['middle'][1] = 'new-563e6b28-5ea8-4cb9-8f09-f501550b1a52';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-515c87a4-2751-4f45-871e-29170efe6b4d';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function elmcip_layout_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'content_status';
  $page->task = 'page';
  $page->admin_title = 'Content status';
  $page->admin_description = 'Show all content in the knowledge base but enable users to sort based on record status';
  $page->path = 'knowledgebase/status';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Record Status',
    'name' => 'primary-links',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => 'knowledgebase',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_status_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'content_status';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Content status',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '77b0780a-28a4-4042-a956-f47b9576db8a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7f435c50-f5b5-4d7d-a8e9-c1c75a73132c';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-content_status-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '7f435c50-f5b5-4d7d-a8e9-c1c75a73132c';
    $display->content['new-7f435c50-f5b5-4d7d-a8e9-c1c75a73132c'] = $pane;
    $display->panels['middle'][0] = 'new-7f435c50-f5b5-4d7d-a8e9-c1c75a73132c';
    $pane = new stdClass();
    $pane->pid = 'new-d99bcbc4-6a8b-42f9-9003-5789185acf1e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_status-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'd99bcbc4-6a8b-42f9-9003-5789185acf1e';
    $display->content['new-d99bcbc4-6a8b-42f9-9003-5789185acf1e'] = $pane;
    $display->panels['middle'][1] = 'new-d99bcbc4-6a8b-42f9-9003-5789185acf1e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['content_status'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'testfront2';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'FrontPanel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'frontpage',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 3,
          2 => 4,
          3 => 6,
          4 => 8,
          5 => 10,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'about',
          1 => 'news',
        ),
        'parent' => 'main',
        'class' => 'general',
      ),
      'about' => array(
        'type' => 'region',
        'title' => 'about',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'news' => array(
        'type' => 'region',
        'title' => 'news',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'kbheader_',
        ),
        'parent' => 'main',
        'class' => 'kb-header',
      ),
      'kbheader_' => array(
        'type' => 'region',
        'title' => 'KB header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'kbleft',
          1 => 'kbmiddle',
          2 => 'kbright',
        ),
        'parent' => 'main',
        'class' => 'kb',
      ),
      'kbleft' => array(
        'type' => 'region',
        'title' => 'KBleft',
        'width' => '32.87279486222186',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'kbmiddle' => array(
        'type' => 'region',
        'title' => 'KBmiddle',
        'width' => '33.76515522630505',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'kbright' => array(
        'type' => 'region',
        'title' => 'KBright',
        'width' => '33.3620499114731',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'anthology1',
          1 => 'anothology2',
        ),
        'parent' => 'main',
        'class' => 'anthology',
      ),
      'anthology1' => array(
        'type' => 'region',
        'title' => 'Anthology1',
        'width' => '51.40670079239713',
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      'anothology2' => array(
        'type' => 'region',
        'title' => 'Anthology2',
        'width' => '31.06598525171712',
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'conference',
          1 => 'conference2_',
        ),
        'parent' => 'main',
        'class' => 'conference',
      ),
      'conference' => array(
        'type' => 'region',
        'title' => 'Conference1',
        'width' => '36.49959607701835',
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      'conference2_' => array(
        'type' => 'region',
        'title' => 'Conference2',
        'width' => '63.500403922981654',
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sponsors',
        ),
        'parent' => 'main',
        'class' => 'sponsors',
      ),
      'sponsors' => array(
        'type' => 'region',
        'title' => 'Sponsors',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'about' => NULL,
      'separator1' => NULL,
      'news' => NULL,
      'kbheader' => NULL,
      'conference2' => NULL,
      'kbheader_' => NULL,
      'kbleft' => NULL,
      'kbmiddle' => NULL,
      'kbright' => NULL,
      'separator2' => NULL,
      'anthology1' => NULL,
      'anothology2' => NULL,
      'separator3' => NULL,
      'conference' => NULL,
      'conference2_' => NULL,
      'separator3_' => NULL,
      'sponsors' => NULL,
    ),
    'conference2_' => array(
      'style' => 'default',
    ),
    'conference' => array(
      'style' => 'default',
    ),
    'anthology1' => array(
      'style' => 'default',
    ),
    'anothology2' => array(
      'style' => 'default',
    ),
    'sponsors' => array(
      'style' => 'default',
    ),
    'kbheader_' => array(
      'style' => 'default',
    ),
    'about' => array(
      'style' => 'default',
    ),
    'news' => array(
      'style' => 'default',
    ),
    'kbleft' => array(
      'style' => 'default',
    ),
    'kbmiddle' => array(
      'style' => 'default',
    ),
    'kbright' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fc751a7b-2fc3-4fa1-aa94-f4377f765858';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-00979744-0e33-4553-9f86-8e7975424d97';
    $pane->panel = 'about';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About',
      'title' => 'RESEARCH IN ELECTRONIC LITERATURE',
      'body' => 'Electronic Literature as a Model of Creativity and Innovation in Practice (ELMCIP) is a collaborative research project funded by Humanities in the European Research Area (HERA) JRP for Creativity and Innovation. ELMCIP involves seven European academic research partners and one non-academic partner who are investigating how creative communities of practitioners form within a transnational and transcultural context in a globalized and distributed communication environment. Focusing on the electronic literature community in Europe as a model of networked creativity and innovation in practice, ELMCIP is intended both to study the formation and interactions of that community and to further electronic literature research and practice in Europe.',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-about',
      'css_class' => 'transparent',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00979744-0e33-4553-9f86-8e7975424d97';
    $display->content['new-00979744-0e33-4553-9f86-8e7975424d97'] = $pane;
    $display->panels['about'][0] = 'new-00979744-0e33-4553-9f86-8e7975424d97';
    $pane = new stdClass();
    $pane->pid = 'new-2d971e64-9123-40fb-aed5-9dcf9c3a0897';
    $pane->panel = 'anothology2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Anothology1',
      'title' => '',
      'body' => '<img src="http://elmcip.net/sites/default/files/anthology_image.png" width="340px">',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-anthology2',
      'css_class' => 'transparent',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2d971e64-9123-40fb-aed5-9dcf9c3a0897';
    $display->content['new-2d971e64-9123-40fb-aed5-9dcf9c3a0897'] = $pane;
    $display->panels['anothology2'][0] = 'new-2d971e64-9123-40fb-aed5-9dcf9c3a0897';
    $pane = new stdClass();
    $pane->pid = 'new-b8cf9d13-73fc-4131-8fea-a5f3524ed406';
    $pane->panel = 'anthology1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Anthology1',
      'title' => 'Anthology of European Electronic Literature',
      'body' => 'The <a href="http://anthology.elmcip.net">ELMCIP Anthology of European Electronic Literature</a>  edited by Maria Engberg, Talan Memmott, and David Prater, is now online. The anthology is intended to provide educators, students and the general public with a free curricular resource of electronic literary works produced in Europe. The works were selected, after an open call, based on four main criteria: European diversity, Formal diversity, Historical relevance, and Pedagogical relevance. The anthology includes 18 works of electronic literature, pedagogical materials, cross-links to relevant materials in the ELMCIP Knowledge Base, and video presentations. The anthology is available both online and in a USB edition available for libraries and institutions.',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-anthology1',
      'css_class' => 'transparent',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b8cf9d13-73fc-4131-8fea-a5f3524ed406';
    $display->content['new-b8cf9d13-73fc-4131-8fea-a5f3524ed406'] = $pane;
    $display->panels['anthology1'][0] = 'new-b8cf9d13-73fc-4131-8fea-a5f3524ed406';
    $pane = new stdClass();
    $pane->pid = 'new-31234f90-d57c-46d8-bee2-137d34806b36';
    $pane->panel = 'conference';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Conference1',
      'title' => '',
      'body' => '<img src="./sites/default/files/media/news/images/rts.jpg" alt="Remediating the Social" title="Remediating the Social" />',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-conference1',
      'css_class' => 'transparent',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '31234f90-d57c-46d8-bee2-137d34806b36';
    $display->content['new-31234f90-d57c-46d8-bee2-137d34806b36'] = $pane;
    $display->panels['conference'][0] = 'new-31234f90-d57c-46d8-bee2-137d34806b36';
    $pane = new stdClass();
    $pane->pid = 'new-2c60bb1a-875b-48fe-b208-b4779c748843';
    $pane->panel = 'conference2_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Conference2',
      'title' => 'Remediating the Social',
      'body' => 'The final ELMCIP Conference <a href="http://elmcip.net/event/elmcip-conference-remediating-social">Remediating the Social</a> was hosted at Edinburgh College of Art (eca) of the University of Edinburgh Nov. 1-3, 2012, in collaboration with New Media Scotland and University College Falmouth. An associated exhibition was held at Inspace, a purpose-built research and exhibition facility in the University of Edinburgh\'s School of Informatics. The proceedings of the conference have been published as a beautifully produced 160 page book, including full colour artist\'s pages documenting the works show at the exhibition. The <a href="http://amzn.com/8299908906">Remediating the Social book</a> is available for purchase at Amazon, and as a free downloadable <a href="http://elmcip.net/critical-writing/remediating-social-e-book">e-book</a>. <a href="http://elmcip.net/sites/default/files/files/attachments/criticalwriting/remediating_the_social_full.pdf">(PDF download)</a> Online <a href="http://elmcip.net/event/elmcip-conference-remediating-social">documentation</a> includes abstracts and Bambuser videos of all of the academic presentations, photos, and more.',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-conference2',
      'css_class' => 'transparent',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c60bb1a-875b-48fe-b208-b4779c748843';
    $display->content['new-2c60bb1a-875b-48fe-b208-b4779c748843'] = $pane;
    $display->panels['conference2_'][0] = 'new-2c60bb1a-875b-48fe-b208-b4779c748843';
    $pane = new stdClass();
    $pane->pid = 'new-ebc5d29f-9c66-4d1a-82e1-656f21f8c559';
    $pane->panel = 'kbheader_';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h4',
      'class' => '',
      'id' => 'front-page-pane-kbheader',
      'override_title' => 1,
      'override_title_text' => 'ELMCIP KNOWLEDGE BASE',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-kbheader',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ebc5d29f-9c66-4d1a-82e1-656f21f8c559';
    $display->content['new-ebc5d29f-9c66-4d1a-82e1-656f21f8c559'] = $pane;
    $display->panels['kbheader_'][0] = 'new-ebc5d29f-9c66-4d1a-82e1-656f21f8c559';
    $pane = new stdClass();
    $pane->pid = 'new-0231c5fa-a8d3-4b24-a13b-edc8b78ae616';
    $pane->panel = 'kbleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'KBleft',
      'title' => 'Knowledge Base',
      'body' => '<p>The <a href="knowledgebase">ELMCIP Electronic Literature Knowledge Base</a> is a research resource for electronic literature. An open-access, contributory database developed in Drupal 7, it provides cross-referenced, contextualized information about <a href="author">authors</a>, <a href="work">creative works</a>, <a href="critical_writing">critical writing</a>, <a href="event">events</a>, <a href="organization">organizations</a>, <a href="publisher">publishers</a>, <a href="teaching_resource">teaching resources</a>, <a href=" research_collections"> research collections</a>, and <a href="db_archives">databases and archives</a>. Contributors should <a href="user/login">log in</a> to the Knowledge Base to enter new records and <a href="node/add">add content</a>.</p>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-kbleft',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0231c5fa-a8d3-4b24-a13b-edc8b78ae616';
    $display->content['new-0231c5fa-a8d3-4b24-a13b-edc8b78ae616'] = $pane;
    $display->panels['kbleft'][0] = 'new-0231c5fa-a8d3-4b24-a13b-edc8b78ae616';
    $pane = new stdClass();
    $pane->pid = 'new-ef7d4bea-7cf7-4426-b8af-ae50864ea6c7';
    $pane->panel = 'kbmiddle';
    $pane->type = 'views';
    $pane->subtype = 'new_content_teaser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-kbmiddle',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef7d4bea-7cf7-4426-b8af-ae50864ea6c7';
    $display->content['new-ef7d4bea-7cf7-4426-b8af-ae50864ea6c7'] = $pane;
    $display->panels['kbmiddle'][0] = 'new-ef7d4bea-7cf7-4426-b8af-ae50864ea6c7';
    $pane = new stdClass();
    $pane->pid = 'new-413af78b-9134-48bb-b907-a8e2c745b1d9';
    $pane->panel = 'kbright';
    $pane->type = 'views';
    $pane->subtype = 'new_content_teaser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-kbright',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '413af78b-9134-48bb-b907-a8e2c745b1d9';
    $display->content['new-413af78b-9134-48bb-b907-a8e2c745b1d9'] = $pane;
    $display->panels['kbright'][0] = 'new-413af78b-9134-48bb-b907-a8e2c745b1d9';
    $pane = new stdClass();
    $pane->pid = 'new-0880126c-7d6d-4e41-8a00-a0f7c4ffe076';
    $pane->panel = 'news';
    $pane->type = 'views';
    $pane->subtype = 'views_recent_posts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '8',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '#front-page-pane-news',
      'css_class' => 'transparent',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0880126c-7d6d-4e41-8a00-a0f7c4ffe076';
    $display->content['new-0880126c-7d6d-4e41-8a00-a0f7c4ffe076'] = $pane;
    $display->panels['news'][0] = 'new-0880126c-7d6d-4e41-8a00-a0f7c4ffe076';
    $pane = new stdClass();
    $pane->pid = 'new-f20bbdfd-a572-4d95-b7ff-82e2e624c27a';
    $pane->panel = 'sponsors';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-page-pane-sponsors',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f20bbdfd-a572-4d95-b7ff-82e2e624c27a';
    $display->content['new-f20bbdfd-a572-4d95-b7ff-82e2e624c27a'] = $pane;
    $display->panels['sponsors'][0] = 'new-f20bbdfd-a572-4d95-b7ff-82e2e624c27a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'latest_revisions';
  $page->task = 'page';
  $page->admin_title = 'Latest Revisions';
  $page->admin_description = 'Show all content in the knowledge base but enable users to sort based on record status';
  $page->path = 'knowledgebase/latestrevisions';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view revisions',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Latest Revisions',
    'name' => 'primary-links',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => 'knowledgebase',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_latest_revisions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'latest_revisions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Content status',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '486ee52d-72bb-4e2a-a0de-b44f2ee28b92';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff0782e2-ce5b-42c8-a1fa-e88dd5daf5b4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest_revisions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'ff0782e2-ce5b-42c8-a1fa-e88dd5daf5b4';
    $display->content['new-ff0782e2-ce5b-42c8-a1fa-e88dd5daf5b4'] = $pane;
    $display->panels['middle'][0] = 'new-ff0782e2-ce5b-42c8-a1fa-e88dd5daf5b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['latest_revisions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'literature';
  $page->task = 'page';
  $page->admin_title = 'Knowledge Base';
  $page->admin_description = 'Exposes literature content of the site';
  $page->path = 'knowledgebase';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Knowledge Base',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_literature_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'literature';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => 'kbpage',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'default' => array(
        'corner_location' => 'pane',
      ),
    ),
    'style' => 'rounded_corners',
  );
  $display->cache = array();
  $display->title = 'Electronic Literature Knowledge Base';
  $display->uuid = '24ce8d1a-6265-43e7-bd60-1bd70b5821e5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5aacc20-da1a-47c3-9680-57f98c47be66';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'event_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'b5aacc20-da1a-47c3-9680-57f98c47be66';
    $display->content['new-b5aacc20-da1a-47c3-9680-57f98c47be66'] = $pane;
    $display->panels['bottom'][0] = 'new-b5aacc20-da1a-47c3-9680-57f98c47be66';
    $pane = new stdClass();
    $pane->pid = 'new-7b399783-cdc2-4aaa-825d-800a61041d59';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'db_archives_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b399783-cdc2-4aaa-825d-800a61041d59';
    $display->content['new-7b399783-cdc2-4aaa-825d-800a61041d59'] = $pane;
    $display->panels['bottom'][1] = 'new-7b399783-cdc2-4aaa-825d-800a61041d59';
    $pane = new stdClass();
    $pane->pid = 'new-d9bb6ab2-66ea-4ec3-bc36-08331f12850d';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'research_collection_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '2',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd9bb6ab2-66ea-4ec3-bc36-08331f12850d';
    $display->content['new-d9bb6ab2-66ea-4ec3-bc36-08331f12850d'] = $pane;
    $display->panels['bottom'][2] = 'new-d9bb6ab2-66ea-4ec3-bc36-08331f12850d';
    $pane = new stdClass();
    $pane->pid = 'new-279ba900-d901-4540-91e4-a0add235c116';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'publisher_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '279ba900-d901-4540-91e4-a0add235c116';
    $display->content['new-279ba900-d901-4540-91e4-a0add235c116'] = $pane;
    $display->panels['left'][0] = 'new-279ba900-d901-4540-91e4-a0add235c116';
    $pane = new stdClass();
    $pane->pid = 'new-fb34c8b2-94a7-4e12-9ddc-9b13e9310e8f';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'organization_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'fb34c8b2-94a7-4e12-9ddc-9b13e9310e8f';
    $display->content['new-fb34c8b2-94a7-4e12-9ddc-9b13e9310e8f'] = $pane;
    $display->panels['right'][0] = 'new-fb34c8b2-94a7-4e12-9ddc-9b13e9310e8f';
    $pane = new stdClass();
    $pane->pid = 'new-1d96d697-9de8-4776-aff8-9c9c2ac93dc7';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'contribute_pane_non_contrib';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'create critical_writing content',
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 0,
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '1d96d697-9de8-4776-aff8-9c9c2ac93dc7';
    $display->content['new-1d96d697-9de8-4776-aff8-9c9c2ac93dc7'] = $pane;
    $display->panels['top'][0] = 'new-1d96d697-9de8-4776-aff8-9c9c2ac93dc7';
    $pane = new stdClass();
    $pane->pid = 'new-b727e7f8-178f-4e8e-a3e9-cba201b5ae8b';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 7,
              1 => 3,
              2 => 6,
              3 => 5,
              4 => 8,
              5 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'contribute_pane',
      'title' => 'Contribute to the Knowledge Base',
      'body' => 'Add a new ',
      'format' => '1',
      'substitute' => TRUE,
      'name' => 'contribute_pane',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'b727e7f8-178f-4e8e-a3e9-cba201b5ae8b';
    $display->content['new-b727e7f8-178f-4e8e-a3e9-cba201b5ae8b'] = $pane;
    $display->panels['top'][1] = 'new-b727e7f8-178f-4e8e-a3e9-cba201b5ae8b';
    $pane = new stdClass();
    $pane->pid = 'new-051a79dd-98a0-42c2-af84-628da5ca97cf';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'all_tags_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 0,
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '051a79dd-98a0-42c2-af84-628da5ca97cf';
    $display->content['new-051a79dd-98a0-42c2-af84-628da5ca97cf'] = $pane;
    $display->panels['top'][2] = 'new-051a79dd-98a0-42c2-af84-628da5ca97cf';
    $pane = new stdClass();
    $pane->pid = 'new-a07dda03-1a3a-4e26-8790-73aa525dc66f';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'work_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'a07dda03-1a3a-4e26-8790-73aa525dc66f';
    $display->content['new-a07dda03-1a3a-4e26-8790-73aa525dc66f'] = $pane;
    $display->panels['top'][3] = 'new-a07dda03-1a3a-4e26-8790-73aa525dc66f';
    $pane = new stdClass();
    $pane->pid = 'new-127246f7-f1b8-4a9a-bbde-718f4067d98a';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'critical_writing_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '127246f7-f1b8-4a9a-bbde-718f4067d98a';
    $display->content['new-127246f7-f1b8-4a9a-bbde-718f4067d98a'] = $pane;
    $display->panels['top'][4] = 'new-127246f7-f1b8-4a9a-bbde-718f4067d98a';
    $pane = new stdClass();
    $pane->pid = 'new-edd724d2-0911-4028-a113-dab321f2cff2';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'Author_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = 'edd724d2-0911-4028-a113-dab321f2cff2';
    $display->content['new-edd724d2-0911-4028-a113-dab321f2cff2'] = $pane;
    $display->panels['top'][5] = 'new-edd724d2-0911-4028-a113-dab321f2cff2';
    $pane = new stdClass();
    $pane->pid = 'new-985ba995-ebbe-4212-b4b6-04a1ffa18f8e';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'teaching_resource_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = '985ba995-ebbe-4212-b4b6-04a1ffa18f8e';
    $display->content['new-985ba995-ebbe-4212-b4b6-04a1ffa18f8e'] = $pane;
    $display->panels['top'][6] = 'new-985ba995-ebbe-4212-b4b6-04a1ffa18f8e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['literature'] = $page;

  return $pages;

}
