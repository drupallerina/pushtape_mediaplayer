<?php
/**
 * @file
 * pushtape_mediaplayer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pushtape_mediaplayer_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'pushtape_player_track_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pushtape Player Track Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tracks';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'fluid_grid';
  $handler->display->display_options['style_options']['items_width'] = '250';
  $handler->display->display_options['style_options']['advanced_layout'] = array(
    'align' => TRUE,
    'margins' => TRUE,
    'css3' => TRUE,
  );
  $handler->display->display_options['style_options']['list_alignment'] = 'center';
  $handler->display->display_options['style_options']['items_alignment'] = 'center';
  $handler->display->display_options['style_options']['items_h_margin'] = '1em';
  $handler->display->display_options['style_options']['items_v_margin'] = '1em';
  $handler->display->display_options['style_options']['box_shadow'] = '1';
  $handler->display->display_options['style_options']['border_radius'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Audio (field_audio:fid) */
  $handler->display->display_options['relationships']['field_audio_fid']['id'] = 'field_audio_fid';
  $handler->display->display_options['relationships']['field_audio_fid']['table'] = 'field_data_field_audio';
  $handler->display->display_options['relationships']['field_audio_fid']['field'] = 'field_audio_fid';
  $handler->display->display_options['relationships']['field_audio_fid']['required'] = 0;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_audio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_audio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_audio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_audio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_audio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_audio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio']['field_api_classes'] = 0;
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_artwork']['id'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['table'] = 'field_data_field_artwork';
  $handler->display->display_options['fields']['field_artwork']['field'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['label'] = '';
  $handler->display->display_options['fields']['field_artwork']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artwork']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artwork']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artwork']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artwork']['settings'] = array(
    'image_style' => 'artwork_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artwork']['field_api_classes'] = 0;
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = '';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_audio_fid';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uri']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uri']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uri']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uri']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uri']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uri']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uri']['link_to_file'] = 0;
  $handler->display->display_options['fields']['uri']['file_download_path'] = 0;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio_1']['id'] = 'field_audio_1';
  $handler->display->display_options['fields']['field_audio_1']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio_1']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio_1']['label'] = '';
  $handler->display->display_options['fields']['field_audio_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_audio_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_audio_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_audio_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_audio_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_audio_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_1']['type'] = 'mediaplaylist_links';
  $handler->display->display_options['fields']['field_audio_1']['settings'] = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  $handler->display->display_options['fields']['field_audio_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'track' => 'track',
  );

  /* Display: All Tracks Player Grid */
  $handler = $view->new_display('panel_pane', 'All Tracks Player Grid', 'tracks_all_pane');
  $handler->display->display_options['display_description'] = 'lists all tracks';
  $handler->display->display_options['pane_category']['name'] = 'Pushtape';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: All Tracks Jplayer */
  $handler = $view->new_display('panel_pane', 'All Tracks Jplayer', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jplayer';
  $handler->display->display_options['style_options']['path_field'] = array(
    'uri' => 'uri',
  );
  $handler->display->display_options['style_options']['autoplay'] = '0';
  $handler->display->display_options['style_options']['volume'] = '80';
  $handler->display->display_options['style_options']['muted'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Pushtape';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['pushtape_player_track_views'] = $view;

  return $export;
}
