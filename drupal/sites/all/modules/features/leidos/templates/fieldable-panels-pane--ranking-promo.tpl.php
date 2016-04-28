<?php
  // Uncomment this to see all data that was entered in the CMS for this panel.
  //dpm($output, 'output');
?>
<div <?php if (!empty($pane_id)) { print 'id="' . $pane_id . '"'; } ?> class="ranking-promo columns-<?php print $output['ranking_columns']; ?>">
 	<?php foreach ($output['ranking'] as $ranking) { ?>
 		<div class="ranking-container">
			<div class="ranking-circle" style="background-color: <?php print $ranking['field_title_color']; ?>;">#<?php print $ranking['field_ranking_number']; ?></div>
			<div class="ranking-details">
				<div class="title"><?php print $ranking['field_title_item']; ?></div>
				<div class="cta"><?php print $ranking['field_cta']; ?></div>
			</div>
		</div>
 	<?php } ?>
</div>
