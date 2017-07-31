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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_overview_section|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_overview_section';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_links' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item col-sm-4',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_overview_section|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events_detail|overview';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events_detail';
  $ds_fieldsetting->view_mode = 'overview';
  $ds_fieldsetting->settings = array(
    'read_more_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|events_detail|overview'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|external_links|overview';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'external_links';
  $ds_fieldsetting->view_mode = 'overview';
  $ds_fieldsetting->settings = array(
    'read_more' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_card_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|external_links|overview'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|paragraphs_page|overview';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'paragraphs_page';
  $ds_fieldsetting->view_mode = 'overview';
  $ds_fieldsetting->settings = array(
    'read_more_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|paragraphs_page|overview'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tpg_overview_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'read_more_node';
  $ds_field->label = 'Read more node';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a class="entity-read-more" href="[node:url]">read more</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['read_more_node'] = $ds_field;

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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_overview_section|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_overview_section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_subtitle',
        1 => 'field_subtitle_description',
        2 => 'field_links',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'ds_content',
      'field_subtitle_description' => 'ds_content',
      'field_links' => 'ds_content',
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
  $export['field_collection_item|field_overview_section|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events_detail|overview';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events_detail';
  $ds_layout->view_mode = 'overview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
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
  );
  $export['node|events_detail|overview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_links|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_card_image',
        1 => 'field_external_link_title',
        2 => 'field_link_description',
      ),
    ),
    'fields' => array(
      'field_card_image' => 'ds_content',
      'field_external_link_title' => 'ds_content',
      'field_link_description' => 'ds_content',
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
  $export['node|external_links|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_links|overview';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_links';
  $ds_layout->view_mode = 'overview';
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
  $export['node|external_links|overview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|overview_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'overview_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_overview_section',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_overview_section' => 'ds_content',
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
  $export['node|overview_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|paragraphs_page|overview';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'paragraphs_page';
  $ds_layout->view_mode = 'overview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_content',
        1 => 'read_more_node',
      ),
    ),
    'fields' => array(
      'field_paragraphs_content' => 'ds_content',
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
  $export['node|paragraphs_page|overview'] = $ds_layout;

  return $export;
}
