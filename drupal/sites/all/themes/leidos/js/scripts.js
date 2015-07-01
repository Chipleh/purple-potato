jQuery(document).ready(function() {

	var searchBox = jQuery('li.last span.nolink');
	var searchForm = jQuery('div.block-leidos-custom-search');

	// search click
	jQuery('li.last span.nolink').on('click', function() {
		jQuery(searchBox).toggleClass('active');
		jQuery(searchForm).toggleClass('active');
	});

	// search click
	// jQuery('li.last span.nolink').on('click', function() {
	// 	jQuery(searchBox).toggleClass('active');
	// 	jQuery(searchBox).toggleClass('active');
	// });

});