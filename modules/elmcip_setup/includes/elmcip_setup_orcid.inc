<?php

/**
 * ORCID validator.
 *
 * Valid: full URL or the ORCID ID.
 *
 * @param $form
 * @param $form_state
 */
function elmcip_orcid_field_validate($form, &$form_state) {
  if ($form_state['values']['field_orcid']['und'][0]['url']) {
    foreach ($form_state['values']['field_orcid']['und'] as $delta => $value) {

      if (!elmcip_setup_orcid_validate($value['url'])) {
        form_set_error(
          'field_orcid',
          'ORCID validation failed.
           Allowed values: The full URL or the ORCID identifier.
           Example: https://orcid.org/0000-0002-9079-593X or 0000-0002-9079-593X.'
        );
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
function elmcip_setup_orcid_validate(string $value) {
  $orcid = trim($value);
  if (strpos($orcid, 'https://orcid.org/') === 0) {
    return true;
  }

  if (strpos($orcid, 'http://orcid.org/') === 0) {
    return true;
  }

  if (strpos($orcid, '0000-') === 0) {
    return true;
  }

  return false;
}

function elmcip_orcid_formatter(string $url) {
  $orcid = trim($url);

  if (strpos($orcid, 'https://orcid.org/') === 0) {
    return elmcip_orcid_link($orcid);
  }

  if (strpos($orcid, 'http://orcid.org/') === 0) {
    return elmcip_orcid_link($orcid);
  }

  if (strpos($orcid, '0000-') === 0) {
    return l($orcid, 'https://orcid.org/' . $orcid,
      [
        'attributes' => [
          'target' => '_blank',
        ],
      ],
    );
  }

  return check_plain($orcid);
}

function elmcip_orcid_link(string $orcid) {
  return l($orcid, $orcid,
    [
      'attributes' => [
        'target' => '_blank',
      ],
    ],
  );
}
