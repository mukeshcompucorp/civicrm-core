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

  // Hiding Menu Login tabs.
  if (in_array(current_path(), array('user/login', 'user')) && user_is_anonymous()) {
    unset($vars['tabs']);
  }
  elseif (in_array(current_path(), array('user/password'))) {
    unset($vars['tabs']['#primary']['0']);
  }

  // Removing site logo depending upon show logo field value.
  $node = menu_get_object('node');
  if ($node->type == 'paragraphs_page') {
    if(!$node->field_show_logo['und'][0]['value']) {
      unset($vars['logo']);
    }
  }
  // Setting logo color.
  if ($node->field_event_logo_color) {
    $vars['logo-color'] = 'logo-color-' . drupal_strtolower($node->field_event_logo_color['und'][0]['value']);
  }
  // Setting page layout.
  $classes = $vars['add_classes'] = [];
  if ($node) {
    switch ($node->type) {
      case 'events_detail':
        $classes['sidebar_first'] = 'col-md-3';
        $classes['sidebar_second'] = 'col-md-3';
        $classes['content'] = 'col-md-6';
        $classes['content_width'] = 'header-image-narrow';
        break;
      case 'overview_page':
        $classes['sidebar_first'] = '';
        $classes['sidebar_second'] = '';
        $classes['content'] = '';
      break;
      default:
        $classes['sidebar_first'] = 'col-md-2';
        $classes['sidebar_second'] = 'col-md-2';
        $classes['content'] = 'col-md-8';
        $classes['content_width'] = 'header-image-wide';
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

      if ($data->bundle == 'title_section') {
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
    unset($page['footer']['service_links_service_links']);
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
