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
    'pages' => 'whats-on/exhibitions/*',
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
    'title' => 'Information',
    'visibility' => 1,
  );

  $export['block-membership_block'] = array(
    'cache' => -1,
    'css_class' => 'membership-block col-md-12',
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

  $export['block-whats_on_links'] = array(
    'cache' => -1,
    'css_class' => 'whats-on-tabs col-xs-4',
    'custom' => 0,
    'machine_name' => 'whats_on_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'whats-on/now-upcoming
whats-on/past-programme',
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
        'weight' => -41,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-whats_on_now_upcoming'] = array(
    'cache' => -1,
    'css_class' => 'whats-on-description clearfix col-md-8',
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
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-whats_on_past_programme'] = array(
    'cache' => -1,
    'css_class' => 'whats-on-description clearfix col-md-8',
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
        'region' => '',
        'status' => 0,
        'theme' => 'tpg_theme',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-03d0390f014502c77cf86e0308dcbb1d'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-8 clearfix whats-on-filter',
    'custom' => 0,
    'delta' => '03d0390f014502c77cf86e0308dcbb1d',
    'module' => 'views',
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
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-2f69d3f1d9c2e43b67a4dae5874e62e4'] = array(
    'cache' => -1,
    'css_class' => 'whats-on-block related-activities-wrapper',
    'custom' => 0,
    'delta' => '2f69d3f1d9c2e43b67a4dae5874e62e4',
    'module' => 'views',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-aea378dfeb25249b54d7bcbb9b388c97'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-8 clearfix whats-on-filter',
    'custom' => 0,
    'delta' => 'aea378dfeb25249b54d7bcbb9b388c97',
    'module' => 'views',
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
        'weight' => -40,
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
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-events_entity-events_book_now'] = array(
    'cache' => -1,
    'css_class' => 'book-tickets col-md-12',
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

  $export['views-whats_on-next_season_block'] = array(
    'cache' => -1,
    'css_class' => 'whats-on-block related-activities-wrapper',
    'custom' => 0,
    'delta' => 'whats_on-next_season_block',
    'module' => 'views',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
