<?php
/**
 * @file
 * tpg_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpg_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tpg_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function tpg_events_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['d M'] = 'd M';
  $custom_date_formats['d M Y'] = 'd M Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function tpg_events_date_format_types() {
  $format_types = array();
  // Exported date format type: day_month_short
  $format_types['day_month_short'] = 'Day Month short';
  // Exported date format type: day_month_year
  $format_types['day_month_year'] = 'Day Month Year';
  return $format_types;
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function tpg_events_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_content_past_programme
  $nodequeues['featured_content_past_programme'] = array(
    'name' => 'featured_content_past_programme',
    'title' => 'Featured Content - Past Programme',
    'subqueue_title' => '',
    'size' => 3,
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
      0 => 'events_detail',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function tpg_events_node_info() {
  $items = array(
    'events_detail' => array(
      'name' => t('Events Detail'),
      'base' => 'node_content',
      'description' => t('Use <em> events_detail </em> for creating Events page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
