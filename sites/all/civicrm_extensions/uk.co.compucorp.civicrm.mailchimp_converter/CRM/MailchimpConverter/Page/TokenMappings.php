<?php

require_once 'CRM/Core/Page.php';

class CRM_MailchimpConverter_Page_TokenMappings extends CRM_Core_Page {
  function run() {
    $bao = new CRM_MailchimpConverter_BAO_TokenMapping();
    $this->assign('tokenMappings', $bao->findAll());
    parent::run();
  }
}
