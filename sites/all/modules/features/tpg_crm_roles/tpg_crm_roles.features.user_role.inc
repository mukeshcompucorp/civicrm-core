<?php
/**
 * @file
 * tpg_crm_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tpg_crm_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
    'machine_name' => '',
  );

  // Exported role: civicrm administrator.
  $roles['civicrm administrator'] = array(
    'name' => 'civicrm administrator',
    'weight' => 4,
    'machine_name' => 'civicrm_administrator',
  );

  // Exported role: content creator.
  $roles['content creator'] = array(
    'name' => 'content creator',
    'weight' => 3,
    'machine_name' => 'content_creator',
  );

  return $roles;
}
