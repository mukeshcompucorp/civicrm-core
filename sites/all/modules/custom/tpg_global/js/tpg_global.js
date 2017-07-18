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

      /*
      if ($('.page-whats-on input.daterangepicker').length) {

        $('input.daterangepicker').each(function(index, element) {
          // Enable date range for all inputs with the given class.
          $(this).daterangepicker({
            onOpen: function(event, data) {
              // Hide calendar on select open
              $('.comiseo-daterangepicker-calendar', context).hide();

              // Remove date range
              $('#pick-a-date', context).closest('li').unbind();

              // Show calendar on icon click
              $('#pick-a-date', context).once().click(function(e) {
                e.preventDefault();
                $('.comiseo-daterangepicker-calendar', context).toggle();
                return false;
              });
            },
            initialText: settings.daterangepicker.initialText,
            applyButtonText: '',
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
              {text: '<a href="#" id="pick-a-date" class="pick-a-date">' + Drupal.t('Pick a date') + '</a>', dateStart: function() { return moment() }, dateEnd: function() { return moment() } },
            ],
            datepickerOptions: {
              maxDate: '+1Y',
              yearRange: "-20:+2",
              firstDay: 1,
            }
          });
        });
      }*/

      // Header Image Lightbox image caption update using Drupal settings from tpg_global module.
      if (typeof Drupal.settings.tpg_global != 'undefined' && (typeof Drupal.settings.tpg_global.header_image_lightbox_caption != 'undefined' || typeof Drupal.settings.tpg_global.header_image_lightbox_bg_color != 'undefined')) {
        $('.views-field-field-header-image-lightbox a', context).on('click', function() {
          $('#cboxOverlay', context).removeAttr('class');
          $('#cboxOverlay', context).addClass(Drupal.settings.tpg_global.header_image_lightbox_bg_color);
        });
      }

      // Paragraphs bundle Reading width image lightbox.
      if (typeof Drupal.settings.tpg_theme != 'undefined' && typeof Drupal.settings.tpg_theme.reading_image_lightbox_caption != 'undefined') {
        $('.field-name-field-reading-image a', context).on('click', function() {
          $('#cboxOverlay', context).removeAttr('class');
          $('#cboxOverlay', context).addClass(Drupal.settings.tpg_theme.reading_image_lightbox_bg_color);
        });
      }

      // Prepending Image Title for Header image lightbox paragraph bundle.
      if (typeof Drupal.settings.tpg_global != 'undefined' && typeof Drupal.settings.tpg_global.header_image_lightbox_title != 'undefined') {
        $('.view-display-id-header_image_lightbox .header-image-lightbox-title', context).remove();
        $('.view-display-id-header_image_lightbox .view-content .views-field-caption-1', context).prepend("<span class='header-image-lightbox-title'>" + Drupal.settings.tpg_global.header_image_lightbox_title + "</span>");
      }
    }
  };

  // Adding Colorbox title and caption.
  $(document).bind('cbox_complete', function(){
    var cboxTitle = $('#colorbox #cboxTitle').text();
    var cbox_data = cboxTitle.split('/');
    $('#colorbox #cboxTitle').text(cbox_data[0]);
    $('#colorbox #cboxTitle').append("<div class='colorbox-caption'>" + cbox_data[1] + "</div>");

    Drupal.behaviors.lightboxCaption.captionIcon('#colorbox .caption-icon', '#colorbox #cboxTitle');
  });

})(jQuery);

