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
                $(window).smartresize(function() {
                    $(window).trigger('resize').trigger('scroll');
                });

                // Add body class to enable application of needed background transparency to parent page elements.
                $('body').addClass('hasParallax');

                $parallax.each(function () {
                    var src = $(this).data('image-src');

                    $(this).parallax({imageSrc: src});
                });
            }
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
