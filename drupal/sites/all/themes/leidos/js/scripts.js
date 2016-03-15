//	Capabilities Module
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosCapabilities = {
    attach: function (context, settings) {
			// add hover state on mouse over
			jQuery('.sliding-box .inner').hover(function() {
				jQuery(this).parent('.sliding-box').toggleClass('hover');
			});

			// open slide box on content click
			jQuery('.sliding-box .inner').on('click', function () {
				if (jQuery(this).parent('.sliding-box').hasClass('open')) {
					jQuery(this).parent('.sliding-box').removeClass('open');
					return false;
				}
				jQuery('.open').removeClass('open');
				jQuery(this).parent('.sliding-box').toggleClass('open');
			});

			// close slide box on close click
			jQuery('.sliding-box .click-box-close').on('click', function () {
				jQuery('.open').removeClass('open');
			});
		}
	};	
})(jQuery);
//  Toggle background images (desktop/mobile) based on web browser width.
//  Marc S. Brooks
//  2/24/16
(function ($) {
  Drupal.behaviors.flexibleTemplateBackground = {
    attach: function(context, settings) {

      // Define styles for defined data-* attributes.
      function defineStyles() {
        var width  = jQuery('body').width(),
            select = null;

        if (width > 960) {
          select = 'data-background-desktop';
        } else {
          select = 'data-background-mobile';
        }

        var items = jQuery('[' + select + ']');

        items.each(function() {
          var item = $(this),
              val  = item.attr(select);

          // If style attributes already exists on parent node, relocate contents.
          var parent_attr = item.parent().attr('style');

          // Remove the parent style.
          item.parent().removeAttr('style');

          // Append background and to parent node.
          item.parent().attr('style', val + ';' + parent_attr);
        });
      }

      // Listen for resize events.
      window.onresize = defineStyles;

      // Init on load.
      defineStyles();
    }
  };
})(jQuery);

//	Capabilities Module
//	Rhino Hooton
//	6/29/15
// (function ($) {
//   Drupal.behaviors.flexWorkaround = {
//     attach: function (context, settings) {
// 			// open video pop up
// 			jQuery('.hero-rotator-inner .views-field-field-subhead').after('<a href="#" class="button-close">X</a><a href="#" class="button-play">Watch Video</a>');
// 		}
// 	};	
// })(jQuery);

//	Capabilities Module
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosFlexFunctions = {
    attach: function (context, settings) {
			// open video pop up
			jQuery('.node-type-flexible-template .button-play').on('click', function () {
				jQuery(this).parent().addClass('video-container-open');
				jQuery('.node-type-flexible-template').addClass('video-open');
				$('.flex-pauseplay .flex-pause').trigger('click');
				// jQuery('.flexslider').flexslider({pausePlay: true});
			});
			// close video pop up
			jQuery('.node-type-flexible-template .button-close').on('click', function () {
				jQuery(this).parent().removeClass('video-container-open');
				jQuery('.node-type-flexible-template').removeClass('video-open');
				$('.flex-pauseplay .flex-play').trigger('click');
				$('video').get(0).stop();
				// jQuery('.flexslider').flexslider({pausePlay: false});
			});
		}
	};	
})(jQuery);

//	Top Nav JS
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosNavigation = {
  	attach: function (context, settings) {
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
		}
  };
})(jQuery);
//	Projects JS
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosProjects = {
    attach: function (context, settings) {
    	jQuery('.pane-projects .views-row, .pane-projects-full-view-projects-pane .views-row, .pane-projects-full-view-projects-pane-mobile .views-row').on('mouseenter', function() {
    		jQuery(this).addClass("hover");
    	}).on("mouseleave", function() {
    		jQuery(this).removeClass("hover");
		}); 
    }
  };
})(jQuery);
//	Search Box JS
//	Rhino Hooton
//	6/29/15
(function ($) {
  Drupal.behaviors.leidosSearch = {
    attach: function (context, settings) {

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

    }
  };
})(jQuery);