/**
 * @file
 * Provides additional redirection and settings for IPE buttons from Panels curator.
 */

(function ($) {
  'use strict';

Drupal.behaviors.PanelsCuratorIPE = {
  attach: function (context) {
    // Redirect to default template node.
    $('#panels-ipe-default', context).once('default-alert', function() {
      $(this).bind('mouseup', function (e) {
        window.location.href = Drupal.settings.panelizer.view_default_url;
        this.ipeCancelThis = true;
        return false;
      });
    });
  }
};

})(jQuery);
