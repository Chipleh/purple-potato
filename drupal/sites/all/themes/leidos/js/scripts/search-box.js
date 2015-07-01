jQuery(document).ready(function() {

	// search click
	jQuery('li.last span.nolink').on('click', function() {
		var searchBox = jQuery('li.last span.nolink');
		var searchForm = jQuery('div.block-leidos-custom-search');
		jQuery(searchBox).toggleClass('active');
	});

});