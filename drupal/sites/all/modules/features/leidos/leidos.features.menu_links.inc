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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_about:https://www.leidos.com/natsec#main
  $menu_links['main-menu_about:https://www.leidos.com/natsec#main'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/natsec#main',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:https://www.leidos.com/natsec#main',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_national-security:https://www.leidos.com/natsec',
  );
  // Exported menu link: main-menu_advanced-communications-systems:https://www.leidos.com/engineering/advanced-communications-systems
  $menu_links['main-menu_advanced-communications-systems:https://www.leidos.com/engineering/advanced-communications-systems'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/advanced-communications-systems',
    'router_path' => '',
    'link_title' => 'Advanced Communications Systems',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_advanced-communications-systems:https://www.leidos.com/engineering/advanced-communications-systems',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_border--transportation-security:https://www.leidos.com/natsec/homeland-security/border-security
  $menu_links['main-menu_border--transportation-security:https://www.leidos.com/natsec/homeland-security/border-security'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/natsec/homeland-security/border-security',
    'router_path' => '',
    'link_title' => 'Border & Transportation Security',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_border--transportation-security:https://www.leidos.com/natsec/homeland-security/border-security',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_national-security:https://www.leidos.com/natsec',
  );
  // Exported menu link: main-menu_business--financial-advisory:https://www.leidos.com/engineering/business-and-financial-advisory
  $menu_links['main-menu_business--financial-advisory:https://www.leidos.com/engineering/business-and-financial-advisory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/business-and-financial-advisory',
    'router_path' => '',
    'link_title' => 'Business / Financial Advisory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_business--financial-advisory:https://www.leidos.com/engineering/business-and-financial-advisory',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_cancer--aids-research:https://www.leidos.com/health/life-sciences/cancer-hiv
  $menu_links['main-menu_cancer--aids-research:https://www.leidos.com/health/life-sciences/cancer-hiv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/health/life-sciences/cancer-hiv',
    'router_path' => '',
    'link_title' => 'Cancer & AIDS Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_cancer--aids-research:https://www.leidos.com/health/life-sciences/cancer-hiv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_health:https://www.leidos.com/health',
  );
  // Exported menu link: main-menu_capabilities:https://www.leidos.com/capabilities
  $menu_links['main-menu_capabilities:https://www.leidos.com/capabilities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/capabilities',
    'router_path' => '',
    'link_title' => 'Capabilities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_capabilities:https://www.leidos.com/capabilities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_carrers-faqs:https://www.leidos.com/careers/faqs
  $menu_links['main-menu_carrers-faqs:https://www.leidos.com/careers/faqs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/careers/faqs',
    'router_path' => '',
    'link_title' => 'Carrers FAQs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_carrers-faqs:https://www.leidos.com/careers/faqs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_careers:https://www.leidos.com/careers',
  );
  // Exported menu link: main-menu_command--control:https://www.leidos.com/natsec/dominance
  $menu_links['main-menu_command--control:https://www.leidos.com/natsec/dominance'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/natsec/dominance',
    'router_path' => '',
    'link_title' => 'Command & Control',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_command--control:https://www.leidos.com/natsec/dominance',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_national-security:https://www.leidos.com/natsec',
  );
  // Exported menu link: main-menu_commercial-cyber:https://www.leidos.com/commercialcyber
  $menu_links['main-menu_commercial-cyber:https://www.leidos.com/commercialcyber'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/commercialcyber',
    'router_path' => '',
    'link_title' => 'Commercial Cyber',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_commercial-cyber:https://www.leidos.com/commercialcyber',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_national-security:https://www.leidos.com/natsec',
  );
  // Exported menu link: main-menu_commitment-to-quality:https://www.leidos.com/about/quality
  $menu_links['main-menu_commitment-to-quality:https://www.leidos.com/about/quality'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about/quality',
    'router_path' => '',
    'link_title' => 'Commitment to Quality',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_commitment-to-quality:https://www.leidos.com/about/quality',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: main-menu_contact:https://www.leidos.com/contact
  $menu_links['main-menu_contact:https://www.leidos.com/contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:https://www.leidos.com/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: main-menu_corporate-governance:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-govhighlights
  $menu_links['main-menu_corporate-governance:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-govhighlights'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-govhighlights',
    'router_path' => '',
    'link_title' => 'Corporate Governance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_corporate-governance:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-govhighlights',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_investors:http://investors.leidos.com/',
  );
  // Exported menu link: main-menu_corporate-responsibility:https://www.leidos.com/about/corporate-responsibility
  $menu_links['main-menu_corporate-responsibility:https://www.leidos.com/about/corporate-responsibility'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about/corporate-responsibility',
    'router_path' => '',
    'link_title' => 'Corporate Responsibility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_corporate-responsibility:https://www.leidos.com/about/corporate-responsibility',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: main-menu_designbuild--epc:https://www.leidos.com/engineering/designbuild
  $menu_links['main-menu_designbuild--epc:https://www.leidos.com/engineering/designbuild'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/designbuild',
    'router_path' => '',
    'link_title' => 'DesignBuild / EPC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_designbuild--epc:https://www.leidos.com/engineering/designbuild',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_energy-management:https://www.leidos.com/engineering/energy-management
  $menu_links['main-menu_energy-management:https://www.leidos.com/engineering/energy-management'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/energy-management',
    'router_path' => '',
    'link_title' => 'Energy Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_energy-management:https://www.leidos.com/engineering/energy-management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_environment:https://www.leidos.com/engineering/environment
  $menu_links['main-menu_environment:https://www.leidos.com/engineering/environment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/environment',
    'router_path' => '',
    'link_title' => 'Environment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_environment:https://www.leidos.com/engineering/environment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_features:https://www.leidos.com/newsroom/features
  $menu_links['main-menu_features:https://www.leidos.com/newsroom/features'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/newsroom/features',
    'router_path' => '',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_features:https://www.leidos.com/newsroom/features',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newsroom:https://www.leidos.com/newsroom',
  );
  // Exported menu link: main-menu_federal-contract-vehicles:https://www.leidos.com/contractcenter
  $menu_links['main-menu_federal-contract-vehicles:https://www.leidos.com/contractcenter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/contractcenter',
    'router_path' => '',
    'link_title' => 'Federal Contract Vehicles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_federal-contract-vehicles:https://www.leidos.com/contractcenter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: main-menu_federal-cyber:https://www.leidos.com/cybersecurity_new
  $menu_links['main-menu_federal-cyber:https://www.leidos.com/cybersecurity_new'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/cybersecurity_new',
    'router_path' => '',
    'link_title' => 'Federal Cyber',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_federal-cyber:https://www.leidos.com/cybersecurity_new',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_national-security:https://www.leidos.com/natsec',
  );
  // Exported menu link: main-menu_health-it:https://www.leidos.com/health/healthIT
  $menu_links['main-menu_health-it:https://www.leidos.com/health/healthIT'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/health/healthIT',
    'router_path' => '',
    'link_title' => 'Health IT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_health-it:https://www.leidos.com/health/healthIT',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_health:https://www.leidos.com/health',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_healthcare-quality--cost:https://www.leidos.com/health/healthservices
  $menu_links['main-menu_healthcare-quality--cost:https://www.leidos.com/health/healthservices'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/health/healthservices',
    'router_path' => '',
    'link_title' => 'Healthcare Quality & Cost',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_healthcare-quality--cost:https://www.leidos.com/health/healthservices',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_health:https://www.leidos.com/health',
  );
  // Exported menu link: main-menu_industry-news--events:https://www.leidos.com/newsroom/events
  $menu_links['main-menu_industry-news--events:https://www.leidos.com/newsroom/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/newsroom/events',
    'router_path' => '',
    'link_title' => 'Industry News & Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_industry-news--events:https://www.leidos.com/newsroom/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newsroom:https://www.leidos.com/newsroom',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_leadership:https://www.leidos.com/about/org
  $menu_links['main-menu_leadership:https://www.leidos.com/about/org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about/org',
    'router_path' => '',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_leadership:https://www.leidos.com/about/org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: main-menu_legacy:https://www.leidos.com/about/history
  $menu_links['main-menu_legacy:https://www.leidos.com/about/history'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about/history',
    'router_path' => '',
    'link_title' => 'Legacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_legacy:https://www.leidos.com/about/history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: main-menu_leidos-companies:https://www.leidos.com/about/companies
  $menu_links['main-menu_leidos-companies:https://www.leidos.com/about/companies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about/companies',
    'router_path' => '',
    'link_title' => 'Leidos Companies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_leidos-companies:https://www.leidos.com/about/companies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
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
  // Exported menu link: main-menu_life-at-leidos:https://www.leidos.com/careers/life
  $menu_links['main-menu_life-at-leidos:https://www.leidos.com/careers/life'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/careers/life',
    'router_path' => '',
    'link_title' => 'Life at Leidos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_life-at-leidos:https://www.leidos.com/careers/life',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_careers:https://www.leidos.com/careers',
  );
  // Exported menu link: main-menu_life-sciences:https://www.leidos.com/health/life-sciences
  $menu_links['main-menu_life-sciences:https://www.leidos.com/health/life-sciences'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/health/life-sciences',
    'router_path' => '',
    'link_title' => 'Life Sciences',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_life-sciences:https://www.leidos.com/health/life-sciences',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_health:https://www.leidos.com/health',
  );
  // Exported menu link: main-menu_logistics:https://www.leidos.com/logistics
  $menu_links['main-menu_logistics:https://www.leidos.com/logistics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/logistics',
    'router_path' => '',
    'link_title' => 'Logistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_logistics:https://www.leidos.com/logistics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_national-security:https://www.leidos.com/natsec',
  );
  // Exported menu link: main-menu_multimedia:https://www.leidos.com/newsroom/media
  $menu_links['main-menu_multimedia:https://www.leidos.com/newsroom/media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/newsroom/media',
    'router_path' => '',
    'link_title' => 'Multimedia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_multimedia:https://www.leidos.com/newsroom/media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newsroom:https://www.leidos.com/newsroom',
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
    'has_children' => 1,
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_opportunities:https://www.leidos.com/careers/opportunities
  $menu_links['main-menu_opportunities:https://www.leidos.com/careers/opportunities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/careers/opportunities',
    'router_path' => '',
    'link_title' => 'Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_opportunities:https://www.leidos.com/careers/opportunities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_careers:https://www.leidos.com/careers',
  );
  // Exported menu link: main-menu_pay--benefits:https://www.leidos.com/careers#pay-benefits
  $menu_links['main-menu_pay--benefits:https://www.leidos.com/careers#pay-benefits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/careers#pay-benefits',
    'router_path' => '',
    'link_title' => 'Pay & Benefits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pay--benefits:https://www.leidos.com/careers#pay-benefits',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_careers:https://www.leidos.com/careers',
  );
  // Exported menu link: main-menu_power-grid-engineering:https://www.leidos.com/engineering/power-grid
  $menu_links['main-menu_power-grid-engineering:https://www.leidos.com/engineering/power-grid'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/power-grid',
    'router_path' => '',
    'link_title' => 'Power Grid Engineering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_power-grid-engineering:https://www.leidos.com/engineering/power-grid',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_public-health:https://www.leidos.com/health/publichealth
  $menu_links['main-menu_public-health:https://www.leidos.com/health/publichealth'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/health/publichealth',
    'router_path' => '',
    'link_title' => 'Public Health',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_public-health:https://www.leidos.com/health/publichealth',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_health:https://www.leidos.com/health',
  );
  // Exported menu link: main-menu_quarterly-earnings:http://investors.leidos.com/phoenix.zhtml?c=193857&p=quarterlyearnings
  $menu_links['main-menu_quarterly-earnings:http://investors.leidos.com/phoenix.zhtml?c=193857&p=quarterlyearnings'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://investors.leidos.com/phoenix.zhtml?c=193857&p=quarterlyearnings',
    'router_path' => '',
    'link_title' => 'Quarterly Earnings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_quarterly-earnings:http://investors.leidos.com/phoenix.zhtml?c=193857&p=quarterlyearnings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_investors:http://investors.leidos.com/',
  );
  // Exported menu link: main-menu_ranking--awards:https://www.leidos.com/about/rankings-awards
  $menu_links['main-menu_ranking--awards:https://www.leidos.com/about/rankings-awards'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about/rankings-awards',
    'router_path' => '',
    'link_title' => 'Ranking & Awards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ranking--awards:https://www.leidos.com/about/rankings-awards',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: main-menu_search:<nolink>
  $menu_links['main-menu_search:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => 'Search Leidos.com',
      ),
      'identifier' => 'main-menu_search:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sec-filings:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-sec
  $menu_links['main-menu_sec-filings:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-sec'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-sec',
    'router_path' => '',
    'link_title' => 'SEC Filings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sec-filings:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-sec',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_investors:http://investors.leidos.com/',
  );
  // Exported menu link: main-menu_smart-grid:https://www.leidos.com/engineering/smart-grid/
  $menu_links['main-menu_smart-grid:https://www.leidos.com/engineering/smart-grid/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/smart-grid/',
    'router_path' => '',
    'link_title' => 'Smart Grid',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_smart-grid:https://www.leidos.com/engineering/smart-grid/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_stock-data:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-stockquote
  $menu_links['main-menu_stock-data:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-stockquote'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-stockquote',
    'router_path' => '',
    'link_title' => 'Stock Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_stock-data:http://investors.leidos.com/phoenix.zhtml?c=193857&p=irol-stockquote',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_investors:http://investors.leidos.com/',
  );
  // Exported menu link: main-menu_systems-integration--controls:https://www.leidos.com/engineering/systems-integration-controls
  $menu_links['main-menu_systems-integration--controls:https://www.leidos.com/engineering/systems-integration-controls'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/systems-integration-controls',
    'router_path' => '',
    'link_title' => 'Systems Integration / Controls',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_systems-integration--controls:https://www.leidos.com/engineering/systems-integration-controls',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_utility-security:https://www.leidos.com/engineering/utility-security
  $menu_links['main-menu_utility-security:https://www.leidos.com/engineering/utility-security'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/engineering/utility-security',
    'router_path' => '',
    'link_title' => 'Utility Security',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_utility-security:https://www.leidos.com/engineering/utility-security',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_engineering:engineering',
  );
  // Exported menu link: main-menu_vision-mission-values:https://www.leidos.com/about/mission
  $menu_links['main-menu_vision-mission-values:https://www.leidos.com/about/mission'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.leidos.com/about/mission',
    'router_path' => '',
    'link_title' => 'Vision, Mission, Values',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_vision-mission-values:https://www.leidos.com/about/mission',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:https://www.leidos.com/about',
  );
  // Exported menu link: menu-engineering-navigation_articles--publications:https://www.leidos.com/engineering/articles
  $menu_links['menu-engineering-navigation_articles--publications:https://www.leidos.com/engineering/articles'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/articles',
    'router_path' => '',
    'link_title' => 'Articles & Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_articles--publications:https://www.leidos.com/engineering/articles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_newsroom:https://www.leidos.com/engineering/newsroom',
  );
  // Exported menu link: menu-engineering-navigation_awards:https://www.leidos.com/engineering/awards
  $menu_links['menu-engineering-navigation_awards:https://www.leidos.com/engineering/awards'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/awards',
    'router_path' => '',
    'link_title' => 'Awards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_awards:https://www.leidos.com/engineering/awards',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
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
  // Exported menu link: menu-engineering-navigation_government:https://www.leidos.com/engineering/markets/government
  $menu_links['menu-engineering-navigation_government:https://www.leidos.com/engineering/markets/government'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/markets/government',
    'router_path' => '',
    'link_title' => 'Government',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_government:https://www.leidos.com/engineering/markets/government',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets',
  );
  // Exported menu link: menu-engineering-navigation_industry-rankings:https://www.leidos.com/engineering/industry-rankings
  $menu_links['menu-engineering-navigation_industry-rankings:https://www.leidos.com/engineering/industry-rankings'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/industry-rankings',
    'router_path' => '',
    'link_title' => 'Industry Rankings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_industry-rankings:https://www.leidos.com/engineering/industry-rankings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_engineering:https://www.leidos.com/engineering',
  );
  // Exported menu link: menu-engineering-navigation_leadership:https://www.leidos.com/engineering/leadership
  $menu_links['menu-engineering-navigation_leadership:https://www.leidos.com/engineering/leadership'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/leadership',
    'router_path' => '',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_leadership:https://www.leidos.com/engineering/leadership',
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
  // Exported menu link: menu-engineering-navigation_lenders-and-developers:https://www.leidos.com/engineering/markets/lenders-developers
  $menu_links['menu-engineering-navigation_lenders-and-developers:https://www.leidos.com/engineering/markets/lenders-developers'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/markets/lenders-developers',
    'router_path' => '',
    'link_title' => 'Lenders and Developers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_lenders-and-developers:https://www.leidos.com/engineering/markets/lenders-developers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets',
  );
  // Exported menu link: menu-engineering-navigation_manufacturing--industrial:https://www.leidos.com/engineering/markets/manufacturing-and-industrial
  $menu_links['menu-engineering-navigation_manufacturing--industrial:https://www.leidos.com/engineering/markets/manufacturing-and-industrial'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/markets/manufacturing-and-industrial',
    'router_path' => '',
    'link_title' => 'Manufacturing & Industrial',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_manufacturing--industrial:https://www.leidos.com/engineering/markets/manufacturing-and-industrial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets',
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
    'has_children' => 1,
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-engineering-navigation_office-locations:https://www.leidos.com/engineering/engineering-office-locations
  $menu_links['menu-engineering-navigation_office-locations:https://www.leidos.com/engineering/engineering-office-locations'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/engineering-office-locations',
    'router_path' => '',
    'link_title' => 'Office Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_office-locations:https://www.leidos.com/engineering/engineering-office-locations',
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
  // Exported menu link: menu-engineering-navigation_oil-gas--chemicals:https://www.leidos.com/engineering/markets/oil-gas
  $menu_links['menu-engineering-navigation_oil-gas--chemicals:https://www.leidos.com/engineering/markets/oil-gas'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/markets/oil-gas',
    'router_path' => '',
    'link_title' => 'Oil, Gas & Chemicals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_oil-gas--chemicals:https://www.leidos.com/engineering/markets/oil-gas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets',
  );
  // Exported menu link: menu-engineering-navigation_our-engineering-legacy:https://www.leidos.com/engineering/ourlegacy
  $menu_links['menu-engineering-navigation_our-engineering-legacy:https://www.leidos.com/engineering/ourlegacy'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/ourlegacy',
    'router_path' => '',
    'link_title' => 'Our Engineering Legacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_our-engineering-legacy:https://www.leidos.com/engineering/ourlegacy',
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
  // Exported menu link: menu-engineering-navigation_utilities:https://www.leidos.com/engineering/markets/utilities
  $menu_links['menu-engineering-navigation_utilities:https://www.leidos.com/engineering/markets/utilities'] = array(
    'menu_name' => 'menu-engineering-navigation',
    'link_path' => 'https://www.leidos.com/engineering/markets/utilities',
    'router_path' => '',
    'link_title' => 'Utilities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-engineering-navigation_utilities:https://www.leidos.com/engineering/markets/utilities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-engineering-navigation_markets:https://www.leidos.com/engineering/markets',
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
  t('About');
  t('Advanced Communications Systems');
  t('Articles & Publications');
  t('Awards');
  t('Border & Transportation Security');
  t('Business / Financial Advisory');
  t('Cancer & AIDS Research');
  t('Capabilities');
  t('Careers');
  t('Carrers FAQs');
  t('Command & Control');
  t('Commercial Cyber');
  t('Commitment to Quality');
  t('Connect on Facebook');
  t('Connect on Google+');
  t('Connect on LinkedIn');
  t('Connect on Twitter');
  t('Connect on Youtube');
  t('Contact');
  t('Contact Us');
  t('Contact us');
  t('Corporate Governance');
  t('Corporate Responsibility');
  t('DesignBuild / EPC');
  t('Energy Management');
  t('Engineering');
  t('Environment');
  t('Features');
  t('Federal Contract Vehicles');
  t('Federal Cyber');
  t('For Alumni');
  t('For Customers');
  t('For Employees');
  t('For Suppliers');
  t('Government');
  t('Health');
  t('Health IT');
  t('Healthcare Quality & Cost');
  t('Industry News & Events');
  t('Industry Rankings');
  t('Investors');
  t('Leadership');
  t('Legacy');
  t('Leidos');
  t('Leidos Companies');
  t('Leidos © 2015 Leidos');
  t('Lenders and Developers');
  t('Life Sciences');
  t('Life at Leidos');
  t('Logistics');
  t('Manufacturing & Industrial');
  t('Markets');
  t('Multimedia');
  t('National Security');
  t('Newsroom');
  t('Office Locations');
  t('Oil, Gas & Chemicals');
  t('Opportunities');
  t('Our Engineering Legacy');
  t('Pay & Benefits');
  t('Power Grid Engineering');
  t('Privacy Policy');
  t('Products');
  t('Projects');
  t('Public Health');
  t('Quarterly Earnings');
  t('Ranking & Awards');
  t('Research & Development');
  t('SEC Filings');
  t('Search');
  t('Services');
  t('Site Map');
  t('Smart Grid');
  t('Stock Data');
  t('Systems Integration / Controls');
  t('Utilities');
  t('Utility Security');
  t('Vision, Mission, Values');


  return $menu_links;
}
