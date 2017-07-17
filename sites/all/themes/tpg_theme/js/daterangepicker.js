(function($) {
  "use strict";

  Drupal.behaviors.dateRangePicker = {
    attach: function(context, settings) {
      var $datepickerInput = $('input#daterangepicker', context);
      if ($datepickerInput.length) {
        $datepickerInput.once().daterangepicker({
          autoApply: true,
          parentEl: '.daterangepicker-wrapper',
          linkedCalendars: false,
          locale: {
            customRangeLabel: Drupal.t('Pick a date'),
            format: 'DD MMM YYYY'
          },
          ranges: {
             'Anytime': [],
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
          $datepickerInput.attr('placeholder', $datepickerInput.attr('value'));
          $datepickerInput.val('');
          $('.daterangepicker', context).find('li').click(function(event) {
            $datepickerInput.attr('placeholder', $(this, context).attr('data-range-key'));
          });
        }
        $(document, context).ajaxComplete(function(event, xhr, settings) {
          $datepickerInput.val('');
        });
      }
    },
  };



})(jQuery);
