<?php
  // Uncomment this to see all data that was entered in the CMS for this panel.
  //dpm($output, 'output');
?>
<div <?php if (!empty($pane_id)) { print 'id="' . $pane_id . '"'; } ?> class="ranking-promo columns-<?php print $output['ranking_columns']; ?>">
  <?php foreach ($output['ranking'] as $ranking) {
    $ranking_class = isset($ranking['field_title_color']) ? 'ranking-circle' : 'ranking-simple';
    $ranking_style = isset($ranking['field_title_color']) ? 'style="background-color: ' . $ranking['field_title_color'] . ';"' : '';
    ?>
 		<div class="ranking-container">
			<div class="<?php print $ranking_class; ?>" <?php print $ranking_style; ?>>#<?php print $ranking['field_ranking_number']; ?></div>
			<div class="ranking-details">
				<div class="title"><?php print $ranking['field_title_item']; ?></div>
				<div class="cta"><?php print $ranking['field_cta']; ?></div>
			</div>
		</div>
 	<?php } ?>
</div>
