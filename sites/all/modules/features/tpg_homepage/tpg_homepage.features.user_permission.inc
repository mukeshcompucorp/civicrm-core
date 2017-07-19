<?php
/**
 * @file
 * tpg_homepage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpg_homepage_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use Search Autocomplete'.
  $permissions['use Search Autocomplete'] = array(
    'name' => 'use Search Autocomplete',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_autocomplete',
  );

  return $permissions;
}
