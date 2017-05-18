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

//  Static pages - Smart (debounced) resize
//  Monte Greene
//  6/22/16
(function($) {
  Drupal.behaviors.smartresize = {
    attach: function(context, settings) {
        (function($, sr) {

            // debouncing function from John Hann
            // http://unscriptable.com/index.php/2009/03/20/debouncing-javascript-methods/
            var debounce = function(func, threshold, execAsap) {
                    var timeout;

                    return function debounced() {
                        var obj = this,
                            args = arguments;

                        function delayed() {
                            if (!execAsap)
                                func.apply(obj, args);
                            timeout = null;
                        }

                        if (timeout)
                            clearTimeout(timeout);
                        else if (execAsap)
                            func.apply(obj, args);

                        timeout = setTimeout(delayed, threshold || 100);
                    };
                };
                // smartresize
            jQuery.fn[sr] = function(fn) {
                return fn ? this.bind('resize', debounce(fn)) : this.trigger(sr);
            };

        })(jQuery, 'smartresize');
    }
  };
})(jQuery);

//  Static pages - Sticky nav, styled scrollers
//  Monte Greene
//  6/20/16
(function($) {
  Drupal.behaviors.staticPageInit = {
    attach: function(context, settings) {
        var jsp;

        if ($('.staticContent .fixedNav').length) {
            var $nav = $('.staticContent .fixedNav'),
                $navLinks = $nav.children('ul').children('li').children('a'),
                navHeight = $nav.height(),
                offset = navHeight;

            $('.staticContent .fixedNav').sticky({ topSpacing: 0 });

            if (window.innerWidth <= 720) {
                offset = 0;
            }

            $navLinks.each(function () {
                if($(this).attr('href').indexOf('#') === 0) {
                    $(this).on('click', function (e) {
                        e.preventDefault();
                        $('html, body').animate({
                            scrollTop: $($(this).attr('href')).offset().top - offset
                        }, 300);
                    });
                }
            });
        }

        if ($('.staticContent .history').length) {
            jsp = $('.staticContent .history').jScrollPane().data().jsp;

            $(window).smartresize(function() {
                jsp.destroy();
                jsp = $('.staticContent .history').jScrollPane().data().jsp;
            });
        }
    }
  };
})(jQuery);

//  Static pages - Marquee topper positioning
//  Monte Greene
//  6/22/16
(function($) {
  Drupal.behaviors.staticPageMarquee = {
    attach: function(context, settings) {
        function adjustMarquee() {
            var h = window.innerHeight,
                vOffset = h - 850,
                $marquee = $('.marqueeImage--variable');

            if (h > 1150) {
                vOffset = '300';
            } else if (h < 950) {
                vOffset = '0';
            }

            $marquee.css({
                'transform': 'translateY(' + vOffset + 'px)',
                'padding-bottom': vOffset + 'px'
            });
        }

        if ($('.marqueeImage--variable').length) {
            $(window).smartresize(function() {
                adjustMarquee();
            });

            adjustMarquee();
        }

        if ($('.nextSection').length) {
            $('.nextSection').on('click', function () {
                var $next = $(this).next();

                $('html, body').animate({
                    scrollTop: $next.offset().top
                }, 1000);
            });
        }
    }
  };
})(jQuery);

//  Static pages - Carousel
//  Monte Greene
//  6/22/16
(function($) {
    Drupal.behaviors.staticPageCarousel = {
        attach: function(context, settings) {
          if ($('.imageToutCarousel__items').length) {
              var $slickContainer = $('.imageToutCarousel__items').on('init reInit', function (event, slick, currentSlide, nextSlide) {
                $('.slick-dots li').append('<span>/' + slick.slideCount + '</span>');
              });
              $slickContainer.slick({
                centerMode: true,
                centerPadding: '20%',
                dots: true,
                slidesToShow: 1,
                responsive: [
                  {
                    breakpoint: 1300,
                    settings: {
                      adaptiveHeight: true,
                      centerPadding: '15%'
                    }
                  },
                  {
                    breakpoint: 1100,
                    settings: {
                      centerPadding: '10%'
                    }
                  },
                  {
                    breakpoint: 900,
                    settings: {
                      centerPadding: '5%'
                    }
                  },
                  {
                    breakpoint: 640,
                    settings: {
                      centerPadding: '0'
                    }
                  }
                ]
              });
            }
        }
    };
})(jQuery);

