<?php
/**
 * @file
 * Display Suite Image Left 2 3 Width template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $left: Rendered content for the "Left" region.
 * - $left_classes: String of classes that can be used to style the "Left" region.
 *<?php print isset($add_class) ? 'col-md-4 col-md-push-3' : 'col-md-66pc-of-8 col-md-push-2'; ?>
 * - $right: Rendered content for the "Right" region.
 * - $right_classes: String of classes that can be used to style the "Right" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <div class="col-md-8">
      <<?php print $left_wrapper; ?> class="ds-left <?php print $left_classes; ?>">
        <?php print $left; ?>
      </<?php print $left_wrapper; ?>>
    </div>
  </div>
</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>