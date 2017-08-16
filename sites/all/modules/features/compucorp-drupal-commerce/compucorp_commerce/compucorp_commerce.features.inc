<?php
/**
 * @file
 * compucorp_commerce.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function compucorp_commerce_commerce_flat_rate_default_services() {
  $items = array(
    'free_shipping' => array(
      'name' => 'free_shipping',
      'base' => 'free_shipping',
      'display_title' => 'Free shipping',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_free_shipping',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'free_shipping_details_form',
        'details_form_validate' => 'free_shipping_details_form_validate',
        'details_form_submit' => 'free_shipping_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Free shipping',
      'base_rate' => array(
        'amount' => 0,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function compucorp_commerce_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic type of Product',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function compucorp_commerce_commerce_tax_default_rates() {
  $items = array(
    'vat_20' => array(
      'name' => 'vat_20',
      'display_title' => 'VAT 20',
      'description' => '',
      'rate' => 0.2,
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_vat_20',
      'default_rules_component' => 1,
      'price_component' => 'tax|vat_20',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT 20',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function compucorp_commerce_commerce_tax_default_types() {
  $items = array(
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Sales tax',
      'description' => 'A basic type for taxes that do not display inclusive with product prices.',
      'display_inclusive' => 0,
      'round_mode' => 0,
      'rule' => 'commerce_tax_type_sales_tax',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales tax',
      'admin_list' => TRUE,
    ),
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 1,
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function compucorp_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function compucorp_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function compucorp_commerce_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product display'),
      'base' => 'node_content',
      'description' => t('Use product displays for adding product pages to your store.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
