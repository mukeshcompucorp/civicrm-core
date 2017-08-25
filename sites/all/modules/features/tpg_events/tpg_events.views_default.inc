<?php
/**
 * @file
 * tpg_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpg_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_entity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Entity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );

  /* Display: Event Book Now */
  $handler = $view->new_display('block', 'Event Book Now', 'events_book_now');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Book Now Link */
  $handler->display->display_options['fields']['field_event_book_now_link']['id'] = 'field_event_book_now_link';
  $handler->display->display_options['fields']['field_event_book_now_link']['table'] = 'field_data_field_event_book_now_link';
  $handler->display->display_options['fields']['field_event_book_now_link']['field'] = 'field_event_book_now_link';
  $handler->display->display_options['fields']['field_event_book_now_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_book_now_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_book_now_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );
  /* Filter criterion: Content: Event Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'Book now' => 'Book now',
  );

  /* Display: Event Sold out */
  $handler = $view->new_display('attachment', 'Event Sold out', 'events_sold_out_attachment');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Sold out message */
  $handler->display->display_options['fields']['field_event_sold_out']['id'] = 'field_event_sold_out';
  $handler->display->display_options['fields']['field_event_sold_out']['table'] = 'field_data_field_event_sold_out';
  $handler->display->display_options['fields']['field_event_sold_out']['field'] = 'field_event_sold_out';
  $handler->display->display_options['fields']['field_event_sold_out']['label'] = '';
  $handler->display->display_options['fields']['field_event_sold_out']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );
  /* Filter criterion: Content: Event Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'Sold out' => 'Sold out',
  );
  $handler->display->display_options['displays'] = array(
    'events_book_now' => 'events_book_now',
    'default' => 0,
  );

  /* Display: Event Free */
  $handler = $view->new_display('attachment', 'Event Free', 'events_free_attachment');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Free Link */
  $handler->display->display_options['fields']['field_event_free_link']['id'] = 'field_event_free_link';
  $handler->display->display_options['fields']['field_event_free_link']['table'] = 'field_data_field_event_free_link';
  $handler->display->display_options['fields']['field_event_free_link']['field'] = 'field_event_free_link';
  $handler->display->display_options['fields']['field_event_free_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_free_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_free_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );
  /* Filter criterion: Content: Event Status (field_event_status) */
  $handler->display->display_options['filters']['field_event_status_value']['id'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['table'] = 'field_data_field_event_status';
  $handler->display->display_options['filters']['field_event_status_value']['field'] = 'field_event_status_value';
  $handler->display->display_options['filters']['field_event_status_value']['value'] = array(
    'Free' => 'Free',
  );
  $handler->display->display_options['displays'] = array(
    'events_book_now' => 'events_book_now',
    'default' => 0,
  );
  $export['events_entity'] = $view;

  $view = new view();
  $view->name = 'whats_on';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Whats on';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );

  /* Display: Now & Upcoming */
  $handler = $view->new_display('page', 'Now & Upcoming', 'now_upcoming_view_page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_paragraphs_event_type' => 'field_paragraphs_event_type',
    'field_event_dates' => 'field_event_dates',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_entity) */
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['id'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['table'] = 'field_data_field_paragraphs_entity';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['field'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Overview Image */
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['id'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['table'] = 'field_data_field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['field'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['settings'] = array(
    'image_style' => 'overview_page_image_400x271',
    'image_link' => '',
  );
  /* Field: Paragraphs item: Event Type */
  $handler->display->display_options['fields']['field_paragraphs_event_type']['id'] = 'field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['table'] = 'field_data_field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['field'] = 'field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_event_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['delta_offset'] = '0';
  /* Field: Paragraphs item: Event Dates */
  $handler->display->display_options['fields']['field_event_dates']['id'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['field'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_event_dates']['label'] = '';
  $handler->display->display_options['fields']['field_event_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_dates']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Paragraphs item: Title */
  $handler->display->display_options['fields']['field_paragraph_title']['id'] = 'field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title']['table'] = 'field_data_field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title']['field'] = 'field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraph_title']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraph_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Paragraphs item: Event Type (field_paragraphs_event_type) */
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['id'] = 'field_paragraphs_event_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['table'] = 'field_data_field_paragraphs_event_type';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['field'] = 'field_paragraphs_event_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['operator_id'] = 'field_paragraphs_event_type_tid_op';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['label'] = 'WHAT';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['operator'] = 'field_paragraphs_event_type_tid_op';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['identifier'] = 'field_paragraphs_event_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Event Artists (field_event_artists) */
  $handler->display->display_options['filters']['field_event_artists_tid']['id'] = 'field_event_artists_tid';
  $handler->display->display_options['filters']['field_event_artists_tid']['table'] = 'field_data_field_event_artists';
  $handler->display->display_options['filters']['field_event_artists_tid']['field'] = 'field_event_artists_tid';
  $handler->display->display_options['filters']['field_event_artists_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_artists_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['operator_id'] = 'field_event_artists_tid_op';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['label'] = 'WHO';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['operator'] = 'field_event_artists_tid_op';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['identifier'] = 'field_event_artists_tid';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_event_artists_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_artists_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_artists_tid']['vocabulary'] = 'artists';
  $handler->display->display_options['filters']['field_event_artists_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Event For (field_event_for) */
  $handler->display->display_options['filters']['field_event_for_tid']['id'] = 'field_event_for_tid';
  $handler->display->display_options['filters']['field_event_for_tid']['table'] = 'field_data_field_event_for';
  $handler->display->display_options['filters']['field_event_for_tid']['field'] = 'field_event_for_tid';
  $handler->display->display_options['filters']['field_event_for_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_for_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_for_tid']['expose']['operator_id'] = 'field_event_for_tid_op';
  $handler->display->display_options['filters']['field_event_for_tid']['expose']['label'] = 'FOR';
  $handler->display->display_options['filters']['field_event_for_tid']['expose']['operator'] = 'field_event_for_tid_op';
  $handler->display->display_options['filters']['field_event_for_tid']['expose']['identifier'] = 'field_event_for_tid';
  $handler->display->display_options['filters']['field_event_for_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_event_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_for_tid']['vocabulary'] = 'event_for';
  /* Filter criterion: Content: Show in current season -  start date (field_show_in_current_season) */
  $handler->display->display_options['filters']['field_show_in_current_season_value']['id'] = 'field_show_in_current_season_value';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['table'] = 'field_data_field_show_in_current_season';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['field'] = 'field_show_in_current_season_value';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['group'] = 1;
  $handler->display->display_options['filters']['field_show_in_current_season_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['default_date'] = 'today';
  /* Filter criterion: Content: Show in current season - end date (field_show_in_current_season:value2) */
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['id'] = 'field_show_in_current_season_value2';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['table'] = 'field_data_field_show_in_current_season';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['field'] = 'field_show_in_current_season_value2';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['default_date'] = 'today';
  /* Filter criterion: Paragraphs item: Event Dates -  start date (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_dates_value']['group'] = 2;
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator_id'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['identifier'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_dates_value']['default_date'] = 'now';
  /* Filter criterion: Paragraphs item: Event Dates - end date (field_event_dates:value2) */
  $handler->display->display_options['filters']['field_event_dates_value2']['id'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value2']['field'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['field_event_dates_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_dates_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator_id'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['identifier'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_dates_value2']['default_to_date'] = 'now';
  $handler->display->display_options['path'] = 'whats-on/now-upcoming';

  /* Display: Past Programme */
  $handler = $view->new_display('page', 'Past Programme', 'past_programme_view_page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_paragraphs_event_type' => 'field_paragraphs_event_type',
    'field_event_dates' => 'field_event_dates',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_entity) */
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['id'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['table'] = 'field_data_field_paragraphs_entity';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['field'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Overview Image */
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['id'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['table'] = 'field_data_field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['field'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['settings'] = array(
    'image_style' => 'overview_page_image_400x271',
    'image_link' => '',
  );
  /* Field: Paragraphs item: Event Type */
  $handler->display->display_options['fields']['field_paragraphs_event_type']['id'] = 'field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['table'] = 'field_data_field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['field'] = 'field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_event_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['delta_offset'] = '0';
  /* Field: Paragraphs item: Event Dates */
  $handler->display->display_options['fields']['field_event_dates']['id'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['field'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_event_dates']['label'] = '';
  $handler->display->display_options['fields']['field_event_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_dates']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Paragraphs item: Title */
  $handler->display->display_options['fields']['field_paragraph_title']['id'] = 'field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title']['table'] = 'field_data_field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title']['field'] = 'field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraph_title']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraph_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Paragraphs item: Event Type (field_paragraphs_event_type) */
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['id'] = 'field_paragraphs_event_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['table'] = 'field_data_field_paragraphs_event_type';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['field'] = 'field_paragraphs_event_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['operator_id'] = 'field_paragraphs_event_type_tid_op';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['label'] = 'WHAT';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['operator'] = 'field_paragraphs_event_type_tid_op';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['identifier'] = 'field_paragraphs_event_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_paragraphs_event_type_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Event Artists (field_event_artists) */
  $handler->display->display_options['filters']['field_event_artists_tid']['id'] = 'field_event_artists_tid';
  $handler->display->display_options['filters']['field_event_artists_tid']['table'] = 'field_data_field_event_artists';
  $handler->display->display_options['filters']['field_event_artists_tid']['field'] = 'field_event_artists_tid';
  $handler->display->display_options['filters']['field_event_artists_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_artists_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['operator_id'] = 'field_event_artists_tid_op';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['label'] = 'WHO';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['operator'] = 'field_event_artists_tid_op';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['identifier'] = 'field_event_artists_tid';
  $handler->display->display_options['filters']['field_event_artists_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_event_artists_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_event_artists_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_artists_tid']['vocabulary'] = 'artists';
  $handler->display->display_options['filters']['field_event_artists_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Show in current season -  start date (field_show_in_current_season) */
  $handler->display->display_options['filters']['field_show_in_current_season_value']['id'] = 'field_show_in_current_season_value';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['table'] = 'field_data_field_show_in_current_season';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['field'] = 'field_show_in_current_season_value';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['group'] = 1;
  $handler->display->display_options['filters']['field_show_in_current_season_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_show_in_current_season_value']['default_date'] = 'today';
  /* Filter criterion: Content: Show in current season - end date (field_show_in_current_season:value2) */
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['id'] = 'field_show_in_current_season_value2';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['table'] = 'field_data_field_show_in_current_season';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['field'] = 'field_show_in_current_season_value2';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_show_in_current_season_value2']['default_date'] = 'today';
  /* Filter criterion: Paragraphs item: Event Dates -  start date (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_dates_value']['group'] = 2;
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator_id'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['identifier'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_dates_value']['default_date'] = 'now';
  /* Filter criterion: Paragraphs item: Event Dates - end date (field_event_dates:value2) */
  $handler->display->display_options['filters']['field_event_dates_value2']['id'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value2']['field'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['field_event_dates_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_dates_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator_id'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['identifier'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'whats-on/past-programme';
  $export['whats_on'] = $view;

  return $export;
}
