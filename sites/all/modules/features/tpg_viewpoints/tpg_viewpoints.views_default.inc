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
  $view->name = 'expore_all_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expore all content';
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_paragraphs_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_form_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'overview';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Paragraphs Content (field_paragraphs_content) */
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['id'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['table'] = 'field_data_field_paragraphs_content';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['field'] = 'field_paragraphs_content_value';
  $handler->display->display_options['relationships']['field_paragraphs_content_value']['delta'] = '-1';
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
    'format_type' => 'event_format',
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
  /* Sort criterion: Paragraphs item: Date Published (field_paragraphs_date_published) */
  $handler->display->display_options['sorts']['field_paragraphs_date_published_value']['id'] = 'field_paragraphs_date_published_value';
  $handler->display->display_options['sorts']['field_paragraphs_date_published_value']['table'] = 'field_data_field_paragraphs_date_published';
  $handler->display->display_options['sorts']['field_paragraphs_date_published_value']['field'] = 'field_paragraphs_date_published_value';
  $handler->display->display_options['sorts']['field_paragraphs_date_published_value']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['sorts']['field_paragraphs_date_published_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Paragraphs item: Page Type (field_paragraphs_type) */
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['id'] = 'field_paragraphs_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['table'] = 'field_data_field_paragraphs_type';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['field'] = 'field_paragraphs_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['expose']['operator_id'] = 'field_paragraphs_type_tid_op';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['expose']['label'] = 'WHAT';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['expose']['operator'] = 'field_paragraphs_type_tid_op';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['expose']['identifier'] = 'field_paragraphs_type_tid';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    85239486 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_paragraphs_type_tid']['vocabulary'] = 'page_type';
  /* Filter criterion: Content: Form (field_form) */
  $handler->display->display_options['filters']['field_form_tid']['id'] = 'field_form_tid';
  $handler->display->display_options['filters']['field_form_tid']['table'] = 'field_data_field_form';
  $handler->display->display_options['filters']['field_form_tid']['field'] = 'field_form_tid';
  $handler->display->display_options['filters']['field_form_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_form_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_form_tid']['expose']['operator_id'] = 'field_form_tid_op';
  $handler->display->display_options['filters']['field_form_tid']['expose']['label'] = 'FORM';
  $handler->display->display_options['filters']['field_form_tid']['expose']['operator'] = 'field_form_tid_op';
  $handler->display->display_options['filters']['field_form_tid']['expose']['identifier'] = 'field_form_tid';
  $handler->display->display_options['filters']['field_form_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    190826733 => 0,
    85239486 => 0,
    151263223 => 0,
    203538000 => 0,
    152836380 => 0,
    204855824 => 0,
    199295989 => 0,
  );
  $handler->display->display_options['filters']['field_form_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_form_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_form_tid']['vocabulary'] = 'form';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_paragraphs_content_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'title_section' => 'title_section',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Content: Form (field_form) */
  $handler->display->display_options['filters']['field_form_tid_1']['id'] = 'field_form_tid_1';
  $handler->display->display_options['filters']['field_form_tid_1']['table'] = 'field_data_field_form';
  $handler->display->display_options['filters']['field_form_tid_1']['field'] = 'field_form_tid';
  $handler->display->display_options['filters']['field_form_tid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_form_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_form_tid_1']['vocabulary'] = 'form';

  /* Display: All Content */
  $handler = $view->new_display('page', 'All Content', 'all_content');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'whats-on explore-all-content clearfix';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'overview';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'explore-all-content';
  $export['expore_all_content'] = $view;

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
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'overview';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_3'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_4'] = 'overview';
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['path'] = 'viewpoints';

  /* Display: Header Image */
  $handler = $view->new_display('block', 'Header Image', 'viewpoint_header_image');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'header-image';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'viewpoint_header_image',
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
    'viewpoint' => 'viewpoint',
  );

  /* Display: Related Viewpoints Events */
  $handler = $view->new_display('block', 'Related Viewpoints Events', 'related_viewpoint');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related viewpoint';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['relationship'] = 'field_related_viewpoints_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'overview';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 1;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['alternating'] = TRUE;
  $handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_3'] = 'overview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_4'] = 'overview';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_viewpoints_target_id']['id'] = 'field_related_viewpoints_target_id';
  $handler->display->display_options['relationships']['field_related_viewpoints_target_id']['table'] = 'field_data_field_related_viewpoints';
  $handler->display->display_options['relationships']['field_related_viewpoints_target_id']['field'] = 'field_related_viewpoints_target_id';
  $handler->display->display_options['relationships']['field_related_viewpoints_target_id']['required'] = TRUE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events_detail' => 'events_detail',
  );
  $export['viewpoints'] = $view;

  return $export;
}
