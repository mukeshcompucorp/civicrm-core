<?php
/**
 * @file
 * tpg_homepage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tpg_homepage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-6e4736d32ae81caa884e2c16b2e1fbcf'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '6e4736d32ae81caa884e2c16b2e1fbcf',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'home',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'civicrm_wide' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'civicrm_wide',
        'weight' => 0,
      ),
      'porto' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tpg_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-8ac6453fd3def00abb3299861ed37e2f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8ac6453fd3def00abb3299861ed37e2f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'civicrm_wide' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'civicrm_wide',
        'weight' => 0,
      ),
      'porto' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tpg_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tpg_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
