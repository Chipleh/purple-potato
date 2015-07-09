//	Top Nav JS
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {

	var menuAnchor = jQuery(".parent-menu > li a");
	var menuSubMenu = jQuery(".parent-menu > li .no-children");

	// desktop
	jQuery(menuAnchor).hover(
		function() {
			jQuery(this).parent("li").toggleClass("hover");
		}
	);

	jQuery("menuSubMenu").hover(
		function() {
			jQuery(this).parent("li").toggleClass("hover");
		}
	);
});
