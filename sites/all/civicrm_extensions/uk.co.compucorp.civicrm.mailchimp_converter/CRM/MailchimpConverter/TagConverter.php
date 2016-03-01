<?php

class CRM_MailchimpConverter_TagConverter {
  private $tagMap;

  public function __construct() {
    $bao = new CRM_MailchimpConverter_BAO_TokenMapping();

    $this->tagMap = $bao->findAll(true);
  }

  public function convert($originalTemplate) {
    $tagMap = &$this->tagMap;

    return strtr($originalTemplate, $tagMap);
  }
}
