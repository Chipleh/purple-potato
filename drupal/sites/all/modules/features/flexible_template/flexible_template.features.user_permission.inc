<?php
/**
 * @file
 * flexible_template.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function flexible_template_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format restricted_html'.
  $permissions['use text format restricted_html'] = array(
    'name' => 'use text format restricted_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
