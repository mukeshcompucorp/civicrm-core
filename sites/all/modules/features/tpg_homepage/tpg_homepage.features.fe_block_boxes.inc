<?php
/**
 * @file
 * tpg_homepage.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tpg_homepage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Arts Council England Logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'arts_council_england';
  $fe_block_boxes->body = '<p><img alt="" src="/sites/default/files/logo-lottery.png" style="height:57px; width:180px" /></p>
';

  $export['arts_council_england'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Stay up-to-date';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'stay_up_to_date';
  $fe_block_boxes->body = '<p><a href="/join-our-mailing-list">Sign up to our Newsletter</a></p>
';

  $export['stay_up_to_date'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Create an account intro';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'user_login_create_account_intro';
  $fe_block_boxes->body = '<p>Introtext about the benefits of The Photographer\'s Gallery.</p>
';

  $export['user_login_create_account_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'User Login Intro';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'user_login_intro';
  $fe_block_boxes->body = '<p>Join The Photographer\'s Gallery today and be part of the community passionate about photography. The Photographer\'s Gallery is the UK\'s leading centre for the presentation and exploration of photography in all its forms and a dedicated home for an international &nbsp;photographic community.</p>
';

  $export['user_login_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Working Hours';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'working_hours';
  $fe_block_boxes->body = '<p><strong>Mon - Sat</strong> 10.00 - 18.00<br />
<strong>Thu</strong> 10.00 - 20.00 during exhibitions<br />
<strong>Sun</strong> 11.00 - 18.00<br />
<a class="arrow" href="/visit-and-do/plan-your-visit">Plan your visit</a></p>

<p><a href="mailto:info@tpg.org.uk">info@tpg.org.uk</a>&nbsp;<a href="tel:+442070879300">+44 (0) 20&nbsp;7087 9300</a></p>
';

  $export['working_hours'] = $fe_block_boxes;

  return $export;
}
