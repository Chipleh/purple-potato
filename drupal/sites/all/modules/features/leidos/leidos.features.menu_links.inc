<?php
/**
 * @file
 * leidos.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function leidos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:https://www.leidos.com/about
  $menu_links['main-menu_about:https://www.leidos.com/about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About',
      ),
      'identifier' => 'main-menu_about:https://www.leidos.com/about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_careers:https://www.leidos.com/careers
  $menu_links['main-menu_careers:https://www.leidos.com/careers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/careers',
    'router_path' => '',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(
        'title' => 'Careers',
      ),
      'identifier' => 'main-menu_careers:https://www.leidos.com/careers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_engineering:engineering
  $menu_links['main-menu_engineering:engineering'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'engineering',
    'router_path' => 'engineering',
    'link_title' => 'Engineering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_engineering:engineering',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_health:https://www.leidos.com/health
  $menu_links['main-menu_health:https://www.leidos.com/health'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/health',
    'router_path' => '',
    'link_title' => 'Health',
    'options' => array(
      'attributes' => array(
        'title' => 'Health',
      ),
      'identifier' => 'main-menu_health:https://www.leidos.com/health',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_investors:http://investors.leidos.com/
  $menu_links['main-menu_investors:http://investors.leidos.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://investors.leidos.com/',
    'router_path' => '',
    'link_title' => 'Investors',
    'options' => array(
      'attributes' => array(
        'title' => 'Investors',
      ),
      'identifier' => 'main-menu_investors:http://investors.leidos.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_leidos:http://www.leidos.com
  $menu_links['main-menu_leidos:http://www.leidos.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.leidos.com',
    'router_path' => '',
    'link_title' => 'Leidos',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
      ),
      'identifier' => 'main-menu_leidos:http://www.leidos.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_national-security:https://www.leidos.com/natsec
  $menu_links['main-menu_national-security:https://www.leidos.com/natsec'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/natsec',
    'router_path' => '',
    'link_title' => 'National Security',
    'options' => array(
      'attributes' => array(
        'title' => 'National Security',
      ),
      'identifier' => 'main-menu_national-security:https://www.leidos.com/natsec',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_newsroom:https://www.leidos.com/newsroom
  $menu_links['main-menu_newsroom:https://www.leidos.com/newsroom'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/newsroom',
    'router_path' => '',
    'link_title' => 'Newsroom',
    'options' => array(
      'attributes' => array(
        'title' => 'Newsroom',
      ),
      'identifier' => 'main-menu_newsroom:https://www.leidos.com/newsroom',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-engineering-navigation_-about-leidos-engineering:https://www.leidos.com/engineering/about-leidos-engineering
  $menu_links['menu-engineering-navigation_-about-leidos-engineering:https://www.leidos.com/engineering/about-leidos-engineering'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/about-leidos-engineering',
    'router_path' => '',
    'link_title' => ' About Leidos Engineering',
    'options' => array(
      'attributes' => array(
        'title' => 'About Leidos Engineering',
      ),
      'identifier' => 'menu-engineering-navigation_-about-leidos-engineering:https://www.leidos.com/engineering/about-leidos-engineering',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_engineering:https://www.leidos.com/engineering',
  );
  // Exported menu link: menu-engineering-navigation_capabilities:https://www.leidos.com/engineering/capabilities
  $menu_links['menu-engineering-navigation_capabilities:https://www.leidos.com/engineering/capabilities'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/capabilities',
    'router_path' => '',
    'link_title' => 'Capabilities',
    'options' => array(
      'attributes' => array(
        'title' => 'Capabilities',
      ),
      'identifier' => 'menu-engineering-navigation_capabilities:https://www.leidos.com/engineering/capabilities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-engineering-navigation_contact-us:https://www.leidos.com/engineering/engineering-office-locations
  $menu_links['menu-engineering-navigation_contact-us:https://www.leidos.com/engineering/engineering-office-locations'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/engineering-office-locations',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact us',
      ),
      'identifier' => 'menu-engineering-navigation_contact-us:https://www.leidos.com/engineering/engineering-office-locations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-engineering-navigation_engineering:https://www.leidos.com/engineering
  $menu_links['menu-engineering-navigation_engineering:https://www.leidos.com/engineering'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering',
    'router_path' => '',
    'link_title' => 'Engineering',
    'options' => array(
      'attributes' => array(
        'title' => 'Engineering',
      ),
      'identifier' => 'menu-engineering-navigation_engineering:https://www.leidos.com/engineering',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets
  $menu_links['menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/markets',
    'router_path' => '',
    'link_title' => 'Markets',
    'options' => array(
      'attributes' => array(
        'title' => 'Markets',
      ),
      'identifier' => 'menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-engineering-navigation_newsroom:https://www.leidos.com/engineering/newsroom
  $menu_links['menu-engineering-navigation_newsroom:https://www.leidos.com/engineering/newsroom'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/newsroom',
    'router_path' => '',
    'link_title' => 'Newsroom',
    'options' => array(
      'attributes' => array(
        'title' => 'Newsroom',
      ),
      'identifier' => 'menu-engineering-navigation_newsroom:https://www.leidos.com/engineering/newsroom',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-engineering-navigation_projects:https://www.leidos.com/engineering/projects
  $menu_links['menu-engineering-navigation_projects:https://www.leidos.com/engineering/projects'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/projects',
    'router_path' => '',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => 'Projects',
      ),
      'identifier' => 'menu-engineering-navigation_projects:https://www.leidos.com/engineering/projects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---main-menu_leidos--2015-leidos:https://www.leidos.com/
  $menu_links['menu-footer---main-menu_leidos--2015-leidos:https://www.leidos.com/'] = array(
    'menu_name' => 'menu-footer---main-menu',
    'link_path' => 'https://www.leidos.com/',
    'router_path' => '',
    'link_title' => 'Leidos © 2015 Leidos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---main-menu_leidos--2015-leidos:https://www.leidos.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---main-menu_privacy-policy:https://www.leidos.com/privacy
  $menu_links['menu-footer---main-menu_privacy-policy:https://www.leidos.com/privacy'] = array(
    'menu_name' => 'menu-footer---main-menu',
    'link_path' => 'https://www.leidos.com/privacy',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---main-menu_privacy-policy:https://www.leidos.com/privacy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---main-menu_search:https://www.leidos.com/search
  $menu_links['menu-footer---main-menu_search:https://www.leidos.com/search'] = array(
    'menu_name' => 'menu-footer---main-menu',
    'link_path' => 'https://www.leidos.com/search',
    'router_path' => '',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---main-menu_search:https://www.leidos.com/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---main-menu_site-map:https://www.leidos.com/sitemap
  $menu_links['menu-footer---main-menu_site-map:https://www.leidos.com/sitemap'] = array(
    'menu_name' => 'menu-footer---main-menu',
    'link_path' => 'https://www.leidos.com/sitemap',
    'router_path' => '',
    'link_title' => 'Site Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---main-menu_site-map:https://www.leidos.com/sitemap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---resources_for-alumni:http://www.leidos.com/alumni/
  $menu_links['menu-footer---resources_for-alumni:http://www.leidos.com/alumni/'] = array(
    'menu_name' => 'menu-footer---resources',
    'link_path' => 'http://www.leidos.com/alumni/',
    'router_path' => '',
    'link_title' => 'For Alumni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---resources_for-alumni:http://www.leidos.com/alumni/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---resources_for-customers:https://www.leidos.com/customer
  $menu_links['menu-footer---resources_for-customers:https://www.leidos.com/customer'] = array(
    'menu_name' => 'menu-footer---resources',
    'link_path' => 'https://www.leidos.com/customer',
    'router_path' => '',
    'link_title' => 'For Customers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---resources_for-customers:https://www.leidos.com/customer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---resources_for-employees:https://www.leidos.com/employees
  $menu_links['menu-footer---resources_for-employees:https://www.leidos.com/employees'] = array(
    'menu_name' => 'menu-footer---resources',
    'link_path' => 'https://www.leidos.com/employees',
    'router_path' => '',
    'link_title' => 'For Employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---resources_for-employees:https://www.leidos.com/employees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---resources_for-suppliers:https://www.leidos.com/suppliers
  $menu_links['menu-footer---resources_for-suppliers:https://www.leidos.com/suppliers'] = array(
    'menu_name' => 'menu-footer---resources',
    'link_path' => 'https://www.leidos.com/suppliers',
    'router_path' => '',
    'link_title' => 'For Suppliers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---resources_for-suppliers:https://www.leidos.com/suppliers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---services_contact-us:https://www.leidos.com/contact
  $menu_links['menu-footer---services_contact-us:https://www.leidos.com/contact'] = array(
    'menu_name' => 'menu-footer---services',
    'link_path' => 'https://www.leidos.com/contact',
    'router_path' => '',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---services_contact-us:https://www.leidos.com/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---services_federal-contract-vehicles:https://www.leidos.com/contractcenter
  $menu_links['menu-footer---services_federal-contract-vehicles:https://www.leidos.com/contractcenter'] = array(
    'menu_name' => 'menu-footer---services',
    'link_path' => 'https://www.leidos.com/contractcenter',
    'router_path' => '',
    'link_title' => 'Federal Contract Vehicles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---services_federal-contract-vehicles:https://www.leidos.com/contractcenter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---services_products:https://www.leidos.com/products
  $menu_links['menu-footer---services_products:https://www.leidos.com/products'] = array(
    'menu_name' => 'menu-footer---services',
    'link_path' => 'https://www.leidos.com/products',
    'router_path' => '',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---services_products:https://www.leidos.com/products',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---services_research--development:https://www.leidos.com/industries/technologies
  $menu_links['menu-footer---services_research--development:https://www.leidos.com/industries/technologies'] = array(
    'menu_name' => 'menu-footer---services',
    'link_path' => 'https://www.leidos.com/industries/technologies',
    'router_path' => '',
    'link_title' => 'Research & Development',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---services_research--development:https://www.leidos.com/industries/technologies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---services_services:https://www.leidos.com/industries/services
  $menu_links['menu-footer---services_services:https://www.leidos.com/industries/services'] = array(
    'menu_name' => 'menu-footer---services',
    'link_path' => 'https://www.leidos.com/industries/services',
    'router_path' => '',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---services_services:https://www.leidos.com/industries/services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---social-media_connect-on-facebook:http://facebook.com/LeidosInc
  $menu_links['menu-footer---social-media_connect-on-facebook:http://facebook.com/LeidosInc'] = array(
    'menu_name' => 'menu-footer---social-media',
    'link_path' => 'http://facebook.com/LeidosInc',
    'router_path' => '',
    'link_title' => 'Connect on Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---social-media_connect-on-facebook:http://facebook.com/LeidosInc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---social-media_connect-on-google:http://plus.google.com/u/0/111000986426684144411/posts
  $menu_links['menu-footer---social-media_connect-on-google:http://plus.google.com/u/0/111000986426684144411/posts'] = array(
    'menu_name' => 'menu-footer---social-media',
    'link_path' => 'http://plus.google.com/u/0/111000986426684144411/posts',
    'router_path' => '',
    'link_title' => 'Connect on Google+',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---social-media_connect-on-google:http://plus.google.com/u/0/111000986426684144411/posts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---social-media_connect-on-linkedin:http://linkedin.com/company/leidos
  $menu_links['menu-footer---social-media_connect-on-linkedin:http://linkedin.com/company/leidos'] = array(
    'menu_name' => 'menu-footer---social-media',
    'link_path' => 'http://linkedin.com/company/leidos',
    'router_path' => '',
    'link_title' => 'Connect on LinkedIn',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---social-media_connect-on-linkedin:http://linkedin.com/company/leidos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---social-media_connect-on-twitter:http://twitter.com/leidosinc
  $menu_links['menu-footer---social-media_connect-on-twitter:http://twitter.com/leidosinc'] = array(
    'menu_name' => 'menu-footer---social-media',
    'link_path' => 'http://twitter.com/leidosinc',
    'router_path' => '',
    'link_title' => 'Connect on Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---social-media_connect-on-twitter:http://twitter.com/leidosinc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer---social-media_connect-on-youtube:http://www.youtube.com/leidosinc
  $menu_links['menu-footer---social-media_connect-on-youtube:http://www.youtube.com/leidosinc'] = array(
    'menu_name' => 'menu-footer---social-media',
    'link_path' => 'http://www.youtube.com/leidosinc',
    'router_path' => '',
    'link_title' => 'Connect on Youtube',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer---social-media_connect-on-youtube:http://www.youtube.com/leidosinc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t(' About Leidos Engineering');
  t('About');
  t('Capabilities');
  t('Careers');
  t('Connect on Facebook');
  t('Connect on Google+');
  t('Connect on LinkedIn');
  t('Connect on Twitter');
  t('Connect on Youtube');
  t('Contact Us');
  t('Contact us');
  t('Engineering');
  t('Federal Contract Vehicles');
  t('For Alumni');
  t('For Customers');
  t('For Employees');
  t('For Suppliers');
  t('Health');
  t('Investors');
  t('Leidos');
  t('Leidos © 2015 Leidos');
  t('Markets');
  t('National Security');
  t('Newsroom');
  t('Privacy Policy');
  t('Products');
  t('Projects');
  t('Research & Development');
  t('Search');
  t('Services');
  t('Site Map');


  return $menu_links;
}
