<?php
/**
 * @file
 * tpg_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpg_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
