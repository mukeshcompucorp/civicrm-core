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
 * Implements hook_image_default_styles().
 */
function tpg_artist_and_prints_image_default_styles() {
  $styles = array();

  // Exported image style: artists_overview_200x280.
  $styles['artists_overview_200x280'] = array(
    'label' => 'Artists overview 200x280',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: artists_overview_last_280x190.
  $styles['artists_overview_last_280x190'] = array(
    'label' => 'Artists overview last 280x190',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 190,
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
