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

      // if mobile logo doesnt exist, create it
      if (!jQuery('#block-system-main-menu .content > a.logo').length) {
        jQuery('#block-system-main-menu .content').prepend('<a href="http://leidos.com" class="logo" title="home">Leidos</a>');
      }
      // if mobile search link doesnt exist, create it
      if (!jQuery('#block-system-main-menu .content > span.search').length) {
        jQuery('#block-system-main-menu .content').prepend('<span class="search" title="Search leidos.com"></span>');
      }
      // set initial nav classes
      jQuery('#block-system-main-menu .content').addClass('nav-shift-0');
      jQuery('#block-system-main-menu .content > ul.menu').addClass('level-1');
      jQuery('#block-system-main-menu .content > ul.menu:eq(0) > li ul.menu').addClass('level-2');
      jQuery('#block-system-main-menu .content > ul.menu > li ul.menu > li ul.menu').removeClass('level-2').addClass('level-3');

      // mark main nav links to prevent duplicate events/styles
      jQuery('#block-system-main-menu .level-1').each(function(i) {
        var $ul = jQuery(this);
        jQuery('> li', $ul).each(function(j) {
          $(this).addClass('link-' + j);
        });
      });

      // mark sub nav links to prevent duplicate events/styles
      jQuery('#block-system-main-menu .level-2').each(function(i) {
        var $ul = jQuery(this);
        jQuery('> li', $ul).each(function(j) {
          $(this).addClass('link-' + j);
        });
      });

      // create supplement mobile nav items
      jQuery('#block-system-main-menu .level-2').each(function() {
        var $a = jQuery(this).parent('li').find('a:eq(0)');
        var href = $a.attr('href');
        var title = $a.attr('title');
        // if category-title item doest exist, create it
        if (!jQuery(this).find('> li.category-title').length) {
          jQuery(this).prepend('<li class="category-title"><a href="'+href+'">'+title+'</a></li>');
        }
        // if back-level item doesnt exist, create it
        if (!jQuery(this).find('> li.back-level').length) {
          jQuery(this).prepend('<li class="back-level"><a href="#">Back</a></li>');
        }
      });

      // create supplement mobile nav items
      jQuery('#block-system-main-menu .level-3').each(function() {
        var $a = jQuery(this).parent('li').find('a:eq(0)');
        var href = $a.attr('href');
        var title = $a.text();
        // if category-title item doest exist, create it
        if (!jQuery(this).find('> li.category-title').length) {
          jQuery(this).prepend('<li class="category-title"><a href="'+href+'">'+title+'</a></li>');
        }
        // if back-level item doesnt exist, create it
        if (!jQuery(this).find('> li.back-level').length) {
          jQuery(this).prepend('<li class="back-level"><a href="#">Back</a></li>');
        }
      });

      jQuery('.back-level a').on('click', function(e) {
        e.preventDefault();
        var $a = jQuery(this);
        var $li = $a.parent('li');
        if ($li.parent('ul').hasClass('level-2')) {
          $li.parents('.content').removeClass('nav-shift-1').addClass('nav-shift-0');
          jQuery('.mobile-active').removeClass('mobile-active');
        } else if ($li.parent('ul').hasClass('level-3')) {
          $li.parents('.content').removeClass('nav-shift-2').addClass('nav-shift-1');
          jQuery('.level-2 .mobile-active').removeClass('mobile-active');
        }
      });

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
        jQuery('.nav-shift-1').removeClass('nav-shift-1');
        jQuery('.nav-shift-2').removeClass('nav-shift-2');
        jQuery('#block-system-main-menu .content').addClass('nav-shift-0');
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
        jQuery('#block-system-main-menu').toggleClass('show');
				jQuery(this).toggleClass("mobile-drop-active");
				jQuery(this).siblings("ul").toggleClass("mobile-drop-active");
				jQuery('.left-navigation-menu').find('.mobile-drop-active').removeClass('mobile-drop-active');
			});

			// top nav click for sub menu [tablet/mobile function]
			jQuery(menuTopMobile).click(function() {
				jQuery(this).parent("li").toggleClass("mobile-active");
        if (jQuery(this).parent("li").parent('ul').hasClass('level-1')) {
          jQuery('#block-system-main-menu .content').removeClass('nav-shift-0').addClass('nav-shift-1');
        } else if (jQuery(this).parent("li").parent('ul').hasClass('level-2')) {
          jQuery('#block-system-main-menu .content').removeClass('nav-shift-1').addClass('nav-shift-2');
        } else if (jQuery(this).parent("li").parent('ul').hasClass('level-3')) {

        }
			});

      jQuery("#block-system-main-menu .parent-menu li.expanded .additional-info").on('click', function(e) {
        document.location = jQuery(this).parent('li').find('> a').attr('href');
      });

      jQuery('#block-system-main-menu .content > .parent-menu > li.expanded a').on('click', function(e) {
        if ('ontouchstart' in window || navigator.msMaxTouchPoints) {
          if (!jQuery(this).parents('.level-2').length) {
            e.preventDefault();
          }
        }
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