//  Static pages - Hero carousel
//  Monte Greene
//  7/1/16
(function($) {
  Drupal.behaviors.staticHeroCarousel = {
    attach: function(context, settings) {
        if ($('.heroCarousel').length) {
            var $slickContainer = $('.heroCarousel').slick({
                adaptiveHeight: true,
                autoplay: true,
                autoplaySpeed: 4000,
                dots: true,
                pauseOnFocus: true,
                slidesToShow: 1,
                responsive: [
                    {
                        breakpoint: 720,
                        settings: {
                            arrows: false
                        }
                    }
                ]
            });
        }
    }
  };
})(jQuery);

//  Static pages - Stories carousel
//  Monte Greene
//  7/1/16
(function($) {
  Drupal.behaviors.staticStoriesCarousel = {
    attach: function(context, settings) {
        if ($('.storiesCarousel').length) {
            var $slickContainer = $('.storiesCarousel').slick({
                adaptiveHeight: true,
                autoplay: true,
                autoplaySpeed: 4000,
                pauseOnFocus: true,
                slidesToShow: 1
            });
        }
    }
  };
})(jQuery);

//  Static pages - Parallax
//  Monte Greene
//  7/4/16
(function($) {
    Drupal.behaviors.staticParallax = {
        attach: function(context, settings) {
            var $parallax = $('.parallax-window');

            if ($parallax.length && window.innerWidth > 960) {
                $parallax.each(function () {
                    var src = $(this).data('image-src');

                    $(this).parallax({imageSrc: src});
                });

                $('body').addClass('hasParallax');
            }

            $(window).smartresize(function() {
                if ($parallax.length && window.innerWidth > 960) {
                    $parallax.each(function () {
                        var src = $(this).data('image-src');

                        $(this).parallax({imageSrc: src});
                    });

                    $(window).trigger('resize').trigger('scroll');

                    // Add body class to enable application of needed background transparency to parent page elements.
                    $('body').addClass('hasParallax');
                } else {
                    $('body').removeClass('hasParallax');
                }
            });
        }
    };
})(jQuery);

//  Static pages - Search script, adapted from live site
//  Monte Greene
//  6/23/16
(function($) {
  Drupal.behaviors.staticPageSearch = {
    attach: function(context, settings) {
        if ($('.careersSearch').length) {
            $('#keywordSearch').submit(function (event) {

                var keywords = $("#keywords");
                if ($(keywords).val() == $(keywords)[0].title)
                    $(keywords).val("");
                keywords = $(keywords).val().replace(' ', '-').replace('&', '-');

                if (keywords !== "") {
                    var url = 'http://jobs.leidos.com/ListJobs/ByKeyword/' + keywords + "/";

                    document.location = url;
                } else {
                    document.location = 'http://jobs.leidos.com' + '/ListJobs/All';
                }

                event.preventDefault();
            });

            $("#keywords").focus(function () {
                if ($(this).val() == $(this)[0].title) {
                    $(this).val("");
                    $(this).removeClass("defaultTextActive");
                }
            });

            $("#keywords").blur(function () {
                if ($(this).val() === "" || $(this).val() === $(this)[0].title) {
                    $(this).val($(this)[0].title);
                    $(this).addClass("defaultTextActive");
                }
            });
            $("#keywords").blur();
        }
    }
  };
})(jQuery);

