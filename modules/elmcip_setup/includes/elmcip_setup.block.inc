<?php

declare(strict_types = 1);

/**
 * Implements hook_block_info().
 */
function elmcip_setup_block_info() {
  $blocks['sosical_networks'] = array(
    'info' => t('Social networks associated with ELMCIP'),
    'cache' => DRUPAL_CACHE_GLOBAL,
    'status' => 0,
  );

  $blocks['sponsors'] = array(
    'info' => t('ELMCIP sponsors'),
    'cache' => DRUPAL_CACHE_GLOBAL,
    'status' => 0,
  );

  return $blocks;
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
      $block = [
        'content' => render($content),
      ];
      break;
    case 'sponsors':
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
          <img alt="ELMCIP sponsors" src="/sites/all/themes/elmcip/images/sponsors/elmcip_sponsors.png" usemap="#sponsorblock" />
          <p>
              This Work, ELMCIP, is licensed under a <a href="http://creativecommons.org/licenses/by-sa/2.5/" target="_blank">Creative Commons Attribution-ShareAlike license <img alt="creative commons" src="/sites/all/themes/elmcip/images/sponsors/cc_logo.png" /></a>, although certain works referenced herein may be separately licensed.
          </p>
      </p>',
      ];
      $block = [
        'content' => render($content),
      ];
      break;
  }

  return $block;
}
