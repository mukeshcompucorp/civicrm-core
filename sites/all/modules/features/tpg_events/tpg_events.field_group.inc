<?php
/**
 * @file
 * tpg_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tpg_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_whats_on|node|events_detail|form';
  $field_group->group_name = 'group_whats_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events_detail';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Whats on',
    'weight' => '10',
    'children' => array(
      0 => 'field_show_in_future_season',
      1 => 'field_show_in_current_season',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-whats-on field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_whats_on|node|events_detail|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Whats on');

  return $field_groups;
}
