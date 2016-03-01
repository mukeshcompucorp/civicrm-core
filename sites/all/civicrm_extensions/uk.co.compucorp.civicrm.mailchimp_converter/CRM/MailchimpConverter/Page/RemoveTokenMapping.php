<?php

require_once 'CRM/Core/Page.php';

class CRM_MailchimpConverter_Page_RemoveTokenMapping extends CRM_Core_Page {
  function run() {
    $id = CRM_Utils_Request::retrieve('mid', 'Positive');

    $bao = new CRM_MailchimpConverter_BAO_TokenMapping();
    $bao->id = $id;
    $bao->delete();

    CRM_Core_Session::setStatus(ts('Token mapping has been removed'));
    CRM_Utils_System::redirect(CRM_Utils_System::url('civicrm/mailchimp/token-mappings'));

    parent::run();
  }
}
