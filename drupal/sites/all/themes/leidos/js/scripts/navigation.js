//	Top Nav JS
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {

	var menuAnchor = jQuery(".parent-menu > li a");
	var menuSubMenu = jQuery(".parent-menu > li .no-children");
	var menuSideMobile = jQuery(".left-navigation-menu .parent-menu li.expanded span");
	var menuSideParentMobile = jQuery(".left-navigation-menu .parent-menu");
	var menuSideSectionMobile = jQuery(".left-navigation-menu .pane-content > span");

	// desktop
	// add hover state 
	jQuery(menuAnchor).hover(
		function() {
			jQuery(this).parent("li").toggleClass("hover");
		}
	);


	// tablet/mobile
	// add on click to open sub nav
	jQuery(menuSideMobile).click(
		function() {
			jQuery(this).parent("li").toggleClass("mobile-active");
			jQuery(menuSideParentMobile).toggleClass("parent-shift");
		}
	);

	// add on click to open drop down
	jQuery(menuSideSectionMobile).click(
		function() {
			jQuery(this).toggleClass("mobile-drop-active");
			jQuery(this).siblings("ul").toggleClass("mobile-drop-active");
		}
	);

	// tablet/mobile
	function setLeftNav() {
		var leftHeading = jQuery(".left-navigation-menu .parent-menu li.active-trail").find("a.active-trail.active").attr("title");
		jQuery(menuSideSectionMobile).text(leftHeading);
		console.log('hello');
		console.log(leftHeading);
	}
	setLeftNav();

});