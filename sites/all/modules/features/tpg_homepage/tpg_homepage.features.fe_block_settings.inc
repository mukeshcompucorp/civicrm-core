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

  $export['block-arts_council_england'] = array(
    'cache' => -1,
    'css_class' => 'block-arts-council-england',
    'custom' => 0,
    'machine_name' => 'arts_council_england',
    'module' => 'block',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-stay_up_to_date'] = array(
    'cache' => -1,
    'css_class' => 'col-sm-3 stay-up-to-date',
    'custom' => 0,
    'machine_name' => 'stay_up_to_date',
    'module' => 'block',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-user_login_create_account_intro'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'user_login_create_account_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'user/login',
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
    'title' => 'Create an account',
    'visibility' => 1,
  );

  $export['block-user_login_intro'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'user_login_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'user/login
user',
    'roles' => array(
      'anonymous user' => 1,
    ),
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
        'weight' => -38,
      ),
    ),
    'title' => 'Login',
    'visibility' => 1,
  );

  $export['block-working_hours'] = array(
    'cache' => -1,
    'css_class' => 'block-working-hours col-sm-4',
    'custom' => 0,
    'machine_name' => 'working_hours',
    'module' => 'block',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -39,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer'] = array(
    'cache' => -1,
    'css_class' => 'block-menu-footer col-sm-3',
    'custom' => 0,
    'delta' => 'menu-footer',
    'module' => 'menu',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -38,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-social-connectors'] = array(
    'cache' => -1,
    'css_class' => 'block-menu-social-connectors col-sm-3',
    'custom' => 0,
    'delta' => 'menu-social-connectors',
    'module' => 'menu',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -35,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => 'col-md-3 block-search-form',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'civicrm_wide' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'civicrm_wide',
        'weight' => -1,
      ),
      'porto' => array(
        'region' => 'header_top',
        'status' => 1,
        'theme' => 'porto',
        'weight' => -1,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'tpg_theme' => array(
        'region' => 'header_pane',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -1,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => 'block-menu-main',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
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
        'region' => 'header_pane',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => 'block-menu-user',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
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
        'region' => 'header_pane',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['tpg_global-create_account'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'create_account',
    'module' => 'tpg_global',
    'node_types' => array(),
    'pages' => 'user
user/login',
    'roles' => array(
      'anonymous user' => 1,
    ),
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
        'weight' => -24,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

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
