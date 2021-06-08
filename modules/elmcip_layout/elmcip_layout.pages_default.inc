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
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Profile user dash',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4cfe7846-fd86-4562-acc9-af6927dd4d62';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view_panel_context';
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
    'body' => '',
    'format' => '4',
    'substitute' => TRUE,
    'title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '515c87a4-2751-4f45-871e-29170efe6b4d';
  $display->content['new-515c87a4-2751-4f45-871e-29170efe6b4d'] = $pane;
  $display->panels['middle'][0] = 'new-515c87a4-2751-4f45-871e-29170efe6b4d';
  $pane = new stdClass();
  $pane->pid = 'new-4e8ba9f4-bfa6-4b12-91b2-e463df31dfb3';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_by_contributor-panel_pane_1';
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
  $pane->locks = array();
  $pane->uuid = '4e8ba9f4-bfa6-4b12-91b2-e463df31dfb3';
  $display->content['new-4e8ba9f4-bfa6-4b12-91b2-e463df31dfb3'] = $pane;
  $display->panels['middle'][1] = 'new-4e8ba9f4-bfa6-4b12-91b2-e463df31dfb3';
  $pane = new stdClass();
  $pane->pid = 'new-4a1c05d2-f336-43f0-9409-b5a330ba8420';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_by_contributor-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4a1c05d2-f336-43f0-9409-b5a330ba8420';
  $display->content['new-4a1c05d2-f336-43f0-9409-b5a330ba8420'] = $pane;
  $display->panels['middle'][2] = 'new-4a1c05d2-f336-43f0-9409-b5a330ba8420';
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
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = '563e6b28-5ea8-4cb9-8f09-f501550b1a52';
  $display->content['new-563e6b28-5ea8-4cb9-8f09-f501550b1a52'] = $pane;
  $display->panels['middle'][3] = 'new-563e6b28-5ea8-4cb9-8f09-f501550b1a52';
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
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'perm',
        'not' => FALSE,
        'settings' => array(
          'perm' => 'access content',
        ),
      ),
    ),
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'primary-links',
    'parent' => array(
      'name' => 'navigation',
      'title' => 'knowledgebase',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => 'Record Status',
    'type' => 'tab',
    'weight' => '1',
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
    'access' => array(
      'logic' => 'and',
    ),
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Content status',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'middle' => array(
      'style' => '-1',
    ),
    'style' => 'default',
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '77b0780a-28a4-4042-a956-f47b9576db8a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_status_panel_context';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = 'd99bcbc4-6a8b-42f9-9003-5789185acf1e';
  $display->content['new-d99bcbc4-6a8b-42f9-9003-5789185acf1e'] = $pane;
  $display->panels['middle'][0] = 'new-d99bcbc4-6a8b-42f9-9003-5789185acf1e';
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
  $page->admin_title = 'Frontpage';
  $page->admin_description = 'ELMCIP front page';
  $page->path = 'front';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
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
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => 'frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'FrontPanel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'about' => array(
        'class' => '',
        'parent' => 'main-row',
        'title' => 'about',
        'type' => 'region',
        'width' => 50,
        'width_type' => '%',
      ),
      'anothology2' => array(
        'class' => '',
        'parent' => '6',
        'title' => 'Anthology2',
        'type' => 'region',
        'width' => '31.06598525171712',
        'width_type' => '%',
      ),
      'anthology1' => array(
        'class' => '',
        'parent' => '6',
        'title' => 'Anthology1',
        'type' => 'region',
        'width' => '51.40670079239713',
        'width_type' => '%',
      ),
      'canvas' => array(
        'children' => array(
          0 => 'main',
        ),
        'contains' => 'column',
        'parent' => NULL,
        'type' => 'row',
      ),
      'conference' => array(
        'class' => '',
        'parent' => '8',
        'title' => 'Conference1',
        'type' => 'region',
        'width' => '36.49959607701835',
        'width_type' => '%',
      ),
      'conference2_' => array(
        'class' => '',
        'parent' => '8',
        'title' => 'Conference2',
        'type' => 'region',
        'width' => '63.500403922981654',
        'width_type' => '%',
      ),
      'kbheader_' => array(
        'class' => '',
        'parent' => '3',
        'title' => 'KB header',
        'type' => 'region',
        'width' => 100,
        'width_type' => '%',
      ),
      'kbleft' => array(
        'class' => '',
        'parent' => '4',
        'title' => 'KBleft',
        'type' => 'region',
        'width' => '32.87279486222186',
        'width_type' => '%',
      ),
      'kbmiddle' => array(
        'class' => '',
        'parent' => '4',
        'title' => 'KBmiddle',
        'type' => 'region',
        'width' => '33.76515522630505',
        'width_type' => '%',
      ),
      'kbright' => array(
        'class' => '',
        'parent' => '4',
        'title' => 'KBright',
        'type' => 'region',
        'width' => '33.3620499114731',
        'width_type' => '%',
      ),
      'main' => array(
        'children' => array(
          0 => 'main-row',
          1 => 3,
          2 => 4,
          3 => 6,
          4 => 8,
          5 => 10,
        ),
        'parent' => 'canvas',
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
      ),
      'main-row' => array(
        'children' => array(
          0 => 'about',
          1 => 'news',
        ),
        'class' => 'general',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
      'news' => array(
        'class' => '',
        'parent' => 'main-row',
        'title' => 'news',
        'type' => 'region',
        'width' => 50,
        'width_type' => '%',
      ),
      'sponsors' => array(
        'class' => '',
        'parent' => '10',
        'title' => 'Sponsors',
        'type' => 'region',
        'width' => 100,
        'width_type' => '%',
      ),
      3 => array(
        'children' => array(
          0 => 'kbheader_',
        ),
        'class' => 'kb-header',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
      4 => array(
        'children' => array(
          0 => 'kbleft',
          1 => 'kbmiddle',
          2 => 'kbright',
        ),
        'class' => 'kb',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
      6 => array(
        'children' => array(
          0 => 'anthology1',
          1 => 'anothology2',
        ),
        'class' => 'anthology',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
      8 => array(
        'children' => array(
          0 => 'conference',
          1 => 'conference2_',
        ),
        'class' => 'conference',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
      10 => array(
        'children' => array(
          0 => 'sponsors',
        ),
        'class' => 'sponsors',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
    ),
  );
  $display->panel_settings = array(
    'about' => array(
      'style' => 'default',
    ),
    'anothology2' => array(
      'style' => 'default',
    ),
    'anthology1' => array(
      'style' => 'default',
    ),
    'conference' => array(
      'style' => 'default',
    ),
    'conference2_' => array(
      'style' => 'default',
    ),
    'kbheader_' => array(
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
    'news' => array(
      'style' => 'default',
    ),
    'sponsors' => array(
      'style' => 'default',
    ),
    'style_settings' => array(
      'about' => NULL,
      'anothology2' => NULL,
      'anthology1' => NULL,
      'conference' => NULL,
      'conference2' => NULL,
      'conference2_' => NULL,
      'default' => NULL,
      'kbheader' => NULL,
      'kbheader_' => NULL,
      'kbleft' => NULL,
      'kbmiddle' => NULL,
      'kbright' => NULL,
      'news' => NULL,
      'separator1' => NULL,
      'separator2' => NULL,
      'separator3' => NULL,
      'separator3_' => NULL,
      'sponsors' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fc751a7b-2fc3-4fa1-aa94-f4377f765858';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_panel_context';
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
    'body' => 'Electronic Literature as a Model of Creativity and Innovation in Practice (ELMCIP) is a collaborative research project funded by Humanities in the European Research Area (HERA) JRP for Creativity and Innovation. ELMCIP involves seven European academic research partners and one non-academic partner who are investigating how creative communities of practitioners form within a transnational and transcultural context in a globalized and distributed communication environment. Focusing on the electronic literature community in Europe as a model of networked creativity and innovation in practice, ELMCIP is intended both to study the formation and interactions of that community and to further electronic literature research and practice in Europe.',
    'format' => '3',
    'substitute' => TRUE,
    'title' => 'RESEARCH IN ELECTRONIC LITERATURE',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'transparent',
    'css_id' => 'front-page-pane-about',
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
    'admin_title' => 'Anthology image',
    'body' => '<img src="/sites/default/files/logos/anthology_image.png" alt="Anthology image" width="340px" />',
    'format' => 'ds_code',
    'substitute' => TRUE,
    'title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'transparent',
    'css_id' => 'front-page-pane-anthology2',
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
    'body' => 'The <a href="http://anthology.elmcip.net">ELMCIP Anthology of European Electronic Literature</a>  edited by Maria Engberg, Talan Memmott, and David Prater, is now online. The anthology is intended to provide educators, students and the general public with a free curricular resource of electronic literary works produced in Europe. The works were selected, after an open call, based on four main criteria: European diversity, Formal diversity, Historical relevance, and Pedagogical relevance. The anthology includes 18 works of electronic literature, pedagogical materials, cross-links to relevant materials in the ELMCIP Knowledge Base, and video presentations. The anthology is available both online and in a USB edition available for libraries and institutions.',
    'format' => '3',
    'substitute' => TRUE,
    'title' => 'Anthology of European Electronic Literature',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'transparent',
    'css_id' => 'front-page-pane-anthology1',
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
    'body' => '<img src="./sites/default/files/media/story/images/rts.jpg" alt="Remediating the Social" title="Remediating the Social" />',
    'format' => '1',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'transparent',
    'css_id' => 'front-page-pane-conference1',
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
    'body' => 'The final ELMCIP Conference <a href="http://elmcip.net/event/elmcip-conference-remediating-social">Remediating the Social</a> was hosted at Edinburgh College of Art (eca) of the University of Edinburgh Nov. 1-3, 2012, in collaboration with New Media Scotland and University College Falmouth. An associated exhibition was held at Inspace, a purpose-built research and exhibition facility in the University of Edinburgh\'s School of Informatics. The proceedings of the conference have been published as a beautifully produced 160 page book, including full colour artist\'s pages documenting the works show at the exhibition. The <a href="http://amzn.com/8299908906">Remediating the Social book</a> is available for purchase at Amazon, and as a free downloadable <a href="http://elmcip.net/critical-writing/remediating-social-e-book">e-book</a>. <a href="http://elmcip.net/sites/default/files/files/attachments/criticalwriting/remediating_the_social_full.pdf">(PDF download)</a> Online <a href="http://elmcip.net/event/elmcip-conference-remediating-social">documentation</a> includes abstracts and Bambuser videos of all of the academic presentations, photos, and more.',
    'format' => '3',
    'substitute' => TRUE,
    'title' => 'Remediating the Social',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'transparent',
    'css_id' => 'front-page-pane-conference2',
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
    'class' => '',
    'id' => 'front-page-pane-kbheader',
    'markup' => 'h4',
    'override_title' => 1,
    'override_title_text' => 'ELMCIP KNOWLEDGE BASE',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'granularity' => 'none',
      'lifetime' => '604800',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'front-page-pane-kbheader',
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
    'body' => '<p>The <a href="knowledgebase">ELMCIP Electronic Literature Knowledge Base</a> is a research resource for electronic literature. An open-access, contributory database developed in Drupal 7, it provides cross-referenced, contextualized information about <a href="author">authors</a>, <a href="work">creative works</a>, <a href="critical_writing">critical writing</a>, <a href="event">events</a>, <a href="organization">organizations</a>, <a href="publisher">publishers</a>, <a href="teaching_resource">teaching resources</a>, <a href=" research_collections"> research collections</a>, and <a href="db_archives">databases and archives</a>. Contributors should <a href="user/login">log in</a> to the Knowledge Base to enter new records and <a href="node/add">add content</a>.</p>',
    'format' => '2',
    'substitute' => TRUE,
    'title' => 'Knowledge Base',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'front-page-pane-kbleft',
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
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '5',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'front-page-pane-kbmiddle',
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
    'args' => '',
    'display' => 'block_2',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '5',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'front-page-pane-kbright',
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
    'args' => '',
    'display' => 'block_2',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '8',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'transparent',
    'css_id' => '#front-page-pane-news',
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
    'css_class' => '',
    'css_id' => 'front-page-pane-sponsors',
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
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'perm',
        'not' => FALSE,
        'settings' => array(
          'perm' => 'view revisions',
        ),
      ),
    ),
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'primary-links',
    'parent' => array(
      'name' => 'navigation',
      'title' => 'knowledgebase',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => 'Latest Revisions',
    'type' => 'tab',
    'weight' => '2',
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
    'access' => array(
      'logic' => 'and',
    ),
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Content status',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'middle' => array(
      'style' => '-1',
    ),
    'style' => 'default',
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '486ee52d-72bb-4e2a-a0de-b44f2ee28b92';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_latest_revisions_panel_context';
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
    'logic' => 'and',
    'plugins' => array(),
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'primary-links',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => 'Knowledge Base',
    'type' => 'normal',
    'weight' => '0',
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
    'contexts' => array(),
    'css' => '',
    'css_id' => 'kbpage',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'bottom' => array(
      'style' => 'default',
    ),
    'left' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
    'style' => 'rounded_corners',
    'style_settings' => array(
      'bottom' => NULL,
      'default' => array(
        'corner_location' => 'pane',
      ),
      'left' => NULL,
      'left_above' => NULL,
      'left_below' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'right_above' => NULL,
      'right_below' => NULL,
      'top' => NULL,
    ),
    'top' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Electronic Literature Knowledge Base';
  $display->uuid = '24ce8d1a-6265-43e7-bd60-1bd70b5821e5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_literature_panel_context';
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
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '10',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
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
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '5',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
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
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '5',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '2',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
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
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '20',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
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
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '20',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
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
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 0,
    'substitute' => TRUE,
    'title' => '',
  );
  $pane->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
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
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'contribute_pane',
    'body' => 'Add a new ',
    'format' => '1',
    'name' => 'contribute_pane',
    'substitute' => TRUE,
    'title' => 'Contribute to the Knowledge Base',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => '',
  );
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
    'body' => '',
    'format' => 0,
    'substitute' => TRUE,
    'title' => '',
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
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '10',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
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
  $pane->pid = 'new-fa3540d3-9833-4b9e-b124-f98990361884';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'critical_writing_main-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'fa3540d3-9833-4b9e-b124-f98990361884';
  $display->content['new-fa3540d3-9833-4b9e-b124-f98990361884'] = $pane;
  $display->panels['top'][4] = 'new-fa3540d3-9833-4b9e-b124-f98990361884';
  $pane = new stdClass();
  $pane->pid = 'new-edd724d2-0911-4028-a113-dab321f2cff2';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'Author_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '20',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
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
  $pane->pid = 'new-c268d300-cd46-4ee5-bf00-318108e609a6';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'platform-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c268d300-cd46-4ee5-bf00-318108e609a6';
  $display->content['new-c268d300-cd46-4ee5-bf00-318108e609a6'] = $pane;
  $display->panels['top'][6] = 'new-c268d300-cd46-4ee5-bf00-318108e609a6';
  $pane = new stdClass();
  $pane->pid = 'new-985ba995-ebbe-4212-b4b6-04a1ffa18f8e';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'teaching_resource_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '5',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = '';
  $pane->uuid = '985ba995-ebbe-4212-b4b6-04a1ffa18f8e';
  $display->content['new-985ba995-ebbe-4212-b4b6-04a1ffa18f8e'] = $pane;
  $display->panels['top'][7] = 'new-985ba995-ebbe-4212-b4b6-04a1ffa18f8e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['literature'] = $page;

  return $pages;

}
