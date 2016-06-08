(function ($, window, Drupal) {

  Drupal.behaviors.recaptcha = {
    attach: function (context) {
      $('.g-recaptcha', context).each(function() {
        if (typeof grecaptcha === 'undefined') {
          return;
        }
        if ($(this).hasClass('recaptcha-processed')) {
          grecaptcha.reset();
        }
        else {
          grecaptcha.render(this, $(this).data());
          $(this).addClass('recaptcha-processed');
        }

      });
    }
  };

  window.drupalRecaptchaOnload = function() {
    $('.g-recaptcha').each(function() {
      grecaptcha.render(this, $(this).data());
      $(this).addClass('recaptcha-processed');
    });
  }
})(jQuery, window, Drupal);
