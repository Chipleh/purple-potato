<?php
/**
 * @file
 * This template is used to print a single field in a view.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 */
?>

<?php
  if (isset($row->field_field_subhead)) {
    $attributes = '';
    $results = '';

    // Set subhead color.
    if (isset($row->field_field_subhead_color)) {
      $attributes = 'style="color:' . $row->field_field_subhead_color[0]['rendered']['#markup'] . '"';
    }

    // Set subhead size.
    if (isset($row->field_field_subhead_size)) {
      $results .= '<'  . $row->field_field_subhead_size[0]['rendered']['#markup'] . ' ' . $attributes . '>';
      $results .= $row->field_field_subhead[0]['rendered']['#markup'];
      $results .= '</' . $row->field_field_subhead_size[0]['rendered']['#markup'] . '>';
    }

    print $results;
  }
?>
