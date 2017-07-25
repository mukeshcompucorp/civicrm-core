<?php
/**
 * @file
 * tpg_viewpoints.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tpg_viewpoints_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_viewpoint_overview_image'.
  $field_bases['field_viewpoint_overview_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_viewpoint_overview_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'private',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
