<?php
/**
 * @file
 * Display Suite Two equal column middle template.
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
 *
 * - $right: Rendered content for the "Right" region.
 * - $right_classes: String of classes that can be used to style the "Right" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="container <?php print $classes;?> clearfix">
  <div class="row">
    <div class="<?php print !empty($node) && $node->type == 'events_detail' ? 'col-md-6 col-md-push-3' : 'col-md-8 col-md-push-2' ?>">
      <!-- Needed to activate contextual links -->
      <?php if (isset($title_suffix['contextual_links'])): ?>
        <?php print render($title_suffix['contextual_links']); ?>
      <?php endif; ?>

      <div class="row">
        <<?php print $left_wrapper; ?> class="ds-left col-md-6 <?php print $left_classes; ?>">
          <?php print $left; ?>
        </<?php print $left_wrapper; ?>>

        <<?php print $right_wrapper; ?> class="ds-right col-md-6 <?php print $right_classes; ?>">
          <?php print $right; ?>
        </<?php print $right_wrapper; ?>>
      </div>
    </div>
  </div>
</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
