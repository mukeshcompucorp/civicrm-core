<?php
/**
 * @file
 * tpg_artist_and_prints.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tpg_artist_and_prints_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Print Sales Explore by Artist Intro';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'print_sales_explore_artist_intro';
  $fe_block_boxes->body = '<p>Mauris blandit aliquet elit, eget tincidunt nibh pulvinar a. Quisque velit nisi, pretium ut lacinia in, elementum id enim. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec sollicitudin molestie malesuada. Donec sollicitudin molestie malesuada. Curabitur arcu erat, accumsan id imperdiet et, porttitor at sem. Nulla quis lorem ut libero malesuada feugiat. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur arcu erat, accumsan id imperdiet et, porttitor at sem.</p>
';

  $export['print_sales_explore_artist_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Print Sales Explore by Artwork Intro';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'print_sales_explore_artwork_intr';
  $fe_block_boxes->body = '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque velit nisi, pretium ut lacinia in, elementum id enim. Curabitur aliquet quam id dui posuere blandit. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Nulla porttitor accumsan tincidunt. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula. Donec sollicitudin molestie malesuada. Curabitur aliquet quam id dui posuere blandit. Nulla porttitor accumsan tincidunt.</p>
';

  $export['print_sales_explore_artwork_intr'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Print Sales Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'print_sales_links';
  $fe_block_boxes->body = '<div><a class="now-upcoming" href="/print-sales/explore-artist">Explore by Artist</a><a class="past-programme" href="/print-sales/explore-artwork">Explore by Artwork</a></div>
';

  $export['print_sales_links'] = $fe_block_boxes;

  return $export;
}
