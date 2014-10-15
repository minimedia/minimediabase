<?php
/**
 * @file
 * minimediabase.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function minimediabase_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-emediate_js'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'emediate_js',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'head_scripts',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-28',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['boxes-annonsbalk_botten_box'] = array(
    'cache' => -2,
    'custom' => '0',
    'delta' => 'annonsbalk_botten_box',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['boxes-annonsbalk_topp_box'] = array(
    'cache' => -2,
    'custom' => '0',
    'delta' => 'annonsbalk_topp_box',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-27',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['boxes-surveymonkey_overlay'] = array(
    'cache' => -2,
    'custom' => '0',
    'delta' => 'surveymonkey_overlay',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => '1',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => 'admin
user',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-24',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '-6',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-21',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-find_content-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'find_content-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '5',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '4',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-27',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-24',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-20',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_5'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-22',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel-block_6'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-23',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-lopsedel_start-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'featured',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-12',
      ),
      'bartik' => array(
        'region' => 'top_start',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-12',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'featured',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-11',
      ),
      'bartik' => array(
        'region' => 'top_start',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-11',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'featured',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-10',
      ),
      'bartik' => array(
        'region' => 'top_start',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-10',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-25',
      ),
      'bartik' => array(
        'region' => 'right',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-12',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-21',
      ),
      'bartik' => array(
        'region' => 'right',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-11',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-lopsedel_start-block_5'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'lopsedel_start-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'arctica_subtheme',
        'weight' => '-25',
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-11',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-30',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-31',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-29',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-28',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/start',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-27',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_5'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-25',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_6'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-23',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_7'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-24',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_8'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-22',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-orderarticles-block_9'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'orderarticles-block_9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/manage/order/articles/under',
    'roles' => array(
      'authenticated user' => '2',
    ),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-26',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-senaste_artiklarna-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'senaste_artiklarna-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'arctica_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'arctica_subtheme',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
