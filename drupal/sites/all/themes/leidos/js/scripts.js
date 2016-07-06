//  Capabilities module
//  Rhino Hooton
//  6/29/15
(function($) {
  Drupal.behaviors.leidosCapabilities = {
    attach: function(context, settings) {

      // Add hover state on mouse over.
      $('.sliding-box .inner').hover(function() {
        $(this).parent('.sliding-box').toggleClass('hover');
      });

      // Open slide box on content click.
      $('.sliding-box .inner').on('click', function() {
        if ($(this).parent('.sliding-box').hasClass('open')) {
          $(this).parent('.sliding-box').removeClass('open');
          return false;
        }
        $('.open').removeClass('open');
        $(this).parent('.sliding-box').toggleClass('open');
      });

      // Close slide box on close click.
      $('.sliding-box .click-box-close').on('click', function() {
        $('.open').removeClass('open');
      });
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
              for (key in video) {
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
            });

            close.on('click', function(event) {
              event.preventDefault();

              $(this).parent().removeClass('video-container-open');

              $('.node-type-flexible-template').removeClass('video-open');

              // Disable HTML5 video.
              var video = document.getElementsByTagName('video');
              for (key in video) {
                if (video.hasOwnProperty(key)) {
                  video[key].pause();
                  video[key].currentTime = 0;
                }
              }

              // Disable YouTube player.
              var iframe = document.getElementsByTagName('iframe');
              for (key in iframe) {
                if (iframe.hasOwnProperty(key)) {
                  iframe[key].src = iframe[key].src;
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

/*! modernizr 3.3.1 (Custom Build) | MIT *
 * http://modernizr.com/download/?-csscalc-setclasses !*/
!function(e,n,s){function t(e,n){return typeof e===n}function o(){var e,n,s,o,a,i,c;for(var f in r)if(r.hasOwnProperty(f)){if(e=[],n=r[f],n.name&&(e.push(n.name.toLowerCase()),n.options&&n.options.aliases&&n.options.aliases.length))for(s=0;s<n.options.aliases.length;s++)e.push(n.options.aliases[s].toLowerCase());for(o=t(n.fn,"function")?n.fn():n.fn,a=0;a<e.length;a++)i=e[a],c=i.split("."),1===c.length?Modernizr[c[0]]=o:(!Modernizr[c[0]]||Modernizr[c[0]]instanceof Boolean||(Modernizr[c[0]]=new Boolean(Modernizr[c[0]])),Modernizr[c[0]][c[1]]=o),l.push((o?"":"no-")+c.join("-"))}}function a(e){var n=f.className,s=Modernizr._config.classPrefix||"";if(u&&(n=n.baseVal),Modernizr._config.enableJSClass){var t=new RegExp("(^|\\s)"+s+"no-js(\\s|$)");n=n.replace(t,"$1"+s+"js$2")}Modernizr._config.enableClasses&&(n+=" "+s+e.join(" "+s),u?f.className.baseVal=n:f.className=n)}function i(){return"function"!=typeof n.createElement?n.createElement(arguments[0]):u?n.createElementNS.call(n,"http://www.w3.org/2000/svg",arguments[0]):n.createElement.apply(n,arguments)}var l=[],r=[],c={_version:"3.3.1",_config:{classPrefix:"",enableClasses:!0,enableJSClass:!0,usePrefixes:!0},_q:[],on:function(e,n){var s=this;setTimeout(function(){n(s[e])},0)},addTest:function(e,n,s){r.push({name:e,fn:n,options:s})},addAsyncTest:function(e){r.push({name:null,fn:e})}},Modernizr=function(){};Modernizr.prototype=c,Modernizr=new Modernizr;var f=n.documentElement,u="svg"===f.nodeName.toLowerCase(),p=c._config.usePrefixes?" -webkit- -moz- -o- -ms- ".split(" "):["",""];c._prefixes=p,Modernizr.addTest("csscalc",function(){var e="width:",n="calc(10px);",s=i("a");return s.style.cssText=e+p.join(n+e),!!s.style.length}),o(),a(l),delete c.addTest,delete c.addAsyncTest;for(var m=0;m<Modernizr._q.length;m++)Modernizr._q[m]();e.Modernizr=Modernizr}(window,document);

//  Top Nav JS
//  Rhino Hooton
//  6/29/15
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

//  Projects JS
//  Rhino Hooton
//  6/29/15
(function($) {
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
                        };

                        if (timeout)
                            clearTimeout(timeout);
                        else if (execAsap)
                            func.apply(obj, args);

                        timeout = setTimeout(delayed, threshold || 100);
                    };
                }
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

            $(window).smartresize(function() {
                $(window).trigger('resize').trigger('scroll');
            });

            function init() {
                if ($parallax.length) {
                    console.log('init');
                    // Add body class to apply needed background transparency to parent page elements.
                    $('body').addClass('hasParallax');

                    $parallax.each(function () {
                        var src = $(this).data('image-src');

                        $(this).parallax({imageSrc: src});
                    });
                }
            }

            init();
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

                if (keywords != "") {
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
                if ($(this).val() == "" || $(this).val() == $(this)[0].title) {
                    $(this).val($(this)[0].title);
                    $(this).addClass("defaultTextActive");
                }
            });
            $("#keywords").blur();
        }
    }
  };
})(jQuery);
