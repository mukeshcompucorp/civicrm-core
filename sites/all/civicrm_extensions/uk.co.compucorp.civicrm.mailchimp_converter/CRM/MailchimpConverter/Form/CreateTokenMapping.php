<?php

require_once 'CRM/Core/Form.php';

/**
 * Form controller class
 *
 * @see http://wiki.civicrm.org/confluence/display/CRMDOC43/QuickForm+Reference
 */
class CRM_MailchimpConverter_Form_CreateTokenMapping extends CRM_Core_Form {
  function buildQuickForm() {
    $this->add('text', 'mailchimp_token', 'Mailchimp Token', '', true);
    $this->add('text', 'civicrm_token', 'CiviCRM Token', '', true);

    $this->addButtons(array(
      array(
        'type' => 'submit',
        'name' => ts('Submit'),
        'isDefault' => TRUE,
      ),
    ));

    $this->assign('elementNames', $this->getRenderableElementNames());
    parent::buildQuickForm();
  }

  /**
   * adding validation rules
   */
  function addRules(){
    $this->addFormRule(array('CRM_MailchimpConverter_Form_CreateTokenMapping', 'mappingFieldRules'));
  }

  /**
   * Callback function for validation of mailchimp and civicrm token input fields
   * @param array $values
   * @return bool|array
   */
  public static function mappingFieldRules($values){
    $errors = array();
    $mailchimpToken = $values['mailchimp_token'];
    $civiToken = $values['civicrm_token'];
    if (!preg_match("#\*\|(.+?)\|\*#", $mailchimpToken)) {
      $errors['mailchimp_token'] = ts('Please enter mailchimp token between *| and |*');
    }

    if(!self::civiTokenExists($civiToken)) {
     $errors['civicrm_token'] = ts("Please use a valid civicrm token.");
    }

    if (!preg_match("#\{(.+?)\}#", $civiToken)) {
      $errors['civicrm_token'] = ts('Please enter civicrm token between { and }');
    }

   $bao = new CRM_MailchimpConverter_BAO_TokenMapping();
   $tokenMappings = $bao->findAll(true);

   if(isset($tokenMappings[$mailchimpToken])) {
     $errors['mailchimp_token'] = ts('Mapping for this mailchimp token already exists.');
   }
   if(in_array($civiToken, $tokenMappings)) {
     $errors['civicrm_token'] = ts('Mapping for this civicrm token already exists.');
   }

   return empty($errors) ? TRUE : $errors;
  }

  public static function civiTokenExists($token = "") {
    if(!empty($token)) {
      return in_array($token, self::getAllMailingTokens());
    }

    return false;
  }

  public static function getAllMailingTokens() {
    $mailTokens = civicrm_api3('Mailing', 'gettokens', array(
      'entity' => array('contact', 'mailing'),
      'sequential' => 1,
    ));

    $allMailTokens = array();
    foreach($mailTokens['values'] as $mailToken) {
      $allMailTokens = array_merge($allMailTokens, $mailToken['children']);
    }

    $allTokensInSingleArray = array();
    foreach($allMailTokens as $mailToken) {
      $allTokensInSingleArray[] = $mailToken['id'];
    }

    return $allTokensInSingleArray;
  }

  function postProcess() {
    $values = $this->exportValues();

    $mapping = new CRM_MailchimpConverter_BAO_TokenMapping();
    $mapping->civicrm_token = $values['civicrm_token'];
    $mapping->mailchimp_token = $values['mailchimp_token'];
    $mapping->save();

    CRM_Core_Session::setStatus(ts('Token mapping has been added'));
    CRM_Utils_System::redirect(CRM_Utils_System::url('civicrm/mailchimp/token-mappings'));

    parent::postProcess();
  }

  /**
   * Get the fields/elements defined in this form.
   *
   * @return array (string)
   */
  function getRenderableElementNames() {
    // The _elements list includes some items which should not be
    // auto-rendered in the loop -- such as "qfKey" and "buttons".  These
    // items don't have labels.  We'll identify renderable by filtering on
    // the 'label'.
    $elementNames = array();
    foreach ($this->_elements as $element) {
      /** @var HTML_QuickForm_Element $element */
      $label = $element->getLabel();
      if (!empty($label)) {
        $elementNames[] = $element->getName();
      }
    }
    return $elementNames;
  }
}
