<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function elmcip_form_system_theme_settings_alter(&$form, &$form_state) {
  unset($form['themedev']['zen_layout']);
}
