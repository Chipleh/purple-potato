//	Projects JS
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosProjects = {
    attach: function (context, settings) {
    	jQuery('.pane-projects .views-row, .pane-projects-full-view-projects-pane .views-row, .pane-projects-full-view-projects-pane-mobile .views-row').hover(function() {
    		jQuery(this).toggleClass("hover");
    	});
    }
  };
})(jQuery);