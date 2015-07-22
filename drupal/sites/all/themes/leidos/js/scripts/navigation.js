//	Top Nav JS
//	Rhino Hooton
//	6/29/15
jQuery(document).ready(function() {

	// global
	var menuAnchor = jQuery(".parent-menu > li a");
	var menuSubMenu = jQuery(".parent-menu > li .no-children");
	var menuHeadingTrigger = jQuery(".parent-menu > li.expanded span.additional-control");

	// top nav
	var menuTopMobile = jQuery("#block-system-main-menu .parent-menu li.expanded .additional-control");
	var menuTopParentMobile = jQuery("#block-system-main-menu .parent-menu");
	var menuTopSectionMobile = jQuery("#block-system-main-menu .content > .additional-control");

	// side nav
	var menuSideMobile = jQuery(".left-navigation-menu .parent-menu li.expanded .additional-control");
	var menuSideParentMobile = jQuery(".left-navigation-menu .parent-menu");
	var menuSideSectionMobile = jQuery(".left-navigation-menu .pane-content > .additional-control");



	// functions
	// side nav sets section heading
	function setLeftNav() {
		var leftHeading = jQuery(".left-navigation-menu .parent-menu li.active-trail").find("a.active-trail.active").attr("title");
		jQuery(menuSideSectionMobile).text(leftHeading);
	}

	// side nav sets section heading
	function setSubNav() {
		var subHeading = jQuery(".parent-menu li.expanded").find("a.active-trail.active").attr("title");
		jQuery(menuSideSectionMobile).text(leftHeading);
	}

	// clear mobile states
	function mobileStateClear() {
		jQuery('.mobile-active').removeClass('mobile-active');
		jQuery('.parent-shift').removeClass('parent-shift');
		jQuery('.search-active').removeClass('search-active');
	}



	// global
	// nav hover state 
	jQuery(menuAnchor).hover(function() {
		jQuery(this).parent("li").toggleClass("hover");
	});

	// nav set headings 
	jQuery(menuHeadingTrigger).click(function() {
		var headingToSet = jQuery(this).prev("a").attr("title");
		var headingRecipient = jQuery(this).siblings("span.additional-info");
		jQuery(headingRecipient).text(headingToSet);
		console.log(headingToSet);
		console.log(headingRecipient);
	});


	// top nav
	// top nav click for drop down [tablet/mobile function]
	jQuery(menuTopSectionMobile).click(function() {
		mobileStateClear();
		jQuery(this).toggleClass("mobile-drop-active");
		jQuery(this).siblings("ul").toggleClass("mobile-drop-active");
		jQuery('.left-navigation-menu').find('.mobile-drop-active').removeClass('mobile-drop-active');
	});

	// top nav click for sub menu [tablet/mobile function]
	jQuery(menuTopMobile).click(function() {
		jQuery(this).parent("li").toggleClass("mobile-active");
		jQuery(menuTopParentMobile).toggleClass("parent-shift");
	});



	// side nav
	// side nav click for drop down [tablet/mobile function]
	jQuery(menuSideSectionMobile).click(function() {
		mobileStateClear();
		jQuery(this).toggleClass("mobile-drop-active");
		jQuery(this).siblings("ul").toggleClass("mobile-drop-active");
		jQuery('#block-system-main-menu').find('.mobile-drop-active').removeClass('mobile-drop-active');
	});

	// side nav click for sub menu [tablet/mobile function]
	jQuery(menuSideMobile).click(function() {
		jQuery(this).parent("li").toggleClass("mobile-active");
		jQuery(menuSideParentMobile).toggleClass("parent-shift");
	});



	// run functions
	setLeftNav();

});