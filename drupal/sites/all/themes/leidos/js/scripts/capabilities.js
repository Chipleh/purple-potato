//	Capabilities Module
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {
	jQuery('.sliding-box').hover(function() {
		jQuery(this).toggleClass('hover');
	});

	jQuery('.sliding-box').on('click', function () {
		if (jQuery(this).hasClass('open')) {
			jQuery(this).removeClass('open');
			return false;
		}
		jQuery('.open').removeClass('open');
		jQuery(this).toggleClass('open');
	});
});
