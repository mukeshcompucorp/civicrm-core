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
 * Implements hook_image_default_styles().
 */
function tpg_overview_image_default_styles() {
  $styles = array();

  // Exported image style: whats_on_400x324.
  $styles['whats_on_400x324'] = array(
    'label' => 'whats on 400x324',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 324,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tpg_overview_node_info() {
  $items = array(
    'external_links' => array(
      'name' => t('External Links'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Internal Reference Name/Title'),
      'help' => '',
    ),
    'internal_links' => array(
      'name' => t('Internal Links'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Internal Reference Name/Title'),
      'help' => '',
    ),
    'overview_page' => array(
      'name' => t('Overview Page'),
      'base' => 'node_content',
      'description' => t('Use <em> overview_page </em> for creating overview content pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
