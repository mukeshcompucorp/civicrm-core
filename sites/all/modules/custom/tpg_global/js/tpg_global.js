(function ($) {

  Drupal.behaviors.global_js = {
    attach: function (context,settings) {

      var $filerEl  = $('.page-whats-on .who-select-prefix', context);
      var $searchEl = $('.page-whats-on .form-item-tid', context);

      if($filerEl.length) {
        //  Hide now-upcoming who filter.
        $searchEl.hide();
        //  Toggle now-upcoming who filter when the element prefix is clicked.
        $filerEl.click(function(e) {
          $(this, context).toggleClass('active');
          $searchEl.toggle();
        });

        $(document, context).click(function(e) {
          var $this = $(e.target);
          var $openedEl = $('.who-select-prefix.active', context);

          if($openedEl.length && !$this.hasClass('form-item-tid') && !$this.hasClass('form-autocomplete') && !$this.hasClass('who-select-prefix')) {
            $filerEl.removeClass('active');
            $searchEl.hide();
          }
        });
      }

      // Hiding Homepage Publishing options for Paragraphs Page.
      $('#paragraphs-page-node-form .group-homepage-pub-options').hide();
      $('#events-detail-node-form .group-homepage-options').hide();


      // Toogle Fieldset Homepage Publishing Options pending upon the Promoted to front page.
      $("#paragraphs-page-node-form input[name='promote']").click(function(){
        if ( $(this).is(':checked') ) {
          $('#paragraphs-page-node-form .group-homepage-pub-options').show();
        } else {
          $('#paragraphs-page-node-form .group-homepage-pub-options').hide();
        }
      });
      $("#events-detail-node-form input[name='promote']").click(function(){
        if ( $(this).is(':checked') ) {
          $('#events-detail-node-form .group-homepage-options').show();
        } else {
          $('#events-detail-node-form .group-homepage-options').hide();
        }
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
              {text: 'This weekend', dateStart: function() { return moment().day(6) }, dateEnd: function() { return moment().day(7) } },
              {text: 'This week', dateStart: function() { return moment().day(1) }, dateEnd: function() { return moment().day(7) } },
              {text: 'Next month', dateStart: function() { return moment().add(1, 'month').startOf('month') }, dateEnd: function() { return moment().add(1, 'month').endOf('month') } },
            ],
            datepickerOptions: {
              maxDate: '+1Y',
              yearRange: "-20:+2",
              firstDay: 1,
            }
          });
        });
      }
    }
  };
})(jQuery);

