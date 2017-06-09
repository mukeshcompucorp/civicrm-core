(function($) {
  "use strict";

  Drupal.behaviors.qoutes = {
    attach: function (context, settings) {
      this.addStrToElement('blockquote', context);
    },
    addStrToElement: function(el, context) {
      var $el = $(el, context);
      if ($el.length) {
        $el.find('p:first-child').prepend('»');
        $el.find('p:last-child').append('«');
      }
    }
  }

})(jQuery);
