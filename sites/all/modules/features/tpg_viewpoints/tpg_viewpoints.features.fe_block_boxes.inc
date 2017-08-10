<?php
/**
 * @file
 * tpg_viewpoints.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tpg_viewpoints_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Browse Viewpoints Explore All Content Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'viewpoints_explore_content_links';
  $fe_block_boxes->body = '<div><a class="browse-viewpoints" href="/viewpoints">Browse Viewpoints</a><a class="explore-all-content" href="/explore-all-content">Explore all content</a></div>
';

  $export['viewpoints_explore_content_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Viewpoints Intro';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'viewpoints_intro';
  $fe_block_boxes->body = '<p>A short introtext about TPGs editorial approach. A writer selects one image from our current exhibitions and responds to it. For our Spring 2016 programme, we have invited students.</p>
';

  $export['viewpoints_intro'] = $fe_block_boxes;

  return $export;
}
