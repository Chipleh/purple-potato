//  Search Page URL Hoist
//  Rhino Hooton
//  1/17/17
(function ($) {
    Drupal.behaviors.leidosSearchResultsPage = {
        attach: function (context, settings) {
        	var $formAction = $('#search_leidos_website').attr('action');
        	$("#search_leidos_website input:text").keyup(function() {
        	  $('#search_leidos_website').attr('action', $formAction + "/" + $(this).val());
        	});
        }
    };
})(jQuery);
