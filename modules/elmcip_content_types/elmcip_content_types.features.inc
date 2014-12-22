<?php
/**
 * @file
 * elmcip_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elmcip_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function elmcip_content_types_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'class_group' => array(
      'name' => t('Class Group'),
      'base' => 'node_content',
      'description' => t('This content type is made for teachers who are using the Knowledge Base with their classes, in order for them to be able to quickly produce a watchlist so that they can access and monitor their students\'s work in the Knowledge Base. Students must first have accounts in the Knowledge Base before they can be added to a class list.'),
      'has_title' => '1',
      'title_label' => t('Class name'),
      'help' => t('Enter the name of the class. Please be specific, including the name of the course, name of the institution, and semester (e.g. DIKULT 203: Electronic Literature, University of Bergen, Fall 2011)'),
    ),
    'critical_writing' => array(
      'name' => t('Critical Writing'),
      'base' => 'node_content',
      'description' => t('Critical writing, includes monographs, book chapters, journal articles, reviews etc. written about electronic literature or referenced in electronic literature criticism, as well as non-traditional forms of schoarly discourse, such as video interviews, documentaries and webtexts about electronic literature. The title entered should be the name of the specific work described in the record (e.g. the title of an article if the record is for an article in a journal or a book).

If you are creating a record for a chapter or article published in a book, first create the record for the book before creating the specific record for the article.'),
      'has_title' => '1',
      'title_label' => t('Work title'),
      'help' => '',
    ),
    'databases_and_archives' => array(
      'name' => t('Databases and Archives'),
      'base' => 'node_content',
      'description' => t('Databases that document electronic literature and its cultural context, and archives or repositories that preserve and make available related materials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('In the "Title" field, enter the official name of the resource. If the resource is commonly referred to by an acronym (e.g. ELD for the Electronic Literature Directory), this can be specified in description.'),
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events include conferences, symposia, festivals, exhibitions, and other occasions where works of scholarship and/or works of electronic literature are presented.'),
      'has_title' => '1',
      'title_label' => t('Name of event'),
      'help' => '',
    ),
    'notebook' => array(
      'name' => t('Notebook'),
      'base' => 'node_content',
      'description' => t('Users can create notebooks for specific individual research projects and then add references and individual notes to them. To begin a notebook, create a title (e.g. "Research on early hypertext" or "Database narratives" or "Notes for my dissertation"). After you have created the notebook, you can begin adding entries to it.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('To begin a notebook, create a title (e.g. "Research on early hypertext" or "Database narratives" or "Notes for my dissertation").'),
    ),
    'notebook_entry' => array(
      'name' => t('Notebook entry'),
      'base' => 'node_content',
      'description' => t('A content type for individual users to record their own notes with references to records in the Knowledge Base.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter a brief descriptive title for this note (e.g. "Coding and Afternoon" or "Malloy\'s early hypertexts")'),
    ),
    'organization' => array(
      'name' => t('Organizations'),
      'base' => 'node_content',
      'description' => t('Institutional entities in which groups of persons collaborate for some end related to the field of electronic literature. Examples include: nonprofit organizations, arts organizations, research groups, academic consortia, academic departments, academic prgrams programs, etc. The record includes a descriptions, the location, and contact information about the organization. Note: Journals and presses are listed as Publishers, not as Organizations.'),
      'has_title' => '1',
      'title_label' => t('Name of Organization'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Records for people, such as authors of electronic literature and critical writing, editors, and others. Records include name (required) and optional biographical and location information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'platform_software' => array(
      'name' => t('Platform/Software'),
      'base' => 'node_content',
      'description' => t('Includes programming and script languages, libraries, programming environments, authoring systems etc.

Image, Attachment and Multimedia fields will be used for screenshots, tutorials, specifications, etc.

There will be a multiple reference field on works to cross-reference work with the platforms and software involved in their creation.

An attached view of all works created using a given platform will appear on the record for that platform.

Versions of given platforms (e.g. HTML 2.0, HTML 5) will not have individual records, though tags can be used to indicate versions used on individual works. '),
      'has_title' => '1',
      'title_label' => t('Platform name'),
      'help' => '',
    ),
    'publisher' => array(
      'name' => t('Publisher'),
      'base' => 'node_content',
      'description' => t('Short description of publisher. The publisher can be the name of a press (e.g. The MIT Press) or the title of a journal (e.g. ebr Electronic Book Review).'),
      'has_title' => '1',
      'title_label' => t('Name of publisher '),
      'help' => '',
    ),
    'research_collection' => array(
      'name' => t('Research Collection'),
      'base' => 'node_content',
      'description' => t('A research collection is an aggregation of records in the Knowledge Base that is produced for a particular research project -- for example Luciana Gattass\'s Brazilian electronic literature collection.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'teaching_resource' => array(
      'name' => t('Teaching Resource'),
      'base' => 'node_content',
      'description' => t('Teaching resources including syllabi, lesson plans, exercises, video tutorials, and other pedagogic aids.'),
      'has_title' => '1',
      'title_label' => t('Title of Resource'),
      'help' => '',
    ),
    'work' => array(
      'name' => t('Creative Work'),
      'base' => 'node_content',
      'description' => t('Works of electronic literature, digital literary art, and print antecedents.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
