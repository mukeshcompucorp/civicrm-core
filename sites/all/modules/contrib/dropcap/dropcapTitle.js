Drupal.dropcapTitle = function($, selector) {
	//add title casing to the first x words
  
  excludes = dropcapBuildExcludes($, Drupal.settings.dropcap.dropcap_titling_excludes);
	$(selector).not(excludes).each(function(key, nodeBody) {
    originalParagraph = $(nodeBody);
		clonedParagraph = originalParagraph.clone();
		var paragraphHTML = $(clonedParagraph).html();
    paragraphHTML = paragraphHTML.replace(/^\s+|\s+jQuery/g, '');
		var charsToSplitAfter = Drupal.settings.dropcap.dropcap_titling_numchars;
		//check for tags and break on tag
		var tagIndex = paragraphHTML.indexOf("<");
		arbitraryDropcap = '';
    //remove an arbitrary dropcap if found, re-add later
		if (tagIndex == 0 && clonedParagraph.find('[class^=dropcap-arbitrary-]').html() == clonedParagraph.find('span:first').html()) {
  		//this means we've got an arbitrary dropcap, remove it and check for tags again
			arbitraryDropcap = clonedParagraph.find('span:first').remove(); //remove it
      arbitraryDropcap.addClass('dropcap-titling');
			paragraphHTML = $(clonedParagraph).html(); //update the html 
			tagIndex = paragraphHTML.indexOf("<");
      charsToSplitAfter = charsToSplitAfter - 1;
		}
		//tagindex and splitpoint are -1 if not found
		if (tagIndex < 0 || tagIndex > 1) {
			if (tagIndex < charsToSplitAfter && tagIndex > 0) {
				splitPoint = tagIndex;
			}
			else {
				splitPoint = paragraphHTML.indexOf(" ", charsToSplitAfter);
			}
			punctuationIndexes = Drupal.settings.dropcap.dropcap_titling_breakpoints;
			punctuationIndex = splitPoint;
			for (index = 0; index < punctuationIndexes.length; ++index) {
				currentPunctuationIndex = paragraphHTML.indexOf(punctuationIndexes[index]);
				if (currentPunctuationIndex > 0 && currentPunctuationIndex < punctuationIndex) {
					punctuationIndex = currentPunctuationIndex + 1;
				}
			}
			if (punctuationIndex > 0 && splitPoint > punctuationIndex) {
				splitPoint = punctuationIndex;
			}
			if (splitPoint > 0) { //the normal case
				titledparagraphHTML = '<span class="dropcap-titling">' + paragraphHTML.substring(0, splitPoint) + '</span>' + paragraphHTML.substring(splitPoint, paragraphHTML.length);
			}
			else if(splitPoint < 0) { 	//if the paragraph is shorter than the splitpoint, wrap the whole thing
				titledparagraphHTML = '<span class="dropcap-titling">' + paragraphHTML.substring(0, paragraphHTML.length) + '</span>';
			}
			if(splitPoint != 0) { //meaning that there you should actually add the text
				if (arbitraryDropcap.length) { //and if there's an arbitrary dropcap, re-add it here.
					titledparagraphHTML = arbitraryDropcap.clone().wrap('<p>').parent().html() + titledparagraphHTML.substring(0, titledparagraphHTML.length);
				}
				originalParagraph.html(titledparagraphHTML);
			}
		}

	});
}