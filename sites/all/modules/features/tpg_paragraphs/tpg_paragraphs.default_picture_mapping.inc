<?php
/**
 * @file
 * tpg_paragraphs.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function tpg_paragraphs_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Full width responsive header image';
  $picture_mapping->machine_name = 'full_width_responsive_header_image';
  $picture_mapping->breakpoint_group = 'responsive_header_image';
  $picture_mapping->mapping = array(
    'custom.user.header_image_mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_custom_user_header_image_mobile_1x',
      ),
    ),
    'custom.user.header_image_tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_custom_user_header_image_tablet_1x',
      ),
    ),
    'custom.user.header_image_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_custom_user_header_image_wide_1x',
      ),
    ),
    'custom.user.header_image_original' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive_custom_user_header_image_original_1x',
      ),
    ),
  );
  $export['full_width_responsive_header_image'] = $picture_mapping;

  return $export;
}
