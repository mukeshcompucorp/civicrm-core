<?php
/**
 * @file
 * tpg_events.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function tpg_events_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'40\',
      \'uid\' => \'1\',
      \'title\' => \'Newsletter Sign Up\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d2f4f018-9310-4065-a244-6445883de002\',
      \'ds_switch\' => \'\',
      \'nid\' => \'40\',
      \'type\' => \'webform\',
      \'language\' => \'und\',
      \'created\' => \'1496911972\',
      \'changed\' => \'1496911972\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b9768226-16d5-49e4-8734-dbb9859d22d7\',
      \'revision_timestamp\' => \'1496911972\',
      \'revision_uid\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'webform\' => array(
        \'nid\' => \'40\',
        \'next_serial\' => \'1\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => NULL,
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => NULL,
        \'preview_excluded_components\' => array(),
        \'confidential\' => \'0\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          1 => array(
            \'nid\' => 40,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'civicrm_1_contact_1_fieldset_fieldset\',
            \'name\' => \'Contact 1\',
            \'type\' => \'fieldset\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => 0,
              \'collapsible\' => 0,
              \'collapsed\' => 0,
              \'description\' => \'\',
              \'description_above\' => FALSE,
              \'private\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 40,
            \'cid\' => \'2\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_existing\',
            \'name\' => \'Existing Contact\',
            \'type\' => \'civicrm_contact\',
            \'value\' => \'\',
            \'extra\' => array(
              \'search_prompt\' => \'- Choose existing -\',
              \'allow_create\' => 1,
              \'none_prompt\' => \'+ Create new +\',
              \'widget\' => \'hidden\',
              \'default\' => \'user\',
              \'private\' => 0,
              \'results_display\' => array(
                \'display_name\',
              ),
              \'show_hidden_contact\' => 0,
              \'unique\' => 0,
              \'title_display\' => \'before\',
              \'randomize\' => 0,
              \'description\' => \'\',
              \'no_autofill\' => array(),
              \'hide_fields\' => array(),
              \'hide_method\' => \'hide\',
              \'no_hide_blank\' => FALSE,
              \'attributes\' => array(),
              \'default_contact_id\' => \'\',
              \'default_relationship\' => \'\',
              \'allow_url_autofill\' => TRUE,
              \'dupes_allowed\' => FALSE,
              \'filters\' => array(
                \'contact_sub_type\' => 0,
                \'group\' => array(),
                \'tag\' => array(),
                \'check_permissions\' => 1,
              ),
            ),
            \'required\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 40,
            \'cid\' => \'3\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_first_name\',
            \'name\' => \'First Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'description_above\' => FALSE,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'4\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 40,
            \'cid\' => \'4\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_last_name\',
            \'name\' => \'Last Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'description_above\' => FALSE,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'6\',
            \'page_num\' => 1,
          ),
          5 => array(
            \'nid\' => 40,
            \'cid\' => \'5\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_email_email\',
            \'name\' => \'Email\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'multiple\' => 0,
              \'format\' => \'short\',
              \'unique\' => 0,
              \'disabled\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'description_above\' => FALSE,
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'25\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1496911972\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'compucorp_admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"overlay";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'webform_civicrm\' => array(
        \'nid\' => \'40\',
        \'data\' => array(
          \'contact\' => array(
            1 => array(
              \'contact\' => array(
                1 => array(
                  \'contact_type\' => \'individual\',
                  \'contact_sub_type\' => array(),
                  \'webform_label\' => \'Contact 1\',
                ),
              ),
              \'matching_rule\' => \'Unsupervised\',
              \'number_of_cg2\' => \'0\',
              \'number_of_cg4\' => \'0\',
              \'number_of_cg5\' => \'0\',
              \'number_of_cg23\' => \'0\',
              \'number_of_other\' => \'1\',
              \'number_of_address\' => \'0\',
              \'number_of_phone\' => \'0\',
              \'number_of_email\' => \'1\',
              \'number_of_website\' => \'0\',
              \'number_of_im\' => \'0\',
              \'number_of_cg10\' => \'0\',
              \'number_of_cg11\' => \'0\',
              \'number_of_cg12\' => \'0\',
              \'number_of_cg15\' => \'0\',
              \'number_of_cg17\' => \'0\',
              \'number_of_cg18\' => \'0\',
              \'number_of_cg24\' => \'0\',
              \'number_of_cg25\' => \'0\',
              \'number_of_cg26\' => \'0\',
              \'number_of_cg33\' => \'0\',
              \'number_of_cg34\' => \'0\',
              \'email\' => array(
                1 => array(
                  \'location_type_id\' => \'1\',
                ),
              ),
            ),
          ),
          \'activity\' => array(
            \'number_of_activity\' => \'0\',
          ),
          \'membership\' => array(
            1 => array(
              \'number_of_membership\' => \'0\',
            ),
          ),
          \'participant_reg_type\' => \'0\',
          \'reg_options\' => array(
            \'event_type\' => \'any\',
            \'show_past_events\' => \'now\',
            \'show_future_events\' => \'1\',
            \'title_display\' => \'title\',
            \'show_remaining\' => \'0\',
            \'validate\' => 1,
            \'block_form\' => 0,
            \'disable_unregister\' => 0,
            \'allow_url_load\' => 0,
          ),
        ),
        \'prefix_known\' => \'\',
        \'prefix_unknown\' => \'\',
        \'message\' => \'\',
        \'confirm_subscription\' => \'1\',
        \'block_unknown_users\' => \'0\',
        \'create_fieldsets\' => \'1\',
        \'new_contact_source\' => \'Newsletter Sign Up\',
      ),
      \'path\' => array(
        \'pid\' => \'18\',
        \'source\' => \'node/40\',
        \'alias\' => \'content/newsletter-sign\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}