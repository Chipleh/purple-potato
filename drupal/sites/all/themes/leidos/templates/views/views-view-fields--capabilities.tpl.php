<?php if ($fields['field_hide_hover']->content && $fields['field_hide_preview_box']->content) { ?>
  <a href="<?php print $fields['field_redirect']->content; ?>">
    <div class="sliding-box hide-<?php print $fields['field_hide_preview_box']->content; ?>">
      <div class="inner">
        <div class="header-box" style="background-color: <?php print $fields['field_top_color']->content; ?>;">
          <h2><span><?php print $fields['name']->content; ?></span></h2>
        </div>
        <div class="image-box"><?php print $fields['field_taxonomy_image']->content; ?></div>
      </div>
    </div>
  </a>
<?php } else { ?>
  <div class="sliding-box hide-<?php print $fields['field_hide_preview_box']->content; ?>">
    <div class="inner">
      <div class="header-box" style="background-color: <?php print $fields['field_top_color']->content; ?>;">
        <h2><span><?php print $fields['name']->content; ?></span></h2>
      </div>
      <div class="image-box"><?php print $fields['field_taxonomy_image']->content; ?></div>
      <div class="slide-box-content hide-<?php print $fields['field_hide_hover']->content; ?> <?php print str_replace(' ', '-', strtolower($fields['field_hover_shape']->content)); ?>">
        <p><?php print $fields['field_hover_text']->content; ?></p>
        <span class="slide-box-more">More</span>
        <div class="slide-box-content-bg" style="background-color: <?php print $fields['field_bottom_color']->content; ?>;"></div>
      </div>
    </div>
    <div class="click-box-content">
      <div class="click-box-image">
        <?php print $fields['field_preview_image']->content; ?>
        <div class="click-box-image-caption-container">
          <div class="click-box-image-caption"><?php print $fields['field_preview_image_hover_text']->content; ?></div>
          <div class="click-box-image-additional-caption"><?php print $fields['field_preview_image_hover_sub']->content; ?></div>
        </div>
      </div>
      <div class="click-box-right">
        <div class="click-box-title"><?php print $fields['name']->content; ?></div>
        <span class="click-box-close"><a href="#">X</a></span>
        <div class="click-box-summary"><?php print $fields['field_short_summary']->content; ?></div>
        <div class="click-box-subcategories"><?php print $fields['field_featured_subcategories']->content; ?></div>
        <span class="click-box-services"><?php print !empty($fields['field_cta']->content) ? $fields['field_cta']->content : l(t('Visit services'), 'taxonomy/term/' . $fields['tid']->raw); ?></span>
      </div>
    </div>
  </div>
<?php } ?>