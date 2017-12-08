<?php
/**
 * @file
 * tpg_artist_and_prints.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tpg_artist_and_prints_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-print_sales_explore_artist_intro'] = array(
    'cache' => -1,
    'css_class' => 'col-md-8 whats-on-description',
    'custom' => 0,
    'machine_name' => 'print_sales_explore_artist_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'print-sales/explore-artist',
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
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-print_sales_explore_artwork_intr'] = array(
    'cache' => -1,
    'css_class' => 'col-md-8 whats-on-description',
    'custom' => 0,
    'machine_name' => 'print_sales_explore_artwork_intr',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'print-sales/explore-artwork',
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
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-print_sales_links'] = array(
    'cache' => -1,
    'css_class' => 'whats-on-tabs col-xs-4',
    'custom' => 0,
    'machine_name' => 'print_sales_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'print-sales/explore-artwork
print-sales/explore-artist',
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
        'weight' => -45,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-85eb054ce4d30cf6225cc058c65fbb6e'] = array(
    'cache' => -1,
    'css_class' => 'print-sales view-filters',
    'custom' => 0,
    'delta' => '85eb054ce4d30cf6225cc058c65fbb6e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'print-sales/explore-artwork',
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
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-artist-collection_0'] = array(
    'cache' => -1,
    'css_class' => 'container works-collection-block',
    'custom' => 0,
    'delta' => 'artist-collection_0',
    'module' => 'views',
    'node_types' => array(
      0 => 'artist',
      1 => 'prints',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-artist-collection_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'artist-collection_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'artist',
      1 => 'prints',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-artist-collection_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'artist-collection_2',
    'module' => 'views',
    'node_types' => array(
      0 => 'artist',
      1 => 'prints',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-artist-collection_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'artist-collection_3',
    'module' => 'views',
    'node_types' => array(
      0 => 'artist',
      1 => 'prints',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -41,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-artist-collection_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'artist-collection_4',
    'module' => 'views',
    'node_types' => array(
      0 => 'artist',
      1 => 'prints',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-artist-collections_artist'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'artist-collections_artist',
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
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-artist-related_artist'] = array(
    'cache' => -1,
    'css_class' => 'related-activities-wrapper',
    'custom' => 0,
    'delta' => 'artist-related_artist',
    'module' => 'views',
    'node_types' => array(
      0 => 'artist',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-prints-prints_related_artist'] = array(
    'cache' => -1,
    'css_class' => 'related-activities-wrapper',
    'custom' => 0,
    'delta' => 'prints-prints_related_artist',
    'module' => 'views',
    'node_types' => array(
      0 => 'prints',
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
        'region' => 'full_width_bottom',
        'status' => 1,
        'theme' => 'tpg_theme',
        'weight' => -38,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
