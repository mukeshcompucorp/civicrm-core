<?php
/**
 * @file
 * tpg_paragraphs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpg_paragraphs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'paragraphs_entities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Paragraphs entities';
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
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'paragraphs_page' => 'paragraphs_page',
  );

  /* Display: Full width image */
  $handler = $view->new_display('block', 'Full width image', 'full_width_image_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Full width Image */
  $handler->display->display_options['fields']['field_full_width_image']['id'] = 'field_full_width_image';
  $handler->display->display_options['fields']['field_full_width_image']['table'] = 'field_data_field_full_width_image';
  $handler->display->display_options['fields']['field_full_width_image']['field'] = 'field_full_width_image';
  $handler->display->display_options['fields']['field_full_width_image']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_full_width_image']['label'] = '';
  $handler->display->display_options['fields']['field_full_width_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_width_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_full_width_image']['settings'] = array(
    'image_style' => 'full_width_image_1285x500',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Banner Image Left Right  */
  $handler = $view->new_display('block', 'Banner Image Left Right ', 'banner_image_left_right');
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Image Left */
  $handler->display->display_options['fields']['field_paragraph_left_image']['id'] = 'field_paragraph_left_image';
  $handler->display->display_options['fields']['field_paragraph_left_image']['table'] = 'field_data_field_paragraph_left_image';
  $handler->display->display_options['fields']['field_paragraph_left_image']['field'] = 'field_paragraph_left_image';
  $handler->display->display_options['fields']['field_paragraph_left_image']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraph_left_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_left_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_left_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraph_left_image']['settings'] = array(
    'image_style' => '2_column_image_left_and_right_400x472',
    'image_link' => '',
  );
  /* Field: Paragraphs item: Image Right */
  $handler->display->display_options['fields']['field_paragraph_right_image']['id'] = 'field_paragraph_right_image';
  $handler->display->display_options['fields']['field_paragraph_right_image']['table'] = 'field_data_field_paragraph_right_image';
  $handler->display->display_options['fields']['field_paragraph_right_image']['field'] = 'field_paragraph_right_image';
  $handler->display->display_options['fields']['field_paragraph_right_image']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraph_right_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_right_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_right_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraph_right_image']['settings'] = array(
    'image_style' => '2_column_image_left_and_right_400x472',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'paragraphs_page' => 'paragraphs_page',
  );
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    '2_column_image_left_image_right' => '2_column_image_left_image_right',
  );

  /* Display: Header Gallery Image */
  $handler = $view->new_display('block', 'Header Gallery Image', 'header_gallery_image');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Gallery Image */
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['id'] = 'field_paragraphs_gallery_image';
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['table'] = 'field_data_field_paragraphs_gallery_image';
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['field'] = 'field_paragraphs_gallery_image';
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['type'] = 'flexslider';
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['settings'] = array(
    'optionset' => 'default',
    'image_style' => 'gallery_image_reading_width_962x642',
    'caption' => '0',
  );
  $handler->display->display_options['fields']['field_paragraphs_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'paragraphs_page' => 'paragraphs_page',
  );
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'header_gallery' => 'header_gallery',
  );
  $export['paragraphs_entities'] = $view;

  $view = new view();
  $view->name = 'related_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  /* Field: Paragraphs item: Page Type */
  $handler->display->display_options['fields']['field_paragraphs_page_type']['id'] = 'field_paragraphs_page_type';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['table'] = 'field_data_field_paragraphs_page_type';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['field'] = 'field_paragraphs_page_type';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Paragraphs item: Subtype */
  $handler->display->display_options['fields']['field_paragraphs_subtype']['id'] = 'field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['table'] = 'field_data_field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['field'] = 'field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_subtype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_subtype']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'paragraphs_page' => 'paragraphs_page',
  );
  /* Filter criterion: Paragraphs item: Subtype (field_paragraphs_subtype) */
  $handler->display->display_options['filters']['field_paragraphs_subtype_tid']['id'] = 'field_paragraphs_subtype_tid';
  $handler->display->display_options['filters']['field_paragraphs_subtype_tid']['table'] = 'field_data_field_paragraphs_subtype';
  $handler->display->display_options['filters']['field_paragraphs_subtype_tid']['field'] = 'field_paragraphs_subtype_tid';
  $handler->display->display_options['filters']['field_paragraphs_subtype_tid']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['field_paragraphs_subtype_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_paragraphs_subtype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_paragraphs_subtype_tid']['vocabulary'] = 'tags';

  /* Display: Related Activities */
  $handler = $view->new_display('block', 'Related Activities', 'related_activities');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Page Type */
  $handler->display->display_options['fields']['field_paragraphs_page_type']['id'] = 'field_paragraphs_page_type';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['table'] = 'field_data_field_paragraphs_page_type';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['field'] = 'field_paragraphs_page_type';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_page_type']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Date Added */
  $handler->display->display_options['fields']['field_paragraphs_date_added']['id'] = 'field_paragraphs_date_added';
  $handler->display->display_options['fields']['field_paragraphs_date_added']['table'] = 'field_data_field_paragraphs_date_added';
  $handler->display->display_options['fields']['field_paragraphs_date_added']['field'] = 'field_paragraphs_date_added';
  $handler->display->display_options['fields']['field_paragraphs_date_added']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_date_added']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_date_added']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_date_added']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Paragraphs item: Subtype */
  $handler->display->display_options['fields']['field_paragraphs_subtype']['id'] = 'field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['table'] = 'field_data_field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['field'] = 'field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_subtype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_subtype']['type'] = 'taxonomy_term_reference_plain';
  $export['related_activities'] = $view;

  return $export;
}
