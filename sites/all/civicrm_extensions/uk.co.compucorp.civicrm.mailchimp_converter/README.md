This extension works as a string replacement for Mailchimp tokens, converting them to CiviCRM tokens.

##Configuring your token replacements:
The extension looks for your strings, along with the token delimiters in your code. You therefore only need to add the text from each token. e.g. if you add a mapping from "aaa", to "bbb", then "*|aaa|*" will be replaced by "{bbb}". Use the steps below to configure your mappings. Please note that access to this menu option is wrapped up in the Administer CiviCRM permission.

1. Navigate to Administer > CiviMail > Manage token mappings > Add mapping.
2. Enter your mailchimp token in the first box, without the *| and |*.
3. Enter the replacement CiviCRM token in the second box, without the { and }.

##Using the extension:

1. Export your Mailchimp template (depending on your template set up, you may want to run this through the mailchimp CSS inliner).
2. Copy the code from your template and paste this into the Mailchimp token converter (Mailings > Convert Mailchimp mailing).
3. Copy the output from the converter and paste this into a New Mailing.
4. Send mailing as per usual CiviMail steps.
