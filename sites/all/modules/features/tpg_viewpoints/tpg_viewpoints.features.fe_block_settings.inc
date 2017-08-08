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

  $export['block-viewpoints_explore_content_links'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-4',
    'custom' => 0,
    'machine_name' => 'viewpoints_explore_content_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'viewpoints
expore-all-content',
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
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-viewpoints_intro'] = array(
    'cache' => -1,
    'css_class' => 'viewpoints-intro',
    'custom' => 0,
    'machine_name' => 'viewpoints_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'viewpoints',
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
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
