<?php
/**
 * @file
 * tpg_viewpoints.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpg_viewpoints_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'viewpoints';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Viewpoints';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Viewpoints';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'A short introtext about TPGs editorial approach. A writer selects one image from our current exhibitions and responds to it. For our Spring 2016 programme, we have invited students.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'viewpoints' => 'viewpoints',
    'featured_content_past_programme' => 0,
  );
  /* Field: Content: Overview Image */
  $handler->display->display_options['fields']['field_viewpoint_overview_image']['id'] = 'field_viewpoint_overview_image';
  $handler->display->display_options['fields']['field_viewpoint_overview_image']['table'] = 'field_data_field_viewpoint_overview_image';
  $handler->display->display_options['fields']['field_viewpoint_overview_image']['field'] = 'field_viewpoint_overview_image';
  $handler->display->display_options['fields']['field_viewpoint_overview_image']['label'] = '';
  $handler->display->display_options['fields']['field_viewpoint_overview_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_viewpoint_overview_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_viewpoint_overview_image']['settings'] = array(
    'image_style' => 'viewpoint_overview_image',
    'image_link' => 'content',
  );
  /* Field: Field: Tags & Viewpoints */
  $handler->display->display_options['fields']['field_paragraphs_tags_viewpoints']['id'] = 'field_paragraphs_tags_viewpoints';
  $handler->display->display_options['fields']['field_paragraphs_tags_viewpoints']['table'] = 'field_data_field_paragraphs_tags_viewpoints';
  $handler->display->display_options['fields']['field_paragraphs_tags_viewpoints']['field'] = 'field_paragraphs_tags_viewpoints';
  $handler->display->display_options['fields']['field_paragraphs_tags_viewpoints']['label'] = '';
  $handler->display->display_options['fields']['field_paragraphs_tags_viewpoints']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraphs_tags_viewpoints']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Card Tag */
  $handler->display->display_options['fields']['field_homepage_card_tag']['id'] = 'field_homepage_card_tag';
  $handler->display->display_options['fields']['field_homepage_card_tag']['table'] = 'field_data_field_homepage_card_tag';
  $handler->display->display_options['fields']['field_homepage_card_tag']['field'] = 'field_homepage_card_tag';
  $handler->display->display_options['fields']['field_homepage_card_tag']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_card_tag']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'viewpoint' => 'viewpoint',
  );

  /* Display: Viewpoints */
  $handler = $view->new_display('page', 'Viewpoints', 'page');
  $handler->display->display_options['path'] = 'viewpoints';

  /* Display: Viewpoint - Related Content */
  $handler = $view->new_display('block', 'Viewpoint - Related Content', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'overview';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Card Image */
  $handler->display->display_options['fields']['field_card_image']['id'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['table'] = 'field_data_field_card_image';
  $handler->display->display_options['fields']['field_card_image']['field'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['label'] = '';
  $handler->display->display_options['fields']['field_card_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_homepage_weight) */
  $handler->display->display_options['sorts']['field_homepage_weight_value']['id'] = 'field_homepage_weight_value';
  $handler->display->display_options['sorts']['field_homepage_weight_value']['table'] = 'field_data_field_homepage_weight';
  $handler->display->display_options['sorts']['field_homepage_weight_value']['field'] = 'field_homepage_weight_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Tags &amp; Viewpoints (field_paragraphs_tags_viewpoints) */
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['id'] = 'field_paragraphs_tags_viewpoints_tid';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['table'] = 'field_data_field_paragraphs_tags_viewpoints';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['field'] = 'field_paragraphs_tags_viewpoints_tid';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['relationship'] = 'field_paragraphs_entity_value';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Tags &amp; Viewpoints (field_paragraphs_tags_viewpoints) */
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['id'] = 'field_paragraphs_tags_viewpoints_tid_1';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['table'] = 'field_data_field_paragraphs_tags_viewpoints';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['field'] = 'field_paragraphs_tags_viewpoints_tid';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_paragraphs_tags_viewpoints_tid_1']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['block_description'] = 'Viewpoint - Related Content';
  $export['viewpoints'] = $view;

  return $export;
}
