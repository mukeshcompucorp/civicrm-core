(function($) {
  "use strict";

  Drupal.behaviors.multipleBlocks = {
    attach: function (context, settings) {
      this.nWrapper('.front .exhibitions-and-highlights', '.view-content .views-row', 3, 'sm', context);
      this.nWrapper('.node-type-viewpoint .field-type-entityreference > .field-items', '> .field-item', 2, 'md', context);
    },
    nWrapper: function (wrapper, el, n, breakpoint, context) {
      var $parent  = $(wrapper, context);
      var elNumber = n;

      if ($parent.length) {
        var $parentLength = $parent.length;

        for (var i = 0; i < $parentLength; i++) {
          var $el       = $parent.eq(i).find(el);
          var $elLength = $el.length;

          if (!$('.columns-wrapper').length) {
              $parent.eq(i).prepend(
                '<div class="columns-wrapper clearfix">' +
                  '<div class=\"col col-1 col-' + breakpoint + '-' + 12/elNumber + '\"></div>' +
                  '<div class=\"col col-2 col-' + breakpoint + '-' + 12/elNumber + '\"></div>' +
                  '<div class=\"col col-3 col-' + breakpoint + '-' + 12/elNumber + '\"></div>' +
                '</div>'
            );
          }

          for (var j = 0; j < $elLength; j += elNumber) {
            var firstCol  = $el.eq(j);
            var secondCol = $el.eq(j+1);
            var thirdCol  = $el.eq(j+2);

            firstCol.appendTo('.columns-wrapper .col-1');
            secondCol.appendTo('.columns-wrapper .col-2');
            thirdCol.appendTo('.columns-wrapper .col-3');

            if (j >= $elLength - elNumber) {
              $parent.addClass('show');
            }
          }
        }
      }
    }
  };

  Drupal.behaviors.changeAttrValue = {
    attach: function(context, settings) {
      this.setAttr('input.webform-calendar', 'src', '/sites/all/themes/tpg_theme/images/icons/calendar.png', context);
      this.classAdd('.page-explore-all-content .ctools-auto-submit-full-form', 'content', context);
    },
    setAttr: function(el, attrName, attrVal, context) {
      var $el = $(el, context);
      if ($el.length) {
        for (var i = 0; i < $el.length; i++) {
          $el.eq(i).attr(attrName, attrVal);
        }
      }
    },
    classAdd: function(el,className, context) {
      $(el, context).addClass(className)
    }
  };

  Drupal.behaviors.chosenInclude = {
    attach: function(context, settings) {
      setTimeout(function() {
        $('select', context).chosen();
      }, 10);
    },
  };

  Drupal.behaviors.datePickerInclude = {
    attach: function(context, settings) {
      $('.page-civicrm-event-register input#birth_date', context).datepicker();
    }
  }

  Drupal.behaviors.fullWidthImage = {
    attach: function(context, settings) {
      this.removingClasses('.paragraphs-item-full-width-image-caption-content', context);
    },
    removingClasses: function(el, context) {
      var $el = $(el, context);
      if ($el.length) {
        for (var i = 0; i < $el.length; i++) {
          $el.eq(i).closest('.field-item').removeClass('field-item');
        }
      }
    }
  };

  Drupal.behaviors.arrowScrollDown = {
    attach: function(context, settings) {
      this.creatingEl('.front .view-header-image .views-row', '<div class="before"></div>', context);
      this.moveToEl('.front .view-header-image .views-row .before', '.current-exhibitions-highlights', context);
    },
    creatingEl: function(el, markup, context) {
      if ($(el, context).length) {
        $(el, context).prepend(markup);
      }
    },
    moveToEl: function(el, anchor, context) {
      $(el, context).click(function() {
        $('html, body', context).animate({
            scrollTop: $(anchor, context).offset().top
        }, 600);
      });
    }
  };

  Drupal.behaviors.exhibitionsTagResponsive = {
    attach: function(context, settings) {
      this.removingClasses('.front .exhibitions-and-highlights .image .tag:not(:empty)', context);
    },
    removingClasses: function(el, context) {
      var $el = $(el, context);
      if ($el.length) {
        for (var i = 0; i < $el.length; i++) {
          var tag = $el.eq(i).clone();
          $el.eq(i).closest('.views-row').find('.type').prepend(tag);
        }
      }
    }
  };

  Drupal.behaviors.formValidation = {
    attach: function(context, settings) {
      $('article .webform-client-form', context).validate();
    }
  };

  Drupal.behaviors.respMenu = {
    attach: function(context, settings) {
      this.showMenu('.resp-menu', '.region-header-pane', context);
    },
    showMenu: function(el, toggleMenu, context) {
      var $el = $(el, context);

      $el.click(function(event) {
        $(toggleMenu, context).slideToggle();
        $('body', context).toggleClass('fixed-menu');
      });
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

  Drupal.behaviors.sidebarCopy = {
    attach: function(context, settings) {
      this.elClone('.plan-your-visit', '.book-tickets', '.membership-block',
                   'second-sidebar-responsive', '.second-sidebar',
                   'article .paragraphs-items > .field > .field-items > .field-item:first-child',
                   '.main-content', context);
      this.additionalGutters('article .paragraphs-items > .field > .field-items > .field-item:first-child',
                             '.second-sidebar:not(.second-sidebar-responsive)', context);
    },
    elClone: function(el1, el2, el3, classToAdd, wrapper, afterEl, afterElAlt, context) {
      if ($(el1, context).length || $(el2, context).length || $(el3, context).length) {
        if ($(afterEl, context).length) {
          $(wrapper, context).clone().addClass(classToAdd).appendTo(afterElAlt);
          if ($('.paragraphs-item-title-section').length) {
            $('.' + classToAdd, context).find(el2).addClass('clonned').insertAfter('.paragraphs-item-title-section');
          }
        }
      }
    },
    additionalGutters: function(el, elOffset, context) {
      var $el       = $(el, context);
      var $elOffset = $(elOffset, context);

      if ($el.length && $elOffset.length) {
        var summ        = 0;
        var botMargin   = 0;
        var topMargin   = 0;
        var elHeight    = $el.height();
        var marginArray = $el.find('.entity-paragraphs-item').attr('class').match(/\d+/g);

        if (marginArray) {
          botMargin = parseInt(marginArray[marginArray.length-1]);
          topMargin = parseInt(marginArray[marginArray.length-2]);
        }

        if ($el.find('.entity-paragraphs-item').hasClass('paragraphs-item-title-section')) {
          summ = topMargin + botMargin + elHeight;
        } else {
          summ = topMargin;
        }

        $(elOffset, context).css('margin-top', summ + 'px');
      }
    }
  };

  Drupal.behaviors.lightBoxArrows = {
    attach: function(context, settings) {
      this.arrowCreation('.header-image-lightbox .field-content > a:first-child', context);
      this.openLightbox('.header-image-lightbox span', context);
    },
    arrowCreation: function(el, context) {
      var $el = $(el, context);
      var $item = $el.parent().find('a');

      if ($el.length && $item.length >= 2) {
        $(el, context).append('<div class="arrows"><span class="left"></span><span class="right"></span></div>');
      }
    },
    openLightbox: function(el, context) {
      var $el = $(el, context);

      $el.click(function(event) {
        $(this, context).parent().find('.colorbox:first-child').click();
      });
    }
  };

  Drupal.behaviors.removingEmptyBlock = {
    attach: function(context, settings) {
      this.moveTitle('.header-image', 'img', context);
      this.moveTitle('.header-image-two-col', 'img', context);
      this.moveElement('.print-sales.view-filters', '.region-content', context);
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
    },
    moveElement: function(el, place, context) {
      var $el    = $(el, context);
      var $place = $(place, context);

      if ($el.length) {
        $el.prependTo($place).addClass('clonned');
      }
    }
  };

  Drupal.behaviors.whatsOnFilter = {
    attach: function(context, settings) {
      this.creatingEl('.whats-on-filter', 'resp-filter', 'Filter', context);
      this.openEl('.resp-filter', '.whats-on-filter > .content', 'show', context);
      this.searchField('.page-whats-on .who-select-prefix', '.page-whats-on .who-select-prefix', '.page-whats-on .form-item-tid', context);
      this.searchField('.filter-overlay', '.page-whats-on .who-select-prefix', '.page-whats-on .form-item-tid', context);
    },
    creatingEl: function(place, elClass, elText, context) {
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

  Drupal.behaviors.headerPaneMenu = {
    attach: function (context, settings) {
      var $headerPane = $('.header-pane', context);
      var $menuLinks = $('ul.menu li a', $headerPane);
      $menuLinks.mouseover(function () {
        $menuLinks.not(this).addClass('no-hover');
      }).mouseout(function () {
        $menuLinks.removeClass('no-hover');
      });
    }
  };

  Drupal.behaviors.callColorbox = {
    attach: function (context, settings) {
      this.openOnElClick('.colorbox-content-image-title', context);
    },
    openOnElClick: function(el, context) {
      $(el, context).click(function() {
        $(this, context).closest('.entity-paragraphs-item').find('.field-item:first-child .cboxElement').click();
      });
    }
  };

  Drupal.behaviors.viewpointTags = {
    attach: function (context, settings) {
      var $paragraphsTitle = $('.paragraphs-item-title-section', context);
      var $viewpointTag = $('.field-name-field-paragraphs-tags-viewpoints', $paragraphsTitle);
      var $paragraphsTitleFieldItem = $paragraphsTitle.closest('.field-item');
      var $paragraphsFieldItemNext = $paragraphsTitleFieldItem.next();
      var $paragraphsItemNext = $paragraphsFieldItemNext.children('.entity-paragraphs-item');

      var $paragraphsTitleDescription = $paragraphsTitle.find('.field-name-field-paragraph-description');
      if ($paragraphsTitleDescription.length > 0) {
        return;
      }

      $paragraphsItemNext.prepend($viewpointTag);

      this.moveTag('.page-viewpoints .view-viewpoints .views-row', '.field-type-taxonomy-term-reference', context);
      this.moveTag('.node-type-events-detail .view-viewpoints .views-row', '.field-type-taxonomy-term-reference', context);
    },
    moveTag: function(el, place, context) {
      var $el      = $(el, context);
      var elLength = $el.length;
      if (elLength) {
        for (var i = 0; i < elLength; i++) {
          $el.eq(i).find('.card-tag').prependTo($el.eq(i).find(place));
        }
      }
    }
  };

  Drupal.behaviors.lightboxCaption = {
    attach: function (context, settings) {
      this.captionIcon('.caption-icon', '.header-image-lightbox [class*="field-caption"]', context);
      this.changingHeaderBg('.header-image-lightbox img', '.header', '#c8c8c8');
    },
    captionIcon: function(el, parent, context) {
      if ($(parent, context).length) {
        $(parent, context).prepend('<span class="caption-icon"></span>');
        $(el, context).click(function(event) {
          $(this, context).toggleClass('show');
          $(this, context).parent().toggleClass('opened');
        });
      }
    },
    hideCaption: function(image, caption, context) {
      if ($(image, context).length) {
        $(image, context).click(function(event) {
          if($(caption, context).length) {
            $(caption, context).removeClass('opened');
          }
        });
      }
    },
    counterTextReplacement: function(el, context) {
      if ($(el, context).length) {
        var $el = $(el, context);
        $el.text($el.text().replace(' of ', '/'));
      }
    },
    changingHeaderBg: function(el, backgroundEl, hashColor, context) {
      var wWidth = $(window).width();

      $(window, context).resize(function() {
        wWidth = $(window, context).width();
        if ($(el, context).length && wWidth >= 992 || $('.view-header-video .video-embed-description').length) {
          $(backgroundEl, context).css('background-color', hashColor);
        } else if($(el, context).length && wWidth < 991) {
          $(backgroundEl, context).css('background-color', '#fff');
        }
      });

      if ($(el, context).length && wWidth >= 992 || $('.view-header-video .video-embed-description').length) {
        $(backgroundEl, context).css('background-color', hashColor);
      } else if($(el, context).length && wWidth < 991) {
        $(backgroundEl, context).css('background-color', '#fff');
      }
    }
  };

  $(document).ajaxComplete(function(event, xhr, settings) {
    Drupal.behaviors.multipleBlocks.attach();
    Drupal.behaviors.viewpointTags.moveTag('.page-viewpoints .view-viewpoints .views-row', '.field-type-taxonomy-term-reference');
  });

})(jQuery);
