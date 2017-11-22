<?php
/**
 * @file
 * tpg_artist_and_prints.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpg_artist_and_prints_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tpg_artist_and_prints_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpg_artist_and_prints_node_info() {
  $items = array(
    'artist' => array(
      'name' => t('Artist'),
      'base' => 'node_content',
      'description' => t('Use <em> artist </em> for creating content for Artists.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'prints' => array(
      'name' => t('Prints'),
      'base' => 'node_content',
      'description' => t('Use <em> prints </em> for creating content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
