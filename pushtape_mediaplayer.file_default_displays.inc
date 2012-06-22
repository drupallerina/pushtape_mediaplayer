<?php
/**
 * @file
 * pushtape_mediaplayer.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function pushtape_mediaplayer_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_default'] = $file_display;

  return $export;
}
