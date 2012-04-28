<?php
/**
 * @file
 * pushtape_mediaplayer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_mediaplayer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jplayer_directory';
  $strongarm->value = 'profiles/pushtape/libraries/jplayer';
  $export['jplayer_directory'] = $strongarm;

  return $export;
}
