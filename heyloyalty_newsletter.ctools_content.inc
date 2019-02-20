<?php
/**
 * Implements hook_default_ctools_custom_content().
 */
function heyloyalty_newsletter_default_ctools_custom_content() {
  $body_content = [
    '#theme' => 'heyloyalty_pane_content',
    '#name' => 'heyloyalty_signup',
    '#iframe' => isset(variable_get('heyloyalty_signup', '')['value']) ? variable_get('heyloyalty_signup', '')['value'] : '',
    '#height' => variable_get('heyloyalty_signup_height', ''),
  ];
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE;
  $content->api_version = 1;
  $content->name = 'course_educators_link_with_heyloyalty_signup';
  $content->admin_title = 'Courses link with heyloyalty signup';
  $content->admin_description = 'Courses link with heyloyalty signup iframe configured in ULF admin';
  $content->category = 'ULF';
  $content->settings = array(
    'admin_title' => $content->admin_title, // Add the admin title to the settings array so that it appears in the pane form.
    'title' => 'Link to courses and signup to newsletter',
    'body' => drupal_render($body_content),
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export[$content->name] = $content; // Add the pane to the $export array

  return $export;
}
