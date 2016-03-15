<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 */
?>

<?php
  $attributes1 = array();
  $attributes2 = array();

  // Append background color to outer wrapper.
  if (isset($row->field_field_background_color[0]['raw']['rgb'])) {
    $background_color = $row->field_field_background_color[0]['raw']['rgb'];

    $attributes1[] = 'style="background-color: ' . $background_color . '"';

    unset($fields['field_background_color']);
  }

  // Append desktop background image to custom inner/outer wrapper.
  if (isset($row->field_field_background_image[0]['raw']['uri'])) {
    $background_image = file_create_url($row->field_field_background_image[0]['raw']['uri']);

    $attributes2[] = 'data-background-desktop="' . $background_image . '"';

    unset($fields['field_background_image']);
  }

  // Append mobile background image to custom inner/outer wrapper.
  if (isset($row->field_field_background_mobile_image[0]['raw']['uri'])) {
    $background_image = file_create_url($row->field_field_background_mobile_image[0]['raw']['uri']);

    $attributes2[] = 'data-background-mobile="' . $background_image . '"';

    unset($fields['field_background_mobile_image']);
  }
?>

<div class="hero-rotator-outer" <?php print implode(' ', $attributes1); ?>>
<div class="hero-rotator-inner" <?php print implode(' ', $attributes2); ?>>

<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>

</div>
</div>
