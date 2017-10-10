#!/bin/bash
##Jira ticket: PGW-84
##Created by: Hitesh Jain
##Description: October Release

#drush commands

#PGW-78
drush fr tpg_viewpoints.fe_block_settings -y
drush fr tpg_homepage.fe_block_settings -y
drush fu tpg_homepage.node_export_features -y
drush fr tpg_paragraphs.variable -y
drush fr tpg_events.variable -y
drush fr tpg_content.variable -y

#To be run with every deployment / Do not delete:

drush rr
drush updb -y
drush cvupdb
drush cc all