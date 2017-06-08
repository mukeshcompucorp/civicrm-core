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
  $fe_block_boxes->info = 'Plan your visit';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'event_plan_your_visit';
  $fe_block_boxes->body = '<p>Mon - Sat: 10.00 - 18.00</p>

<p>Thu: 10.00 - 20.00 during exhibitions</p>

<p>Sun: 11.00 - 18.00</p>

<p>&nbsp;</p>
';

  $export['event_plan_your_visit'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Members get priority';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'membership_block';
  $fe_block_boxes->body = '<p><a href="#">&gt; Join now</a></p>
';

  $export['membership_block'] = $fe_block_boxes;

  return $export;
}
