<?php
/**
 * @file Theme override functions and preprocess functions for the theme.
 */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function elmcip_preprocess_page(&$variables, $hook) {
  if ($variables['user']->uid == 1) {
    $variables['classes_array'][] = 'is-admin';
  }
}

/**
 * Implements template_preprocess_node().
 *
 * @param $variables
 */
function elmcip_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full') {
    if ($variables['type'] == 'critical_writing' || $variables['type'] == 'work') {
      if ($variables['field_abstract_lang_tax']) {
        $term = taxonomy_term_load($variables['field_abstract_lang_tax']['und'][0]['tid']);
        if ($variables['type'] == 'critical_writing') {
          $title = t("Abstract (in @term_name)", array('@term_name' => $term->name));
        }
        else {
          $title = t("Description (in @term_name)", array('@term_name' => $term->name));
        }
        $variables['content']['field_abstract_lang']['#title'] = $title;
      }
    }
  }
}

/**
 * Implement hook_form_alter().
 */
function elmcip_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_api_page_search_form_search_knowledge_base') {
    $form['submit_1']['#attributes']['class'][] = 'yui3-button';
    $form['keys_1']['#size'] = 30;
    // Add extra attributes to the text box.
    $form['keys_1']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}";
    $form['keys_1']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";
    $form['keys_1']['#attributes']['placeholder'] = t('Search');
    $form['#attributes']['class'][] = 'container-inline';
  }
}

/**
 * Implements template_preprocess_region().
 */
function elmcip_preprocess_region(&$variables, $hook) {
  if ($variables['region'] == 'header' || 'header-top') {
    $variables['classes_array'][] = 'clearfix';
  }
}

/**
 * Panels render callback. Removes panel separator.
 *
 * @ingroup themeable
 */
function elmcip_panels_default_style_render_region($variables) {
  $output = '';
  $output .= implode('', $variables['panes']);
  return $output;
}

/**
 * implement theme_field().
 */
function elmcip_field__field_pullquote($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<blockquote ' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</blockquote>';
  }

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}
