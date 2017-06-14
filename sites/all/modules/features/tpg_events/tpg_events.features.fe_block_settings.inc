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
    'css_class' => 'plan-your-visit',
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
      'tpg_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -23,
      ),
    ),
    'title' => 'Plan your visit',
    'visibility' => 1,
  );

  $export['block-membership_block'] = array(
    'cache' => -1,
    'css_class' => 'membership-block',
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
      'tpg_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -21,
      ),
    ),
    'title' => 'Members get priority',
    'visibility' => 1,
  );

  $export['block-whats_on_now_upcoming'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'whats_on_now_upcoming',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'whats-on/now-upcoming',
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
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-whats_on_past_programme'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'whats_on_past_programme',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'whats-on/past-programme',
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
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-db35b63cccfa6e17d8e93330e7e2a946'] = array(
    'cache' => -1,
    'css_class' => 'related-activities-wrapper',
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
      'tpg_theme' => array(
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-events_entity-events_book_now'] = array(
    'cache' => -1,
    'css_class' => 'book-tickets',
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
      'tpg_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
