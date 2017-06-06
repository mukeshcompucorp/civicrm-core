<?php

/**
 * @file
 * Display Suite Full width narrow configuration.
 */

function ds_full_width_narrow() {
  return array(
    'label' => t('Full width narrow'),
    'regions' => array(
      'sidebar_first' => t('First sidebar'),
      'center' => t('Center'),
      'sidebar_second' => t('Second sidebar'),
    ),
  );
}
