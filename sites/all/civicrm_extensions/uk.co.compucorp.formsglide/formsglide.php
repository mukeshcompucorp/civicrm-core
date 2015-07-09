<?php

require_once 'formsglide.civix.php';

/**
 * Implementation of hook_civicrm_config
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_config
 */
function formsglide_civicrm_config(&$config) {
  _formsglide_civix_civicrm_config($config);
}

/**
 * Implementation of hook_civicrm_xmlMenu
 *
 * @param $files array(string)
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_xmlMenu
 */
function formsglide_civicrm_xmlMenu(&$files) {
  _formsglide_civix_civicrm_xmlMenu($files);
}

/**
 * Implementation of hook_civicrm_install
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_install
 */
function formsglide_civicrm_install() {
  return _formsglide_civix_civicrm_install();
}

/**
 * Implementation of hook_civicrm_uninstall
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_uninstall
 */
function formsglide_civicrm_uninstall() {
  return _formsglide_civix_civicrm_uninstall();
}

/**
 * Implementation of hook_civicrm_enable
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_enable
 */
function formsglide_civicrm_enable() {
  return _formsglide_civix_civicrm_enable();
}

/**
 * Implementation of hook_civicrm_disable
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_disable
 */
function formsglide_civicrm_disable() {
  return _formsglide_civix_civicrm_disable();
}

/**
 * Implementation of hook_civicrm_upgrade
 *
 * @param $op string, the type of operation being performed; 'check' or 'enqueue'
 * @param $queue CRM_Queue_Queue, (for 'enqueue') the modifiable list of pending up upgrade tasks
 *
 * @return mixed  based on op. for 'check', returns array(boolean) (TRUE if upgrades are pending)
 *                for 'enqueue', returns void
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_upgrade
 */
function formsglide_civicrm_upgrade($op, CRM_Queue_Queue $queue = NULL) {
  return _formsglide_civix_civicrm_upgrade($op, $queue);
}

/**
 * Implementation of hook_civicrm_managed
 *
 * Generate a list of entities to create/deactivate/delete when this module
 * is installed, disabled, uninstalled.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_managed
 */
function formsglide_civicrm_managed(&$entities) {
  return _formsglide_civix_civicrm_managed($entities);
}

/**
 * Implementation of hook_civicrm_caseTypes
 *
 * Generate a list of case-types
 *
 * Note: This hook only runs in CiviCRM 4.4+.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_caseTypes
 */
function formsglide_civicrm_caseTypes(&$caseTypes) {
  _formsglide_civix_civicrm_caseTypes($caseTypes);
}

/**
 * Implementation of hook_civicrm_alterSettingsFolders
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_alterSettingsFolders
 */
function formsglide_civicrm_alterSettingsFolders(&$metaDataFolders = NULL) {
  _formsglide_civix_civicrm_alterSettingsFolders($metaDataFolders);
}

/**
 *  * Implementation of hook_civicrm_alterTemplateFile
 *   *
 *    * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_alterTemplateFile
 *     
 */
function formsglide_civicrm_alterTemplateFile($formName, &$form, $context, &$tplName) {
  if($formName=="CRM_Event_Form_Registration_Register"||$formName=="CRM_Event_Form_Registration_AdditionalParticipant"){
  CRM_Core_Resources::singleton()->addScriptFile('uk.co.compucorp.civicrm.formsglide', 'library/sglide/jquery.sglide.2.1.2.min.js', 200, "html-header");
  CRM_Core_Resources::singleton()->addScriptFile('uk.co.compucorp.civicrm.formsglide', 'library/sglide/custom.form.slider.js', 201, "html-header");
  CRM_Core_Resources::singleton()->addStyleFile('uk.co.compucorp.civicrm.formsglide', 'library/sglide/custom.form.slider.css');
  }
}
