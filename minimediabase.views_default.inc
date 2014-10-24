<?php
/**
 * @file
 * minimediabase.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function minimediabase_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'find_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Find content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sök innehåll';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_kategori' => 'field_kategori',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kategori' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Rubrik';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Publicerat';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Användare';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Redigera';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Publicerat';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Brödtext (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Brödtext';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Ingress (field_ingress) */
  $handler->display->display_options['filters']['field_ingress_value']['id'] = 'field_ingress_value';
  $handler->display->display_options['filters']['field_ingress_value']['table'] = 'field_data_field_ingress';
  $handler->display->display_options['filters']['field_ingress_value']['field'] = 'field_ingress_value';
  $handler->display->display_options['filters']['field_ingress_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_ingress_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ingress_value']['expose']['operator_id'] = 'field_ingress_value_op';
  $handler->display->display_options['filters']['field_ingress_value']['expose']['label'] = 'Ingress';
  $handler->display->display_options['filters']['field_ingress_value']['expose']['operator'] = 'field_ingress_value_op';
  $handler->display->display_options['filters']['field_ingress_value']['expose']['identifier'] = 'field_ingress_value';
  $handler->display->display_options['filters']['field_ingress_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Puffrubrik (field_puffrubrik) */
  $handler->display->display_options['filters']['field_puffrubrik_value']['id'] = 'field_puffrubrik_value';
  $handler->display->display_options['filters']['field_puffrubrik_value']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['filters']['field_puffrubrik_value']['field'] = 'field_puffrubrik_value';
  $handler->display->display_options['filters']['field_puffrubrik_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_puffrubrik_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_puffrubrik_value']['expose']['operator_id'] = 'field_puffrubrik_value_op';
  $handler->display->display_options['filters']['field_puffrubrik_value']['expose']['label'] = 'Puffrubrik';
  $handler->display->display_options['filters']['field_puffrubrik_value']['expose']['operator'] = 'field_puffrubrik_value_op';
  $handler->display->display_options['filters']['field_puffrubrik_value']['expose']['identifier'] = 'field_puffrubrik_value';
  $handler->display->display_options['filters']['field_puffrubrik_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Pufftext (field_pufftext) */
  $handler->display->display_options['filters']['field_pufftext_value']['id'] = 'field_pufftext_value';
  $handler->display->display_options['filters']['field_pufftext_value']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['filters']['field_pufftext_value']['field'] = 'field_pufftext_value';
  $handler->display->display_options['filters']['field_pufftext_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_pufftext_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pufftext_value']['expose']['operator_id'] = 'field_pufftext_value_op';
  $handler->display->display_options['filters']['field_pufftext_value']['expose']['label'] = 'Pufftext';
  $handler->display->display_options['filters']['field_pufftext_value']['expose']['operator'] = 'field_pufftext_value_op';
  $handler->display->display_options['filters']['field_pufftext_value']['expose']['identifier'] = 'field_pufftext_value';
  $handler->display->display_options['filters']['field_pufftext_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Rubrik';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: Kategori (field_kategori) */
  $handler->display->display_options['filters']['field_kategori_tid']['id'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['filters']['field_kategori_tid']['field'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['operator_id'] = 'field_kategori_tid_op';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['label'] = 'Kategori (field_kategori)';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['operator'] = 'field_kategori_tid_op';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['identifier'] = 'field_kategori_tid';
  $handler->display->display_options['filters']['field_kategori_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_kategori_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategori_tid']['vocabulary'] = 'kategori';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Användare';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['find_content'] = array(
    t('Master'),
    t('Sök innehåll'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('author'),
    t('Rubrik'),
    t('Publicerat'),
    t('Kategori'),
    t('Användare'),
    t('Redigera'),
    t('Brödtext'),
    t('Ingress'),
    t('Puffrubrik'),
    t('Pufftext'),
    t('Kategori (field_kategori)'),
    t('Block'),
  );
  $export['find_content'] = $view;

  $view = new view();
  $view->name = 'lopsedel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'lopsedel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'ettan';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'ettan';
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Vikt (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: start_slider */
  $handler = $view->new_display('block', 'start_slider', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_pufftext' => 0,
    'field_image' => 0,
    'field_kategori' => 0,
    'field_puffrubrik' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_pufftext' => 0,
    'field_image' => 0,
    'field_kategori' => 0,
    'field_puffrubrik' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'slider';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'slider';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'start_slider',
    'image_link' => 'content',
  );
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_slider';

  /* Display: start_etta */
  $handler = $view->new_display('block', 'start_etta', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'ettan';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'ettan';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '/[path]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'start_etta',
    'image_link' => 'content',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_puffrubrik']['element_class'] = 'ettan_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_kategori']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '/[path]';
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'ettan_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_etta';

  /* Display: fyran_1 */
  $handler = $view->new_display('block', 'fyran_1', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'fyran-row';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'fyran';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'fyran';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'fyran',
    'image_link' => 'content',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'fyran_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'fyran_1';

  /* Display: mini1 */
  $handler = $view->new_display('block', 'mini1', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'mini-row';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'mini';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'mini';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'mini',
    'image_link' => 'content',
  );
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'mini_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'mini1';

  /* Display: mini2 */
  $handler = $view->new_display('block', 'mini2', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'mini-row';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'mini';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'mini';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'mini',
    'image_link' => 'content',
  );
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'mini_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'mini2';

  /* Display: lopsedel */
  $handler = $view->new_display('block', 'lopsedel', 'block_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'lopsedel-row';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'lopsedel';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'lopsedel';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'lopsedel',
    'image_link' => 'content',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_class'] = 'lopsedel_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'pufftext_lopsedel';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'lopsedel';

  /* Display: fyran_2 */
  $handler = $view->new_display('block', 'fyran_2', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'fyran-row';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'fyran';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'fyran';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'fyran',
    'image_link' => 'content',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'fyran_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'fyran_2';
  $translatables['lopsedel'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('start_slider'),
    t('<span>[field_kategori]</span> [field_pufftext]'),
    t('start_etta'),
    t('fyran_1'),
    t('mini1'),
    t('mini2'),
    t('lopsedel'),
    t('fyran_2'),
  );
  $export['lopsedel'] = $view;

  $view = new view();
  $view->name = 'lopsedel_start';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'lopsedel_start';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'ettan';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'ettan';
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Vikt (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: start_slider */
  $handler = $view->new_display('block', 'start_slider', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '3';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'slider';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'slider';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'start_slider',
    'image_link' => 'content',
  );
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_placering_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_slider';

  /* Display: start_etta */
  $handler = $view->new_display('block', 'start_etta', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'ettan';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'ettan';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '/[path]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'start_etta',
    'image_link' => 'content',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_puffrubrik']['element_class'] = 'ettan_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_kategori']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '/[path]';
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'ettan_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_etta';

  /* Display: start_fyran */
  $handler = $view->new_display('block', 'start_fyran', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'fyran-row';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'fyran';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'fyran';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'fyran',
    'image_link' => 'content',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'fyran_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_fyran';

  /* Display: start_mini1 */
  $handler = $view->new_display('block', 'start_mini1', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'mini-row';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'mini';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'mini';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'mini',
    'image_link' => 'content',
  );
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'mini_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_mini1';

  /* Display: start_mini2 */
  $handler = $view->new_display('block', 'start_mini2', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'mini-row';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'mini';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'mini';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'mini',
    'image_link' => 'content',
  );
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'mini_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_mini2';

  /* Display: start_lopsedel */
  $handler = $view->new_display('block', 'start_lopsedel', 'block_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'lopsedel-row';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'lopsedel';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'lopsedel';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'lopsedel',
    'image_link' => 'content',
  );
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_puffrubrik']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_class'] = 'lopsedel_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['label'] = '';
  $handler->display->display_options['fields']['field_kategori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['text'] = '<span>[field_kategori]</span> [field_pufftext]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_pufftext']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pufftext']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_pufftext']['element_class'] = 'pufftext_lopsedel';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pufftext']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $handler->display->display_options['block_description'] = 'start_lopsedel';
  $translatables['lopsedel_start'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('start_slider'),
    t('<span>[field_kategori]</span> [field_pufftext]'),
    t('start_etta'),
    t('start_fyran'),
    t('start_mini1'),
    t('start_mini2'),
    t('start_lopsedel'),
  );
  $export['lopsedel_start'] = $view;

  $view = new view();
  $view->name = 'omkategorisera';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'omkategorisera';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'omkategorisera';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  /* Field: Content: Område */
  $handler->display->display_options['fields']['field_omrade']['id'] = 'field_omrade';
  $handler->display->display_options['fields']['field_omrade']['table'] = 'field_data_field_omrade';
  $handler->display->display_options['fields']['field_omrade']['field'] = 'field_omrade';
  $handler->display->display_options['fields']['field_omrade']['type'] = 'editable';
  $handler->display->display_options['fields']['field_omrade']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
  );
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
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'omkategorisera';
  $translatables['omkategorisera'] = array(
    t('Master'),
    t('omkategorisera'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Kategori'),
    t('Område'),
    t('Page'),
  );
  $export['omkategorisera'] = $view;

  $view = new view();
  $view->name = 'orderarticles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OrderArticles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'field_image' => 'field_image',
    'field_puffrubrik' => 'field_image',
    'field_pufftext' => 'field_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puffrubrik' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pufftext' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Dra artiklarna i den ordning du vill ha dem. Avsluta genom att trycka på Spara.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Plats';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Spara';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_weight:field_weight_value',
  );
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Puffrubrik */
  $handler->display->display_options['fields']['field_puffrubrik']['id'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['table'] = 'field_data_field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['field'] = 'field_puffrubrik';
  $handler->display->display_options['fields']['field_puffrubrik']['label'] = '';
  $handler->display->display_options['fields']['field_puffrubrik']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puffrubrik']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puffrubrik']['element_default_classes'] = FALSE;
  /* Field: Content: Pufftext */
  $handler->display->display_options['fields']['field_pufftext']['id'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['table'] = 'field_data_field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['field'] = 'field_pufftext';
  $handler->display->display_options['fields']['field_pufftext']['label'] = '';
  $handler->display->display_options['fields']['field_pufftext']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Vikt (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Startsida Löpsedel */
  $handler = $view->new_display('block', 'Startsida Löpsedel', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna startsidelöp';

  /* Display: Startsida Slider */
  $handler = $view->new_display('block', 'Startsida Slider', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna startside-slider';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Startsida Fyran */
  $handler = $view->new_display('block', 'Startsida Fyran', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna startsidefyra';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Startsida Mini 1 */
  $handler = $view->new_display('block', 'Startsida Mini 1', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna startsidemini 1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Startsida Mini 2 */
  $handler = $view->new_display('block', 'Startsida Mini 2', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna startsidemini 2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Undersida Fyran 1 */
  $handler = $view->new_display('block', 'Undersida Fyran 1', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna undersidesfyra 1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Undersida Mini 1 */
  $handler = $view->new_display('block', 'Undersida Mini 1', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna undersidemini 1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Undersida Fyran 2 */
  $handler = $view->new_display('block', 'Undersida Fyran 2', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna undersidesfyra 2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Undersida Mini 2 */
  $handler = $view->new_display('block', 'Undersida Mini 2', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna undersidemini 2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';

  /* Display: Undersida Löpsedel */
  $handler = $view->new_display('block', 'Undersida Löpsedel', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ordna undersidelöp';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Placering (field_placering) */
  $handler->display->display_options['filters']['field_placering_tid']['id'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['table'] = 'field_data_field_placering';
  $handler->display->display_options['filters']['field_placering_tid']['field'] = 'field_placering_tid';
  $handler->display->display_options['filters']['field_placering_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_placering_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_placering_tid']['vocabulary'] = 'placering';
  $translatables['orderarticles'] = array(
    t('Master'),
    t('Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Dra artiklarna i den ordning du vill ha dem. Avsluta genom att trycka på Spara.'),
    t('Plats'),
    t('Startsida Löpsedel'),
    t('Ordna startsidelöp'),
    t('Startsida Slider'),
    t('Ordna startside-slider'),
    t('Startsida Fyran'),
    t('Ordna startsidefyra'),
    t('Startsida Mini 1'),
    t('Ordna startsidemini 1'),
    t('Startsida Mini 2'),
    t('Ordna startsidemini 2'),
    t('Undersida Fyran 1'),
    t('Ordna undersidesfyra 1'),
    t('Undersida Mini 1'),
    t('Ordna undersidemini 1'),
    t('Undersida Fyran 2'),
    t('Ordna undersidesfyra 2'),
    t('Undersida Mini 2'),
    t('Ordna undersidemini 2'),
    t('Undersida Löpsedel'),
    t('Ordna undersidelöp'),
  );
  $export['orderarticles'] = $view;

  $view = new view();
  $view->name = 'orderarticlesloader';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OrderArticlesLoader';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p>Här kan du ändra hur artiklarna visas på undersidor</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = '<p>Här kan du ändra hur artiklarna visas på undersidor</p>';
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
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<';
  $handler->display->display_options['filters']['created']['value']['value'] = '1971-01-01 00:00:00';

  /* Display: OrderArticlesStartpageLoader */
  $handler = $view->new_display('page', 'OrderArticlesStartpageLoader', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Här kan du ändra hur artiklarna visas på startsidan</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>Ordna artiklar på startsidan</h2>
  <p>Här kan du ändra hur artiklarna visas på startsidan</p>
  <p>&nbsp;</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'admin/manage/order/articles/start';

  /* Display: OrderArticlesSubpageLoader */
  $handler = $view->new_display('page', 'OrderArticlesSubpageLoader', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Här kan du ändra hur artiklarna visas på undersidor</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>Ordna artiklar på undersidor</h2>
  <p>Här kan du ändra hur artiklarna visas på undersidor</p>
  <p>&nbsp;</p>


  ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p>Här kan du ändra hur artiklarna visas på undersidor</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = '<p>Här kan du ändra hur artiklarna visas på undersidor</p>';
  $handler->display->display_options['path'] = 'admin/manage/order/articles/under';
  $translatables['orderarticlesloader'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<p>Här kan du ändra hur artiklarna visas på undersidor</p>'),
    t('OrderArticlesStartpageLoader'),
    t('<p>Här kan du ändra hur artiklarna visas på startsidan</p>'),
    t('<h2>Ordna artiklar på startsidan</h2>
  <p>Här kan du ändra hur artiklarna visas på startsidan</p>
  <p>&nbsp;</p>'),
    t('OrderArticlesSubpageLoader'),
    t('<h2>Ordna artiklar på undersidor</h2>
  <p>Här kan du ändra hur artiklarna visas på undersidor</p>
  <p>&nbsp;</p>


  '),
  );
  $export['orderarticlesloader'] = $view;

  $view = new view();
  $view->name = 'recent_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Recent Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['recent_images'] = array(
    t('Master'),
    t('Recent Images'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Rendered'),
    t('Block'),
  );
  $export['recent_images'] = $view;

  $view = new view();
  $view->name = 'senaste_artiklarna';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Senaste artiklarna';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Senaste artiklarna';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'dashboard_teasers';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'dashboard_teasers';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['senaste_artiklarna'] = array(
    t('Master'),
    t('Senaste artiklarna'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Block'),
  );
  $export['senaste_artiklarna'] = $view;

  return $export;
}
