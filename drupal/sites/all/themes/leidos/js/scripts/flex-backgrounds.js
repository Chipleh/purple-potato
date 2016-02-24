//  Toggle background images (desktop/mobile) based on web browser width.
//  Marc S. Brooks
//  2/24/16
(function ($) {
	Drupal.behaviors.flexibleTemplateBackground = {
		attach: function(context, settings) {

			// Define styles for defined data-* attributes.
			function defineStyles() {
				var width  = jQuery('body').width(),
				    select = null;

				if (width > 960) {
					select = 'data-background-desktop';
				} else {
					select = 'data-background-mobile';
				}

				var items = jQuery('[' + select + ']');

				items.each(function() {
					var item = $(this),
					    val  = item.attr(select);

					// Remove style from parent node, if exists.
					item.parent().removeAttr('style');

					// Append background to parent node.
					item.parent().attr('style', val)
				});
			}

			// Listen for resize events.
			window.onresize = defineStyles;

			// Init on load.
			defineStyles();
		}
	};
})(jQuery);
