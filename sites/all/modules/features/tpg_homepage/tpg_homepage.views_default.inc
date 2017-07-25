<?php
/**
 * @file
 * tpg_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpg_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'header_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header Image';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Show on Dates -  start date (field_show_on_dates) */
  $handler->display->display_options['sorts']['field_show_on_dates_value']['id'] = 'field_show_on_dates_value';
  $handler->display->display_options['sorts']['field_show_on_dates_value']['table'] = 'field_data_field_show_on_dates';
  $handler->display->display_options['sorts']['field_show_on_dates_value']['field'] = 'field_show_on_dates_value';
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
    'header_image' => 'header_image',
  );
  /* Filter criterion: Content: Show on Dates -  start date (field_show_on_dates) */
  $handler->display->display_options['filters']['field_show_on_dates_value']['id'] = 'field_show_on_dates_value';
  $handler->display->display_options['filters']['field_show_on_dates_value']['table'] = 'field_data_field_show_on_dates';
  $handler->display->display_options['filters']['field_show_on_dates_value']['field'] = 'field_show_on_dates_value';
  $handler->display->display_options['filters']['field_show_on_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_show_on_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Show on Dates - end date (field_show_on_dates:value2) */
  $handler->display->display_options['filters']['field_show_on_dates_value2']['id'] = 'field_show_on_dates_value2';
  $handler->display->display_options['filters']['field_show_on_dates_value2']['table'] = 'field_data_field_show_on_dates';
  $handler->display->display_options['filters']['field_show_on_dates_value2']['field'] = 'field_show_on_dates_value2';
  $handler->display->display_options['filters']['field_show_on_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_show_on_dates_value2']['default_date'] = 'now';

  /* Display: Header Image */
  $handler = $view->new_display('block', 'Header Image', 'header_image_view_block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'homepage_header_image_1920x1000',
    'image_link' => '',
  );
  $export['header_image'] = $view;

  $view = new view();
  $view->name = 'homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_event_dates' => 'field_event_dates',
    'field_event_dates_1' => 'field_event_dates_1',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Whats on Weight (field_whats_on_weight) */
  $handler->display->display_options['sorts']['field_whats_on_weight_value']['id'] = 'field_whats_on_weight_value';
  $handler->display->display_options['sorts']['field_whats_on_weight_value']['table'] = 'field_data_field_whats_on_weight';
  $handler->display->display_options['sorts']['field_whats_on_weight_value']['field'] = 'field_whats_on_weight_value';
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
    'paragraphs_page' => 'paragraphs_page',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Add Dates -  start date (field_homepage_publish_dates) */
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['id'] = 'field_homepage_publish_dates_value';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['table'] = 'field_data_field_homepage_publish_dates';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['field'] = 'field_homepage_publish_dates_value';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Add Dates - end date (field_homepage_publish_dates:value2) */
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['id'] = 'field_homepage_publish_dates_value2';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['table'] = 'field_data_field_homepage_publish_dates';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['field'] = 'field_homepage_publish_dates_value2';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['default_date'] = 'now';

  /* Display: Current Exhibitions Highlights */
  $handler = $view->new_display('block', 'Current Exhibitions Highlights', 'current_exhibitions_highlights_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Exhibitions and Highlights';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'exhibitions-and-highlights row whats-on';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_event_dates' => 'field_event_dates',
    'field_event_dates_1' => 'field_event_dates_1',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_entity) */
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['id'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['table'] = 'field_data_field_paragraphs_entity';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['field'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['delta'] = '-1';
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Card Tag */
  $handler->display->display_options['fields']['field_homepage_card_tag']['id'] = 'field_homepage_card_tag';
  $handler->display->display_options['fields']['field_homepage_card_tag']['table'] = 'field_data_field_homepage_card_tag';
  $handler->display->display_options['fields']['field_homepage_card_tag']['field'] = 'field_homepage_card_tag';
  $handler->display->display_options['fields']['field_homepage_card_tag']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_card_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_card_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_card_tag']['element_wrapper_class'] = 'tag';
  $handler->display->display_options['fields']['field_homepage_card_tag']['hide_empty'] = TRUE;
  /* Field: Content: Homepage Image */
  $handler->display->display_options['fields']['field_homepage_image']['id'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['table'] = 'field_data_field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['field'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_image']['alter']['text'] = '[field_homepage_image]
<div class="tag">[field_homepage_card_tag]</div>';
  $handler->display->display_options['fields']['field_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepage_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Paragraphs item: Event Type */
  $handler->display->display_options['fields']['field_paragraphs_event_type']['id'] = 'field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['table'] = 'field_data_field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['field'] = 'field_paragraphs_event_type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_event_type']['element_wrapper_class'] = 'col-xs-6 type';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_event_type']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_event_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_paragraphs_event_type']['delta_offset'] = '0';
  /* Field: Event Start Date */
  $handler->display->display_options['fields']['field_event_dates']['id'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['field'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_event_dates']['ui_name'] = 'Event Start Date';
  $handler->display->display_options['fields']['field_event_dates']['label'] = '';
  $handler->display->display_options['fields']['field_event_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_dates']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_dates']['element_wrapper_class'] = 'col-xs-6 date';
  $handler->display->display_options['fields']['field_event_dates']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_dates']['settings'] = array(
    'format_type' => 'day_month_year',
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
  $handler->display->display_options['fields']['field_paragraph_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_paragraph_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['field_paragraph_title']['hide_empty'] = TRUE;
  /* Field: Paragraphs item: Page Type */
  $handler->display->display_options['fields']['field_paragraphs_type']['id'] = 'field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['table'] = 'field_data_field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['field'] = 'field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_type']['element_wrapper_class'] = 'col-xs-6 type';
  $handler->display->display_options['fields']['field_paragraphs_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_paragraphs_type']['delta_offset'] = '0';
  /* Field: Paragraphs item: Date Published */
  $handler->display->display_options['fields']['field_paragraphs_date_published']['id'] = 'field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['table'] = 'field_data_field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['field'] = 'field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_date_published']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['element_wrapper_class'] = 'col-xs-6 date';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_date_published']['settings'] = array(
    'format_type' => 'event_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Paragraphs item: Title */
  $handler->display->display_options['fields']['field_paragraph_title_1']['id'] = 'field_paragraph_title_1';
  $handler->display->display_options['fields']['field_paragraph_title_1']['table'] = 'field_data_field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title_1']['field'] = 'field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title_1']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraph_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph_title_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraph_title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_paragraph_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_title_1']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['field_paragraph_title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_homepage_weight) */
  $handler->display->display_options['sorts']['field_homepage_weight_value']['id'] = 'field_homepage_weight_value';
  $handler->display->display_options['sorts']['field_homepage_weight_value']['table'] = 'field_data_field_homepage_weight';
  $handler->display->display_options['sorts']['field_homepage_weight_value']['field'] = 'field_homepage_weight_value';
  $handler->display->display_options['sorts']['field_homepage_weight_value']['order'] = 'DESC';
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
    'paragraphs_page' => 'paragraphs_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Add Dates -  start date (field_homepage_publish_dates) */
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['id'] = 'field_homepage_publish_dates_value';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['table'] = 'field_data_field_homepage_publish_dates';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['field'] = 'field_homepage_publish_dates_value';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_homepage_publish_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Add Dates - end date (field_homepage_publish_dates:value2) */
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['id'] = 'field_homepage_publish_dates_value2';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['table'] = 'field_data_field_homepage_publish_dates';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['field'] = 'field_homepage_publish_dates_value2';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_homepage_publish_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle_1']['id'] = 'bundle_1';
  $handler->display->display_options['filters']['bundle_1']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle_1']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle_1']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['bundle_1']['value'] = array(
    'title_section' => 'title_section',
  );
  $handler->display->display_options['filters']['bundle_1']['group'] = 2;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'title_section' => 'title_section',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 2;
  $export['homepage'] = $view;

  $view = new view();
  $view->name = 'search_autocomplete';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search Autocomplete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Node title suggestions for autocompletion';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'search_autocomplete';
  $handler->display->display_options['style_options']['group_by'] = 'type';
  $handler->display->display_options['style_options']['input_label'] = 'title';
  $handler->display->display_options['style_options']['input_link'] = 'view_node';
  $handler->display->display_options['style_options']['output_fields'] = array(
    'title' => 'title',
    'name' => 'name',
    'comment_count' => 'comment_count',
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content revision: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node_revision';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'filter';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search_autocomplete';

  /* Display: Overview Image */
  $handler = $view->new_display('block', 'Overview Image', 'overview_image_search');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_entity) */
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['id'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['table'] = 'field_data_field_paragraphs_entity';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['field'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['relationships']['field_paragraphs_entity_value']['delta'] = '-1';
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Overview Image */
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['id'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['table'] = 'field_data_field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['field'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['settings'] = array(
    'image_style' => 'overview_page_image_400x271',
    'image_link' => '',
  );
  /* Field: Paragraphs item: Overview Image */
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['id'] = 'field_paragraphs_overview_image_1';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['table'] = 'field_data_field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['field'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['settings'] = array(
    'image_style' => 'overview_page_image_400x271',
    'image_link' => '',
  );
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
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'title_section' => 'title_section',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 2;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle_1']['id'] = 'bundle_1';
  $handler->display->display_options['filters']['bundle_1']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle_1']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle_1']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['bundle_1']['value'] = array(
    'title_section' => 'title_section',
  );
  $handler->display->display_options['filters']['bundle_1']['group'] = 2;
  $export['search_autocomplete'] = $view;

  return $export;
}
