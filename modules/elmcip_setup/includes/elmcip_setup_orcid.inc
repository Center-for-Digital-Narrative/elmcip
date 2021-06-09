<?php

/**
 * ORCID custom validator.
 *
 * @param $form
 * @param $form_state
 */
function elmcip_setup_orcid_field_validate($form, &$form_state) {
  if ($form_state['values']['field_orcid']['und'][0]['value']) {
    foreach ($form_state['values']['field_orcid']['und'] as $delta => $value) {

      if (!elmcip_setup_orcid_validate($value['value'])) {
        form_set_error('field_orcid', 'ORCID validation failed.');
      }
    }
  }
}

/**
 * Check if ORCID is correct.
 *
 * @param $value
 * @return bool
 */
function elmcip_setup_orcid_validate($value) {
  return true;

  return strpos(trim($value), '000') === 0;
}

function elmcip_orcid_formatter(string $url) {
  $url = trim($url);

  return l($url, 'https://orcid.org/' . $url);
}
