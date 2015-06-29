<?php

require_once 'variablemembershipgraceperiod.civix.php';

/**
 * Implements hook_civicrm_config().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_config
 */
function variablemembershipgraceperiod_civicrm_config(&$config) {
  _variablemembershipgraceperiod_civix_civicrm_config($config);
}

/**
 * Implements hook_civicrm_xmlMenu().
 *
 * @param $files array(string)
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_xmlMenu
 */
function variablemembershipgraceperiod_civicrm_xmlMenu(&$files) {
  _variablemembershipgraceperiod_civix_civicrm_xmlMenu($files);
}

/**
 * Implements hook_civicrm_install().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_install
 */
function variablemembershipgraceperiod_civicrm_install() {
  _variablemembershipgraceperiod_civix_civicrm_install();
}

/**
 * Implements hook_civicrm_uninstall().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_uninstall
 */
function variablemembershipgraceperiod_civicrm_uninstall() {
  _variablemembershipgraceperiod_civix_civicrm_uninstall();
}

/**
 * Implements hook_civicrm_enable().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_enable
 */
function variablemembershipgraceperiod_civicrm_enable() {
  _variablemembershipgraceperiod_civix_civicrm_enable();
}

/**
 * Implements hook_civicrm_disable().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_disable
 */
function variablemembershipgraceperiod_civicrm_disable() {
  _variablemembershipgraceperiod_civix_civicrm_disable();
}

/**
 * Implements hook_civicrm_upgrade().
 *
 * @param $op string, the type of operation being performed; 'check' or 'enqueue'
 * @param $queue CRM_Queue_Queue, (for 'enqueue') the modifiable list of pending up upgrade tasks
 *
 * @return mixed
 *   Based on op. for 'check', returns array(boolean) (TRUE if upgrades are pending)
 *                for 'enqueue', returns void
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_upgrade
 */
function variablemembershipgraceperiod_civicrm_upgrade($op, CRM_Queue_Queue $queue = NULL) {
  return _variablemembershipgraceperiod_civix_civicrm_upgrade($op, $queue);
}

/**
 * Implements hook_civicrm_managed().
 *
 * Generate a list of entities to create/deactivate/delete when this module
 * is installed, disabled, uninstalled.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_managed
 */
function variablemembershipgraceperiod_civicrm_managed(&$entities) {
  _variablemembershipgraceperiod_civix_civicrm_managed($entities);
}

/**
 * Implements hook_civicrm_caseTypes().
 *
 * Generate a list of case-types
 *
 * Note: This hook only runs in CiviCRM 4.4+.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_caseTypes
 */
function variablemembershipgraceperiod_civicrm_caseTypes(&$caseTypes) {
  _variablemembershipgraceperiod_civix_civicrm_caseTypes($caseTypes);
}

/**
 * Implements hook_civicrm_angularModules().
 *
 * Generate a list of Angular modules.
 *
 * Note: This hook only runs in CiviCRM 4.5+. It may
 * use features only available in v4.6+.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_caseTypes
 */
function variablemembershipgraceperiod_civicrm_angularModules(&$angularModules) {
_variablemembershipgraceperiod_civix_civicrm_angularModules($angularModules);
}

/**
 * Implements hook_civicrm_alterSettingsFolders().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_alterSettingsFolders
 */
function variablemembershipgraceperiod_civicrm_alterSettingsFolders(&$metaDataFolders = NULL) {
  _variablemembershipgraceperiod_civix_civicrm_alterSettingsFolders($metaDataFolders);
}



function variablemembershipgraceperiod_civicrm_alterCalculatedMembershipStatus(&$membershipStatus, $arguments, $membership) {

  /*
  2 - Standard - Year on year
  3 - Standard - Annual Direct Debit
  4 - Concession - Year on year
  5 - Concession - Direct Debit
  6 - Associate membership - Year on year
  7 - Associate membership - Direct debit
  8 - Patrons - Direct Debit
  9 - Patrons - Annual Direct Debit
  10 - Patrons - Year on year
  14 - Directors Circle - Monthly direct debit
  15 - Directors Circle - Annual direct debit
  16 - Directors Circle - Year on year
  17 - TPG council - Monthly direct debit
  18 - TPG council - Annual direct debit
  19 - TPG council - Year on year
  20 - TPG Contemporaries - Discounted Rate - Year on Year
  21 - TPG Contemporaries - Discounted Rate - Monthly Direct Debit
  22 - TPG Contemporaries - Discounted Rate - Annual Direct Debit
  */

  // memberships that are to have a grace period of 3 months.
  $memberships = array(8,9,10,14,15,16,18,19,20,21,22);

  if(empty($arguments['membership_type_id']) || !in_array($arguments['membership_type_id'], $memberships)) {
    return;
  }

  $statusDate = strtotime($arguments['status_date']);
  $endDate = strtotime($arguments['end_date']);
  $graceEndDate = strtotime('+ 3 months', $endDate);

  if($statusDate > $endDate && $statusDate <= $graceEndDate) {

    $membershipStatus['name'] = 'Grace';
    $membershipStatus['id'] = 3;

  }


  }
