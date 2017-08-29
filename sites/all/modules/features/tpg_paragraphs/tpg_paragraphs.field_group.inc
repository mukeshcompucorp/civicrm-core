<?php
/**
 * @file
 * tpg_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tpg_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_pub_options|node|paragraphs_page|form';
  $field_group->group_name = 'group_homepage_pub_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraphs_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Homepage Publishing Options',
    'weight' => '8',
    'children' => array(
      0 => 'field_homepage_publish_dates',
      1 => 'field_homepage_weight',
      2 => 'field_homepage_image',
      3 => 'field_homepage_card_tag',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-pub-options field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_homepage_pub_options|node|paragraphs_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage Publishing Options');

  return $field_groups;
}
