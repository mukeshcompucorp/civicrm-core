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

  return $export;
}
