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
  $fe_block_boxes->info = 'Working Hours';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'working_hours';
  $fe_block_boxes->body = '<p><strong>Mon - Sat</strong> 10.00 - 18.00<br />
<strong>Thu</strong> 10.00 - 20.00 during exhibitions<br />
<strong>Sun</strong> 11.00 - 18.00<br />
<a class="arrow" href="http://www.compucorp.co.uk">Plan your visit</a></p>

<p><a href="mailto:info@tpl.org.uk">info@tpl.org.uk</a>&nbsp;<a href="+44270879300">+44 (020) 7087 9300</a></p>
';

  $export['working_hours'] = $fe_block_boxes;

  return $export;
}
