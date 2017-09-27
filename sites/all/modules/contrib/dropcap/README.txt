-- SUMMARY --

Per Karl Swedberg's Article (http://www.learningjquery.com/2006/09/fancy-drop-cap-part-1), this module creates a drop cap from the first letter of user-specified paragraphs.

Definition of Drop Cap: In a written work, a drop cap is a letter at the beginning of a work, a chapter or a paragraph that is larger than the rest of the text.

Future releases will include:

    * More letter images to choose from
    * Allow users to upload their own letter images
    * Send me suggests for anything else!


-- INSTALLATION --

Install via sites/all/modules > other > Drop Cap

-- CONFIGURATION --

* Go to admin/appearance/dropcap or visit Appearance -> Drop Cap (tab on appearance page)
* Designate jQuery selectors whose first letter will be replaced with a drop cap.  For example, if you want every <p id="main_content"> to have a drop cap as the first letter, then enter "#main_content p" in the textarea, without the quotes. jQuery selectors can work like CSS, more about jQuery selectors here: http://api.jquery.com/category/selectors/

For instance, "#content p:first" would select the first paragraph within the id "#content" and drop capping would be added to the first letter of that paragraph. #content .field-item p:eq(1) would select the first paragraph within each field item. p:first doesn't select multiple paragraphs.

If you don't know the selector(s) you need to use, there are two ways to go about finding it: (1) adding classes/id's to the content yourself, (2) using the classes/id's that already apply to your content. I think #1's easier. So here's how to go about finding/adding your classes/id's:

1) Edit your page's body in plain text (i.e., if you're using TinyMCE/FCK then disable rich text). Wrap the paragraph you want drop cap'd in a div with a class/id that you remember. For example, if your content was previously:
Hello, welcome to my site
Then wrap it like so:
<div id="dropcap">Hello, welcome to my site<div>
Then go to the drop cap settings page (/admin/appearance/dropcap) and use this selector:
#dropcap

2) If you're web-dev savvy, grab Firebug and use it to determine which class/id applies to the main content of the paragraphs you want to drop-cap. (if you don't know how to do this, you're not web-dev savvy and go with #1). This option might be a bit slicker in that you don't have to wrap every page's content with a div... rather you can do something smart like using jQuery child-selectors of id's that only show on specific pages & whatnot.

* If you select "span tags", the first letter will just be wrapped in a span tag with the class "dropcap-text" on it. This can be styled in the usual way.

-- CUSTOM ALPHABETS --

Custom alphabets can be created, with each letter being named a.png, b.png, etc. They must be placed in a directory named "dropcap" within the root of an enabled theme. For instance:
sites/all/themes/my-enabled-theme/dropcap/my-alphabet-name/

The image file extension will be automatically detected. All images within an alphabet must be of the same file extension. Once you create your folder and add image files, your library will be selectable on the module settings page.

-- NOTE --

This module has extra features that can be optionally enabled like titling, arbitrary dropcapping, and spacer spans. These features don't slow down the module if they're not enabled. It's designed to be simple if that's all you need. I've not broken these into submodules for a few different reasons, but the functionality is modular. Just a couple extra variables that don't get used.

-- SPACER SPANS --

I (glass.dimly) am using this module to add complex illuminated letters with odd shapes as dropcap images. These images are square pngs, and if just inserted plain, text would wrap around the square shape of the letter. Instead, I size the wrapper for the image to 1 x 1 and use multiple span tags to designate the width and height of the image, and the text flows around those spacer spans rather than the square image. And so can you.

-- Z-INDEX --

I have set the z-index to 1 on the paragraphs that begin with dropcapped letters. This is because of the fancy spacers spans and whatnot, when the dropcap image obscures the paragraphs, as in the case of illuminations. If you are doing fancy illuminations work that overflows the paragraph with the dropcapped letter and are using spacers to limn the shape of your image, then also set all your p tags in your content body to z-index:1.

-- ARBITRARY DROPCAPPING --

This module can also search for a span tag and replace it with a graphical letter and html to accompany it. Dropcapify arbitrary letters using <span dropcap-arbitrary-my-letter-name>my-letter</span>. Dropcap will look for the file my-letter-name.png (as specified by the class) and add that image and normal dropcap classes, while using my-letter for the alt text. This feature must be turned on at the settings page.

-- TITLING --

This module also provides the ability to wrap the first x characters of a post in a span tag, which will have the class .dropcap-titling. Some css is provided to capitalize those letters.

Titling will not wrap around tags (except dropcap tags known by this module). It will break on a tag. More details on the settings page.

-- NOTES --

This module will not highlight the first "letter" of a post if it is not an English letter between a and z.

You can add your own font set by creating a subfolder under alphabet and adding your own images for each letter.


-- CONTACT --
glassdimly@gmail.com
tylerrenelle@gmail.com
