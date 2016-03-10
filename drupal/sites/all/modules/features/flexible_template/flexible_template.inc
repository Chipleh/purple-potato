<?php
/**
 * @file
 * Flexible Template - Shared functions.
 */

/**
 * Field collection implementation of template_preprocess_entity().
 *
 * @param object $variables
 *
 * The $variables array contains the following arguments:
 * - $node
 * - $view_mode
 * - $page
 */
function flexible_template_preprocess_field_collection_item(&$variables) {
  $content = &$variables['content'];

  // Set title color.
  if (isset($content['field_title_color'])) {
    $content['field_title_item'][0]['#attributes'] = array('style' => 'color:' . $content['field_title_color']['#items'][0]['rgb']);
    unset($content['field_title_color']);
  }

  // Set title size.
  if (isset($content['field_title_size'])) {
    if (isset($content['field_title_item'])) {
      $content['field_title_item'][0]['#theme'] = 'html_tag';
      $content['field_title_item'][0]['#tag']   = $content['field_title_size'][0]['#markup'];
      $content['field_title_item'][0]['#value'] = $content['field_title_item'][0]['#markup'];
    }
    unset($content['field_title_size']);
  }

  // Preprocess Subhead elements.
  flexible_template_preprocess_subhead($variables);
}

function flexible_template_preprocess_field_columns_multi(&$variables) {

  // Preprocess Field Collection elements.
  flexible_template_preprocess_field_collection_item($variables);

  // Append jQuery data-* attibutes to background elements.
  flexible_template_append_background_attributes($variables);
}

function flexible_template_preprocess_field_icon_item(&$variables) {

  // Preprocess Field Collection elements.
  flexible_template_preprocess_field_collection_item($variables);
}


function flexible_template_preprocess_field_thumbnail_image_item(&$variables) {

  // Preprocess Field Collection elements.
  flexible_template_preprocess_field_collection_item($variables);
}

/**
 * Preprocess Subtitle value based on configured Color/Size field values.
 *
 * @param object $variables
 *
 * The $variables array contains the following arguments:
 * - $node
 * - $view_mode
 * - $page
 *
 * @see field_subhead
 * @see field_subhead_color
 * @see field_subhead_size
 */
function flexible_template_preprocess_subhead(&$variables) {
  $content = &$variables['content'];

  // Set subhead color.
  if (isset($content['field_subhead_color'])) {
    $content['field_subhead'][0]['#attributes'] = array('style' => 'color:' . $content['field_subhead_color']['#items'][0]['rgb']);
    unset($content['field_subhead_color']);
  }

  // Set subhead size.
  if (isset($content['field_subhead_size'])) {
    $content['field_subhead'][0]['#theme'] = 'html_tag';
    $content['field_subhead'][0]['#tag']   = $content['field_subhead_size'][0]['#markup'];
    $content['field_subhead'][0]['#value'] = $content['field_subhead'][0]['#markup'];
    unset($content['field_subhead_size']);
  }
}

/**
 * Append data-* elements to container to be post-processed using jQuery.
 *
 * @param object $variables
 *
 * The $variables array contains the following arguments:
 * - $node
 * - $view_mode
 * - $page
 *
 * @see field_background_image
 * @see field_background_mobile_image
 */
function flexible_template_append_background_attributes(&$variables) {
  $content = &$variables['content'];

  // Append desktop background image to collection wrapper.
  if (isset($variables['field_background_image'])) {
    $background_image = file_create_url($variables['field_background_image'][0]['uri']);
    $variables['attributes_array']['data-background-desktop'] = 'background-image: url(' . $background_image . ')';
    unset($content['field_background_image']);
  }

  // Append mobile background image to collection wrapper.
  if (isset($variables['field_background_mobile_image'])) {
    $background_image = file_create_url($variables['field_background_mobile_image'][0]['uri']);
    $variables['attributes_array']['data-background-mobile'] = 'background-image: url(' . $background_image . ')';
    unset($content['field_background_mobile_image']);
  }
}

/**
 * Apply conditional states to circular dependent form fields.
 *
 * @param object $field
 *   Reference to the form field object.
 *
 * @param int $delta (optional)
 *   Field Collection item delta.
 *
 * @see field_title_color
 * @see field_title_size
 * @see field_subhead_color
 * @see field_subhead_size
 * @see field_background_mobile_image
 */
