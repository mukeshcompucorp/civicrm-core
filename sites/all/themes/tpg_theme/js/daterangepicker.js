(function($) {
  "use strict";

  Drupal.behaviors.dateRangePicker = {
    attach: function(context, settings) {
      $('#edit-combine-wrapper .views-widget', context).once().append('<input type="text" id="config-demo" class="form-control">');
      $('input#config-demo', context).once().daterangepicker({
        "autoApply": true
      });
    },
  };

})(jQuery);
