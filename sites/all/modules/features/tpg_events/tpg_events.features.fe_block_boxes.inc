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
  $fe_block_boxes->info = 'Visit Us';
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
  $fe_block_boxes->body = '<p><a href="#">› Join now</a></p>
';

  $export['membership_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Whats On Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'whats_on_links';
  $fe_block_boxes->body = '<div><a class="now-upcoming" href="/whats-on/now-upcoming">Now &amp; upcoming</a><a class="past-programme" href="/whats-on/past-programme">Past programme</a></div>
';

  $export['whats_on_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'What\'s on Now & upcoming';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'whats_on_now_upcoming';
  $fe_block_boxes->body = '<p>We have a wide range of talks and events, including artist talks, exhibition tours, workshops and courses, and career advice for aspiring photographers</p>
';

  $export['whats_on_now_upcoming'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'What\'s on Past Programme';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'whats_on_past_programme';
  $fe_block_boxes->body = '<p>Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula.</p>
';

  $export['whats_on_past_programme'] = $fe_block_boxes;

  return $export;
}