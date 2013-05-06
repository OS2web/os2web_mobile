(function ($) {

Drupal.behaviors.os2web_mobile = {
  attach: function (context, settings) {
    var host_array = document.location.host.split('.');
    var domain = '.' + host_array[host_array.length -2] + '.' + host_array[host_array.length -1];

    if(
        document.cookie.indexOf('X-UA-Device-force=pc') !== -1
        &&
        document.cookie.indexOf('OS2Web-ignore-mobile=1') === -1
        )
      {
        $('.page').prepend('<div class="mobile-detected">Det ser ud til at du bruger en mobil browser<span class="use-mobile">Brug mobilside</span><span class="ignore-mobile">Fortsæt med at bruge denne</span></div>');

        $('.use-mobile').bind('click', function(event){
          document.cookie = 'X-UA-Device-force=pc;path=/;domain=' + domain + ';expires=Thu, 01-Jan-70 00:00:01 GMT;';

          var new_location = document.location.href.replace('://www.', '://');
          new_location = new_location.replace('://', '://m.');
          window.location.href = new_location;
        });
        $('.ignore-mobile').bind('click', function(event){
          document.cookie = 'OS2Web-ignore-mobile=1';
          $('.mobile-detected').animate({height: 0}, 3000);
          $('.mobile-detected').remove();
        });
      }
      $('.full-width-link').bind('click', function(event){
        event.preventDefault();
        document.cookie = 'X-UA-Device-force=pc;path=/;domain='+domain;
        window.location.href = $(this).attr('href');
      });
    }
  };
}(jQuery));
