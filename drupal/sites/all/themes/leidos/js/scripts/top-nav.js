//	Top Nav JS
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {

	jQuery(".expanded a").hover(
		function() {
			jQuery(this).parent(".expanded").toggleClass("hover");
		}
	);
	jQuery(".no-children").hover(
		function() {
			jQuery(this).parent(".expanded").toggleClass("hover");
		}
	);

});

