<?php
/**
 * @file
 * minimediabase.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function minimediabase_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'sv',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Cut' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Flash' => 1,
          'CreateDiv' => 1,
          'Iframe' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'h2,p,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => 'Byline=div.byline
Faktaruta=div.faktaruta',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'sv',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Cut' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Flash' => 1,
          'CreateDiv' => 1,
          'Iframe' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'h2,p,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => 'Byline=div.byline
Faktaruta=div.faktaruta',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
