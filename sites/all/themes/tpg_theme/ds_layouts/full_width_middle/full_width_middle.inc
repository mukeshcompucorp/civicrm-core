<?php

/**
 * @file
 * Display Suite Full width middle configuration.
 */

function ds_full_width_middle() {
  return array(
    'label' => t('Full width middle'),
    'regions' => array(
      'sidebar_first' => t('First sidebar'),
      'center' => t('Center'),
      'sidebar_second' => t('Second sidebar'),
    ),
  );
}
