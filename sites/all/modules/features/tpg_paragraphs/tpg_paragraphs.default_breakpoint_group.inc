<?php
/**
 * @file
 * tpg_paragraphs.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function tpg_paragraphs_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'responsive_header_image';
  $breakpoint_group->name = 'Responsive header image';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.header_image_mobile',
    1 => 'custom.user.header_image_tablet',
    2 => 'custom.user.header_image_wide',
    3 => 'custom.user.header_image_original',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['responsive_header_image'] = $breakpoint_group;

  return $export;
}
