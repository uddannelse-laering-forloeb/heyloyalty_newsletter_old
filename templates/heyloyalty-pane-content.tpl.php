<style>
  .block--newsletter-inner h2 {
    font-weight: normal;
  }

  iframe {
    height: 100%;
    width: 100%;
    min-height: <?php print $variables['height']; ?>;
  }
</style>

<div class="teaser--group is-course">
  <a class="teaser--group-inner" href="/kurser">
    <div class="teaser--group-field">
      <img src="<?php print drupal_get_path('theme', $GLOBALS['theme']) ?>/images/frontpage-course.jpg" alt="<?php print t('Course')?>">
    </div>
    <div class="teaser--group-text is-course">
      <div class="teaser--group-text-inner"><?php print t('Courses')?></div>
    </div>
  </a>
</div>
<div class="block--newsletter is-front">
  <div class="block--newsletter-inner">
    <h2 class="block--header"><?php print t('Signup to newsletter')?></h2>
    <div class="block--content">
      <?php print $variables['iframe']; ?>
    </div>
  </div>
</div>