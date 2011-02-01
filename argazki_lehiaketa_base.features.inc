<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function argazki_lehiaketa_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function argazki_lehiaketa_base_imagecache_default_presets() {
  $items = array(
    'argazki_lehiaketa_epaileentzat' => array(
      'presetname' => 'argazki_lehiaketa_epaileentzat',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '200',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'argazki_lehiaketa_orria' => array(
      'presetname' => 'argazki_lehiaketa_orria',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '600',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'argazki_lehiaketa_zerrenda' => array(
      'presetname' => 'argazki_lehiaketa_zerrenda',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '120',
            'height' => '120',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function argazki_lehiaketa_base_node_info() {
  $items = array(
    'argazki_lehiaketa' => array(
      'name' => t('Argazkia'),
      'module' => 'features',
      'description' => t('Irakurleek udako argazkiak igotzeko eduki mota.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function argazki_lehiaketa_base_views_api() {
  return array(
    'api' => '2',
  );
}
