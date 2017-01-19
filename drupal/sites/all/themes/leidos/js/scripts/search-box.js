//  Search Box JS
//  Rhino Hooton
//  6/29/15
(function($) {
    Drupal.behaviors.leidosSearch = {
        attach: function(context, settings) {

            var searchBox = jQuery('li.last span.nolink, .search');
            var cancelButton = jQuery('#search_leidos_website span');
            var searchForm = jQuery('div.block-leidos-custom-search');

            // search click
            jQuery(searchBox).on('click', function() {
                jQuery(searchBox).toggleClass('search-active');
                jQuery(searchForm).toggleClass('search-active');
                jQuery('.mobile-drop-active').removeClass('mobile-drop-active');
                jQuery('#block-system-main-menu').removeClass('show');
            });

            // cancel click
            jQuery(cancelButton).on('click', function(e) {
                jQuery(searchBox).toggleClass('search-active');
                jQuery(searchForm).toggleClass('search-active');
                e.preventDefault();
            });

        }
    };
})(jQuery);
