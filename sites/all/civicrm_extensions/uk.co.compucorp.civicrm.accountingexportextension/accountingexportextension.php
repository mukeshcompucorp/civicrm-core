<?php

require_once 'accountingexportextension.civix.php';

/**
 * Implements hook_civicrm_config().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_config
 */
function accountingexportextension_civicrm_config(&$config)
{
    _accountingexportextension_civix_civicrm_config($config);
}

/**
 * Implements hook_civicrm_xmlMenu().
 *
 * @param $files array(string)
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_xmlMenu
 */
function accountingexportextension_civicrm_xmlMenu(&$files)
{
    _accountingexportextension_civix_civicrm_xmlMenu($files);
}

/**
 * Implements hook_civicrm_install().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_install
 */
function accountingexportextension_civicrm_install()
{
    _accountingexportextension_civix_civicrm_install();
}

/**
 * Implements hook_civicrm_uninstall().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_uninstall
 */
function accountingexportextension_civicrm_uninstall()
{
    _accountingexportextension_civix_civicrm_uninstall();
}

/**
 * Implements hook_civicrm_enable().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_enable
 */
function accountingexportextension_civicrm_enable()
{
    _accountingexportextension_civix_civicrm_enable();
}

/**
 * Implements hook_civicrm_disable().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_disable
 */
