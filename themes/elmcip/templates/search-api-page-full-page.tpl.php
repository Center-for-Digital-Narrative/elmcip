<?php

/**
 * @file
 * Default theme implementation for displaying a search page.
 *
 * This template renders a page containing a search form and, possibly, search
 * results.
 *
 * Available variables:
 * - $results: The renderable search results.
 * - $form: The search form.
 *
 * @see template_preprocess_search_api_page()
 */

?>

<?php print render($form); ?>

<?php print render($results); ?>
