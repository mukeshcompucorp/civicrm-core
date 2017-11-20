#!/bin/bash
##Jira ticket: PGW-96
##Created by: Hitesh Jain
##Description: Print Sales Release

#drush commands

#PGW-83
drush en title -y
drush en tpg_artist_and_prints -y

#PGW-89
drush fr tpg_events.views_view -y

#To be run with every deployment / Do not delete:

drush rr
drush updb -y
drush cvupdb -y
drush cc all