function accountingexportextension_civicrm_disable()
{
    _accountingexportextension_civix_civicrm_disable();
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
function accountingexportextension_civicrm_upgrade($op, CRM_Queue_Queue $queue = NULL)
{
    return _accountingexportextension_civix_civicrm_upgrade($op, $queue);
}

/**
 * Implements hook_civicrm_managed().
 *
 * Generate a list of entities to create/deactivate/delete when this module
 * is installed, disabled, uninstalled.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_managed
 */
function accountingexportextension_civicrm_managed(&$entities)
{
    _accountingexportextension_civix_civicrm_managed($entities);
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
function accountingexportextension_civicrm_caseTypes(&$caseTypes)
{
    _accountingexportextension_civix_civicrm_caseTypes($caseTypes);
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
function accountingexportextension_civicrm_angularModules(&$angularModules)
{
    _accountingexportextension_civix_civicrm_angularModules($angularModules);
}

/**
 * Implements hook_civicrm_alterSettingsFolders().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_alterSettingsFolders
 */
function accountingexportextension_civicrm_alterSettingsFolders(&$metaDataFolders = NULL)
{
    _accountingexportextension_civix_civicrm_alterSettingsFolders($metaDataFolders);
}


/**
 * Implements hook_civicrm_batchQuery().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_batchQuery
 */
function accountingexportextension_civicrm_batchQuery(&$query)
{

    $contributionInvoiceSettings = CRM_Core_BAO_Setting::getItem(CRM_Core_BAO_Setting::CONTRIBUTE_PREFERENCES_NAME, 'contribution_invoice_settings');

    $query = "
        SELECT

        eb.batch_id AS batch_id,
        c.contact_id AS contact_id,
        cc.contact_type AS contact_type,

        CONCAT('".$contributionInvoiceSettings['invoice_prefix']."',c.id) AS invoice_no,
        c.receive_date AS invoice_date,
        c.creditnote_id AS credit_note_id,

        ft.id as financial_trxn_id,
        ft.trxn_date,

        fa_to.accounting_code AS to_account_code,
        fa_to.name AS to_account_name,
        fa_to.account_type_code AS to_account_type_code,
        ft.total_amount AS debit_total_amount,
        ft.trxn_id AS trxn_id,
        cov.label AS payment_instrument,
        ft.check_number,
        c.source AS source,
        c.id AS contribution_id,

        ft.currency AS currency,
        cov_status.label AS status,
        CASE
        WHEN efti.entity_id IS NOT NULL
        THEN efti.amount
        ELSE eftc.amount
        END AS amount,
        fa_from.account_type_code AS credit_account_type_code,
        fa_from.accounting_code AS credit_account,
        fa_from.name AS credit_account_name,
        fac.account_type_code AS from_credit_account_type_code,
        fac.accounting_code AS from_credit_account,
        fac.name AS from_credit_account_name,
        fi.description AS item_description,

        fa_to.name as item_paid_for,

        ce.title AS event_name,
        cov2.name AS event_type,
        ce.start_date AS event_start,
        ce.end_date  AS event_end,

        cmt.name AS membership_type,
        cms.name AS membership_status,
        cm.join_date AS membership_join,
        cm.start_date AS membership_start,
        cm.end_date AS membership_end,

        c.receive_date as receive_date

        FROM civicrm_entity_batch eb
        LEFT JOIN civicrm_financial_trxn ft ON (eb.entity_id = ft.id AND eb.entity_table = 'civicrm_financial_trxn')
        LEFT JOIN civicrm_financial_account fa_to ON fa_to.id = ft.to_financial_account_id
        LEFT JOIN civicrm_financial_account fa_from ON fa_from.id = ft.from_financial_account_id
        LEFT JOIN civicrm_option_group cog ON cog.name = 'payment_instrument'
        LEFT JOIN civicrm_option_value cov ON (cov.value = ft.payment_instrument_id AND cov.option_group_id = cog.id)
        LEFT JOIN civicrm_entity_financial_trxn eftc ON (eftc.financial_trxn_id  = ft.id AND eftc.entity_table = 'civicrm_contribution')
        LEFT JOIN civicrm_contribution c ON c.id = eftc.entity_id
        LEFT JOIN civicrm_option_group cog_status ON cog_status.name = 'contribution_status'
        LEFT JOIN civicrm_option_value cov_status ON (cov_status.value = ft.status_id AND cov_status.option_group_id = cog_status.id)
        LEFT JOIN civicrm_entity_financial_trxn efti ON (efti.financial_trxn_id  = ft.id AND efti.entity_table = 'civicrm_financial_item')
        LEFT JOIN civicrm_financial_item fi ON fi.id = efti.entity_id
        LEFT JOIN civicrm_financial_account fac ON fac.id = fi.financial_account_id
        LEFT JOIN civicrm_financial_account fa ON fa.id = fi.financial_account_id

        LEFT JOIN civicrm_contact cc ON cc.id = c.contact_id
        LEFT JOIN civicrm_participant_payment pp ON pp.contribution_id = c.id

        LEFT JOIN civicrm_participant cp ON cp.id = pp.participant_id
        LEFT JOIN civicrm_event ce ON ce.id = cp.event_id
        LEFT JOIN civicrm_option_value cov2 ON cov2.id = ce.event_type_id
        LEFT JOIN civicrm_option_group cog2 ON  cog2.id = cov2.option_group_id AND cog2.name = 'event_type'

        LEFT JOIN civicrm_membership_payment cmp ON cmp.contribution_id = c.id
        LEFT JOIN civicrm_membership cm ON cmp.membership_id = cm.id
        LEFT JOIN civicrm_membership_type cmt ON cmt.id = cm.membership_type_id
        LEFT JOIN civicrm_membership_status cms ON cms.id = cm.status_id

        WHERE eb.batch_id = ( %1 )
      ";


}

/**
 * Implements hook_civicrm_batchItems().
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_batchItems
 */
function accountingexportextension_civicrm_batchItems(&$results, &$items)
{

    foreach($results as $key => &$result) {

        $items[$key] = null;

        $items[$key]['Batch ID'] = $result['batch_id'];
        $items[$key]['Contact ID'] = $result['contact_id'];
        //$data[$key]['Contribution ID'] = $result['contribution_id'];
        $items[$key]['Contact Type'] = $result['contact_type'];

        $items[$key]['Financial Trxn ID/Internal ID'] = $result['financial_trxn_id'];

        $items[$key]['Invoice No'] = $result['invoice_no'];
        $items[$key]['Invoice Date'] = $result['invoice_date'];
        $items[$key]['Credit Note ID'] = $result['credit_note_id'];

        $items[$key]['Transaction Date'] = $result['trxn_date'];

        $items[$key]['Debit Account'] = $result['to_account_code'];
        $items[$key]['Debit Account Name'] = $result['to_account_name'];
        $items[$key]['Debit Account Type'] = $result['to_account_type_code'];
        $items[$key]['Debit Account Amount (Unsplit)'] = $result['amount'];

        $items[$key]['Transaction ID (Unsplit)'] = $result['trxn_id'];
        $items[$key]['Debit amount (Split)'] = $result['amount'];

        $items[$key]['Payment Instrument'] = $result['payment_instrument'];
        $items[$key]['Cheque Number'] = $result['check_number'];

        $items[$key]['Source'] = $result['source'];
        $items[$key]['Currency'] = $result['currency'];
        $items[$key]['Transaction Status'] = $result['status'];
        $items[$key]['Amount'] = $result['amount'];

        if($result['credit_account'])
        {
            $items[$key]['Credit Account'] = $result['credit_account'];
            $items[$key]['Credit Account Type'] = $result['credit_account_type_code'];

            $items[$key]['Credit Account Name'] = $result['credit_account_name'];
        } else {
            $items[$key]['Credit Account'] = $result['from_credit_account'];
            $items[$key]['Credit Account Type'] = $result['from_credit_account_type_code'];

            $items[$key]['Credit Account Name'] = $result['from_credit_account_name'];
        }

        $items[$key]['Item Description'] = $result['item_description'];


        if(!is_null($result['event_type'])) {
            $items[$key]['Item paid for'] = 'Event';
        }

        if(!is_null($result['membership_type'])) {
            $items[$key]['Item paid for'] = 'Membership';
        }

        $items[$key]['Event Name'] = $result['event_name'];
        $items[$key]['Event Type'] = $result['event_type'];
        $items[$key]['Event Start Date'] = $result['event_start'];
        $items[$key]['Event End Date'] = $result['event_end'];

        $items[$key]['Membership Type'] = $result['membership_type'];
        if($result['membership_status'] == 'Current') {
            $items[$key]['Membership Join Date'] = $result['membership_join'];
            $items[$key]['Membership Start Date'] = $result['membership_start'];
            $items[$key]['Membership End Date'] = $result['membership_end'];
        } else {
            $items[$key]['Membership Join Date'] = '';
            $items[$key]['Membership Start Date'] = '';
            $items[$key]['Membership End Date'] = '';
        }


        $items[$key]['Receive Date'] = $result['receive_date'];
    }

}




