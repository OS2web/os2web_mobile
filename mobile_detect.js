(function ($) {

Drupal.behaviors.exampleModule = {
  attach: function (context, settings) {
      if(
        document.cookie.indexOf('X-UA-Device-force=pc') !== -1
        &&
        document.cookie.indexOf('OS2Web-ignore-mobile=1') === -1
        ) 
      {
        $('.page').prepend('<div class="mobile-detected">Det ser ud til at du bruger en mobil browser<div class="use-mobile">use</div><div class="ignore-mobile">ignore</div></div>');
      }
      $('.use-mobile').bind('click', function(event){
        document.cookie = 'X-UA-Device-force=pc;path=/;domain=.syddjurs.tth;expires=Thu, 01-Jan-70 00:00:01 GMT;';
        
        if(window.location.pathname.indexOf('home') === -1)
        {
          window.location.href = 'http://m.'+document.location.host+document.location.pathname;
          console.log('http://m.'+document.location.host+document.location.pathname);
        }
        else
        {
          window.location.href = 'http://m.'+document.location.host;
          console.log('http://m.'+document.location.host);
        }
      });
      $('.ignore-mobile').bind('click', function(event){
        document.cookie = 'OS2Web-ignore-mobile=1';
        $('.mobile-detected').animate({height: 0}, 3000);
        $('.mobile-detected').remove();
      });

      $('.full-width-link').bind('click', function(event){
        event.preventDefault(); 
        document.cookie = 'X-UA-Device-force=pc;path=/;domain=.syddjurs.tth';
        window.location.href = $(this).attr('href');
      });
    }
  };
}(jQuery));