//	Search Box JS
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {

	var searchBox = jQuery('li.last span.nolink');
	var cancelButton = jQuery('#search_leidos_website span');
	var searchForm = jQuery('div.block-leidos-custom-search');

	// search click
	jQuery(searchBox).on('click', function() {
		jQuery(searchBox).toggleClass('active');
		jQuery(searchForm).toggleClass('active');
	});

	//search click
	jQuery(cancelButton).on('click', function(e) {
		jQuery(searchBox).toggleClass('active');
		jQuery(searchForm).toggleClass('active');
		e.preventDefault();
	});

});

