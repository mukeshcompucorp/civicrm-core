<?php
/**
 * @file
 * tpg_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tpg_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-event_plan_your_visit'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'event_plan_your_visit',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'events/*',
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
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'porto_sub',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Plan your visit',
    'visibility' => 1,
  );

  $export['block-membership_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'membership_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'events/*',
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
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'porto_sub',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Members get priority',
    'visibility' => 1,
  );

  $export['views-db35b63cccfa6e17d8e93330e7e2a946'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'db35b63cccfa6e17d8e93330e7e2a946',
    'module' => 'views',
    'node_types' => array(
      0 => 'events_detail',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-events_entity-events_book_now'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'events_entity-events_book_now',
    'module' => 'views',
    'node_types' => array(
      0 => 'events_detail',
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
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'porto_sub',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
