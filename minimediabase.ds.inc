<?php
/**
 * @file
 * minimediabase.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function minimediabase_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|dashboard_teasers';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'dashboard_teasers';
  $ds_fieldsetting->settings = array(
    'editlink' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'horizontalline' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => '',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h3',
        'ow-cl' => '',
      ),
    ),
  );
  $export['node|article|dashboard_teasers'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|ettan';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'ettan';
  $ds_fieldsetting->settings = array(
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'ettan',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h1',
        'ow-cl' => 'ettan',
      ),
    ),
  );
  $export['node|article|ettan'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'article',
      ),
      'ft' => array(
        'func' => 'theme_field',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'brodtext',
      ),
    ),
    'field_ingress' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'ingress',
      ),
    ),
  );
  $export['node|article|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|fyran';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'fyran';
  $ds_fieldsetting->settings = array(
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'fyran',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h3',
        'ow-cl' => 'fyran',
      ),
    ),
  );
  $export['node|article|fyran'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|lopsedel';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'lopsedel';
  $ds_fieldsetting->settings = array(
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'lopsedel',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h5',
        'ow-cl' => 'lopsedel',
      ),
    ),
  );
  $export['node|article|lopsedel'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|mini';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'mini';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'mini',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h4',
        'ow-cl' => 'mini',
      ),
    ),
  );
  $export['node|article|mini'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|minimobile';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'minimobile';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'mini',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h4',
        'ow-cl' => 'mini',
      ),
    ),
  );
  $export['node|article|minimobile'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|slider';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'slider';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'slider',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h2',
        'ow-cl' => 'slider',
      ),
    ),
  );
  $export['node|article|slider'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_pufftext' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'lopsedel',
      ),
    ),
    'field_puffrubrik' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'h5',
        'ow-cl' => 'lopsedel',
      ),
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function minimediabase_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_linkedimage_test';
  $ds_field->label = 'ds_linkedimage_test';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['ds_linkedimage_test'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'editlink';
  $ds_field->label = 'Editlink';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div style="width:100%;background-color:#eee;float:left;clear:right;"><a href="/node/[node:nid]/edit">Redigera</a></div>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['editlink'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'horizontalline';
  $ds_field->label = 'horizontalline';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<hr />',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['horizontalline'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function minimediabase_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|dashboard_teasers';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'dashboard_teasers';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'editlink',
        1 => 'post_date',
        2 => 'title',
        3 => 'field_image',
        4 => 'field_puffrubrik',
        5 => 'field_pufftext',
        6 => 'horizontalline',
      ),
    ),
    'fields' => array(
      'editlink' => 'ds_content',
      'post_date' => 'ds_content',
      'title' => 'ds_content',
      'field_image' => 'ds_content',
      'field_puffrubrik' => 'ds_content',
      'field_pufftext' => 'ds_content',
      'horizontalline' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|article|dashboard_teasers'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|ettan';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'ettan';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_puffrubrik',
        2 => 'field_pufftext',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_puffrubrik' => 'ds_content',
      'field_pufftext' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|ettan'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'title',
        2 => 'field_ingress',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'title' => 'ds_content',
      'field_ingress' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|article|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|fyran';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'fyran';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_puffrubrik',
        2 => 'field_pufftext',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_puffrubrik' => 'ds_content',
      'field_pufftext' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|fyran'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|lopsedel';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'lopsedel';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_puffrubrik',
        2 => 'field_pufftext',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_puffrubrik' => 'ds_content',
      'field_pufftext' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|lopsedel'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|mini';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'mini';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_puffrubrik',
        2 => 'field_pufftext',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_puffrubrik' => 'ds_content',
      'field_pufftext' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|mini'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|minimobile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'minimobile';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_puffrubrik',
        2 => 'field_pufftext',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_puffrubrik' => 'ds_content',
      'field_pufftext' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|minimobile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|slider';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'slider';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_puffrubrik',
        1 => 'field_image',
        2 => 'field_pufftext',
      ),
    ),
    'fields' => array(
      'field_puffrubrik' => 'ds_content',
      'field_image' => 'ds_content',
      'field_pufftext' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|slider'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_puffrubrik',
        2 => 'field_pufftext',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_puffrubrik' => 'ds_content',
      'field_pufftext' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function minimediabase_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'artikel_view';
  $ds_view_mode->label = 'artikel-view';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['artikel_view'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'dashboard';
  $ds_view_mode->label = 'Dashboard';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $export['dashboard'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'dashboard_teasers';
  $ds_view_mode->label = 'Dashboard-teasers';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['dashboard_teasers'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ettan';
  $ds_view_mode->label = 'ettan';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ettan'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'fyran';
  $ds_view_mode->label = 'fyran';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['fyran'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'lopsedel';
  $ds_view_mode->label = 'lopsedel';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['lopsedel'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'mini';
  $ds_view_mode->label = 'mini';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['mini'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'slider';
  $ds_view_mode->label = 'slider';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['slider'] = $ds_view_mode;

  return $export;
}