//  Global action
//  Toggle background images (Desktop/Mobile) based on web browser width.
//  Marc S. Brooks
//  2/24/16
(function($) {
  Drupal.behaviors.flexibleTemplateBackground = {
    attach: function(context, settings) {

      // Define styles for defined data-* attributes.
      function defineStyles() {
        var width  = $('body').width(),
            select = null;

        if (width >= 961) {
          select = 'data-background-desktop';
        }
        else
        if (width < 961) {
          select = 'data-background-mobile';
        }

        $('[' + select + ']', context)
          .each(function() {
            var val = $(this).attr(select);
            //if (select == 'data-background-mobile') {
              //if (val == "") {
                // if no mobile bg is defined, use desktop value
                //val = $(this).attr('data-background-desktop');
              //}
            //}

            // Append background to parent node, unless it's a panel container.
            var target = $(this).parent();

            if ($(this).hasClass('panel-pane')) {

              // Add inline style.
              target = $(this);
            }

            target.css({
              'background-image':  'url(' + val + ')',
              'background-repeat': 'no-repeat',
              'background-size':   'contain'
            });
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

//  Global action
//  Replace YouTube video VIDEO instances with Google supported IFRAME
//  Marc S. Brooks
//  3/15/16
(function($) {
  Drupal.behaviors.flexibleTemplateYouTubeVideo = {
    attach: function(context, settings) {

      // If YouTube type, replace HTML5 VIDEO element
      $('video > source', context)
        .each(function() {
          if ($(this).attr('type') == 'video/youtube') {
            var iframe = $('<iframe>')
              .css({
                height: '610px',
                width:  '1000px'
              });

            if ($(this)[0].src) {
              iframe[0].src = 'https://www.youtube.com/embed/' + $(this)[0].src.replace(/^.*\?v=(\w+)$/, '$1');
            }

            $(this).parent().replaceWith(iframe);
          }
        });

        $('iframe.media-youtube-player', context).each(function() {
          $(this).before('<img src="http://placehold.it/16x9" class="yt-ratio"/>');
        });
    }
  };
})(jQuery);

//  Hero/Rotator module
//  Marc S. Brooks
//  3/8/16
(function($) {
  Drupal.behaviors.flexibleTemplateHeroRotator = {
    attach: function(context, settings) {
      var panes = $('.pane-bundle-rotator-hero', context);
      if (panes[0]) {
        panes.each(function() {
          var pane = $(this);

          if (pane.find('.button-close')[0] || pane.find('.button-play')[0]) return;

          // Dynamically append Play/Close buttons prior to video tout field.
          var field = pane.find('.views-field-field-video-tout');
          if (field[0]) {
            var close = $('<a class="button-close"></a>'),
                play  = $('<a class="button-play">' + Drupal.t('Watch Video') + '</a>');

            // Add video player modal events.
            play.on('click', function(event) {
              event.preventDefault();

              $('.hero-rotator-outer', pane).addClass('video-container-open');
              $('.node-type-flexible-template', context).addClass('video-open');

              // Pause the rotator.
              $('.views_slideshow_controls_text_pause > a').trigger('click');
            });

            close.on('click', function(event) {
              event.preventDefault();

              $('.hero-rotator-outer', pane).removeClass('video-container-open');
              $('.node-type-flexible-template', context).removeClass('video-open');

              // Resume the rotator.
              $('.views_slideshow_controls_text_pause > a').trigger('click');

              // Disable HTML5 video.
              var video = document.getElementsByTagName('video');
              for (var key in video) {
                if (video.hasOwnProperty(key)) {
                  video[key].pause();
                  video[key].currentTime = 0;
                }
              }
            });

            field.before(close, play);
          }
        });
      }
    }
  };
})(jQuery);

//  Long-form Copy module
//  Marc S. Brooks
//  3/8/16
(function($) {
  Drupal.behaviors.flexibleTemplateLongFormCopy = {
    attach: function(context, settings) {
      var pane = $('.pane-bundle-long-form-copy', context);
      if (pane[0]) {
        pane.each(function() {
          var title = $(this).find('.flexible-template-content').children().filter('h1, h2, h3, h4, h5');

          // Relocate title field element to inline container.
          var field = $(this).find('.field-name-field-image');
          if (field[0]) {
            field.before(title);
          }
        });
      }
    }
  };
})(jQuery);

//  Multi-column module
//  Marc S. Brooks
//  3/8/16
(function($) {
  Drupal.behaviors.flexibleTemplateMultiColumn = {
    attach: function(context, settings) {
      var cols = $('.pane-bundle-multi-column').find('.column');
      if (cols[0]) {
        cols.each(function() {
          var col = $(this);

          if (col.find('.button-close')[0] || col.find('.button-play')[0]) return;

          // Dynamically append Play/Close buttons prior to video field.
          var field = col.find('.field-name-field-video-tout');
          if (field[0]) {
            var close = $('<a class="button-close"></a>'),
                play  = $('<a class="button-play">' + Drupal.t('Watch Video') + '</a>');

            // Add video player modal events.
            play.on('click', function(event) {
              event.preventDefault();

              $(this).parent().addClass('video-container-open');

              $('.node-type-flexible-template').addClass('video-open');
              var fullProp = $(this).parent().attr('data-video-full-screen');
              if (fullProp == "1") {
                $videoEl = $('video, iframe.media-youtube-player');
                $videoEl.css({
                  'max-height': 'none',
                  'height': window.innerHeight + 'px'
                });
              }
            });

            close.on('click', function(event) {
              event.preventDefault();

              $(this).parent().removeClass('video-container-open');

              $('.node-type-flexible-template').removeClass('video-open');

              // Disable HTML5 video.
              var video = document.getElementsByTagName('video');
              for (var key in video) {
                if (video.hasOwnProperty(key)) {
                  video[key].pause();
                  video[key].currentTime = 0;
                }
              }

              // Disable YouTube player.
              var iframe = document.getElementsByTagName('iframe');
              for (var key2 in iframe) {
                if (iframe.hasOwnProperty(key2)) {
                  iframe[key2].src = iframe[key2].src;
                }
              }
            });

            field.before(close, play);
          }
        });
      }
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
				jQuery(this).parent("li").toggleClass("mobile-active hover");
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

//  Search Box JS
//  Rhino Hooton
//  6/29/15
(function($) {
    Drupal.behaviors.leidosSearch = {
        attach: function(context, settings) {

            var searchBox = jQuery('li.last span.nolink, .search');
            var cancelButton = jQuery('#search_leidos_website span');
            var searchForm = jQuery('div.block-leidos-custom-search');

            // search click
            jQuery(searchBox).on('click', function() {
                jQuery(searchBox).toggleClass('search-active');
                jQuery(searchForm).toggleClass('search-active');
                jQuery('.mobile-drop-active').removeClass('mobile-drop-active');
                jQuery('#block-system-main-menu').removeClass('show');
                jQuery('#search_leidos_website input[type=text]').focus();

                // delay clear timer
                setTimeout(function () {
                    jQuery('#search_leidos_website input[type=text]').val('');
                }, 500);
                e.preventDefault();
            });

            // cancel click
            jQuery(cancelButton).on('click', function(e) {
                jQuery(searchBox).toggleClass('search-active');
                jQuery(searchForm).toggleClass('search-active');

                // delay clear timer
                setTimeout(function () {
                    jQuery('#search_leidos_website input[type=text]').val('');
                }, 500);
                e.preventDefault();
            });
        }
    };


    //update homepage slider mobile images
    var mobilewidth = jQuery( window ).width();
    //alert(mobilewidth);


    jQuery('.heroCarousel__item').each(function(){
            var desktopback = jQuery(this).attr('style');
        console.log(desktopback);
            var mobileback = jQuery(this).find('.hero-mobile-background').text();
            var mobilewidth = jQuery( window ).width();
            if(mobilewidth > 720){
                jQuery(this).attr('style',desktopback);
            } else {
                jQuery(this).attr('style','background-image:url("' + mobileback +'");width:' + mobilewidth + ';');
            }
    });

    jQuery( window ).resize(function() {
        jQuery('.heroCarousel__item').each(function(){
            var desktopback = jQuery(this).attr('style');
            console.log(desktopback);
            var mobileback = jQuery(this).find('.hero-mobile-background').text();
            var mobilewidth = jQuery( window ).width();
            if(mobilewidth > 720){
                jQuery(this).attr('style',desktopback);
            } else {
                jQuery(this).attr('style','background-image:url("' + mobileback +'");width:' + mobilewidth + ';');
            }
        });
    });
	
	//add b-lazy css class to all images and background images
	jQuery('img').addClass('b-lazy');
    //add b-lazy css class to parallax window
    jQuery('.parallax-window').addClass('b-lazy');
    //add b-lazy css class to mobile parallax
    jQuery('.parallax-mobile').addClass('b-lazy');

	
	

})(jQuery);
