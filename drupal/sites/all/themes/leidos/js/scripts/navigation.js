//	Top Nav JS
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {

	var menuAnchor = jQuery(".parent-menu > li a");
	var menuSubMenu = jQuery(".parent-menu > li .no-children");
	var menuSideMobile = jQuery(".left-navigation-menu .parent-menu li.expanded span");
	var menuSideParentMobile = jQuery(".left-navigation-menu .parent-menu");

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

	// tablet/mobile
	jQuery(menuSideMobile).click(
		function() {
			jQuery(this).parent("li").toggleClass("mobile-active");
			jQuery(menuSideParentMobile).toggleClass("parent-shift");
		}
	);
});
