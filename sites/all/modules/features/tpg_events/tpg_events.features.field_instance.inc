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

  // Exported field_instance: 'node-events_detail-body'.
  $field_instances['node-events_detail-body'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

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
        'weight' => 6,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_dates'.
  $field_instances['node-events_detail-field_event_dates'] = array(
    'bundle' => 'events_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short_date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_dates',
    'label' => 'Event Dates',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_for'.
  $field_instances['node-events_detail-field_event_for'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => ' Select list of who the event is “for”',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_for',
    'label' => 'Event For',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_overview_image'.
  $field_instances['node-events_detail-field_event_overview_image'] = array(
    'bundle' => 'events_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_overview_image',
    'label' => 'Event Overview Image',
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
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          '2_column_image_left_402x267' => '2_column_image_left_402x267',
          '2_column_image_left_and_right_400x472' => '2_column_image_left_and_right_400x472',
          '2_column_image_right_400_39x601_91' => '2_column_image_right_400_39x601_91',
          '3_column_image_left_505x337' => '3_column_image_left_505x337',
          'full_width_image_1285x500' => 'full_width_image_1285x500',
          'gallery_image_reading_width_962x642' => 'gallery_image_reading_width_962x642',
          'image_2_3_width_535x631' => 'image_2_3_width_535x631',
          'image_full_reading_width_820x622' => 'image_full_reading_width_820x622',
          'image_right_350x350' => 'image_right_350x350',
        ),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_type'.
  $field_instances['node-events_detail-field_event_type'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_type',
    'label' => 'Event Type',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_event_venue'.
  $field_instances['node-events_detail-field_event_venue'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_map',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_venue',
    'label' => 'Event Venue',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
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
        'weight' => 15,
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
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 42,
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
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_paragraphs_entity',
    'label' => 'Paragraphs Entity',
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
        'full_width_image_caption' => 'full_width_image_caption',
        'full_width_video_header' => -1,
        'header_gallery' => 'header_gallery',
        'image_left_2_3_width' => 'image_left_2_3_width',
        'image_left_text_right' => 'image_left_text_right',
        'image_reading_width_colorbox' => 'image_reading_width_colorbox',
        'reading_width_image_caption' => 'reading_width_image_caption',
        'reading_width_maps' => -1,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_paragraphs_video'.
  $field_instances['node-events_detail-field_paragraphs_video'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
    'entity_type' => 'node',
    'field_name' => 'field_paragraphs_video',
    'label' => 'Paragraphs Video',
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
        'full_width_video_header' => 'full_width_video_header',
        'header_gallery' => -1,
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
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_related_viewpoints'.
  $field_instances['node-events_detail-field_related_viewpoints'] = array(
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_viewpoints',
    'label' => 'Related Viewpoints',
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
      'weight' => 12,
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
        'weight' => 8,
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
        'weight' => 10,
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
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_show_video_header'.
  $field_instances['node-events_detail-field_show_video_header'] = array(
    'bundle' => 'events_detail',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
    'entity_type' => 'node',
    'field_name' => 'field_show_video_header',
    'label' => 'Show Video Header',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-events_detail-field_tags_and_viewpoints'.
  $field_instances['node-events_detail-field_tags_and_viewpoints'] = array(
    'bundle' => 'events_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags_and_viewpoints',
    'label' => 'Tags and Viewpoints',
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
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Select list of who the event is “for”');
  t('Body');
  t('Event Artists');
  t('Event Dates');
  t('Event For');
  t('Event Overview Image');
  t('Event Type');
  t('Event Venue');
  t('Paragraphs Entity');
  t('Paragraphs Related Activities');
  t('Paragraphs Video');
  t('Related Viewpoints');
  t('Show Membership Block');
  t('Show Video Header');
  t('Show in current season');
  t('Show in future season');
  t('Tags and Viewpoints');

  return $field_instances;
}
