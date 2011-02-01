<?php

/**
 * Implementation of hook_content_default_fields().
 */
function argazki_lehiaketa_base_content_default_fields() {
  $fields = array();

  // Exported field: field_eposta
  $fields['argazki_lehiaketa-field_eposta'] = array(
    'field_name' => 'field_eposta',
    'type_name' => 'argazki_lehiaketa',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '1',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '50',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Eposta helbidea',
      'weight' => '2',
      'description' => 'Sartu zure eposta helbidea zurekin harremanetan jarri ahal izateko. Helbidea ez da plazaratuko.',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_izena
  $fields['argazki_lehiaketa-field_izena'] = array(
    'field_name' => 'field_izena',
    'type_name' => 'argazki_lehiaketa',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '50',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_izena][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Zure izena',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_argazki_lehiaketa
  $fields['argazki_lehiaketa-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'argazki_lehiaketa',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'argazki_lehiaketa_zerrenda_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'argazki_lehiaketa_orria_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg',
      'file_path' => 'argazkiak',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '620x400',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Udako argazkia',
      'weight' => '-1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_argazki_lehiaketa_mezua
  $fields['argazki_lehiaketa-field_mezua'] = array(
    'field_name' => 'field_mezua',
    'type_name' => 'argazki_lehiaketa',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '500',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_mezua][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mezua',
      'weight' => 0,
      'description' => 'Idatz ezazu testu bat, postal baten modukoa. Gehienez 400 karaktere.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Eposta helbidea');
  t('Mezua');
  t('Udako argazkia');
  t('Zure izena');

  return $fields;
}
