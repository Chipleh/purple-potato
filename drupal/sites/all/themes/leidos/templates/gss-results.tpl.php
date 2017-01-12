<?php

/**
 * @file search-results.tpl.php
 * Default theme implementation for displaying search results.
 *
 * This template collects each invocation of theme_gss_result(). This and
 * the child template are dependant to one another sharing the markup for
 * definition lists.
 *
 * Note that modules may implement their own search type and theme function
 * completely bypassing this template.
 *
 * Available variables:
 * - $search_results: All results as it is rendered through
 *   search-result.tpl.php
 *
 * @see template_preprocess_gss_results()
 */
?>
<h1>Search</h1>
<div class="left">
  <ul>
    <li><?php print l('Site Map', 'sitemap') ?></li>
    <li><?php print l('Contact Us', 'contact') ?></li>
  </ul>
</div>
<div class="right">
  <span>
    <?php print $head; ?>
    <div class="sorting-filters">
    <label>Sort by:</label>
    <?php if (isset($_GET['sort'])): ?>
      <?php print l('Best Match', current_path()) ?> | <span>Recently Updated</span>
    <?php else: ?>
      <span>Best Match</span> | <?php print l('Recently Updated', current_path(), array('query' => array('sort' => 'date'))) ?>
    <?php endif; ?>
    </div>
  </span>
  <ol class="google-search-results">
    <?php print $search_results; ?>
  </ol>
  <?php print $pager; ?>
</div>
