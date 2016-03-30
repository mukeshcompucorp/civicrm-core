<?php

require_once 'mailchimp_converter.civix.php';

/**
 * Implements hook_civicrm_config().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_config
 */
function mailchimp_converter_civicrm_config(&$config) {
  _mailchimp_converter_civix_civicrm_config($config);
}

/**
 * Implements hook_civicrm_xmlMenu().
 *
 * @param $files array(string)
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_xmlMenu
 */
function mailchimp_converter_civicrm_xmlMenu(&$files) {
  _mailchimp_converter_civix_civicrm_xmlMenu($files);
}

/**
 * Implements hook_civicrm_install().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_install
 */
function mailchimp_converter_civicrm_install() {
  _mailchimp_converter_civix_civicrm_install();
}

/**
 * Implements hook_civicrm_uninstall().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_uninstall
 */
function mailchimp_converter_civicrm_uninstall() {
  _mailchimp_converter_civix_civicrm_uninstall();
}

/**
 * Implements hook_civicrm_enable().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_enable
 */
function mailchimp_converter_civicrm_enable() {
  _mailchimp_converter_civix_civicrm_enable();
}

/**
 * Implements hook_civicrm_disable().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_disable
 */
function mailchimp_converter_civicrm_disable() {
  _mailchimp_converter_civix_civicrm_disable();
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
function mailchimp_converter_civicrm_upgrade($op, CRM_Queue_Queue $queue = NULL) {
  return _mailchimp_converter_civix_civicrm_upgrade($op, $queue);
}

/**
 * Implements hook_civicrm_managed().
 *
 * Generate a list of entities to create/deactivate/delete when this module
 * is installed, disabled, uninstalled.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_managed
 */
function mailchimp_converter_civicrm_managed(&$entities) {
  _mailchimp_converter_civix_civicrm_managed($entities);
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
function mailchimp_converter_civicrm_caseTypes(&$caseTypes) {
  _mailchimp_converter_civix_civicrm_caseTypes($caseTypes);
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
function mailchimp_converter_civicrm_angularModules(&$angularModules) {
_mailchimp_converter_civix_civicrm_angularModules($angularModules);
}

/**
 * Implements hook_civicrm_alterSettingsFolders().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_alterSettingsFolders
 */
function mailchimp_converter_civicrm_alterSettingsFolders(&$metaDataFolders = NULL) {
  _mailchimp_converter_civix_civicrm_alterSettingsFolders($metaDataFolders);
}

function mailchimp_converter_civicrm_navigationMenu(&$params) {
  $navId = CRM_Core_DAO::singleValueQuery("SELECT max(id) FROM civicrm_navigation");

  if (is_integer($navId)) {
    $navId++;
  }
  // Find the Report menu
  $reportID = CRM_Core_DAO::getFieldValue('CRM_Core_DAO_Navigation', 'Mailings', 'id', 'name');
  $params[$reportID]['child'][$navId] = array (
    'attributes' => array (
      'label' => ts('Convert Mailchimp template to CiviCRM HTML'),
      'name' => 'Convert Mailchimp template to CiviCRM HTML',
      'url' => 'civicrm/mailchimp/convert',
      'separator' => 0,
      'parentID' => $reportID,
      'navID' => $navId,
      'active' => 1
    )
  );

  $administerId = CRM_Core_DAO::getFieldValue('CRM_Core_DAO_Navigation', 'Administer', 'id', 'name');
  $civimailId = CRM_Core_DAO::getFieldValue('CRM_Core_DAO_Navigation', 'CiviMail', 'id', 'name');
  $navId++;
  $params[$administerId]['child'][$civimailId]['child'][$navId] = array (
    'attributes' => array (
      'label' => ts('Manage Mailchimp Replacements'),
      'name' => 'Mailchimp Mailchimp Replacements',
      'url' => 'civicrm/mailchimp/token-mappings',
      'separator' => 0,
      'parentID' => $civimailId,
      'navID' => $navId,
      'active' => 1
    ),
    'child' => NULL
  );
}

/**
 * Functions below this ship commented out. Uncomment as required.
 *

/**
 * Implements hook_civicrm_preProcess().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_preProcess
 *
function mailchimp_converter_civicrm_preProcess($formName, &$form) {

}

*/
