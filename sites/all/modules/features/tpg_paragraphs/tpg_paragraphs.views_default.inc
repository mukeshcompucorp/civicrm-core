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
  $view->name = 'header_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header Video';
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
  /* Relationship: Content: Paragraphs Video (field_paragraphs_video) */
  $handler->display->display_options['relationships']['field_paragraphs_video_value']['id'] = 'field_paragraphs_video_value';
  $handler->display->display_options['relationships']['field_paragraphs_video_value']['table'] = 'field_data_field_paragraphs_video';
  $handler->display->display_options['relationships']['field_paragraphs_video_value']['field'] = 'field_paragraphs_video_value';
  $handler->display->display_options['relationships']['field_paragraphs_video_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_paragraphs_video_value']['delta'] = '-1';
  /* Field: Paragraphs item: Header Video URL */
  $handler->display->display_options['fields']['field_header_video_url']['id'] = 'field_header_video_url';
  $handler->display->display_options['fields']['field_header_video_url']['table'] = 'field_data_field_header_video_url';
  $handler->display->display_options['fields']['field_header_video_url']['field'] = 'field_header_video_url';
  $handler->display->display_options['fields']['field_header_video_url']['relationship'] = 'field_paragraphs_video_value';
  $handler->display->display_options['fields']['field_header_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_header_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_video_url']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_header_video_url']['settings'] = array(
    'video_style' => 'normal',
  );
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

  /* Display: Header Video */
  $handler = $view->new_display('block', 'Header Video', 'header_video_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_video_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'full_width_video_header' => 'full_width_video_header',
  );
  $export['header_video'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'header-image';
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
  /* Field: Paragraphs item: Full Width Image */
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
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'header-image';
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

  /* Display: Location Map */
  $handler = $view->new_display('block', 'Location Map', 'location_maps');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_map';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'location_latitude' => 'location_latitude',
  );
  $handler->display->display_options['style_options']['center_option'] = '1';
  $handler->display->display_options['style_options']['gps_roles'] = array(
    1 => '1',
    2 => '2',
    30037204 => 0,
    190826733 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  /* Relationship: Paragraphs item: Location Map (field_paragraphs_location) */
  $handler->display->display_options['relationships']['field_paragraphs_location_lid']['id'] = 'field_paragraphs_location_lid';
  $handler->display->display_options['relationships']['field_paragraphs_location_lid']['table'] = 'field_data_field_paragraphs_location';
  $handler->display->display_options['relationships']['field_paragraphs_location_lid']['field'] = 'field_paragraphs_location_lid';
  $handler->display->display_options['relationships']['field_paragraphs_location_lid']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'field_paragraphs_location_lid';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'field_paragraphs_location_lid';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
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
  $handler->display->display_options['css_class'] = 'related-activities container';
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
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_paragraphs_type' => 'field_paragraphs_type',
    'field_paragraphs_date_published' => 'field_paragraphs_date_published',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['id'] = 'reverse_field_related_activities_paragraphs_item';
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['field'] = 'reverse_field_related_activities_paragraphs_item';
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['required'] = TRUE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  /* Field: Broken/missing handler */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_paragraphs_subtype']['id'] = 'field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['table'] = 'field_data_field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['field'] = 'field_paragraphs_subtype';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_subtype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_subtype']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'title_section' => 'title_section',
  );

  /* Display: Related Activities */
  $handler = $view->new_display('block', 'Related Activities', 'related_activities_block');
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
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['settings'] = array(
    'image_style' => 'overview_page_image_400x271',
    'image_link' => '',
  );
  /* Field: Paragraphs item: Page Type */
  $handler->display->display_options['fields']['field_paragraphs_type']['id'] = 'field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['table'] = 'field_data_field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['field'] = 'field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_paragraphs_type']['delta_offset'] = '0';
  /* Field: Paragraphs item: Date Published */
  $handler->display->display_options['fields']['field_paragraphs_date_published']['id'] = 'field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['table'] = 'field_data_field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['field'] = 'field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_date_published']['settings'] = array(
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
  $handler->display->display_options['fields']['field_paragraph_title']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraph_title']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraph_title']['element_label_colon'] = FALSE;
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
    'title_section' => 'title_section',
  );

  /* Display: Events Related Activities  */
  $handler = $view->new_display('block', 'Events Related Activities ', 'event_related_activities');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_paragraphs_type' => 'field_paragraphs_type',
    'field_paragraphs_date_published' => 'field_paragraphs_date_published',
    'field_paragraphs_type_1' => 'field_paragraphs_type_1',
    'field_event_dates' => 'field_event_dates',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['id'] = 'reverse_field_related_activities_paragraphs_item';
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['field'] = 'reverse_field_related_activities_paragraphs_item';
  $handler->display->display_options['relationships']['reverse_field_related_activities_paragraphs_item']['required'] = TRUE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
  /* Relationship: Content: Paragraphs Entity (field_paragraphs_entity) */
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
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_overview_image']['settings'] = array(
    'image_style' => 'overview_page_image_400x271',
    'image_link' => '',
  );
  /* Field: Paragraphs item: Page Type */
  $handler->display->display_options['fields']['field_paragraphs_type']['id'] = 'field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['table'] = 'field_data_field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['field'] = 'field_paragraphs_type';
  $handler->display->display_options['fields']['field_paragraphs_type']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_type']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_paragraphs_type']['delta_offset'] = '0';
  /* Field: Paragraphs item: Date Published */
  $handler->display->display_options['fields']['field_paragraphs_date_published']['id'] = 'field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['table'] = 'field_data_field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['field'] = 'field_paragraphs_date_published';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_date_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_date_published']['settings'] = array(
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
  $handler->display->display_options['fields']['field_paragraph_title']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['fields']['field_paragraph_title']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraph_title']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Overview Image */
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['id'] = 'field_paragraphs_overview_image_1';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['table'] = 'field_data_field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['field'] = 'field_paragraphs_overview_image';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paragraphs_overview_image_1']['settings'] = array(
    'image_style' => 'overview_page_image_400x271',
    'image_link' => 'content',
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
  $handler->display->display_options['fields']['field_paragraph_title_1']['id'] = 'field_paragraph_title_1';
  $handler->display->display_options['fields']['field_paragraph_title_1']['table'] = 'field_data_field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title_1']['field'] = 'field_paragraph_title';
  $handler->display->display_options['fields']['field_paragraph_title_1']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['fields']['field_paragraph_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph_title_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_paragraph_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'title_section' => 'title_section',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 2;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle_1']['id'] = 'bundle_1';
  $handler->display->display_options['filters']['bundle_1']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle_1']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle_1']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['filters']['bundle_1']['value'] = array(
    'title_section' => 'title_section',
  );
  $handler->display->display_options['filters']['bundle_1']['group'] = 2;
  $export['related_activities'] = $view;

  return $export;
}