function flexible_template_form_field_apply_states(&$field, $delta = NULL) {
  if (isset($field['field_title_color'])) {
    $selector = ($delta !== NULL && $delta >= 0)
      ? ':input[name="' . $field['#field_name'] . '[und][0][field_title_item][und][' . $delta . '][value]"]'
      : ':input[name="title"]';

    $field['field_title_color']['#states'] = array(
      'disabled' => array(
        $selector => array('empty' => TRUE),
      ),
      'visible' => array(
        $selector => array('filled' => TRUE),
      ),
    );
  }

  if (isset($field['field_title_size'])) {
    $selector = ($delta !== NULL && $delta >= 0)
      ? ':input[name="' . $field['#field_name'] . '[und][0][field_title_item][und][' . $delta . '][value]"]'
      : ':input[name="title"]';

    $field['field_title_size']['#states'] = array(
      'disabled' => array(
        $selector => array('empty' => TRUE),
      ),
      'visible' => array(
        $selector => array('filled' => TRUE),
      ),
    );
  }

  if (isset($field['field_subhead_color'])) {
    $selector = ($delta !== NULL && $delta >= 0)
      ? 'textarea[name="' . $field['#field_name'] . '[und][0][field_subhead][und][' . $delta . '][value]"]'
      : 'textarea[name="field_subhead[und][0][value]"]';

    $field['field_subhead_color']['#states'] = array(
      'disabled' => array(
        $selector => array('empty' => TRUE),
      ),
      'visible' => array(
        $selector => array('filled' => TRUE),
      ),
    );
  }

  if (isset($field['field_subhead_size'])) {
    $selector = ($delta !== NULL && $delta >= 0)
      ? 'textarea[name="' . $field['#field_name'] . '[und][0][field_subhead][und][' . $delta . '][value]"]'
      : 'textarea[name="field_subhead[und][0][value]"]';

    $field['field_subhead_size']['#states'] = array(
      'disabled' => array(
        $selector => array('empty' => TRUE),
      ),
      'visible' => array(
        $selector => array('filled' => TRUE),
      ),
    );
  }

  if (isset($field['field_background_mobile_image'])) {
    $selector = ($delta !== NULL && $delta >= 0)
      ? ':input[name="' . $field['#field_name'] . '[und][0][field_background_image][und][' . $delta . '][fid]"]'
      : ':input[name="field_background_image[und][0][fid]"]';

    $field['field_background_mobile_image']['#states'] = array(
      'disabled' => array(
        $selector => array('empty' => TRUE),
      ),
      'visible' => array(
        $selector => array('!value' => 0),
      ),
    );
  }
}

/**
 * Remove "- None -" from optional select list fields.
 *
 * @param object $field
 *   Reference to the form/element object.
 *
 * @param bool $widget
 *   Process as a Widget field.
 *
 * @see field_title_size
 * @see field_subhead_size
 * @see field_image_position
 */
function flexible_template_form_remove_option_none(&$field, $widget = FALSE) {

  // Widget field
  if ($widget && isset($field['#field_name'])) {
    if ($field['#field_name'] == 'field_title_size') {
      unset($field['#options']['_none']);
    }

    if ($field['#field_name'] == 'field_subhead_size') {
      unset($field['#options']['_none']);
    }
  }

  // Standard form and Panel Panes
  else {
    if (isset($field['field_title_size'])) {
      unset($field['field_title_size'][LANGUAGE_NONE]['#options']['_none']);
    }

    if (isset($field['field_subhead_size'])) {
      unset($field['field_subhead_size'][LANGUAGE_NONE]['#options']['_none']);
    }

    if (isset($field['field_image_position'])) {
      unset($field['field_image_position'][LANGUAGE_NONE]['#options']['_none']);
    }
  }
}

/**
 * Field collection form callback.
 *
 * @see field_columns_multi
 */
function flexible_template_field_collection_form_validate(&$form, &$form_state) {

  // Throw error when Multi-column contains more than 4 columns.
  if (count($form_state['values']['field_columns_multi'][LANGUAGE_NONE]) > 4) {
    form_set_error('field_columns_multi', t('This module only supports 4 columns.  Please make the necessary adjustments and try again.'));
  }
}
