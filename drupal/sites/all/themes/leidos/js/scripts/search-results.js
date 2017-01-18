//  Search Page URL Hoist
//  Rhino Hooton
//  1/17/17
(function ($) {
    Drupal.behaviors.leidosSearchResultsPage = {
        attach: function (context, settings) {
            if (jQuery('.google-search-results-head').length > 0) {
                jQuery(document).ready(function() {
                    var searchQuery = jQuery(".searchhead b:nth-child(2)").text();;
                    window.history.replaceState(null, null, "/search/gss/" + searchQuery);
                });
            }
        }
    };
})(jQuery);
