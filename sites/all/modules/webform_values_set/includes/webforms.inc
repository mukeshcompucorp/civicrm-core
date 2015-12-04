<?php

/**
 * Gets all existing Webform id => title pairs.
 * 
 * @return array
 */
function _webform_values_set_webforms_get_webforms() {
    $data = array();

    $result = db_query("SELECT nid, title FROM node WHERE type = 'webform'")->fetchAll();
    foreach ($result as $row) {
        $data[$row->nid] = $row->title;
    }
    
    return $data;
}

/**
 * Gets all fields of existing Webforms.
 * 
 * @param array $webforms
 * @return array
 */
function _webform_values_set_webforms_get_webforms_fields(array $webforms) {
    $data = array();
    
    foreach ($webforms as $key => $value) {
        $data[$key] = array('' => t('-- none --'));
        $result = db_query('SELECT form_key, name FROM webform_component WHERE nid = ' . (int)$key)->fetchAll();
        foreach ($result as $field) {
            $data[$key][$field->form_key] = $field->name;
        }
    }
    
    return $data;
}
