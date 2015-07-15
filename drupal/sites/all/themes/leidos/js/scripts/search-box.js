//	Search Box JS
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {

	var searchBox = jQuery('li.last span.nolink');
	var cancelButton = jQuery('#search_leidos_website span');
	var searchForm = jQuery('div.block-leidos-custom-search');

	// search click
	jQuery(searchBox).on('click', function() {
		jQuery(searchBox).toggleClass('search-active');
		jQuery(searchForm).toggleClass('search-active');
		jQuery('.mobile-drop-active').removeClass('mobile-drop-active');
	});

	//search click
	jQuery(cancelButton).on('click', function(e) {
		jQuery(searchBox).toggleClass('search-active');
		jQuery(searchForm).toggleClass('search-active');
		e.preventDefault();
	});

});

