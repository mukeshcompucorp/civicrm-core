#!/bin/bash
##Jira ticket: PGW-88
##Created by: Hitesh Jain
##Description: October Release

#drush commands

#PGW-78
drush fr tpg_homepage.views_view -y
drush fr tpg_viewpoint.views_view -y
#PGW-86
drush fr tpg_events.field_base -y

#To be run with every deployment / Do not delete:

drush rr
drush updb -y
drush cvupdb -y
drush cc all