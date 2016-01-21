<?php
/**
 * @file
 * Admin-related callbacks for Adobe DTM.
 */

/**
 * This function provides the edit form.
 */
function adobe_dtm_settings($form, &$form_state, $profile = array()) {

  $adobe_dtm_environment = variable_get('adobe_dtm_environment', 'staging');
  $adobe_dtm_placement = variable_get('adobe_dtm_placement', 'default');

  $form['adobe_dtm_placement'] = array(
    '#type' => 'select',
    '#title' => t('Header Script Scope'),
    '#description' => t("If your theme does not output header scripts in the HEAD, you may want to set this to 'Header'. By default, Adobe DTM module places the script into the 'header' scope with drupal_add_js()."),
    '#options' => array(
      'default' => t('Default'),
      'header' => t('Header'),
    ),
    '#default_value' => $adobe_dtm_placement,
  );

  $form['adobe_dtm_environment'] = array(
    '#type' => 'select',
    '#title' => t('Current Server Environment'),
    '#options' => array(
      'production' => t('Production'),
      'staging' => t('Staging'),
    ),
    '#default_value' => $adobe_dtm_environment,
  );

  $form['adobe_dtm_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['adobe_dtm_settings']['adobe_dtm_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Adobe DTM ID'),
    '#description' => t('Adobe DTM serial number.'),
    '#default_value' => variable_get('adobe_dtm_id', ''),
  );
  $form['adobe_dtm_settings']['adobe_dtm_hash'] = array(
    '#type' => 'textfield',
    '#title' => t('Adobe DTM Site Hash'),
    '#description' => t('Adobe DTM site hash.'),
    '#default_value' => variable_get('adobe_dtm_hash', ''),
  );

  return system_settings_form($form);
}
