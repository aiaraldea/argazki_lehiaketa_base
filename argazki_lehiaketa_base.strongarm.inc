<?php

/**
 * Implementation of hook_strongarm().
 */
function argazki_lehiaketa_base_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_argazki_lehiaketa';
  $strongarm->value = '1';

  $export['comment_anonymous_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_argazki_lehiaketa';
  $strongarm->value = '3';

  $export['comment_controls_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_argazki_lehiaketa';
  $strongarm->value = '2';

  $export['comment_default_mode_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_argazki_lehiaketa';
  $strongarm->value = '1';

  $export['comment_default_order_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_argazki_lehiaketa';
  $strongarm->value = '50';

  $export['comment_default_per_page_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_argazki_lehiaketa';
  $strongarm->value = '1';

  $export['comment_form_location_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_argazki_lehiaketa';
  $strongarm->value = '0';

  $export['comment_preview_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_argazki_lehiaketa';
  $strongarm->value = '1';

  $export['comment_subject_field_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_argazki_lehiaketa';
  $strongarm->value = '2';

  $export['comment_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_argazki_lehiaketa';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-3',
    'comment_settings' => '-2',
    'menu' => '-4',
  );

  $export['content_extra_weights_argazki_lehiaketa'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_argazki_lehiaketa';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_argazki_lehiaketa'] = $strongarm;
  return $export;
}
