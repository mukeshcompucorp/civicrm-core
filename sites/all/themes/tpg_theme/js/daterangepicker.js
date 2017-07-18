(function($) {
  "use strict";

  Drupal.behaviors.dateRangePicker = {
    attach: function(context, settings) {
      var $datepickerInput = $('input#daterangepicker', context);

      if ($datepickerInput.length) {

        // Prevent input focus
        $datepickerInput.focus(function(event) {
          $(this, context).blur();
        });

        // Initializing daterangepicker
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
          var $check = true;

          // Setting values on page load
          $datepickerInput.attr('placeholder', $datepickerInput.attr('value'));
          $datepickerInput.addClass('empty');
          $datepickerInput.val('');

          // Click on 'Pick a date' button
          $('.daterangepicker', context).find('li:last-child').click(function(event) {
            $check = false;
          });

          // Click on any other buttons
          $('.daterangepicker', context).find('li:not(:last-child)').click(function(event) {
            $check = true;
            $datepickerInput.addClass('empty');
            $datepickerInput.attr('placeholder', $(this, context).attr('data-range-key'));
            // Creating temporary input value
            $datepickerInput.after('<div class="temp-title">' + $(this, context).attr('data-range-key') + '</div>');
          });

          $(document, context).ajaxComplete(function(event, xhr, settings) {
            // Removing temporary input value after ajax completed
            $('.temp-title').remove();

            if ($check) {
              $datepickerInput.addClass('empty');
              $datepickerInput.val('');
            } else {
              $datepickerInput.removeClass('empty');
              $check = false;
              return false;
            }
          });
        }
      }
    },
  };

})(jQuery);
