//	Capabilities Module
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosCapabilities = {
    attach: function (context, settings) {
			// add hover state on mouse over
			jQuery('.sliding-box .inner').hover(function() {
				jQuery(this).parent('.sliding-box').toggleClass('hover');
			});

			// open slide box on content click
			jQuery('.sliding-box .inner').on('click', function () {
				if (jQuery(this).parent('.sliding-box').hasClass('open')) {
					jQuery(this).parent('.sliding-box').removeClass('open');
					return false;
				}
				jQuery('.open').removeClass('open');
				jQuery(this).parent('.sliding-box').toggleClass('open');
			});

			// close slide box on close click
			jQuery('.sliding-box .click-box-close').on('click', function () {
				jQuery('.open').removeClass('open');
			});
		}
	};	
})(jQuery);