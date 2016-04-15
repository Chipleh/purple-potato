<div id="announcment-detail">
  <h1 class="title"><?php print $title; ?></h1>
  <hr>
  <?php if (!empty($image) || !empty($video) || !empty($caption) || !empty($icons)) { ?>
  <div class="announcements-media <?php print $alignment; ?>">
    <?php if (!empty($image)) { ?>
    <div class="image"><img src="<?php print $image; ?>"></div>
    <?php } ?>
    <?php if (!empty($video)) { ?>
    <div class="video"><?php print $video; ?></div>
    <?php } ?>
    <?php if (!empty($caption)) { ?>
    <div class="caption"><?php print $caption; ?></div>
    <?php } ?>
    <?php if (!empty($icons)) { ?>
    <div class="icons"><?php print $icons; ?></div>
    <?php } ?>
  </div>
  <?php } ?>
  <div class="body"><?php print $body; ?></div>
</div>
