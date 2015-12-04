<?php

function _webform_values_set_pairs_list($data, $options = array()) {

  $options += array(
    'pager' => TRUE,
    'more' => FALSE,
    'operations' => TRUE,
    'limit' => NULL,
    'form_elements' => NULL,
  );

  $rows = $sort = array();
  
  if ($data) {
    $headers = array(
      array('data' => 'Pair Name', 'field' => 'name', 'sort' => 'asc'),
      array('data' => 'Trigger Value', 'field' => 'trigger_value'),
      array('data' => 'Value A', 'field' => 'value_a'),
      array('data' => 'Value B', 'field' => 'value_b'),
    );
    if ($options['operations']) {
      $headers[] = array('data' => 'Actions');
    }
    if ($options['form_elements']) {
      array_unshift($headers, '');
    }
    $sort_order = tablesort_get_order($headers);
    $sort_key   = $sort_order['sql'] ? $sort_order['sql'] : 'name';
    $sort_dir   = tablesort_get_sort($headers) == 'desc' ? SORT_DESC : SORT_ASC;

    $i = 0;
    foreach ($data as $id => $entry) {
      $row = array(
          $entry->name,
          $entry->trigger_value,
          $entry->value_a,
          $entry->value_b,
      );
      if ($options['operations']) {
        $row[] = array('data' => implode('&nbsp;', _webform_values_set_pairs_get_list_operations_links($entry->webform_values_set_id, $entry->id)), 'class' => 'webform-values-set-pairs-operations');
      }
      if (isset($options['form_elements'][$id])) {
        array_unshift($row, $options['form_elements'][$id]);
      }

      $sort[] = $entry->{$sort_key};
      $rows[] = $row;
    }
    
    array_multisort($sort, $sort_dir, $rows);
    
    $showing = $pager = $more = '';
    if ($options['limit']) {
      $limit = $options['limit'];
      $total = count($rows);
      $end = $limit;
      $start = 0;

      if ($options['pager']) {
        $page = isset($_GET['page']) ? $_GET['page'] : '';
        $start = $page * $limit;

        $element = 0;
        $GLOBALS['pager_total'][$element] = ceil($total / $limit);
        $GLOBALS['pager_page_array'][$element] = $page;
        $tags = array(
          t('« newest'),
          t('« newer'),
          '',
          t('older »'),
          t('oldest »'),
          );
        $pager = theme('pager', $tags, $limit, $element, array(), ceil($total/$limit));

        $end = min($total - 1, $start + $limit);
      }
      if ($total > $limit && $options['more']) {
        $more = ' ' . l(t('view all'), $options['more']);
      }
      $showing = t('Showing @start to @end of @total files.', array('@start' => $start + 1, '@end' => $end + 1, '@total' => $total));

      // Limit the number of rows shown.
      $rows = array_slice($rows, $start, $limit, TRUE);
    }

    $out = theme("table", array('header' => $headers, 'rows' => $rows, 'class' => 'webform-values-set-pairs-list-table'));
    $out .= $showing;
    $out .= $pager;
    $out .= $more;
  }
  else {
    $out = t('There are no data to display.' . '<br/>');
  }
  return $out;
}

function _webform_values_set_pairs_get_data($setId, $id = null) {
    $query = 'SELECT * FROM `webform_values_set_pair` WHERE webform_values_set_id = ' . (int)$setId;
    if ($id) {
        $query .= ' AND id = ' . (int)$id . ' LIMIT 1';
    }
    $result = db_query($query)->fetchAll();
    
    if ($id) {
        return reset($result);
    }
    return $result;
}

function _webform_values_set_pairs_save(array $item) {
    $id = null;
    $query = 'INSERT INTO ';
    $params = array();
    if (!empty($item['id'])) {
        $query = 'UPDATE ';
        $id = $item['id'];
        unset($item['id']);
    }
    $query .= '`webform_values_set_pair` SET ';
    
    foreach ($item as $key => $value) {
        $query .= $key . ' = :'.$key . ' ,';
        $params[':' . $key] = "{$value}";
    }
    $query = rtrim($query, ',');
    
    if ($id) {
        $query .= ' WHERE id = ' . (int)$id;
    }
    $result = db_query($query, $params);
    
    return $result;
}

function _webform_values_set_pair_delete($setId, $id) {
    db_query('DELETE FROM `webform_values_set_pair` WHERE webform_values_set_id = :webform_values_set_id AND id = :id', array(
        ':webform_values_set_id' => $setId,
        ':id' => $id,
    ));
    
    return true;
}

function _webform_values_set_pairs_get_list_operations_links($pairId, $id) {
    $out = array();
    
    $out[] = l(t('edit'), WEBFORM_VALUES_SET_MENU_PATH . '/' . $pairId . '/pair/' . $id . '/edit');
    $out[] = l(t('delete'), WEBFORM_VALUES_SET_MENU_PATH . '/' . $pairId . '/pair/' . $id . '/delete');
    
    return $out;
}
