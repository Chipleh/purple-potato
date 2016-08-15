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
          $(this).prepend('<img src="http://placehold.it/16x9" class="yt-ratio"/>');
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
