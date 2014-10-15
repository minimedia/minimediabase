<?php
/**
 * @file
 * minimediabase.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function minimediabase_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'kategori_disclaimer';
  $formatter->label = 'kategori_disclaimer';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'taxonomy_term_reference';
  $formatter->code = '// the $variables object holds all available variables
$term = taxonomy_term_load($variables[\'#object\']->field_omrade[\'und\'][0][\'tid\']);
if ($term->tid == 180){
$name = $term->description;
$node = $variables[\'#object\'];
print  \'<div id="artikel_kategori">Denna artikel är information från \'. $name. \'</div> \';
}';
  $formatter->fapi = '';
  $export['kategori_disclaimer'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'puffrubrik_linked';
  $formatter->label = 'puffrubrik_linked';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'text';
  $formatter->code = '// the $variables object holds all available variables
$text = $variables[\'#object\']->field_puffrubrik[\'und\'][0][\'value\'];
$node = $variables[\'#object\'];
$url = url("node/{$node->nid}", array(\'absolute\' => TRUE, \'alias\' => FALSE));
print l($text, $url);';
  $formatter->fapi = '';
  $export['puffrubrik_linked'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'pufftext_linked';
  $formatter->label = 'pufftext_linked';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'text_long';
  $formatter->code = '// the $variables object holds all available variables
$term = taxonomy_term_load($variables[\'#object\']->field_kategori[\'und\'][0][\'tid\']);
$name = $term->name;
$text = $variables[\'#object\']->field_pufftext[\'und\'][0][\'value\'];
$node = $variables[\'#object\'];
$url = url("node/{$node->nid}", array(\'absolute\' => TRUE, \'alias\' => FALSE));
print  \'<span>\'. $name. \'</span> \'. l($text, $url);';
  $formatter->fapi = '';
  $export['pufftext_linked'] = $formatter;

  return $export;
}
