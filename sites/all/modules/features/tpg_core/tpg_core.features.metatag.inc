<?php
/**
 * @file
 * tpg_core.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function tpg_core_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:events_detail.
  $config['node:events_detail'] = array(
    'instance' => 'node:events_detail',
    'config' => array(
      'twitter:description' => array(
        'value' => '[node:field-paragraphs-entity:0:field-paragraph-description:value]',
      ),
      'twitter:image' => array(
        'value' => '[node:field-paragraphs-entity:0:field_paragraphs_overview_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:paragraphs_page.
  $config['node:paragraphs_page'] = array(
    'instance' => 'node:paragraphs_page',
    'config' => array(
      'twitter:description' => array(
        'value' => '[node:field-paragraphs-content:0:field-paragraph-description:value]',
      ),
      'twitter:image' => array(
        'value' => '[node:field-paragraphs-content:0:field_paragraphs_overview_image]',
      ),
    ),
  );

  return $config;
}
