<?php
/**
 * @file flexible-template-module--rotator_hero.tpl.php
 * Flexible Template module template.
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="flexible-template-content">
    <?php print render($content['title']); ?>
    <?php print render($content); ?>
  </div>
</div>
