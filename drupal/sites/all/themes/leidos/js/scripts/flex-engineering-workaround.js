//	Capabilities Module
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.flexWorkaround = {
    attach: function (context, settings) {
      // open video pop up
      jQuery('.hero-rotator-inner .views-field-field-subhead').after('<a href="#" class="button-close">X</a><a href="#" class="button-play">Watch Video</a>');
    }
  };	
})(jQuery);
