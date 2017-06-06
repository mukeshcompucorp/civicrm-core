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
  $ds_fieldsetting->id = 'paragraphs_item|title_section|overview';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'title_section';
  $ds_fieldsetting->view_mode = 'overview';
  $ds_fieldsetting->settings = array(
    'read_more' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['paragraphs_item|title_section|overview'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tpg_paragraphs_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'read_more';
  $ds_field->label = 'Read more';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '*|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="[field_collection_item:field-external-link-title:url]" class="entity-read-more">&gt; read more</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['read_more'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tpg_paragraphs_ds_layout_settings_info() {
  $export = array();

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
  $ds_layout->id = 'paragraphs_item|embed_video|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'embed_video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_video',
      ),
    ),
    'fields' => array(
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
  $ds_layout->id = 'paragraphs_item|title_section|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'title_section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_type',
        1 => 'field_paragraphs_date_published',
        2 => 'field_paragraph_title',
        3 => 'field_paragraph_description',
        4 => 'field_paragraphs_tags_viewpoints',
      ),
    ),
    'fields' => array(
      'field_paragraphs_type' => 'ds_content',
      'field_paragraphs_date_published' => 'ds_content',
      'field_paragraph_title' => 'ds_content',
      'field_paragraph_description' => 'ds_content',
      'field_paragraphs_tags_viewpoints' => 'ds_content',
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
        2 => 'field_paragraphs_date_published',
        3 => 'field_paragraph_title',
        4 => 'field_paragraph_description',
        5 => 'read_more',
      ),
    ),
    'fields' => array(
      'field_paragraphs_overview_image' => 'ds_content',
      'field_paragraphs_type' => 'ds_content',
      'field_paragraphs_date_published' => 'ds_content',
      'field_paragraph_title' => 'ds_content',
      'field_paragraph_description' => 'ds_content',
      'read_more' => 'ds_content',
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

  return $export;
}
