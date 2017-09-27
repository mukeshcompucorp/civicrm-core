(function ($) {
  Drupal.behaviors.dropcap = {
    attach: function (context, settings) {
      //should be just add the span tags first, then dropcaptitling, then add the letters, should be done inline each of the functions.

      if (Drupal.settings.dropcap.dropcap_titling_selectors) {
        dropcapTitle($);
      }
      if (Drupal.settings.dropcap.selectors) {
        dropcapFirstLetters($); 
      }
      if(Drupal.settings.dropcap.dropcapify_arbitrary == 1) {
        dropcapArbitrary($); 
      }
    }
  };
})(jQuery);

function dropcapTitle($) {
  $.each( Drupal.settings.dropcap.dropcap_titling_selectors, function(i, selector) {
    Drupal.dropcapTitle($, selector);
  });
}


function dropcapArbitrary($) {
  
  excludes = dropcapBuildExcludes($, Drupal.settings.dropcap.dropcap_arbitrary_excludes);
    
  //if dropcap_arbitrary_selectors constrain search to those selectors
  if (Drupal.settings.dropcap.dropcap_arbitrary_selectors) {
    $.each( Drupal.settings.dropcap.dropcap_arbitrary_selectors, function(i, selector) {
     dropcapArbitraryDoIt($, selector, excludes)
    });
  }
  //else just search the whole dom
  else {
    dropcapArbitraryDoIt($, '', excludes)
  }
  //move this into the above 
}

function dropcapArbitraryDoIt($, selector, excludes) {
	$(selector + " span[class^=dropcap-arbitrary-]:not(.processed-dropcap)").not(excludes).each(function(key, dropcapSpan){
		dropcapSpan = $(dropcapSpan);
		callback = 'dropcapAddBodyClasses';
		if (dropcapSpan.parent(":first-child").html() == dropcapSpan.parent().html()) {
			callback = 'dropcapAddBodyFirstClasses';
		}
		dropcapSpan.addClass('dropcap-text processed-dropcap');
		letter = dropcapSpan.text();
		paragraph = $(dropcapSpan.parent()); //change this. this is the assumption of the earlier function
		classesArray = dropcapSpan.attr('class').split(' ');
		var index, value, letterName;
		for (index = 0; index < classesArray.length; ++index) {
	    value = classesArray[index];
	    if (value.substring(0, 18) === "dropcap-arbitrary-") {
        letterName = value.substring(18, value.length);
        break;
	    }
		}
		dropcapify($, letterName, letter, paragraph, callback);
	});
}

function dropcapFirstLetters($){
    $.each( Drupal.settings.dropcap.selectors, function(i, selector) {
			letter = "";
      //if to chedk it not empty
      excludes = dropcapBuildExcludes($, Drupal.settings.dropcap.dropcap_excludes);
  		$(selector).not(excludes).each(function(){
  			paragraph = $(this);	
        var text = $(paragraph).html();
  			//trim leading whitespace
  			text = text.replace(/^\s+|\s+$/g, '');
        var tagIndex = text.indexOf("<");
        dropcapTitledLength = 0;
        if (tagIndex == 0 && paragraph.find(':first-child:not([class^=dropcap-arbitrary-]):not(.processed-dropcap)').hasClass('dropcap-titling')) {
          //this cannot include tags so this is safe
          dropcapTitledHTML = paragraph.find(':first-child').text();
          dropcapTitledHTML = dropcapTitledHTML.substring(0,1) + '<span class="dropcap-titling">' + dropcapTitledHTML.substring(1,dropcapTitledHTML.length) + '</span>';
          paragraph.find(':first-child').replaceWith(dropcapTitledHTML);
          var text = $(paragraph).html();
    			text = text.replace(/^\s+|\s+$/g, '');
        }
  			letter = text.substr(0,1);
        //get special characters from the db that are allowed to be dropcapped
        specialChars = dropcap_preg_quote((Drupal.settings.dropcap.non_alpha_chars).replace(/(\r\n|\n|\r)/gm,""));
        regex = new RegExp('[a-zA-Z'+specialChars+']');
  			var match = regex.test(letter);
  			dropcap_img = ''; 
  			if ( match ) {
  			  paragraph.html( text.slice(1) ); //    means that this just gets the first character, whatever it is.
  		    var letter_dropcapped = '';
  				letterName = letter.toLowerCase();
  				if (letterName == '"') {
  					letterName = 'quote';
  				}
  				if (letterName == "'") {
  					letterName = 'singlequote';
  				}
  				if (letterName == ".") {
  					letterName = 'period';
  				}
  				if (letterName == "/") {
  					letterName = 'forwardslash';
  				}
  				if (letterName == "\\") {
  					letterName = 'backslash';
  				}
			
  				dropcapify($, letterName, letter, paragraph, 'dropcapAddNodeClasses');
  			}
		});
  }); 
}

