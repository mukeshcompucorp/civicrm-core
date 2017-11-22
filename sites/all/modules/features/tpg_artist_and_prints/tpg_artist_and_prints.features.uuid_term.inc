<?php
/**
 * @file
 * tpg_artist_and_prints.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tpg_artist_and_prints_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Classic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '08f7a7b0-8ab3-4112-8afb-f7c2fc8a58f1',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Abstract',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0addf25c-583c-41ec-adea-e9d435675883',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Unique',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '291caa17-44a4-47e8-a2ee-08df0587fbff',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Contemporary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '476109e8-3e69-404b-be8f-0792ea9a676a',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Landscape',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4dc8eaef-3e01-4576-8fd7-6e946396829d',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Black & White',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6f1aa40c-1413-4d9e-a9ee-6ed5060c509f',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Colour',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '94f82ada-5014-40e4-a494-14c2d0cfc2ae',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Portraiture',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b45a3d1d-3b68-4880-bc80-bb13dd816ca2',
    'vocabulary_machine_name' => 'print_type',
  );
  $terms[] = array(
    'name' => 'Documentary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cb247752-7df5-47e2-91f7-61344771ea88',
    'vocabulary_machine_name' => 'print_type',
  );
  return $terms;
}
