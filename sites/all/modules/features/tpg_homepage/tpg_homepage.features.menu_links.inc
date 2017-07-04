<?php
/**
 * @file
 * tpg_homepage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tpg_homepage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_bookshop:<front>.
  $menu_links['main-menu_bookshop:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Bookshop',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_bookshop:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_print-sales:<front>.
  $menu_links['main-menu_print-sales:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Print Sales',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_print-sales:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_viewpoints:<front>.
  $menu_links['main-menu_viewpoints:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Viewpoints',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_viewpoints:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_visit--do:<front>.
  $menu_links['main-menu_visit--do:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Visit & Do',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_visit--do:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_whats-on:whats-on/now-upcoming.
  $menu_links['main-menu_whats-on:whats-on/now-upcoming'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'whats-on/now-upcoming',
    'router_path' => 'whats-on/now-upcoming',
    'link_title' => 'What\'s on',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_whats-on:whats-on/now-upcoming',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_about-us:node/131.
  $menu_links['menu-footer_about-us:node/131'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/131',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer_about-us:node/131',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_charity-status:http://www.compucorp.co.uk.
  $menu_links['menu-footer_charity-status:http://www.compucorp.co.uk'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'http://www.compucorp.co.uk',
    'router_path' => '',
    'link_title' => 'Charity Status',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer_charity-status:http://www.compucorp.co.uk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_copyright:http://www.compucorp.co.uk.
  $menu_links['menu-footer_copyright:http://www.compucorp.co.uk'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'http://www.compucorp.co.uk',
    'router_path' => '',
    'link_title' => 'Copyright',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer_copyright:http://www.compucorp.co.uk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_press:http://www.compucorp.co.uk.
  $menu_links['menu-footer_press:http://www.compucorp.co.uk'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'http://www.compucorp.co.uk',
    'router_path' => '',
    'link_title' => 'Press',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer_press:http://www.compucorp.co.uk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_privacy--cookies-policy:http://www.compucorp.co.uk.
  $menu_links['menu-footer_privacy--cookies-policy:http://www.compucorp.co.uk'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'http://www.compucorp.co.uk',
    'router_path' => '',
    'link_title' => 'Privacy & Cookies Policy',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer_privacy--cookies-policy:http://www.compucorp.co.uk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_terms--conditions:http://www.compucorp.co.uk.
  $menu_links['menu-footer_terms--conditions:http://www.compucorp.co.uk'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'http://www.compucorp.co.uk',
    'router_path' => '',
    'link_title' => 'Terms & Conditions',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer_terms--conditions:http://www.compucorp.co.uk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-social-connectors_facebook:https://www.facebook.com.
  $menu_links['menu-social-connectors_facebook:https://www.facebook.com'] = array(
    'menu_name' => 'menu-social-connectors',
    'link_path' => 'https://www.facebook.com',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-facebook-f',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-social-connectors_facebook:https://www.facebook.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-connectors_twitter:https://www.twitter.com.
  $menu_links['menu-social-connectors_twitter:https://www.twitter.com'] = array(
    'menu_name' => 'menu-social-connectors',
    'link_path' => 'https://www.twitter.com',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-twitter',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-social-connectors_twitter:https://www.twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_join--support:<front>.
  $menu_links['user-menu_join--support:<front>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Join & Support',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'user-menu_join--support:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_search:<front>.
  $menu_links['user-menu_search:<front>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'user-menu_search:<front>',
      'attributes' => array(
        'class' => array(
          0 => 'search-bar',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Bookshop');
  t('Charity Status');
  t('Copyright');
  t('Facebook');
  t('Home');
  t('Join & Support');
  t('Log out');
  t('Login');
  t('Press');
  t('Print Sales');
  t('Privacy & Cookies Policy');
  t('Search');
  t('Terms & Conditions');
  t('Twitter');
  t('User account');
  t('Viewpoints');
  t('Visit & Do');
  t('What\'s on');

  return $menu_links;
}
