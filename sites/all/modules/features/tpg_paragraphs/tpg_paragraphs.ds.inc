<?php
/**
 * @file
 * tpg_paragraphs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tpg_paragraphs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|paragraphs_page|overview_original_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'paragraphs_page';
  $ds_fieldsetting->view_mode = 'overview_original_image';
  $ds_fieldsetting->settings = array(
    'read_more_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|paragraphs_page|overview_original_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|2_column_left_text_only|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = '2_column_left_text_only';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_paragraph_left_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|2_column_left_text_only|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|2_column_text_left_image_right|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = '2_column_text_left_image_right';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_paragraph_left_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|2_column_text_left_image_right|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|3_column_text_left_image_right|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = '3_column_text_left_image_right';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_paragraph_left_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|3_column_text_left_image_right|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|attachments|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'attachments';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_paragraphs_attachments' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'lbw-el' => 'h4',
        ),
      ),
    ),
  );
  $export['paragraphs_item|attachments|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|block_quote|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'block_quote';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_paragraph_left_text' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|block_quote|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|bulleted_list|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'bulleted_list';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|bulleted_list|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|button|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'button';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|button|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|embed_video|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'embed_video';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_video_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|embed_video|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|full_width_image_caption_content|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'full_width_image_caption_content';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_full_width_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|full_width_image_caption_content|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|full_width_image_caption_content|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'full_width_image_caption_content';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_full_width_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|full_width_image_caption_content|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|image_left_text_right|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'image_left_text_right';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_left_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|image_left_text_right|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|image_left_text_right|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'image_left_text_right';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_paragraph_left_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_paragraph_right_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|image_left_text_right|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|image_reading_width_colorbox|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'image_reading_width_colorbox';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'reading_width_image_lightbox_tit' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_reading_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|image_reading_width_colorbox|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|social_media_links|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'social_media_links';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'social_media_links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['paragraphs_item|social_media_links|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|title_section|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'title_section';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraphs_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|title_section|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|title_section|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'title_section';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'event_start_end_dates' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_paragraphs_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|title_section|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|title_section|overview';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'title_section';
  $ds_fieldsetting->view_mode = 'overview';
  $ds_fieldsetting->settings = array(
    'event_start_end_dates' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_paragraphs_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_paragraphs_overview_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_paragraph_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'title',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|title_section|overview'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|title_section|overview_original_image';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'title_section';
  $ds_fieldsetting->view_mode = 'overview_original_image';
  $ds_fieldsetting->settings = array(
    'event_start_end_dates' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_paragraph_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'suffix' => '...',
        ),
      ),
    ),
  );
  $export['paragraphs_item|title_section|overview_original_image'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tpg_paragraphs_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'event_start_end_dates';
  $ds_field->label = 'Event Start End Dates';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = 'title_section|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="date-display-range">[paragraphs_item:field-event-dates:value:custom:d M] - [paragraphs_item:field-event-dates:value2:custom:d M Y]</div>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['event_start_end_dates'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'read_more';
  $ds_field->label = 'Read more external links';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a class="entity-read-more" href="[node:field-external-link-title:url]">read more</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['read_more'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'reading_width_image_lightbox_tit';
  $ds_field->label = 'Reading Width Image Lightbox Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = 'image_reading_width_colorbox|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>[node:field_paragraphs_content:1:field_reading_image:title]</p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['reading_width_image_lightbox_tit'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'social_media_links';
  $ds_field->label = 'Social Media Links';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'service_links|service_links',
    'block_render' => '1',
  );
  $export['social_media_links'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tpg_paragraphs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|paragraphs_page|overview_original_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'paragraphs_page';
  $ds_layout->view_mode = 'overview_original_image';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_content',
        1 => 'read_more_node',
      ),
    ),
    'fields' => array(
      'field_paragraphs_content' => 'ds_content',
      'read_more_node' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|paragraphs_page|overview_original_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_image_left_image_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_image_left_image_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_left_image',
      ),
      'right' => array(
        1 => 'field_paragraph_right_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_left_image' => 'left',
      'field_paragraph_right_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['paragraphs_item|2_column_image_left_image_right|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_image_left_image_right|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_image_left_image_right';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'two_equal_column_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_left_image',
      ),
      'right' => array(
        1 => 'field_paragraph_right_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_left_image' => 'left',
      'field_paragraph_right_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|2_column_image_left_image_right|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_image_left_no_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_image_left_no_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_col_img_left_img_right';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_left_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_left_image' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|2_column_image_left_no_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_image_left_no_image|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_image_left_no_image';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'two_equal_column_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_left_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_left_image' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|2_column_image_left_no_image|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_left_text_only|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_left_text_only';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'left',
      'field_paragraph_left_text' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|2_column_left_text_only|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_left_text_only|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_left_text_only';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'two_equal_column_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'left',
      'field_paragraph_left_text' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|2_column_left_text_only|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_text_left_image_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_text_left_image_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
      'right' => array(
        2 => 'field_paragraph_right_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'left',
      'field_paragraph_left_text' => 'left',
      'field_paragraph_right_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|2_column_text_left_image_right|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_column_text_left_image_right|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_column_text_left_image_right';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'two_equal_column_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
      'right' => array(
        2 => 'field_paragraph_right_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'left',
      'field_paragraph_left_text' => 'left',
      'field_paragraph_right_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|2_column_text_left_image_right|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|3_column_text_left_image_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '3_column_text_left_image_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
      'middle' => array(
        2 => 'field_paragraph_right_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'left',
      'field_paragraph_left_text' => 'left',
      'field_paragraph_right_image' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|3_column_text_left_image_right|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|3_column_text_left_image_right|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '3_column_text_left_image_right';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'two_column_1_3_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
      'right' => array(
        2 => 'field_paragraph_right_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'left',
      'field_paragraph_left_text' => 'left',
      'field_paragraph_right_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|3_column_text_left_image_right|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|attachments|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'attachments';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_attachments',
      ),
    ),
    'fields' => array(
      'field_paragraphs_attachments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|attachments|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|attachments|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'attachments';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraphs_attachments',
      ),
    ),
    'fields' => array(
      'field_paragraphs_attachments' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar_first' => 'div',
      'center' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|attachments|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|block_quote|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'block_quote';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'center',
      'field_paragraph_left_text' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar_first' => 'div',
      'center' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|block_quote|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|block_quote|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'block_quote';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'center',
      'field_paragraph_left_text' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'center' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|block_quote|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|bulleted_list|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'bulleted_list';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'center',
      'field_paragraph_left_text' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar_first' => 'div',
      'center' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|bulleted_list|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|bulleted_list|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'bulleted_list';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'center',
      'field_paragraph_left_text' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'center' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|bulleted_list|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|button|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'button';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_button',
      ),
    ),
    'fields' => array(
      'field_paragraph_button' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|button|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|button|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'button';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraph_button',
      ),
    ),
    'fields' => array(
      'field_paragraph_button' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'center' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|button|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|embed_video|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'embed_video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_video_title',
        1 => 'field_paragraph_video',
      ),
    ),
    'fields' => array(
      'field_video_title' => 'ds_content',
      'field_paragraph_video' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|embed_video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|embed_video|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'embed_video';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_video_title',
        1 => 'field_paragraph_video',
      ),
    ),
    'fields' => array(
      'field_video_title' => 'center',
      'field_paragraph_video' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'center' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|embed_video|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|full_width_image_caption_content|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'full_width_image_caption_content';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_full_width_image',
      ),
    ),
    'fields' => array(
      'field_full_width_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|full_width_image_caption_content|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|full_width_image_caption_content|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'full_width_image_caption_content';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_full_width_image',
      ),
    ),
    'fields' => array(
      'field_full_width_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|full_width_image_caption_content|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|full_width_image_caption|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'full_width_image_caption';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|full_width_image_caption|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|full_width_image_caption|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'full_width_image_caption';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'center' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|full_width_image_caption|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|header_gallery|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'header_gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|header_gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|header_image_left_image_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'header_image_left_image_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|header_image_left_image_right|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_left_2_3_width|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_left_2_3_width';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'image_left_2_3_width';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraphs_image_2_3_width',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image_2_3_width' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|image_left_2_3_width|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_left_2_3_width|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_left_2_3_width';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'image_left_2_3_width';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'left' => array(
        0 => 'field_paragraphs_image_2_3_width',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image_2_3_width' => 'left',
    ),
  );
  $export['paragraphs_item|image_left_2_3_width|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_left_text_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_left_text_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_equal_column_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_left_image',
      ),
      'right' => array(
        1 => 'field_paragraph_title',
        2 => 'field_paragraph_right_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_left_image' => 'left',
      'field_paragraph_title' => 'right',
      'field_paragraph_right_text' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|image_left_text_right|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_left_text_right|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_left_text_right';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'two_equal_column_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_left_image',
      ),
      'right' => array(
        1 => 'field_paragraph_title',
        2 => 'field_paragraph_right_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_left_image' => 'left',
      'field_paragraph_title' => 'right',
      'field_paragraph_right_text' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|image_left_text_right|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_reading_width_colorbox|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_reading_width_colorbox';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_reading_image',
      ),
    ),
    'fields' => array(
      'field_reading_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|image_reading_width_colorbox|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_reading_width_colorbox|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_reading_width_colorbox';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_reading_image',
        1 => 'reading_width_image_lightbox_tit',
      ),
    ),
    'fields' => array(
      'field_reading_image' => 'ds_content',
      'reading_width_image_lightbox_tit' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|image_reading_width_colorbox|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|page_type_date_added|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'page_type_date_added';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraphs_page_type',
      ),
      'right' => array(
        1 => 'field_paragraphs_date_added',
      ),
    ),
    'fields' => array(
      'field_paragraphs_page_type' => 'left',
      'field_paragraphs_date_added' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|page_type_date_added|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|reading_width_image_caption|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'reading_width_image_caption';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_reading_image',
      ),
    ),
    'fields' => array(
      'field_reading_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|reading_width_image_caption|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|reading_width_image_caption|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'reading_width_image_caption';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_reading_image',
      ),
    ),
    'fields' => array(
      'field_reading_image' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar_first' => 'div',
      'center' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|reading_width_image_caption|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|reading_width_maps|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'reading_width_maps';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_location',
      ),
    ),
    'fields' => array(
      'field_paragraphs_location' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|reading_width_maps|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|reading_width_maps|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'reading_width_maps';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraphs_location',
      ),
    ),
    'fields' => array(
      'field_paragraphs_location' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|reading_width_maps|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|reading_width_webform|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'reading_width_webform';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_webform_entity',
      ),
    ),
    'fields' => array(
      'field_webform_entity' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar_first' => 'div',
      'center' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|reading_width_webform|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|related_activities|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'related_activities';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_related_activities',
      ),
    ),
    'fields' => array(
      'field_related_activities' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|related_activities|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|related_activities|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'related_activities';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'center' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|related_activities|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|social_media_links|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'social_media_links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'social_media_links',
      ),
    ),
    'fields' => array(
      'social_media_links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|social_media_links|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_left_image_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_left_image_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_left_text',
      ),
      'right' => array(
        2 => 'field_paragraph_right_image',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'left',
      'field_paragraph_left_text' => 'left',
      'field_paragraph_right_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|text_left_image_right|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_reading_width|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_reading_width';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraph_description',
      ),
    ),
    'fields' => array(
      'field_paragraph_description' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar_first' => 'div',
      'center' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|text_reading_width|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_reading_width|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_reading_width';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'full_width_middle';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'field_paragraph_description',
      ),
    ),
    'fields' => array(
      'field_paragraph_description' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar_first' => 'div',
      'center' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|text_reading_width|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_section|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_type',
        1 => 'field_paragraphs_event_type',
        2 => 'field_paragraphs_date_published',
        3 => 'field_event_dates',
        4 => 'field_paragraph_title',
        5 => 'field_paragraphs_tags_viewpoints',
        6 => 'field_paragraph_description',
      ),
    ),
    'fields' => array(
      'field_paragraphs_type' => 'ds_content',
      'field_paragraphs_event_type' => 'ds_content',
      'field_paragraphs_date_published' => 'ds_content',
      'field_event_dates' => 'ds_content',
      'field_paragraph_title' => 'ds_content',
      'field_paragraphs_tags_viewpoints' => 'ds_content',
      'field_paragraph_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|title_section|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_section|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_section';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'title_section';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_paragraphs_type',
        1 => 'field_paragraphs_event_type',
        2 => 'field_paragraphs_date_published',
        3 => 'event_start_end_dates',
        4 => 'field_paragraph_title',
      ),
      'center' => array(
        5 => 'field_paragraphs_tags_viewpoints',
        6 => 'field_paragraph_description',
      ),
    ),
    'fields' => array(
      'field_paragraphs_type' => 'header',
      'field_paragraphs_event_type' => 'header',
      'field_paragraphs_date_published' => 'header',
      'event_start_end_dates' => 'header',
      'field_paragraph_title' => 'header',
      'field_paragraphs_tags_viewpoints' => 'center',
      'field_paragraph_description' => 'center',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'center' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|title_section|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_section|overview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_section';
  $ds_layout->view_mode = 'overview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_overview_image',
        1 => 'field_paragraphs_type',
        2 => 'field_paragraphs_event_type',
        3 => 'field_paragraphs_date_published',
        4 => 'event_start_end_dates',
        5 => 'field_paragraph_title',
        6 => 'field_paragraph_description',
      ),
    ),
    'fields' => array(
      'field_paragraphs_overview_image' => 'ds_content',
      'field_paragraphs_type' => 'ds_content',
      'field_paragraphs_event_type' => 'ds_content',
      'field_paragraphs_date_published' => 'ds_content',
      'event_start_end_dates' => 'ds_content',
      'field_paragraph_title' => 'ds_content',
      'field_paragraph_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|title_section|overview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title_section|overview_original_image';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_section';
  $ds_layout->view_mode = 'overview_original_image';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_overview_image',
        1 => 'field_paragraphs_type',
        2 => 'field_paragraphs_event_type',
        3 => 'field_paragraphs_date_published',
        4 => 'field_paragraph_title',
        5 => 'field_paragraph_description',
      ),
    ),
    'fields' => array(
      'field_paragraphs_overview_image' => 'ds_content',
      'field_paragraphs_type' => 'ds_content',
      'field_paragraphs_event_type' => 'ds_content',
      'field_paragraphs_date_published' => 'ds_content',
      'field_paragraph_title' => 'ds_content',
      'field_paragraph_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|title_section|overview_original_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|title|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_title',
        1 => 'field_paragraph_description',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'ds_content',
      'field_paragraph_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|title|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function tpg_paragraphs_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'overview';
  $ds_view_mode->label = 'Overview';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['overview'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'overview_original_image';
  $ds_view_mode->label = 'Overview - Original Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['overview_original_image'] = $ds_view_mode;

  return $export;
}
