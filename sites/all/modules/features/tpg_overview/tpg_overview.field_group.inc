<?php
/**
 * @file
 * tpg_overview.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tpg_overview_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_link|node|external_links|form';
  $field_group->group_name = 'group_external_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'external_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'External Links',
    'weight' => '33',
    'children' => array(
      0 => 'field_external_link_title',
      1 => 'field_card_image',
      2 => 'field_link_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'External Links',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-external-link field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_external_link|node|external_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_items|field_collection_item|field_overview_section|form';
  $field_group->group_name = 'group_items';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_overview_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Items',
    'weight' => '0',
    'children' => array(
      0 => 'field_subtitle',
      1 => 'field_subtitle_description',
      2 => 'field_linked_entity',
      3 => 'field_external_links',
      4 => 'field_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Items',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-items field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_items|field_collection_item|field_overview_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|field_collection_item|field_external_links|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_external_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '0',
    'children' => array(
      0 => 'field_external_link_title',
      1 => 'field_card_image',
      2 => 'field_link_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-links field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_links|field_collection_item|field_external_links|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('External Links');
  t('Items');
  t('Links');

  return $field_groups;
}
