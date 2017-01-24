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
                jQuery('#search_leidos_website input[type=text]').focus();
            });

            // cancel click
            jQuery(cancelButton).on('click', function(e) {
                jQuery(searchBox).toggleClass('search-active');
                jQuery(searchForm).toggleClass('search-active');

                // delay clear timer
                setTimeout(function () {
                    jQuery('#search_leidos_website input[type=text]').val('');
                }, 500);
                e.preventDefault();
            });
        }
    };
})(jQuery);
