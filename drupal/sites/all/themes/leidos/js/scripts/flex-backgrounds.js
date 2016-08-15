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
