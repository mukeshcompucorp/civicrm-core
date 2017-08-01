<?php
/**
 * @file
 * compucorp_commerce.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function compucorp_commerce_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce discounts'.
  $permissions['administer commerce discounts'] = array(
    'name' => 'administer commerce discounts',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_discount',
  );

  // Exported permission: 'administer commerce_coupon entities'.
  $permissions['administer commerce_coupon entities'] = array(
    'name' => 'administer commerce_coupon entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer coupon types'.
  $permissions['administer coupon types'] = array(
    'name' => 'administer coupon types',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer custom offline payments'.
  $permissions['administer custom offline payments'] = array(
    'name' => 'administer custom offline payments',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cop',
  );

  // Exported permission: 'administer flat rate services'.
  $permissions['administer flat rate services'] = array(
    'name' => 'administer flat rate services',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_flat_rate',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer product pricing'.
  $permissions['administer product pricing'] = array(
    'name' => 'administer product pricing',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product_pricing_ui',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer shipping'.
  $permissions['administer shipping'] = array(
    'name' => 'administer shipping',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_shipping',
  );

  // Exported permission: 'administer taxes'.
  $permissions['administer taxes'] = array(
    'name' => 'administer taxes',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_tax_ui',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'create commerce_coupon entities'.
  $permissions['create commerce_coupon entities'] = array(
    'name' => 'create commerce_coupon entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_coupon entities of bundle discount_coupon'.
  $permissions['create commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'create commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle shipping'.
  $permissions['create commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'create commerce_customer_profile entities of bundle shipping',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'message',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'create product_display content'.
  $permissions['create product_display content'] = array(
    'name' => 'create product_display content',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_display content'.
  $permissions['delete any product_display content'] = array(
    'name' => 'delete any product_display content',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_display content'.
  $permissions['delete own product_display content'] = array(
    'name' => 'delete own product_display content',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle shipping'.
  $permissions['edit any commerce_customer_profile entity of bundle shipping'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle shipping',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any product_display content'.
  $permissions['edit any product_display content'] = array(
    'name' => 'edit any product_display content',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own product_display content'.
  $permissions['edit own product_display content'] = array(
    'name' => 'edit own product_display content',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view any commerce_coupon entity'.
  $permissions['view any commerce_coupon entity'] = array(
    'name' => 'view any commerce_coupon entity',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_coupon entity of bundle discount_coupon'.
  $permissions['view any commerce_coupon entity of bundle discount_coupon'] = array(
    'name' => 'view any commerce_coupon entity of bundle discount_coupon',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle shipping'.
  $permissions['view any commerce_customer_profile entity of bundle shipping'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle shipping',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_coupon entities'.
  $permissions['view own commerce_coupon entities'] = array(
    'name' => 'view own commerce_coupon entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_coupon entities of bundle discount_coupon'.
  $permissions['view own commerce_coupon entities of bundle discount_coupon'] = array(
    'name' => 'view own commerce_coupon entities of bundle discount_coupon',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle shipping'.
  $permissions['view own commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle shipping',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'Shop admin' => 'Shop admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  return $permissions;
}
