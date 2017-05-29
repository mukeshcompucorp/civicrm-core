<?php
/**
 * @file
 * tpg_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpg_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tpg_paragraphs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function tpg_paragraphs_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['M d, Y'] = 'M d, Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function tpg_paragraphs_date_format_types() {
  $format_types = array();
  // Exported date format type: short_date_only
  $format_types['short_date_only'] = 'Short date only';
  return $format_types;
}

/**
 * Implements hook_image_default_styles().
 */
function tpg_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: 2_column_image_left_402x267.
  $styles['2_column_image_left_402x267'] = array(
    'label' => '2 Column Image Left 402x267',
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 402,
          'height' => 267.36,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => '2_column_image_left_402x267',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 2_column_image_left_and_right_400x472.
  $styles['2_column_image_left_and_right_400x472'] = array(
    'label' => '2 Column Image Left and Right 400x472',
    'effects' => array(
      7 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 400,
          'height' => 471.88,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => '2_column_image_left_and_right_400x472',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 2_column_image_right_400_39x601_91.
  $styles['2_column_image_right_400_39x601_91'] = array(
    'label' => '2 Column Image Right 400.39x601.91',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 400.39,
          'height' => 601.91,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => '2_column_image_right_400_39x601_91',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 3_column_image_left_505x337.
  $styles['3_column_image_left_505x337'] = array(
    'label' => '3 Column Image Left 505x337',
    'effects' => array(
      6 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 505,
          'height' => 337,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => '3_column_image_left_505x337',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: full_width_image_1285x500.
  $styles['full_width_image_1285x500'] = array(
    'label' => 'Full Width Image 1285x500',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1285,
          'height' => 500,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'full_width_image_1285x500',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: gallery_image_reading_width_962x642.
  $styles['gallery_image_reading_width_962x642'] = array(
    'label' => 'Gallery Image Reading width 962x642',
    'effects' => array(
      11 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 962,
          'height' => 642,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'gallery_image_reading_width_962x642',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: image_2_3_width_535x631.
  $styles['image_2_3_width_535x631'] = array(
    'label' => 'Image 2/3 width 535x631',
    'effects' => array(
      10 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 535,
          'height' => 631,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'image_2_3_width_535x631',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: image_full_reading_width_820x622.
  $styles['image_full_reading_width_820x622'] = array(
    'label' => 'Image full reading width 820x622',
    'effects' => array(
      9 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 820,
          'height' => 622,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'image_full_reading_width_820x622',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: image_right_350x350.
  $styles['image_right_350x350'] = array(
    'label' => 'Image Right 350x350',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 350,
          'height' => 350,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'image_right_350x350',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: overview_page_image_400x271.
  $styles['overview_page_image_400x271'] = array(
    'label' => 'Overview page Image 400x271',
    'effects' => array(
      12 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 400,
          'height' => 271,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'overview_page_image_400x271',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tpg_paragraphs_node_info() {
  $items = array(
    'paragraphs_page' => array(
      'name' => t('Paragraphs Page'),
      'base' => 'node_content',
      'description' => t('Use <em> paragraphs_page </em> for creating content using Paragraph Bundles.'),
      'has_title' => '1',
      'title_label' => t('Internal Reference Name/Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function tpg_paragraphs_paragraphs_info() {
  $items = array(
    '2_column_image_left_image_right' => array(
      'name' => '2 Column: Image Left + Image Right',
      'bundle' => '2_column_image_left_image_right',
      'locked' => '1',
    ),
    '2_column_image_left_no_image' => array(
      'name' => '2 Column: Image Left + No Image',
      'bundle' => '2_column_image_left_no_image',
      'locked' => '1',
    ),
    '2_column_left_text_only' => array(
      'name' => '2 Column: Left Text Only',
      'bundle' => '2_column_left_text_only',
      'locked' => '1',
    ),
    '2_column_text_left_image_right' => array(
      'name' => '2 Column: Text Left + Image Right',
      'bundle' => '2_column_text_left_image_right',
      'locked' => '1',
    ),
    '3_column_text_left_image_right' => array(
      'name' => '3 Column: Text Left + Image Right',
      'bundle' => '3_column_text_left_image_right',
      'locked' => '1',
    ),
    'attachments' => array(
      'name' => 'Attachments',
      'bundle' => 'attachments',
      'locked' => '1',
    ),
    'block_quote' => array(
      'name' => 'Block quote',
      'bundle' => 'block_quote',
      'locked' => '1',
    ),
    'bulleted_list' => array(
      'name' => 'Bulleted List',
      'bundle' => 'bulleted_list',
      'locked' => '1',
    ),
    'button' => array(
      'name' => 'Button',
      'bundle' => 'button',
      'locked' => '1',
    ),
    'embed_video' => array(
      'name' => 'Embed Video',
      'bundle' => 'embed_video',
      'locked' => '1',
    ),
    'full_width_image_caption' => array(
      'name' => 'Full Width Image + Caption',
      'bundle' => 'full_width_image_caption',
      'locked' => '1',
    ),
    'header_gallery' => array(
      'name' => 'Header Gallery',
      'bundle' => 'header_gallery',
      'locked' => '1',
    ),
    'image_left_2_3_width' => array(
      'name' => '2/3 Width Image Left',
      'bundle' => 'image_left_2_3_width',
      'locked' => '1',
    ),
    'image_left_text_right' => array(
      'name' => 'Image Left + Text Right',
      'bundle' => 'image_left_text_right',
      'locked' => '1',
    ),
    'image_reading_width_colorbox' => array(
      'name' => 'Reading Width Image + Colorbox',
      'bundle' => 'image_reading_width_colorbox',
      'locked' => '1',
    ),
    'reading_width_image_caption' => array(
      'name' => 'Reading Width Image + Caption',
      'bundle' => 'reading_width_image_caption',
      'locked' => '1',
    ),
    'reading_width_maps' => array(
      'name' => 'Reading Width Location Maps',
      'bundle' => 'reading_width_maps',
      'locked' => '1',
    ),
    'reading_width_webform' => array(
      'name' => 'Reading Width Webform',
      'bundle' => 'reading_width_webform',
      'locked' => '1',
    ),
    'related_activities' => array(
      'name' => 'Related Activities',
      'bundle' => 'related_activities',
      'locked' => '1',
    ),
    'text_reading_width' => array(
      'name' => 'Reading Width Text',
      'bundle' => 'text_reading_width',
      'locked' => '1',
    ),
    'title_section' => array(
      'name' => 'Title Section',
      'bundle' => 'title_section',
      'locked' => '1',
    ),
  );
  return $items;
}
