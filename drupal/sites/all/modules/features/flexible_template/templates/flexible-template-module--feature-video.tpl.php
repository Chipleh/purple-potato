<?php
/**
 * @file flexible-template-module--feature_video.tpl.php
 * Flexible Template module template.
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="flexible-template-content">
    <?php if(isset($display_background_url) && $display_background_url == TRUE){ ?>
        <a href="<?php print $background_url; ?>">
        <?php print render($content['title']); ?>
        <?php print render($content); ?></a>
    <?php } else { ?>
        <?php print render($content['title']); ?>
        <?php print render($content); ?>
    <?php } ?>
  </div>
</div>
