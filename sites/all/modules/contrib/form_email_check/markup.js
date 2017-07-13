(function($){
	Drupal.behaviors.myModuleBehavior = 
		{
			attach: function (context) {
				$('.webform-next', context).each(function(){
					if($(this).attr('value')=='Check Availability'){
						$(this).replaceWith(
							'<input class="webform-next button-primary form-submit" type="submit" name="op" value="Check Availability"><div class="form-item webform-component webform-component-markup webform-component--email-footer-markup"><p>Already a member?</p><p><a href="/user">Existing user login</a> | <a href="/user/password">Forgotten password</a></p></div>'
						);
						return false;
					}
					return true;
				});
			}
		};
})(jQuery);