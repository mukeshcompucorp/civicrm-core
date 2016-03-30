<?php

class CRM_MailchimpConverter_DAO_TokenMapping extends CRM_Core_DAO
{

  /**
   * static instance to hold the table name
   *
   * @var string
   */
  static $_tableName = 'civicrm_token_mapping';
  /**
   * static instance to hold the field values
   *
   * @var array
   */
  static $_fields = null;

  public $id;
  public $mailchimp_token;
  public $civicrm_token;

  function __construct()
  {
    $this->__table = 'civicrm_token_mapping';
    parent::__construct();
  }

  /**
   * Returns all the column names of this table
   *
   * @return array
   */
  static function &fields()
  {
    if (!(self::$_fields)) {
      self::$_fields = array(
        'token_mapping_id' => array(
          'name' => 'id',
          'type' => CRM_Utils_Type::T_INT,
          'title' => ts('Token mapping ID') ,
          'required' => true,
          'where' => 'civicrm_token_mapping.id'
        ),
        'mailchimp_token' => array(
          'name' => 'mailchimp_token',
          'type' => CRM_Utils_Type::T_TEXT,
          'required' => true,
          'where' => 'civicrm_token_mapping.mailchimp_token'
        ),
        'civicrm_token' => array(
          'name' => 'civicrm_token',
          'type' => CRM_Utils_Type::T_TEXT,
          'required' => true,
          'where' => 'civicrm_token_mapping.civicrm_token'
        )
      );
    }
    return self::$_fields;
  }

  /**
   * Returns the names of this table
   *
   * @return string
   */
  static function getTableName()
  {
    return self::$_tableName;
  }
}
