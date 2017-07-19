(function($) {
  "use strict";

  Drupal.behaviors.multipleBlocks = {
    attach: function (context, settings) {
      this.nWrapper('.exhibitions-and-highlights', '.view-content .views-row', 3, context);
    },
    nWrapper: function (wrapper, el, n, context) {
      var $parent       = $(wrapper, context);
      var $elNumber     = n;
      if ($parent.length) {
        var $parentLength = $parent.length;

        for (var i = 0; i < $parentLength; i++) {
          var $el = $parent.eq(i).find(el);
          var $elLength = $el.length;

          if (!$('.columns-wrapper').length) {
            $parent.eq(i).prepend(`
                <div class="columns-wrapper">
                  <div class="col col-1 col-md-4"></div>
                  <div class="col col-2 col-md-4"></div>
                  <div class="col col-3 col-md-4"></div>
                </div>
            `);
          }
          for(var j = 0; j < $elLength; j += 3) {
            var firstCol = $el.eq(j);
            var secondCol = $el.eq(j+1);
            var thirdCol = $el.eq(j+2);
            firstCol.appendTo('.columns-wrapper .col-1');
            secondCol.appendTo('.columns-wrapper .col-2');
            thirdCol.appendTo('.columns-wrapper .col-3');

            if (j >= $elLength - 3) {
              $parent.addClass('show');
            }
          }
        }
      }
    }
  };

  Drupal.behaviors.qoutes = {
    attach: function(context, settings) {
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
    attach: function(context, settings) {
      this.moveTitle('.title-header', '.node-type-events-detail', '.post-content', 'paragraphs-item-title-section col-md-offset-3 col-md-6', true, context);
      this.moveTitle('.title-header', '.node-type-paragraphs-page', '.post-content', 'paragraphs-item-title-section col-md-offset-2 col-md-8', true, context);
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

  Drupal.behaviors.removingEmptyBlock = {
    attach: function(context, settings) {
      this.moveTitle('.header-image', 'img');
      this.moveTitle('.header-image-two-col', 'img');
    },
    moveTitle: function(el, isEmpty, context) {
      var $el       = $(el, context);
      var $elLength = $el.length;

      for (var i = 0; i < $elLength; i++) {
        var $this  = $el.eq(i);
        var $image = $this.find(isEmpty);

        if (!$image.length) {
          $this.remove();
        }
      }
    }
  };

  Drupal.behaviors.whatsOnFilter = {
    attach: function(context, settings) {
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

  Drupal.behaviors.searchBlockForm = {
    attach: function (context, settings) {
      var headerPane = $('.header-pane', context);
      var menuLinkSearchBar = $('a.search-bar', headerPane);
      var buttonClose = $('.block-search-form .form-item-search-block-form label', context);

      menuLinkSearchBar.click(function (e) {
        e.preventDefault();
        headerPane.addClass('show-search-form');
      });

      buttonClose.click(function (e) {
        e.preventDefault();
        headerPane.removeClass('show-search-form');
      });
    }
  };

  Drupal.behaviors.lightboxCaption = {
    attach: function (context, settings) {
      this.captionIcon('.caption-icon', '.header-image-lightbox [class*="field-caption"]', context);
      this.changingHeaderBg('.header-image-lightbox', '.header', '#c8c8c8');
    },
    captionIcon: function(el, parent, context) {
      if ($(parent, context).length) {
        $(parent, context).prepend('<span class="caption-icon"></span>');
        $(el, context).click(function(event) {
          $(this, context).toggleClass('show');
        });
      }
    },
    changingHeaderBg: function(el, backgroundEl, hashColor, context) {
      if ($(el, context).length) {
        $(backgroundEl, context).css('background-color', hashColor)
      }
    }
  };

  $(document).ajaxComplete(function(event, xhr, settings) {
    Drupal.behaviors.multipleBlocks.attach();
  });

})(jQuery);
