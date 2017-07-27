<?php
/**
 * @file
 * tpg_viewpoints.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tpg_viewpoints_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-viewpoints-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'viewpoints-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'viewpoint',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-viewpoints-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'viewpoints-block_2',
    'module' => 'views',
    'node_types' => array(
      0 => 'viewpoint',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
