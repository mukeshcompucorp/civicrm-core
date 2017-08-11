<?php

/**
 * Implements hook_css_alter().
 */
function tpg_theme_css_alter(&$css) {
  unset($css['sites/all/modules/contrib/panels/css/panels.css']);
  $exclude = array(
    'modules/system/system.menus.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
    'sites/all/modules/contrib/panels/css/panels.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}

/**
 * Removes .panels-separator.
 */
function tpg_theme_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('', $vars['panes']);
  return $output;
}

/**
 * Remove panels-flexible css.
 */
function tpg_theme_panels_flexible($vars) {

  $css_id = $vars['css_id'];
  $content = $vars['content'];
  $settings = $vars['settings'];
  $display = $vars['display'];
  $layout = $vars['layout'];
  $handler = $vars['renderer'];

  panels_flexible_convert_settings($settings, $layout);

  $renderer = panels_flexible_create_renderer(FALSE, $css_id, $content, $settings, $display, $layout, $handler);

  $output = "<div class=\"panel-flexible " . $renderer->base['canvas'] . " clearfix\" $renderer->id_str>\n";
  $output .= "<div class=\"panel-flexible-inside " . $renderer->base['canvas'] . "-inside\">\n";

  $output .= panels_flexible_render_items($renderer, $settings['items']['canvas']['children'], $renderer->base['canvas']);

  // Wrap the whole thing up nice and snug
  $output .= "</div>\n</div>\n";

  return $output;
}

/**
 * Implements hook_preprocess_page().
 */
function tpg_theme_preprocess_page(&$vars, $hook) {

  // @todo remove below assignment for breadcrumb once we need to enable breadcrumbs.
  $vars['breadcrumb'] = '';

  // Hiding Menu Login tabs.
  if (in_array(current_path(), array('user/login', 'user')) && user_is_anonymous()) {
    unset($vars['tabs']);
  }
  elseif (in_array(current_path(), array('user/password'))) {
    unset($vars['tabs']['#primary']['0']);
  }

  // Removing site logo depending upon show logo field value.
  $node = menu_get_object('node');

  // Fetching Homepage header image node for Logo Color.
  if ($vars['is_front']) {
    $header_image_result = views_get_view_result('header_image', 'header_image_view_block');
    if (isset($header_image_result[0]->nid)) {
      $node = node_load($header_image_result[0]->nid);
    }
  }

  if ($node->type == 'paragraphs_page') {
    if(!$node->field_show_logo['und'][0]['value']) {
      unset($vars['logo']);
    }
  }
  // Setting logo color.
  if ($node->field_logo_color || $node->field_event_logo_color) {
    $logo_color = $node->field_logo_color ? $node->field_logo_color : $node->field_event_logo_color;
    switch (drupal_strtolower($logo_color['und'][0]['value'])) {
      case 'black':
        $vars['logo'] = '/' . drupal_get_path('theme', 'tpg_theme') . '/images/logo-black.png';
        break;
      case 'grey':
        $vars['logo'] = '/' . drupal_get_path('theme', 'tpg_theme') . '/images/logo-grey.png';
        break;
      case 'white':
        $vars['logo'] = '/' . drupal_get_path('theme', 'tpg_theme') . '/images/logo-white.png';
        break;
    }
  }
  elseif (in_array($node->type, array('events_detail', 'paragraphs_page'))) {
    $vars['logo'] = '';
  }
  elseif ($vars['is_front']) {
    $vars['logo'] = '/' . drupal_get_path('theme', 'tpg_theme') . '/images/logo-white.png';
  }

  $visible = FALSE;
  if(!empty($node) && $node->type == 'paragraphs_page' || $node->type == 'events_detail') {
    // Changing page layout if full_width_image isset.
    $node_wrapper =  entity_metadata_wrapper('node', $node);

    $paragraph = isset($node_wrapper->field_paragraphs_content) ?
          $node_wrapper->field_paragraphs_content :
          $node_wrapper->field_paragraphs_entity;

    if(isset($paragraph)) {
      foreach ($paragraph->value() as $paragraph_item) {
        if ($paragraph_item->bundle == 'full_width_image_caption_content') {
          $visible = TRUE;
        }
      }
    }
  }

  $classes = $vars['add_classes'] = [];
  if ($node && !$vars['is_front']) {
    switch ($node->type) {
      case 'events_detail':
        $classes['sidebar_first'] = !$visible ? 'col-md-3' : '';
        $classes['sidebar_second'] = !$visible ? 'col-md-3' : 'container';
        $classes['content'] = !$visible ? 'col-md-6' : '';
        $classes['content_width'] = 'header-image-narrow';
        $classes['container'] = !$visible ? '' : 'full-width-image-page events-type';
        break;
      case 'overview_page':
        $classes['sidebar_first'] = '';
        $classes['sidebar_second'] = '';
        $classes['content'] = '';
      break;
      default:
        $classes['sidebar_first'] = !$visible ? 'col-md-2' : '';
        $classes['sidebar_second'] = !$visible ? 'col-md-2' : 'container';
        $classes['content'] = !$visible ? 'col-md-8' : '';
        $classes['content_width'] = 'header-image-wide';
        $classes['container'] = !$visible ? '' : 'full-width-image-page paragraphs-type';
        break;
    }
    if ($classes) {
      $vars['add_classes'] = $classes;
    }
  }
  // Hiding page title.
  $pages = array('events_detail', 'paragraphs_page');
  if (in_array($node->type, $pages)) {
    $vars['title'] = '';
  }
}

/**
 * Implements template_preprocess_node().
 */
function tpg_theme_preprocess_node(&$variables) {

  // Events Detail Node.
  if ($variables['type'] == 'events_detail') {
    foreach ($variables['field_paragraphs_entity'] as $key => $paragraph_item) {
      // Loading paragraphs bundle from automated id.
      $data = paragraphs_item_load($paragraph_item['value']);
      if ($data->bundle == 'title_section') {
        // Unset Date Published field for events node as we want to show event dates.
        unset($variables['content']['field_paragraphs_entity'][$key]['entity']['paragraphs_item'][$data->item_id]['field_paragraphs_date_published']);
        // Unset Subtype field value depending upon Show tags field value.
        if (!$data->field_paragraphs_show_tags['und'][0]['value']) {
          unset($variables['content']['field_paragraphs_entity'][$key]['entity']['paragraphs_item'][$data->item_id]['field_paragraphs_tags_viewpoints']);
        }
      }
    }
  }
  // Paragraphs Page Node.
  if ($variables['type'] == 'paragraphs_page') {
    // Paragraphs page node.
    foreach ($variables['field_paragraphs_content'] as $key => $paragraph_item) {
      // Loading paragraphs bundle from automated id.
      $data = paragraphs_item_load($paragraph_item['value']);

      if ($data->bundle == 'image_reading_width_colorbox') {
        // Reading width colorbox image caption.
        if (isset($data->field_reading_image['und'][0]['image_field_caption']['value'])) {
          drupal_add_js(array('tpg_theme' => array('reading_image_lightbox_caption' => drupal_html_to_text($data->field_reading_image['und'][0]['image_field_caption']['value']))), 'setting');
        }
        // Adding background class using background class field.
        if ($bg_color_value = $data->field_background_color['und'][0]['value']) {
          drupal_add_js(array('tpg_theme' => array('reading_image_lightbox_bg_color' => 'colorbox-background-' . drupal_strtolower($bg_color_value))), 'setting');
        }
      }

      if ($data->bundle == 'title_section') {
        // Unset Event Start End Dates ds field.
        unset($variables['content']['field_paragraphs_content'][$key]['entity']['paragraphs_item'][$data->item_id]['event_start_end_dates']);

        // Unset Subtype field value depending upon Show tags field value.
        if (!$data->field_paragraphs_show_tags['und'][0]['value']) {
          unset($variables['content']['field_paragraphs_content'][$key]['entity']['paragraphs_item'][$data->item_id]['field_paragraphs_tags_viewpoints']);
        }
      }
    }
  }
}

/**
 * Implements hook_page_alter().
 */
function tpg_theme_page_alter(&$page) {

  $node = menu_get_object('node');
  // Hiding Service Links Block per node value.
  if (!$node->field_show_share_block['und'][0]['value']) {
    unset($page['share_section']);
  }

  if ($node->type == 'events_detail') {
    // Removing Members get priority block depending upon show_membership_block field value.
    if (!$node->field_show_membership_block['und'][0]['value']) {
      // Fetching block id of Members get priority from fe_block machine name.
      $block_query = db_select('fe_block_boxes', 'fb')
              ->fields('fb', array('bid'))
              ->condition('fb.machine_name', 'membership_block')
              ->execute();
      $block_id = $block_query->fetchField();

      if ($block_id) {
        unset($page["sidebar_second"]["block_$block_id"]);
      }
    }
  }
}


/**
 * Returns HTML for an image using a specific Colorbox image style.
 *
 * @param array $variables
 *   An associative array containing:
 *   - image: image item as array.
 *   - path: The path of the image that should be displayed in the Colorbox.
 *   - title: The title text that will be used as a caption in the Colorbox.
 *   - gid: Gallery id for Colorbox image grouping.
 *
 * @return string
 *   An HTML string containing a link to the given path.
 *
 * @ingroup themeable
 */
function tpg_theme_colorbox_imagefield($variables) {

  $file_load = file_load_multiple(array(), array('uri' => $variables['image']['path']));
  $results = '';
  if ($file_load) {
    // Header Image Lightbox caption.
    $query = db_select('field_data_field_header_image_lightbox', 'h');
    $query->join('field_image_field_caption', 'c', 'h.entity_id = c.entity_id AND h.delta = c.delta');
    $query->fields('c', array('caption'))
          ->condition('h.field_header_image_lightbox_fid', key($file_load));
    $results = $query->execute()->fetchField();
    // Reading width image caption.
    if (empty($results)) {
      $query = db_select('field_data_field_reading_image', 'r');
      $query->join('field_image_field_caption', 'c', 'r.entity_id = c.entity_id AND r.delta = c.delta');
      $query->fields('c', array('caption'))
          ->condition('r.field_reading_image_fid', key($file_load));
      $results = $query->execute()->fetchField();
    }
  }

  $class = array('colorbox');

  if ($variables['image']['style_name'] == 'hide') {
    $image = '';
    $class[] = 'js-hide';
  }
  elseif (!empty($variables['image']['style_name'])) {
    $image = theme('image_style', $variables['image']);
  }
  else {
    $image = theme('image', $variables['image']);
  }

  $options = drupal_parse_url($variables['path']);
  $options += array(
    'html' => TRUE,
    'attributes' => array(
      'title' => $variables['title'] . '/' . $results,
      'class' => $class,
      'data-colorbox-gallery' => $variables['gid'],
      'data-cbox-img-attrs' => '{"title": "' . $variables['image']['title'] . '", "alt": "' . $variables['image']['alt'] . '"}',
    ),
  );

  return l($image, $options['path'], $options);
}

/**
 * Process variables for search-results.tpl.php.
 *
 * @see search-results.tpl.php
 */
function tpg_theme_preprocess_search_results(&$variables) {
  $total = $GLOBALS['pager_total_items'][0];
  $keyword = arg(2);
  if ($total == 1) {
    $variables['search_results_title'] = t('1 Result for \'@term\'', array('@term' => $keyword));
  }
  else {
    $variables['search_results_title'] = t('@total Results for \'@term\'', array('@total' => $total, '@term' => $keyword));
  }
}

/**
 * Process variables for search-result.tpl.php.
 *
 * @see search-result.tpl.php
 */
function tpg_theme_preprocess_search_result(&$variables) {
  $node = $variables['result']['node'];

  // Adding content type
  $variables['content_type'] = node_type_get_name($node);

  // Adding overview image.
  $overview_image_result = views_get_view_result('search_autocomplete', 'overview_image_search', $node->nid);
  if ($overview_image_result) {
    if ($node->type == 'events_detail') {
      $variables['overview_image'] = $overview_image_result[0]->field_field_paragraphs_overview_image[0]['rendered'];
    }
    elseif ($node->type == 'paragraphs_page') {
      $variables['overview_image'] = $overview_image_result[0]->field_field_paragraphs_overview_image_1[0]['rendered'];
    }
  }
  unset($variables['info']);
}
