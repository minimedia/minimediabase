<?php
/**
 * @file
 * minimediabase.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function minimediabase_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - Slogan här',
      ),
      'description' => array(
        'value' => 'En kort beskrivning',
      ),
      'abstract' => array(
        'value' => 'En kort beskrivning, helst skiljer sig lite',
      ),
      'keywords' => array(
        'value' => 'keyword, för, hela, sajten, omkring, nio, stycken',
      ),
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'index' => 0,
          'follow' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'image_src' => array(
        'value' => 'http://newhotness.minimedia.se/sites/default/files/dummy_sidhuvud.png',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => 'http://www.minimedia.se',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'og:site_name' => array(
        'value' => '[site:name] - Sajtslogan',
      ),
      'og:title' => array(
        'value' => '[site:name] - Sajtslogan',
      ),
      'og:description' => array(
        'value' => 'Kopiera description från ovan',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:image' => array(
        'value' => 'http://newhotness.minimedia.se/sites/default/files/dummy_sidhuvud.png',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street-address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
      ),
      'og:country-name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => 'MiniMedia Sweden AB + [site:name]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'description' => array(
        'value' => 'En kort beskrivning...',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:field_puffrubrik] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:field_pufftext]',
      ),
      'abstract' => array(
        'value' => '[node:field_pufftext]',
      ),
      'keywords' => array(
        'value' => '[node:field_tags]',
      ),
      'image_src' => array(
        'value' => '[node:field_image]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[node:field_puffrubrik] | [site:name]',
      ),
      'og:description' => array(
        'value' => '[node:field_puffrubrik] | [site:name]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'noarchive' => 'noarchive',
          'index' => 0,
          'follow' => 0,
          'nofollow' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'shortlink' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  return $config;
}
