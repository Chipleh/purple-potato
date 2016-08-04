//Get any parameter from url
function getUrlParameter(sParam)
{
    var sPageURL = window.location.search.substring(1);
    var sURLVariables = sPageURL.split('&');
    for (var i = 0; i < sURLVariables.length; i++)
    {
        var sParameterName = sURLVariables[i].split('=');
        if (sParameterName[0] == sParam)
        {
            return sParameterName[1];
        }
    }
}

//Leidos custom styles on ready
jQuery(document).ready(function($) {

  //If custom show all link exists - proceed with changes
  if($("#custom-view-all-link").length != 0) {

    //Remove View All if no pager present
    if($(".pager").length == 0) {
      $("#custom-view-all-link").remove();
    }

    $('#custom-view-all-link').attr('href', 'javascript:void;');
    $('.views-widget-per-page').remove();
    $('#custom-view-all-link').click(function(){

      var url_q = (location.search == '') ? '?' : '';

      url = location.pathname + location.search + url_q + '&items_per_page=All';
      window.location.href = url;

    });

    var ipp = getUrlParameter('items_per_page');
    if (ipp != "undefined" && ipp == "All"){
      $('.pager').remove();
      $('#custom-view-all-link').remove();
    }
  }
  // Add an id to the first ul item in the left navigation section.
  $('.content-left ul.menu').first().attr('id', 'left-nav-menu');

  // if lightbox is present
  var $lightbox = $('.lightbox');
  var lightbox_delay = 1000; // show delay (ms)

  if ($lightbox.length) {
    setTimeout(function() {
      $lightbox.addClass('show');
    }, lightbox_delay);

    $lightbox.on('click', closeLightbox);
    $('.lb-continue-link').on('click', function(e) {
      $lightbox.removeClass('show');
    });
  }

  function closeLightbox(e) {
    var $target = $(e.target);
    if ($target.hasClass('lightbox') || $target.hasClass('lb-close')) {
      $lightbox.removeClass('show');
    }
  }
});
