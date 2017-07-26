<?php
/**
 * @file
 * tpg_viewpoints.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tpg_viewpoints_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|viewpoint|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'viewpoint';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|viewpoint|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tpg_viewpoints_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|viewpoint|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'viewpoint';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_header_image',
        1 => 'field_homepage_card_tag',
        2 => 'title',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_header_image' => 'ds_content',
      'field_homepage_card_tag' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|viewpoint|default'] = $ds_layout;

  return $export;
}
