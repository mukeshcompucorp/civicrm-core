<?php
/**
 * @file
 * compucorp_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function compucorp_commerce_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_commerce_payment_example'] = entity_import('rules_config', '{ "commerce_payment_commerce_payment_example" : {
      "LABEL" : "Example payment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_payment_example" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "commerce_payment_example"
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_free_shipping'] = entity_import('rules_config', '{ "commerce_shipping_service_free_shipping" : {
      "LABEL" : "Rate Free shipping",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "free_shipping",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_vat_0'] = entity_import('rules_config', '{ "commerce_tax_rate_vat_0" : {
      "LABEL" : "Calculate VAT 0",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "vat_0"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_vat_20'] = entity_import('rules_config', '{ "commerce_tax_rate_vat_20" : {
      "LABEL" : "Calculate VAT 20",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "vat_20"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  return $items;
}
