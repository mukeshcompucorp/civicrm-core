<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to main-menu administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<div id="page-wrapper">
  <?php if ($page['header_pane']): ?>
    <section id="header-pane" class="header-pane">
      <div class="container clearfix">
        <?php print render($page['header_pane']); ?>
        <div class="resp-menu">
          <span></span>
          <span></span>
          <span></span>
          <span></span>
        </div>
      </div>
    </section>
  <?php endif; ?>
  <header id="header" class="header">
    <div class="header-inner clearfix">
      <?php if ($logo): ?>
        <div id="logo" class="logo container clearfix relative">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <img src="<?php print $logo; ?>"/>
          </a>
        </div>
        <div id="responsive-logo" class="responsive-logo">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <img src="<?php print '/' . drupal_get_path('theme', 'tpg_theme') . '/images/logo-white.png'?>"/>
          </a>
        </div>
      <?php endif; ?>
      <?php if ($page['header']): ?>
        <div class="<?php print $add_classes['content_width']; ?>">
          <?php print render($page['header']); ?>
        </div>
      <?php endif; ?>
    </div>
  </header>
  <div class="content-wrap">
    <div class="content-inner" id="content">
      <?php if (!empty($tabs['#primary'])): ?>
        <div class="tabs-wrapper container">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="container action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <?php if ($messages): ?>
        <div class="container">
          <?php print $messages; ?>
        </div>
      <?php endif; ?>

      <?php if ($breadcrumb): ?>
        <div id="breadcrumb-wrapper" class="container">
          <div class="clearfix">
            <?php print $breadcrumb; ?>
          </div>
        </div>
      <?php endif; ?>

      <section id="post-content" class="post-content container <?php print $add_classes['container']; ?>" role="main">
        <div class="row flex-responsive">

          <div class="<?php print $add_classes['sidebar_first']; ?>">
            <?php if ($page['sidebar_first']): ?>
              <aside id="first-sidebar" class="first-sidebar clearfix" role="complementary">
                <?php print render($page['sidebar_first']); ?>
              </aside>
            <?php endif; ?>
          </div>

          <div class="main-content <?php print $add_classes['content']; ?>">
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
              <h1 class="page-title">
                <?php print $title; ?>
              </h1>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php print render($page['content']); ?>

            <?php if ($page['share_section']): ?>
              <?php print render($page['share_section']); ?>
            <?php endif; ?>
          </div>

          <div class="<?php print $add_classes['sidebar_second']; ?>">
            <?php if ($page['sidebar_second']): ?>
              <aside id="second-sidebar" class="second-sidebar clearfix" role="complementary">
                <?php print render($page['sidebar_second']); ?>
              </aside>
            <?php endif; ?>
          </div>
        </div>
      </section>

      <?php if ($page['full_width_bottom']): ?>
        <div id="full-width-bottom" class="full-width-bottom" role="complementary">
          <?php print render($page['full_width_bottom']); ?>
        </div>
      <?php endif; ?>

      <?php if ($page['reading_width_bottom']): ?>
        <div id="full-width-bottom" class="reading-width-bottom container" role="complementary">
          <?php print render($page['reading_width_bottom']); ?>
        </div>
      <?php endif; ?>
    </div>
  </div>

  <footer id="footer" class="footer">
    <div class="footer-inner container clearfix">
      <div class="logo-footer">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"></a>
      </div>
      <?php if ($page['footer']): ?>
        <div class="row">
          <?php print render($page['footer']) ?>
        </div>
      <?php endif; ?>
    </div>
  </footer>
</div>