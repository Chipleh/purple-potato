<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php //dpm($view); ?>
<?php foreach ($view->result as $slide): ?>

    <div class="heroCarousel__item heroCarousel__item--v3"
         style="background-image: url('<?php print file_create_url($slide->field_field_campaign_image[0]['rendered']['#item']['uri']); ?>');">
        <?php //check if there is a mobile image
        if(isset($slide->field_field_campaign_image_mobile[0]['rendered']['#item']['uri'])): ?>
            <div class="hero-mobile-background" style="background-image:<?php print file_create_url($slide->field_field_campaign_image_mobile[0]['rendered']['#item']['uri']); ?>; display:none;"><?php print file_create_url($slide->field_field_campaign_image_mobile[0]['rendered']['#item']['uri']); ?></div>
        <?php else: ?>
            <div class="hero-mobile-background" style="background-image:<?php print file_create_url($slide->field_field_campaign_image[0]['rendered']['#item']['uri']); ?>; display:none;"><?php print file_create_url($slide->field_field_campaign_image[0]['rendered']['#item']['uri']); ?></div>
        <?php endif; ?>
            <?php //check for full width page setting on node
            //dpm($slide);
            //dpm($slide->field_field_full_width_area[0]['rendered']['#markup']);
            if(isset($slide->field_field_full_width_text_area) && $slide->field_field_full_width_text_area[0]['rendered']['#markup'] == "Full Width Center"):
            ?>
                <div class="heroCarousel__inner-full-width-center">
            <?php elseif(isset($slide->field_field_full_width_text_area) && $slide->field_field_full_width_text_area[0]['rendered']['#markup'] == "Right"): ?>
                <div class="heroCarousel__inner-full-width-right">
            <?php else: ?>
            <div class="heroCarousel__inner">
            <?php endif; ?>
            <?php
              //strip the <p> tags off the h1 title string
              //$h1 = preg_replace('/<p[^>]*>(.*)<\/p[^>]*>/i', '$1', $slide->field_field_h1[0]['rendered']['#markup']);
            $tags = array("<p>", "</p>");
            $string =  $slide->field_field_h1[0]['rendered']['#markup'];
           $h1 =  str_replace($tags, "", $string);
            ?>
            <?php
            //set a default h1 style
            if(isset($slide->field_field_h1_Style[0]['rendered']['#markup'])){
                $h1style = $slide->field_field_h1_Style[0]['rendered']['#markup'];
            } else {
                $h1style = 'font-size:60px; line-height:1.1em; color:#fff; margin: -40px 0 0 0 ; text-shadow:none; padding: -25px 0 0 0;';
            }

            ?>
            <h1 style="<?php print $h1style ?>"><?php print $h1 ?></h1>

            <p style="<?php $slide->field_field_body_style[0]['rendered']['#markup'] ?>"><?php print $slide->field_body[0]['rendered']['#markup'] ?></p>

            <a class="cta cta__secondary" href="<?php print $slide->field_field_cta[0]['raw']['display_url']; ?>" onClick="<?php print $slide->field_field_ga_code[0]['rendered']['#markup']; ?>">Learn
                More</a></div>
    </div>
<?php endforeach; ?>

