<div class="sliding-box">
  <div class="inner">
    <div class="header-box" style="background-color: <?php print $fields['field_top_color']->content; ?>;">
      <h2><?php print $fields['name']->content; ?></h2>
    </div>
    <div class="slide-box-content <?php print str_replace(' ', '-', strtolower($fields['field_hover_shape']->content)); ?>">
      <p><?php print $fields['field_hover_text']->content; ?></p>
    </div>
  </div>
  <div class="click-box-content">
    <div class="click-box-image">
      <?php print $fields['field_taxonomy_image']->content; ?>
      <div class="click-box-image-caption"><?php print $fields['field_preview_image_hover_text']->content; ?></div>
    </div>
    <div class="click-box-right">
      <span class="click-box-close"><a href="#">&nbsp;</a></span>
      <div class="click-box-title"><?php print $fields['name']->content; ?></div>
      <div class="click-box-summary"><?php print $fields['field_short_summary']->content; ?></div>
      <div class="click-box-subcategories"><?php print $fields['field_preview_image_hover_text']->content; ?></div>
      <span class="click-box-services"><?php print l(t('Visit services &raquo;'), 'term/' . $fields['tid']->raw); ?></span>
    </div>
  </div>
</div>
