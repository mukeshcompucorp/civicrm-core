#!/bin/bash
##Jira ticket: PG-419
##Created by: Hitesh Jain
##Description: December Release.

#drush commands

#PGW-98
drush fr tpg_artist_and_prints -y
drush fr tpg_events.fe_block_settings -y
drush fr tpg_homepage.fe_block_settings -y
drush fr tpg_viewpoints.fe_block_settings -y

#To be run with every deployment / Do not delete:

drush rr
drush updb -y
drush cvupdb -y
drush cc all
