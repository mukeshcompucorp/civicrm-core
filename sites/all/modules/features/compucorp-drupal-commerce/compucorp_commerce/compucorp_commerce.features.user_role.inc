<?php
/**
 * @file
 * compucorp_commerce.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function compucorp_commerce_user_default_roles() {
  $roles = array();

  // Exported role: Shop admin.
  $roles['Shop admin'] = array(
    'name' => 'Shop admin',
    'weight' => 3,
  );

  return $roles;
}
