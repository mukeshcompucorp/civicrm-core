<?php

/**
 * @file
 * Display Suite Title section configuration.
 */

function ds_title_section() {
  return array(
    'label' => t('Title section'),
    'regions' => array(
      'header' => t('Header'),
      'center' => t('Center'),
    ),
    // Uncomment if you want to include a CSS file for this layout (title_section.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (title_section.png)
    // 'image' => TRUE,
  );
}