function dropcapBuildExcludes($, exclude_array) {
  excludes = '';
  if (exclude_array.length <= 1 && (typeof exclude_array[0] === "undefined" || !exclude_array[0].length)) {
    return excludes;
  }
  $.each(exclude_array, function(i, exclude){
      excludes += exclude;
    //check if last item
    if (i == Drupal.settings.dropcap.dropcap_excludes.length  -1) {
      excludes += ', ' + exclude + ' *';
    }
    else {
      excludes += ', ' + exclude + ' *, '; 
    }
  }); 
  return excludes; 
}

function dropcapify($, letterName, letter, paragraph, callback) {
  callback = (typeof callback === "undefined") ? "" : callback;
  if ((Drupal.settings.dropcap.dropcap_spacer_spans_after == 0) && (Drupal.settings.dropcap.dropcap_spacer_spans_before == 0)) {
    callback = '';
  }
	if (!$(paragraph).find(".processed-dropcap").length) {
		letter_dropcapped = '<span class="dropcap-text processed-dropcap dropcapletter-' + letterName +'">' + letter + '</span>';
  	$(letter_dropcapped).prependTo(paragraph);
	}
  //paragraph. dropcapTitledLength
  paragraph.wrapInner('<span class="dropcap-paragraph"></span>');
  if (!(Drupal.settings.dropcap.alphabet == 'spans')){
	//check to see if an image exists for this character
    dropcapMarkup = dropcapGetMarkup($, letterName, letter);
		$(dropcapMarkup).prependTo( paragraph );
		var fn = window[callback];
		if(typeof fn === 'function') {
			fn($, letterName, paragraph);
		}
		$(paragraph).find('.dropcap-text').css('display','none');
	}	
}

function dropcap_preg_quote(str, delimiter) {
  return String(str)
    .replace(new RegExp('[.\\\\+*?\\[\\^\\]$(){}=!<>|:\\' + (delimiter || '') + '-]', 'g'), '\\$&');
}

function dropcapAddNodeClasses($, letterName, paragraph) {
	$('body').addClass('body-dropcap-' + letterName);
  paragraph.parent().addClass('content-dropcap-' + letterName);
	paragraph.addClass('p-dropcap-' + letterName + ' p-dropcap-auto-first');
}
function dropcapAddBodyClasses($, letterName, paragraph) {
	paragraph.addClass('p-dropcap-' + letterName + ' p-dropcap');
	$('body').addClass('body-dropcap-arbitrary-' + letterName);
	paragraph.parent().addClass('content-dropcap-arbitrary-' + letterName);
}
function dropcapAddBodyFirstClasses($, letterName, paragraph) {
	$('body').addClass('body-dropcap-arbitrary-first-' + letterName);
	dropcapAddBodyClasses($, letterName, paragraph);
}
function dropcapGetMarkup($, letterName, letter) {
	dropcapImg = $('<img />')
		.attr('src', Drupal.settings.dropcap.path + letterName + '.' + Drupal.settings.dropcap.dropcap_alphabet_extension)
		.attr('alt',letter)
		.addClass('dropcap dropcapimg-' + letterName)
 		.wrap('<span class="dropcap-img-wrapper dropcap-img-wrapper-' + letterName + '"></span>')
		.parent();
	beforeSpacersNum = Drupal.settings.dropcap.dropcap_spacer_spans_before;
	beforeSpacers = '';
	var i = 1;
	beforeSpacers = '';
	while( i <= beforeSpacersNum) {
		beforeSpacers += '<span class="before-spacer-'+i+' before-spacer-' + letterName + '-' + i + ' dropcap-spacer dropcap-spacer-before"></span>\n';
		i++;
	}
	afterSpacersNum = Drupal.settings.dropcap.dropcap_spacer_spans_after;
	var i = 1;
	afterSpacers = '';
	while( i <= afterSpacersNum) {
		afterSpacers += '<span class="after-spacer-'+i+ ' after-spacer-' + letterName + '-' + i + ' dropcap-spacer dropcap-spacer-after"></span>\n';
		i++;
	}
	dropcapMarkup = '<span class="dropcap-wrapper">' + beforeSpacers + dropcapImg[0].outerHTML + afterSpacers + '</span>';	
	return dropcapMarkup;		
}

jQuery.fn.getClasses = function(){
  var ca = this.attr('class');
  var rval = [];
  if(ca && ca.length && ca.split){
    ca = $.trim(ca); /* strip leading and trailing spaces */
    ca = ca.replace(/\s+/g,' '); /* remove doube spaces */
    rval = ca.split(' ');
  }
  return rval;
}	
jQuery.fn.titleCase  = function(){
  var ca = this.attr('class');
  var rval = [];
  if(ca && ca.length && ca.split){
    ca = $.trim(ca); /* strip leading and trailing spaces */
    ca = ca.replace(/\s+/g,' '); /* remove doube spaces */
    rval = ca.split(' ');
  }
  return this;
}