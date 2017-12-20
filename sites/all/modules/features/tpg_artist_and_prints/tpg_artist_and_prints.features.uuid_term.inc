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
    'name' => 'Portraiture',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0bdbf624-e670-44f9-b693-5e8836dae987',
    'vocabulary_machine_name' => 'print_genre',
  );
  $terms[] = array(
    'name' => 'Classic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '119793ca-d489-48b7-885d-247e8f1d2111',
    'vocabulary_machine_name' => 'print_period',
  );
  $terms[] = array(
    'name' => 'Unique',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '19a197f2-3e3e-4279-a7da-576aeea6cf90',
    'vocabulary_machine_name' => 'print_genre',
  );
  $terms[] = array(
    'name' => 'Collection2',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '24ae5c34-be3e-437e-8c07-d3dddfb70100',
    'vocabulary_machine_name' => 'collections',
  );
  $terms[] = array(
    'name' => 'Documentary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5f0e8d74-859f-41ac-9caa-a0d394d804e6',
    'vocabulary_machine_name' => 'print_genre',
  );
  $terms[] = array(
    'name' => 'Contemporary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6a246de5-61ed-4c9c-a788-450167712fcc',
    'vocabulary_machine_name' => 'print_period',
  );
  $terms[] = array(
    'name' => 'Collection3',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '757e0fe7-b0b7-4ab1-b11b-9fd2818e925a',
    'vocabulary_machine_name' => 'collections',
  );
  $terms[] = array(
    'name' => 'Colour',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '77575195-0bcf-40ae-9c9b-12c5f4bed8e0',
    'vocabulary_machine_name' => 'print_b_w_or_colour',
  );
  $terms[] = array(
    'name' => 'Landscape',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '79072d24-a7bf-427a-ae63-69008a499487',
    'vocabulary_machine_name' => 'print_genre',
  );
  $terms[] = array(
    'name' => 'Black & White',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9ea63b3b-1927-4e9b-9a16-00d0829835c8',
    'vocabulary_machine_name' => 'print_b_w_or_colour',
  );
  $terms[] = array(
    'name' => 'Collection1',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9eb167c6-10ed-4693-9754-8e7db92ce09c',
    'vocabulary_machine_name' => 'collections',
  );
  $terms[] = array(
    'name' => 'Abstract',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b3cc978c-fd30-4159-80d3-fd1a0625f39b',
    'vocabulary_machine_name' => 'print_genre',
  );
  return $terms;
}
