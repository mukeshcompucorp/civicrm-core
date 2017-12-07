#!/bin/bash
##Jira ticket: PG-419
##Created by: Hitesh Jain
##Description: December Release.

#drush commands

#PGW-98
drush fr tpg_artist_and_prints -y

#To be run with every deployment / Do not delete:

drush rr
drush updb -y
drush cvupdb -y
drush cc all