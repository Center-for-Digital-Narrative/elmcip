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
      $sponsorImage = 'elmcip_sponsors.png';
      global $base_root;
      global $base_path;
      $themePath = $base_root . $base_path . drupal_get_path('theme', $GLOBALS['theme']);
      $content =  [
        '#type' => 'markup',
        '#markup' => '
        <p>
          <map id="sponsorblock" name="sponsorblock">
            <area alt="HERA (Humanities in the European Research Area)" coords="9,16,180,61" href="http://www.heranet.info" shape="rect" target="_blank" title="HERA (Humanities in the European Research Area)">
            <area alt="NorStore" coords="417,19,545,53" href="https://www.norstore.no/" shape="rect" target="_blank" title="NorStore">
            <area alt="CLARINO (Common Language Resources and Technology Infrastructure Norway)" coords="557,20,665,52" href="http://clarin.b.uib.no/" shape="rect" target="_blank" title="CLARINO (Common Language Resources and Technology Infrastructure Norway)">
            <area alt="University of Bergen, Department of Linguistic, Literary and Aesthetic Studies" coords="373,37,33" href="http://www.uib.no/en/lle" shape="circle" target="_blank" title="University of Bergen, Department of Linguistic, Literary and Aesthetic Studies">
            <area alt="Bergen Electronic Literature Research Group" coords="254,77,422,147" href="http://www.uib.no/en/rg/electronicliterature" shape="rect" target="_blank" title="Bergen Electronic Literature Research Group">
            <area alt="European Commission, European Research Area" coords="189,8,331,63" href="http://ec.europa.eu/research/era/index_en.htm" shape="rect" target="_blank" title="European Commission, European Research Area">
          </map>
          <img alt="ELMCIP sponsors" src="' . $themePath . '/images/sponsors/' . $sponsorImage . '" usemap="#sponsorblock" />
          <p>
              This Work, ELMCIP, is licensed under a <a href="http://creativecommons.org/licenses/by-sa/2.5/" target="_blank">Creative Commons Attribution-ShareAlike license <img alt="creative commons" src="/sites/all/themes/elmcip/images/sponsors/cc_logo.png" /></a>, although certain works referenced herein may be separately licensed.
          </p>
      </p>',
      ];
      $block ['content'] = $content;
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
  global $theme_path;
  $sponsors_render_array = [];
  $sponsor_image_path = $theme_path . '/images/sponsors/';
  $sponsors = [
    [
      'title' => 'HERA',
      'alt' => 'HERA (Humanities in the European Research Area)',
      'image' => 'BTHlogo.gif',
      'url' => 'http://www.heranet.info/',
    ],
    [
      'title' => 'NorStore',
      'alt' => 'NorStore',
      'image' => 'BTHlogo.gif',
      'url' => 'https://www.norstore.no/',
    ],
    [
      'title' => 'CLARINO (Common Language Resources and Technology Infrastructure Norway)',
      'alt' => 'CLARINO (Common Language Resources and Technology Infrastructure Norway)',
      'image' => 'BTHlogo.gif',
      'url' => 'https://clarin.w.uib.no/',
    ],
    [
      'title' => 'University of Bergen, Department of Linguistic, Literary and Aesthetic Studies',
      'alt' => 'University of Bergen, Department of Linguistic, Literary and Aesthetic Studies',
      'image' => 'BTHlogo.gif',
      'url' => 'https://www.uib.no/en/lle',
    ],
    [
      'title' => 'Bergen Electronic Literature Research Group',
      'alt' => 'Bergen Electronic Literature Research Group',
      'image' => 'BTHlogo.gif',
      'url' => 'https://www.uib.no/en/rg/electronicliterature',
    ],
    [
      'title' => 'European Commission, European Research Area',
      'alt' => 'European Commission, European Research Area',
      'image' => 'BTHlogo.gif',
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
