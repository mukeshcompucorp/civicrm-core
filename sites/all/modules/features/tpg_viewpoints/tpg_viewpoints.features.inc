<?php
/**
 * @file
 * tpg_viewpoints.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpg_viewpoints_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tpg_viewpoints_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function tpg_viewpoints_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: viewpoints
  $nodequeues['viewpoints'] = array(
    'name' => 'viewpoints',
    'title' => 'Viewpoints',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'viewpoint',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function tpg_viewpoints_image_default_styles() {
  $styles = array();

  // Exported image style: viewpoint_header_image.
  $styles['viewpoint_header_image'] = array(
    'label' => 'Viewpoint Header Image',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1920,
          'height' => 804,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'viewpoint_header_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: viewpoint_overview_image.
  $styles['viewpoint_overview_image'] = array(
    'label' => 'Viewpoint Overview Image',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1240,
          'height' => 606,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'viewpoint_overview_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: viewpoint_overview_image_-_half_width.
  $styles['viewpoint_overview_image_-_half_width'] = array(
    'label' => 'Viewpoint Overview Image - Half Width',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 610,
          'height' => 440,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'viewpoint_overview_image_-_half_width',
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
function tpg_viewpoints_node_info() {
  $items = array(
    'viewpoint' => array(
      'name' => t('Viewpoint'),
      'base' => 'node_content',
      'description' => t('Use <em> viewpoint </em> for creating viewpoint pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
