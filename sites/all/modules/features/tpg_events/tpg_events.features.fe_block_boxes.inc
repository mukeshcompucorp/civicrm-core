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

<p>16 - 18 Ramillies Street</p>

<p>London</p>

<p>W1F 7LW</p>

<p>Nearest Tube: Oxford Circus</p>

<p>&nbsp;</p>

<p>Admission to Exhibitions</p>

<p>&nbsp;</p>

<p>Free admission before 12.00 every day</p>

<p>Exhibition Day Pass £4 (£2.50 concessions)</p>

<p>Advance Online Booking £2.50</p>

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
  $fe_block_boxes->body = '<div>Browse everything in our current programme including exhibitions, special events, talks, tours, workshops and courses.&nbsp; Filter by date, type or suitability for specific audiences and groups.</div>

<div>&nbsp;</div>

<div>For general visiting information and activities to enhance your experience go to our <a href="/visit-and-do">Visit</a>&nbsp;section.&nbsp;</div>
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
