<?php

declare(strict_types = 1);

/**
 * Implements hook_block_info().
 */
function elmcip_setup_block_info() {
  return [
    'sosical_networks' => [
      'info' => t('Social networks associated with ELMCIP'),
      'cache' => DRUPAL_CACHE_GLOBAL,
      'status' => 0,
    ],
    'sponsors' => [
      'info' => t('ELMCIP sponsors'),
      'cache' => DRUPAL_CACHE_GLOBAL,
      'status' => 0,
    ],
  ];

}

/**
 * Implements hook_block_view().
 */
function elmcip_setup_block_view($delta = '') {
  $block = [];

  switch ($delta) {
    case 'sosical_networks':
      $content =  [
        '#type' => 'markup',
        '#markup' => '
        <ul class="menu social">
          <li><a href="https://vimeo.com/elmcip"><i class="fa fa-vimeo-square"></i></a></li>
          <li><a href="https://twitter.com/elmcip"><i class="fa fa-twitter-square"></i></a></li>
          <li><a href="https://www.facebook.com/groups/480202502024095"><i class="fa fa-facebook-square"></i></a></li>
        </ul>',
      ];
      $block ['content'] = $content;
      break;
    case 'sponsors':
      $block ['content'] = elmcip_setup_sponsors_content();
      break;
  }

  return $block;
}

/**
 * Create sponsors list.
 *
 * @return array
 *   Drupal render array of sponsors.
 */
function elmcip_setup_sponsors_content() {
  global $base_path;
  $path = $base_path . drupal_get_path('module', 'elmcip_setup');
  $sponsors_render_array = [];
  $sponsor_image_path = $path . '/images/sponsors/';
  $sponsors = [
    [
      'title' => 'HERA',
      'alt' => 'HERA (Humanities in the European Research Area)',
      'image' => 'hera.png',
      'url' => 'http://www.heranet.info/',
    ],
    [
      'title' => 'Consortium on Electronic Literature ',
      'alt' => 'Consortium on Electronic Literature ',
      'image' => 'cell.png',
      'url' => 'http://cellnetwork.net/',
    ],
    [
      'title' => 'CLARINO (Common Language Resources and Technology Infrastructure Norway)',
      'alt' => 'CLARINO (Common Language Resources and Technology Infrastructure Norway)',
      'image' => 'clarino.png',
      'url' => 'https://clarin.w.uib.no/',
    ],
    [
      'title' => 'University of Bergen, Department of Linguistic, Literary and Aesthetic Studies',
      'alt' => 'University of Bergen, Department of Linguistic, Literary and Aesthetic Studies',
      'image' => 'uib.png',
      'url' => 'https://www.uib.no/en/lle',
    ],
    [
      'title' => 'Bergen Electronic Literature Research Group',
      'alt' => 'Bergen Electronic Literature Research Group',
      'image' => 'bel.png',
      'url' => 'https://www.uib.no/en/rg/electronicliterature',
    ],
    [
      'title' => 'European Commission, European Research Area',
      'alt' => 'European Commission, European Research Area',
      'image' => 'european_commission.png',
      'url' => 'https://ec.europa.eu/research/era/index_en.htm',
    ],
  ];

  foreach ($sponsors as $id => $sponsor) {
    $sponsors_render_array[] = [
      '#theme' => 'image_formatter',
      '#item' => [
        'uri' => $sponsor_image_path . $sponsor['image'],
      ],
      '#suffix' => '<br />',
      '#path' => [
        'path' => $sponsor['url'],
        'options' => [
          'attributes' => [
            'title' => $sponsor['title'],
            'alt' => $sponsor['alt'],
          ],
        ],
      ],
    ];
  }

  return $sponsors_render_array;
}
