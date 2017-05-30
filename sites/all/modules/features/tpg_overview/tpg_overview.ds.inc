<?php
/**
 * @file
 * tpg_overview.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tpg_overview_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_external_links|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_external_links';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'read_more' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['field_collection_item|field_external_links|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tpg_overview_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_external_links|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_external_links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_card_image',
        1 => 'field_external_link_title',
        2 => 'field_link_description',
        3 => 'read_more',
      ),
    ),
    'fields' => array(
      'field_card_image' => 'ds_content',
      'field_external_link_title' => 'ds_content',
      'field_link_description' => 'ds_content',
      'read_more' => 'ds_content',
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
  $export['field_collection_item|field_external_links|default'] = $ds_layout;

  return $export;
}
