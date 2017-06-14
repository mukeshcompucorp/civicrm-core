<?php
/**
 * @file
 * tpg_overview.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpg_overview_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tpg_overview_node_info() {
  $items = array(
    'overview_page' => array(
      'name' => t('Overview Page'),
      'base' => 'node_content',
      'description' => t('Use <em> overview_page </em> for creating overview content pages.'),
      'has_title' => '1',
      'title_label' => t('Internal Reference Name/Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
