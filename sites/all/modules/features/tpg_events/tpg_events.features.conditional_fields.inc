<?php
/**
 * @file
 * tpg_events.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function tpg_events_conditional_fields_default_fields() {
  $items = array();

  $items["node:events_detail:0"] = array(
    'entity' => 'node',
    'bundle' => 'events_detail',
    'dependent' => 'field_event_book_now_link',
    'dependee' => 'field_event_status',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        30037204 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        190826733 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        151263223 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        203538000 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        152836380 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        204855824 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        199295989 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        30037204 => array(
          1 => 1,
          3 => 0,
        ),
        190826733 => array(
          1 => 1,
          3 => 0,
        ),
        151263223 => array(
          1 => 1,
          3 => 0,
        ),
        203538000 => array(
          1 => 1,
          3 => 0,
        ),
        152836380 => array(
          1 => 1,
          3 => 0,
        ),
        204855824 => array(
          1 => 1,
          3 => 0,
        ),
        199295989 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'Book now',
      'value' => array(
        0 => array(
          'value' => 'Book now',
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:events_detail:1"] = array(
    'entity' => 'node',
    'bundle' => 'events_detail',
    'dependent' => 'field_event_free_link',
    'dependee' => 'field_event_status',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        30037204 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        190826733 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        151263223 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        203538000 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        152836380 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        204855824 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        199295989 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        30037204 => array(
          1 => 1,
          3 => 0,
        ),
        190826733 => array(
          1 => 1,
          3 => 0,
        ),
        151263223 => array(
          1 => 1,
          3 => 0,
        ),
        203538000 => array(
          1 => 1,
          3 => 0,
        ),
        152836380 => array(
          1 => 1,
          3 => 0,
        ),
        204855824 => array(
          1 => 1,
          3 => 0,
        ),
        199295989 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'Free',
      'value' => array(
        0 => array(
          'value' => 'Free',
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:events_detail:2"] = array(
    'entity' => 'node',
    'bundle' => 'events_detail',
    'dependent' => 'field_event_sold_out',
    'dependee' => 'field_event_status',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        30037204 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        190826733 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        151263223 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        203538000 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        152836380 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        204855824 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        199295989 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        30037204 => array(
          1 => 1,
          3 => 0,
        ),
        190826733 => array(
          1 => 1,
          3 => 0,
        ),
        151263223 => array(
          1 => 1,
          3 => 0,
        ),
        203538000 => array(
          1 => 1,
          3 => 0,
        ),
        152836380 => array(
          1 => 1,
          3 => 0,
        ),
        204855824 => array(
          1 => 1,
          3 => 0,
        ),
        199295989 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'Sold out',
      'value' => array(
        0 => array(
          'value' => 'Sold out',
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}