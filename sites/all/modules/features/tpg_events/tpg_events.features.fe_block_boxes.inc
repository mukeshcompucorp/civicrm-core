<?php
/**
 * @file
 * tpg_events.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tpg_events_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Members get priority';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'membership_block';
  $fe_block_boxes->body = '<a href="#">> Join now</a>';

  $export['membership_block'] = $fe_block_boxes;

  return $export;
}
