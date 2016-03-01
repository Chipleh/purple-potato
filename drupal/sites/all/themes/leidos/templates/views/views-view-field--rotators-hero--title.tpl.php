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
 *
 * @ingroup views_templates
 */
?>

<?php
  if (isset($row->node_title)) {
    $attributes = '';
    $results = '';

    // Set subhead color.
    if (isset($row->field_field_title_color)) {
      $attributes = 'style="color:' . $row->field_field_title_color[0]['rendered']['#markup'] . '"';
    }

    // Set subhead size.
    if (isset($row->field_field_title_size)) {
      $results .= '<'  . $row->field_field_title_size[0]['rendered']['#markup'] . ' ' . $attributes . '>';
      $results .= $row->node_title;
      $results .= '</' . $row->field_field_title_size[0]['rendered']['#markup'] . '>';
    }

    print $results;
  }
?>
