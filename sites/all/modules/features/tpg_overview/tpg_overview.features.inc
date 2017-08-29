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

  // Exported image style: explore_all_content_400x240.
  $styles['explore_all_content_400x240'] = array(
    'label' => 'Explore all content 400x324',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 324,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: overview_page_image.
  $styles['overview_page_image'] = array(
    'label' => 'Overview Page Image',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 400,
          'height' => 240,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'overview_page_image',
        ),
        'weight' => 0,
      ),
    ),
  );

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
