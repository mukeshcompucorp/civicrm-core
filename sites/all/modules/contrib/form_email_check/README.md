form_email_check
================

This module enables email duplication check on any Drupal webform with CiviCRM email field.


DB Setting:
================

```
$databases['default']['default'] = array(
      'database' => 'YOUSITE_DRUPAL_DB',
      'username' => 'DB_USERNAME',
      'password' => 'DB_PASSWORD',
      'host' => 'YOURHOST',
      'port' => '',
      'driver' => 'YOURDRIVER',
      'prefix' => '',
    );
$databases['CIVI_DB_KEY']['default'] = array(
      'database' => 'YOUSITE_CIVICRM_DB',
      'username' => 'DB_USERNAME',
      'password' => 'DB_PASSWORD',
      'host' => 'YOURHOST',
      'port' => '',
      'driver' => 'YOURDRIVER',
      'prefix' => '',
);
```

Note: CIVI_DB_KEY can be any custom string.

================

Configurations:
================

```
$conf['civicrm_db_key'] = 'CIVI_DB_KEY';
$conf['checking_form_number'] = 10; (optional)

$conf['signup_form_id1'] = 'YOUR_1st_FORM_KEY';
$conf['email_field_number1'] = 2; (optional)
$conf['email_field_key1_1'] = 'YOUR_1st_EMAIL_FIELD_KEY';
$conf['email_field_key1_2'] = 'YOUR_2nd_EMAIL_FIELD_KEY';

$conf['signup_form_id2'] = 'YOUR_2nd_FORM_KEY';
$conf['email_field_key2_1'] = 'YOUR_1st_EMAIL_FIELD_KEY';
...

$conf['signup_form_id(x)'] = 'YOUR_(x)th_FORM_KEY';
$conf['email_field_number(x)'] = (y); (optional)
$conf['email_field_key(x)_1'] = 'YOUR_1st_EMAIL_FIELD_KEY';
$conf['email_field_key(x)_2'] = 'YOUR_2nd_EMAIL_FIELD_KEY';

...
$conf['email_field_key(x)_y'] = 'YOUR_(x)th_EMAIL_FIELD_KEY';
