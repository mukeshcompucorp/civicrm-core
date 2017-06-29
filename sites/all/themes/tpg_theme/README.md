-- SUBTHEME SETUP --

NOTE: if you want to start working with SASS and JS in current theme,
you need to install node modules first.

1. run command in your terminal:
   $: npm install
   Wait untill npm install all the node_modules also config.json will be created.
   After modules installed you will see 'prompt: target' in terminal.
   At this step you should enter your local site url, like 'localhost/mysite' or
   'mysite.loc', this made for browserSync autoreload.
   After that npm will run 'gulp compile'.

Gulp setup:

   If you entered wrong host or have an error with 'fs',
   open or create config.json file (in theme) and change it.

   To compile changes run:
   $: gulp compile

   To compile and watch changes run:
   $: gulp

   If you don't have browser sync installed in your browser, you can comment
   strings with browser sync instructions in gulpfile.js
   But when your gulp watching the changes the browser will not reload on
   save.

Alternative instalation.
To save some time, you can install 'yarn'.

/*
 * Why yarn?
 * Ultra Fast. Yarn caches every package it downloads so it never needs to
 * download it again. It also parallelizes operations to maximize resource
 * utilization so install times are faster than ever.
 */

Yarn instalation (29.06.2017):
curl -sS https://dl.yarnpkg.com/debian/pubkey.gpg | sudo apt-key add -
echo "deb https://dl.yarnpkg.com/debian/ stable main" | sudo tee /etc/apt/sources.list.d/yarn.list
sudo apt-get update && sudo apt-get install yarn

After installation completed, just run command 'yarn' and follow same steps as
for npm in point 1.
