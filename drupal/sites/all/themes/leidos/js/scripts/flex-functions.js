//	Capabilities Module
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosFlexFunctions = {
    attach: function (context, settings) {
			// open video pop up
			jQuery('.node-type-flexible-template .button-play').on('click', function () {
				jQuery(this).parent().addClass('video-container-open');
				jQuery('.node-type-flexible-template').addClass('video-open');
			});
			// close video pop up
			jQuery('.node-type-flexible-template .button-close').on('click', function () {
				jQuery(this).parent().removeClass('video-container-open');
				jQuery('.node-type-flexible-template').removeClass('video-open');
			});
		}
	};	
})(jQuery);
