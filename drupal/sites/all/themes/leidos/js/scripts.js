//  Capabilities module
//  Rhino Hooton
//  6/29/15
(function($) {
  Drupal.behaviors.leidosCapabilities = {
    attach: function(context, settings) {

      // add hover state on mouse over
      $('.sliding-box .inner').hover(function() {
        $(this).parent('.sliding-box').toggleClass('hover');
      });

      // open slide box on content click
      $('.sliding-box .inner').on('click', function() {
        if ($(this).parent('.sliding-box').hasClass('open')) {
          $(this).parent('.sliding-box').removeClass('open');
          return false;
        }
        $('.open').removeClass('open');
        $(this).parent('.sliding-box').toggleClass('open');
      });

      // close slide box on close click
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

        if (width > 960) {
          select = 'data-background-desktop';
        } else {
          select = 'data-background-mobile';
        }

        $('[' + select + ']', context)
          .each(function() {
            var val = $(this).attr(select);

            // Append background to parent node.
            $(this).parent().css('background-image', 'url(' + val + ')');
          });
      }

      // Listen for resize events.
      window.onresize = defineStyles;

      // Init on load.
      defineStyles();
    }
  };
})(jQuery);

//  Hero/Rotator module
//  Marc S. Brooks
//  3/8/16
(function($) {
  Drupal.behaviors.flexibleTemplateHeroRotator = {
    attach: function(context, settings) {
      var pane = $('.pane-bundle-rotator-hero', context);
      if (pane[0]) {
        pane.each(function() {
          if ($(this).find('.button-close')[0] || $(this).find('.button-play')[0]) return;

          // Dynamically append Play/Close buttons prior to video tout field.
          var field = $(this).find('.views-field-field-video-tout');
          if (field[0]) {
            var close = $('<a class="button-close" href="#"></a>'),
                play  = $('<a class="button-play" href="#">' + Drupal.t('Watch Video') + '</a>');

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
      var pane = $('.pane-bundle-multi-column', context);
      if (pane[0]) {
        pane.each(function() {
          if ($(this).find('.button-close')[0] || $(this).find('.button-play')[0]) return;

          // Dynamically append Play/Close buttons prior to video field.
          var field = $(this).find('.field-name-field-video-tout');
          if (field[0]) {
            var close = $('<a class="button-close" href="#"></a>'),
                play  = $('<a class="button-play" href="#">' + Drupal.t('Watch Video') + '</a>');

            field.before(close, play);
          }
        });
      }
    }
  };
})(jQuery);

//  Capabilities Module
//  Rhino Hooton
//  6/29/15
// (function($) {
//   Drupal.behaviors.flexWorkaround = {
//     attach: function(context, settings) {
//       // open video pop up
//       jQuery('.hero-rotator-inner .views-field-field-subhead').after('<a href="#" class="button-close">X</a><a href="#" class="button-play">Watch Video</a>');
//     }
//   };
// })(jQuery);

//  Capabilities Module
//  Rhino Hooton
//  6/29/15
(function($) {
  Drupal.behaviors.leidosFlexFunctions = {
    attach: function(context, settings) {

      // open video pop up
      jQuery('.node-type-flexible-template .button-play').on('click', function() {
        jQuery(this).parent().addClass('video-container-open');
        jQuery('.node-type-flexible-template').addClass('video-open');

        $('.flex-pauseplay .flex-pause').trigger('click');
        // jQuery('.flexslider').flexslider({pausePlay: true});
      });

      // close video pop up
      jQuery('.node-type-flexible-template .button-close').on('click', function() {
        jQuery(this).parent().removeClass('video-container-open');
        jQuery('.node-type-flexible-template').removeClass('video-open');

        $('.flex-pauseplay .flex-play').trigger('click');
        // jQuery('.flexslider').flexslider({pausePlay: false});
      });
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
