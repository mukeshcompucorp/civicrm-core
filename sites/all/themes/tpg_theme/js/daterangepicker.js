(function($) {
  "use strict";

  Drupal.behaviors.dateRangePicker = {
    attach: function(context, settings) {
      var $datepickerInput = $('input#daterangepicker', context);
      if ($datepickerInput.length) {
        $datepickerInput.once().daterangepicker({
          autoApply: true,
          parentEl: '.daterangepicker-wrapper',
          locale: {
            customRangeLabel: Drupal.t('Pick a date')
          },
          ranges: {
             'Today': [moment(), moment()],
             'This Weekend': [moment().day(6), moment().day(7)],
             'This Week': [moment().day(1), moment().day(7)],
             'Next Month': [moment().add(1, 'month').startOf('month'), moment().add(1, 'month').endOf('month')],
          }
        }).on('show.daterangepicker', function(ev, picker) {
          $('.daterangepicker-input', context).addClass('opened');
        }).on('hide.daterangepicker', function(ev, picker) {
          $('.daterangepicker-input', context).removeClass('opened');
        });

        window.onload=function(){
          if ($datepickerInput.attr('value').length) {
            $datepickerInput.val($datepickerInput.attr('value'));
          }
        }
      }
    },
  };

})(jQuery);
