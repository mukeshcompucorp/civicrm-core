(function ($) {

  Drupal.behaviors.global_js = {
    attach: function (context,settings) {
    	

    	if ($('input.daterangepicker').length){

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
						{text: 'This week', dateStart: function() { return moment().day(1) }, dateEnd: function() { return moment().day(7) } },
						{text: 'This weekend', dateStart: function() { return moment().day(6) }, dateEnd: function() { return moment().day(7) } },
						{text: 'Next month', dateStart: function() { return moment().month() }, dateEnd: function() { return moment().month() } },
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

