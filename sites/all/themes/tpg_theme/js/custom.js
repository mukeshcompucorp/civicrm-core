(function($) {
  "use strict";

  Drupal.behaviors.qoutes = {
    attach: function (context, settings) {
      this.addStrToElement('blockquote:not(.image-field-caption)', context);
    },
    addStrToElement: function(el, context) {
      var $el = $(el, context);
      if ($el.length) {
        $el.find('p:first-child').prepend('»');
        $el.find('p:last-child').append('«');
      }
    }
  };

  Drupal.behaviors.regionChange = {
    attach: function (context, settings) {
      this.moveTitle('.title-header', '.node-type-events-detail', '.post-content', 'paragraphs-item-title-section col-md-offset-3 col-md-6', true, context);
    },
    moveTitle: function(el, page, moveTo, newClass, row, context) {
      var $el = $(el, context);
      if ($el.length && $(page, context).length && $(moveTo, context).length) {
        $el.prependTo(moveTo).addClass(newClass);
        if(row) {
          $el.wrap('<div class="row"></div>');
        }
      }
    }
  };

  Drupal.behaviors.whatsOnFilter = {
    attach: function (context, settings) {
      this.createingEl('.whats-on-filter', 'resp-filter', 'Filter', context);
      this.openEl('.resp-filter', '.whats-on-filter > .content', 'show', context);
      this.searchField('.page-whats-on .who-select-prefix', '.page-whats-on .who-select-prefix', '.page-whats-on .form-item-tid', context);
      this.searchField('.filter-overlay', '.page-whats-on .who-select-prefix', '.page-whats-on .form-item-tid', context);
    },
    createingEl: function(place, elClass, elText, context) {
      var $place = $(place, context);
      if ($place && $place.length) {
        $place.prepend('<div class=' + elClass + '>' + Drupal.t(elText) + '</div>');
      }
    },
    openEl: function(button, el, className, context) {
      $(button, context).click(function(event) {
        $(el, context).toggleClass(className);
        $(this, context).toggleClass('active');
      });
    },
    searchField: function(el, filerEl, searchEl, context) {
      var $el       = $(el, context);
      var $filerEl  = $(filerEl, context);
      var $searchEl = $(searchEl, context);

      if($filerEl && $filerEl.length) {
        $searchEl.after('<div class="filter-overlay"></div>');
        $searchEl.hide();

        $el.click(function(e) {
          var $inputValue = $('#edit-tid', context).val();
          if ($inputValue && $inputValue.length) {
            $filerEl.text($inputValue);
          } else {
            $filerEl.text(Drupal.t('All artists'));
          }
          $filerEl.toggleClass('active');
          $('.filter-overlay', context).toggleClass('show');
          $searchEl.toggle();
        });
      }
    }
  };

})(jQuery);
