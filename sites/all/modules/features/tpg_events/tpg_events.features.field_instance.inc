<?php
/**
 * @file
 * tpg_events.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tpg_events_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-events_detail-field_event_artists'.
  $field_instances['node-events_detail-field_event_artists'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'overview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_artists',
    'label' => 'Event Artists',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_book_now_link'.
  $field_instances['node-events_detail-field_event_book_now_link'] = array(
    'bundle' => 'events_detail',
    'default_value' => array(
      0 => array(
        'title' => 'Book tickets',
        'url' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_book_now_link',
    'label' => 'Event Book Now Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_for'.
  $field_instances['node-events_detail-field_event_for'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_for',
    'label' => 'Event For',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_free_link'.
  $field_instances['node-events_detail-field_event_free_link'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_free_link',
    'label' => 'Event Free Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_sold_out'.
  $field_instances['node-events_detail-field_event_sold_out'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_sold_out',
    'label' => 'Event Sold out message',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_status'.
  $field_instances['node-events_detail-field_event_status'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_status',
    'label' => 'Event Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-events_detail-field_events_related_activities'.
  $field_instances['node-events_detail-field_events_related_activities'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'overview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_events_related_activities',
    'label' => 'Paragraphs Related Activities',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_column_image_left_image_right' => -1,
        '2_column_image_left_no_image' => -1,
        '2_column_left_text_only' => -1,
        '2_column_text_left_image_right' => -1,
        '3_column_text_left_image_right' => -1,
        'attachments' => -1,
        'block_quote' => -1,
        'bulleted_list' => -1,
        'button' => -1,
        'embed_video' => -1,
        'full_width_image_caption' => -1,
        'full_width_video_header' => -1,
        'header_gallery' => -1,
        'image_left_2_3_width' => -1,
        'image_left_text_right' => -1,
        'image_reading_width_colorbox' => -1,
        'reading_width_image_caption' => -1,
        'reading_width_maps' => -1,
        'reading_width_webform' => -1,
        'related_activities' => 'related_activities',
        'text_reading_width' => -1,
        'title_section' => -1,
      ),
      'bundle_weights' => array(
        '2_column_image_left_image_right' => 2,
        '2_column_image_left_no_image' => 3,
        '2_column_left_text_only' => 4,
        '2_column_text_left_image_right' => 5,
        '3_column_text_left_image_right' => 6,
        'attachments' => 7,
        'block_quote' => 8,
        'bulleted_list' => 9,
        'button' => 10,
        'embed_video' => 11,
        'full_width_image_caption' => 12,
        'full_width_video_header' => 13,
        'header_gallery' => 14,
        'image_left_2_3_width' => 15,
        'image_left_text_right' => 16,
        'image_reading_width_colorbox' => 17,
        'reading_width_image_caption' => 18,
        'reading_width_maps' => 19,
        'reading_width_webform' => 20,
        'related_activities' => 21,
        'text_reading_width' => 22,
        'title_section' => 23,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_homepage_card_tag'.
  $field_instances['node-events_detail-field_homepage_card_tag'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_homepage_card_tag',
    'label' => 'Card Tag',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_homepage_image'.
  $field_instances['node-events_detail-field_homepage_image'] = array(
    'bundle' => 'events_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_homepage_image',
    'label' => 'Homepage Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_homepage_publish_dates'.
  $field_instances['node-events_detail-field_homepage_publish_dates'] = array(
    'bundle' => 'events_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_homepage_publish_dates',
    'label' => 'Add Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_homepage_weight'.
  $field_instances['node-events_detail-field_homepage_weight'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_homepage_weight',
    'label' => 'Weight',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_paragraphs_entity'.
  $field_instances['node-events_detail-field_paragraphs_entity'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'overview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'overview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_paragraphs_entity',
    'label' => 'Paragraphs Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_column_image_left_image_right' => '2_column_image_left_image_right',
        '2_column_image_left_no_image' => '2_column_image_left_no_image',
        '2_column_left_text_only' => '2_column_left_text_only',
        '2_column_text_left_image_right' => '2_column_text_left_image_right',
        '3_column_text_left_image_right' => '3_column_text_left_image_right',
        'attachments' => 'attachments',
        'block_quote' => 'block_quote',
        'bulleted_list' => 'bulleted_list',
        'button' => 'button',
        'embed_video' => 'embed_video',
        'full_width_image_caption' => -1,
        'full_width_video_header' => -1,
        'header_gallery' => -1,
        'header_image_left_image_right' => -1,
        'header_image_lightbox' => -1,
        'image_left_2_3_width' => 'image_left_2_3_width',
        'image_left_text_right' => 'image_left_text_right',
        'image_reading_width_colorbox' => 'image_reading_width_colorbox',
        'reading_width_image_caption' => 'reading_width_image_caption',
        'reading_width_maps' => 'reading_width_maps',
        'reading_width_webform' => 'reading_width_webform',
        'related_activities' => -1,
        'text_reading_width' => 'text_reading_width',
        'title_section' => 'title_section',
      ),
      'bundle_weights' => array(
        '2_column_image_left_image_right' => 2,
        '2_column_image_left_no_image' => 3,
        '2_column_left_text_only' => 4,
        '2_column_text_left_image_right' => 5,
        '3_column_text_left_image_right' => 6,
        'attachments' => 7,
        'block_quote' => 8,
        'bulleted_list' => 9,
        'button' => 10,
        'embed_video' => 11,
        'full_width_image_caption' => 12,
        'full_width_video_header' => 35,
        'header_gallery' => 13,
        'header_image_left_image_right' => -48,
        'header_image_lightbox' => -48,
        'image_left_2_3_width' => 14,
        'image_left_text_right' => 15,
        'image_reading_width_colorbox' => 16,
        'reading_width_image_caption' => 17,
        'reading_width_maps' => 18,
        'reading_width_webform' => 19,
        'related_activities' => 20,
        'text_reading_width' => 21,
        'title_section' => 22,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-events_detail-field_paragraphs_header_section'.
  $field_instances['node-events_detail-field_paragraphs_header_section'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_paragraphs_header_section',
    'label' => 'Paragraphs Header Section',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_column_image_left_image_right' => -1,
        '2_column_image_left_no_image' => -1,
        '2_column_left_text_only' => -1,
        '2_column_text_left_image_right' => -1,
        '3_column_text_left_image_right' => -1,
        'attachments' => -1,
        'block_quote' => -1,
        'bulleted_list' => -1,
        'button' => -1,
        'embed_video' => -1,
        'full_width_image_caption' => 'full_width_image_caption',
        'full_width_video_header' => 'full_width_video_header',
        'header_gallery' => 'header_gallery',
        'header_image_left_image_right' => 'header_image_left_image_right',
        'header_image_lightbox' => 'header_image_lightbox',
        'image_left_2_3_width' => -1,
        'image_left_text_right' => -1,
        'image_reading_width_colorbox' => -1,
        'reading_width_image_caption' => -1,
        'reading_width_maps' => -1,
        'reading_width_webform' => -1,
        'related_activities' => -1,
        'text_reading_width' => -1,
        'title_section' => -1,
      ),
      'bundle_weights' => array(
        '2_column_image_left_image_right' => 2,
        '2_column_image_left_no_image' => 3,
        '2_column_left_text_only' => 4,
        '2_column_text_left_image_right' => 5,
        '3_column_text_left_image_right' => 6,
        'attachments' => 7,
        'block_quote' => 8,
        'bulleted_list' => 9,
        'button' => 10,
        'embed_video' => 11,
        'full_width_image_caption' => 12,
        'full_width_video_header' => 13,
        'header_gallery' => 14,
        'header_image_left_image_right' => 15,
        'header_image_lightbox' => 16,
        'image_left_2_3_width' => 17,
        'image_left_text_right' => 18,
        'image_reading_width_colorbox' => 19,
        'reading_width_image_caption' => 20,
        'reading_width_maps' => 21,
        'reading_width_webform' => 22,
        'related_activities' => 23,
        'text_reading_width' => 24,
        'title_section' => 25,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_show_in_current_season'.
  $field_instances['node-events_detail-field_show_in_current_season'] = array(
    'bundle' => 'events_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'overview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_in_current_season',
    'label' => 'Show in current season',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'M d, Y',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_show_in_future_season'.
  $field_instances['node-events_detail-field_show_in_future_season'] = array(
    'bundle' => 'events_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'overview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_in_future_season',
    'label' => 'Show in future season',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'M d, Y',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_show_membership_block'.
  $field_instances['node-events_detail-field_show_membership_block'] = array(
    'bundle' => 'events_detail',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'overview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_membership_block',
    'label' => 'Show Membership Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_show_share_block'.
  $field_instances['node-events_detail-field_show_share_block'] = array(
    'bundle' => 'events_detail',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_show_share_block',
    'label' => 'Show Share Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_whats_on_weight'.
  $field_instances['node-events_detail-field_whats_on_weight'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_whats_on_weight',
    'label' => 'Whats on Weight',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Dates');
  t('Card Tag');
  t('Event Artists');
  t('Event Book Now Link');
  t('Event For');
  t('Event Free Link');
  t('Event Sold out message');
  t('Event Status');
  t('Homepage Image');
  t('Paragraphs Content');
  t('Paragraphs Header Section');
  t('Paragraphs Related Activities');
  t('Show Membership Block');
  t('Show Share Block');
  t('Show in current season');
  t('Show in future season');
  t('Weight');
  t('Whats on Weight');

  return $field_instances;
}
