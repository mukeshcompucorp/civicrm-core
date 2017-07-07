(function ($) {

  Drupal.behaviors.global_js = {
    attach: function (context,settings) {

      var $paragraph_promote = $("#paragraphs-page-node-form input[name='promote']", context);
      var $paragraph_homepage_options =  $('#paragraphs-page-node-form .group-homepage-pub-options', context);

      var $event_promote = $("#events-detail-node-form input[name='promote']", context);
      var $event_homepage_options =  $('#events-detail-node-form .group-homepage-options', context);

      // Hiding Homepage Publishing group for Paragraphs Page and Event Details content type.
      if (!($paragraph_promote.is(':checked') || $event_promote.is(':checked'))) {
        $paragraph_homepage_options.hide();
        $event_homepage_options.hide();
      }

      // Toogle Fieldset Homepage Publishing Options pending upon the Promoted to front page option.
      $paragraph_promote.click(function(){
        $paragraph_homepage_options.toggle();
      });
      $event_promote.click(function(){
        $event_homepage_options.toggle();
      });

      if ($('.page-whats-on input.daterangepicker').length) {

        $('input.daterangepicker').each(function(index, element) {
          // Enable date range for all inputs with the given class.
          $(this).daterangepicker({
            initialText: settings.daterangepicker.initialText,
            applyButtonText: settings.daterangepicker.applyButtonText,
            clearButtonText: settings.daterangepicker.clearButtonText,
            cancelButtonText: settings.daterangepicker.cancelButtonText,
            rangeSplitter: settings.daterangepicker.rangeSplitter,
            dateFormat: settings.daterangepicker.dateFormat,
            altFormat: settings.daterangepicker.altFormat,
            datepickerOptions : {
              numberOfMonths: settings.daterangepicker.datepickerOptions.numberOfMonths
            },
            presetRanges: [
              {text: 'Today', dateStart: function() { return moment() }, dateEnd: function() { return moment() } },
              {text: 'This Weekend', dateStart: function() { return moment().day(6) }, dateEnd: function() { return moment().day(7) } },
              {text: 'This Week', dateStart: function() { return moment().day(1) }, dateEnd: function() { return moment().day(7) } },
              {text: 'Next Month', dateStart: function() { return moment().add(1, 'month').startOf('month') }, dateEnd: function() { return moment().add(1, 'month').endOf('month') } },
              {text: 'Pick a date'},
            ],
            datepickerOptions: {
              maxDate: '+1Y',
              yearRange: "-20:+2",
              firstDay: 1,
            }
          });
        });
      }

      // Header Image Lightbox image caption update using Drupal settings from tpg_global module.
      if (typeof Drupal.settings.tpg_global != 'undefined' && typeof Drupal.settings.tpg_global.header_image_lightbox_caption != 'undefined') {
        $('#colorbox #cboxTitle').text(Drupal.settings.tpg_global.header_image_lightbox_caption);
      }
    }
  };
})(jQuery);

