//	Capabilities Module
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosFlexFunctions = {
    attach: function (context, settings) {
			// open video pop up
			jQuery('.hero-rotator-inner .views-field-field-subhead').append('<a href="#" class="button-close"></a><a href="#" class="button-play">Watch Video</a>');
		}
	};	
})(jQuery);
