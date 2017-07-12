(function($) {
  "use strict";

  Drupal.behaviors.dateRangePicker = {
    attach: function(context, settings) {
      $('#edit-combine-wrapper .views-widget', context).once().append('<input type="text" id="daterangepicker" class="form-control">');
      $('input#daterangepicker', context).once().daterangepicker({
        "autoApply": true
      });
    },
  };

})(jQuery);
