<?php
/**
 * @file
 * pushtape_mediaplayer.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pushtape_mediaplayer_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|track|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'track';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'phelan';
  $ds_layout->settings = array(
    'css_id' => '',
    'class' => '',
    'sticky' => 0,
    'layout' => 'phelan',
    'hide_sidebars' => 0,
    'pipeline' => 'standard',
    'hide_empty_regions' => FALSE,
    'ds_panels' => TRUE,
    'did' => '5',
    'theme' => 'phelan',
  );
  $export['node|track|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|track|mediaplaylist';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'track';
  $ds_layout->view_mode = 'mediaplaylist';
  $ds_layout->layout = 'phelan';
  $ds_layout->settings = array(
    'css_id' => '',
    'class' => '',
    'sticky' => 0,
    'layout' => 'phelan',
    'hide_sidebars' => 0,
    'pipeline' => 'standard',
    'hide_empty_regions' => FALSE,
    'ds_panels' => TRUE,
    'did' => '6',
    'theme' => 'phelan',
  );
  $export['node|track|mediaplaylist'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|track|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'track';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'phelan';
  $ds_layout->settings = array(
    'css_id' => '',
    'class' => '',
    'sticky' => 0,
    'layout' => 'phelan',
    'hide_sidebars' => 0,
    'pipeline' => 'standard',
    'hide_empty_regions' => FALSE,
    'ds_panels' => TRUE,
    'did' => '7',
    'theme' => 'phelan',
  );
  $export['node|track|teaser'] = $ds_layout;

  return $export;
}
