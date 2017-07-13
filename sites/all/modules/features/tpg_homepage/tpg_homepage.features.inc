<?php
/**
 * @file
 * tpg_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpg_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tpg_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tpg_homepage_image_default_styles() {
  $styles = array();

  // Exported image style: header_image.
  $styles['header_image'] = array(
    'label' => 'Header Image 1280x884',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1280,
          'height' => 884,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'header_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tpg_homepage_node_info() {
  $items = array(
    'header_image' => array(
      'name' => t('Homepage Header Image'),
      'base' => 'node_content',
      'description' => t('Use <em> header_image </em> for creating Header Image for homepage.'),
      'has_title' => '1',
      'title_label' => t('Internal Reference Name/Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_search_autocomplete_config_features_default_settings().
 */
function tpg_homepage_search_autocomplete_config_features_default_settings() {
  return array(
    0 => array(
      'fid' => 1,
      'title' => 'Search page - Node Tab  (search/node/%)',
      'selector' => '#search-form[action="/search/node"] #edit-keys',
      'weight' => 0,
      'enabled' => 1,
      'parent_fid' => 0,
      'min_char' => 3,
      'max_sug' => 10,
      'no_results' => '{"label":"No results found for [search-phrase]. Click to perform full search.","value":"[search-phrase]","link":"","group":{"group_id":"no_results"}}',
      'all_results' => '{"label":"View all results for [search-phrase].","value":"[search-phrase]","link":"","group":{"group_id":"all_results"}}',
      'auto_submit' => 1,
      'auto_redirect' => 1,
      'translite' => 1,
      'data_source' => 'view',
      'data_callback' => 'search_autocomplete/autocomplete/1/',
      'data_static' => '',
      'data_view' => 'words_autocomplete',
      'theme' => 'basic-green.css',
    ),
    1 => array(
      'fid' => 2,
      'title' => 'Search page - User Tab  (search/user/%)',
      'selector' => '#search-form[action="/search/user"] #edit-keys',
      'weight' => 1,
      'enabled' => 1,
      'parent_fid' => 0,
      'min_char' => 3,
      'max_sug' => 10,
      'no_results' => '{"label":"No results found for [search-phrase]. Click to perform full search.","value":"[search-phrase]","link":"","group":{"group_id":"no_results"}}',
      'all_results' => '{"label":"View all results for [search-phrase].","value":"[search-phrase]","link":"","group":{"group_id":"all_results"}}',
      'auto_submit' => 1,
      'auto_redirect' => 1,
      'translite' => 1,
      'data_source' => 'view',
      'data_callback' => 'search_autocomplete/autocomplete/2/',
      'data_static' => '',
      'data_view' => 'users_autocomplete',
      'theme' => 'user-blue.css',
    ),
    2 => array(
      'fid' => 3,
      'title' => 'Search Block',
      'selector' => '#edit-search-block-form--2',
      'weight' => 0,
      'enabled' => 1,
      'parent_fid' => 0,
      'min_char' => 3,
      'max_sug' => 10,
      'no_results' => '{"label":"No results found for [search-phrase]. Click to perform full search.","value":"[search-phrase]","link":"","group":{"group_id":"no_results"}}',
      'all_results' => '{"label":"View all results for [search-phrase].","value":"[search-phrase]","link":"","group":{"group_id":"all_results"}}',
      'auto_submit' => 1,
      'auto_redirect' => 1,
      'translite' => 1,
      'data_source' => 'view',
      'data_callback' => 'search_autocomplete/autocomplete/3/',
      'data_static' => '',
      'data_view' => 'nodes_autocomplete',
      'theme' => 'basic-green.css',
    ),
  );
}
