<?php
/**
 * @file
 * tpg_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tpg_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events_detail|overview_original_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events_detail';
  $ds_fieldsetting->view_mode = 'overview_original_image';
  $ds_fieldsetting->settings = array(
    'read_more_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_paragraphs_entity' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|events_detail|overview_original_image'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tpg_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events_detail|overview_original_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events_detail';
  $ds_layout->view_mode = 'overview_original_image';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_entity',
        1 => 'read_more_node',
      ),
    ),
    'fields' => array(
      'field_paragraphs_entity' => 'ds_content',
      'read_more_node' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|events_detail|overview_original_image'] = $ds_layout;

  return $export;
}