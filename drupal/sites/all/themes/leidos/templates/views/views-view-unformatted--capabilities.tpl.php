<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php if (user_access('administer content')): ?>
  <h3><?php print l(t('[Change sort order]'), 'admin/sorting/project-types'); ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php print $row; ?>
<?php endforeach; ?>
