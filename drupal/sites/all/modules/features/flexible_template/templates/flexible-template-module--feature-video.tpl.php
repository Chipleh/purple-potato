<?php
/**
 * @file flexible-template-module--feature_video.tpl.php
 * Flexible Template module template.
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?> style="background-image: url('<?php print $background_mobile_image; ?>');">
  <div class="flexible-template-content">
    <?php print render($content['title']); ?>
    <?php print render($content); ?>
  </div>
</div>
