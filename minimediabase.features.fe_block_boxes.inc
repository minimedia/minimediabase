<?php
/**
 * @file
 * minimediabase.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function minimediabase_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'JS / Init for Emediate';
  $fe_block_boxes->format = 'ds_code';
  $fe_block_boxes->machine_name = 'emediate_js';
  $fe_block_boxes->body = '<script type="text/javascript" src="http://ads.aftonbladet.se/EAS_tag.1.0.js"></script>
<script type="text/javascript"><!--
 EAS_init("2194,2195,2196", "");
//-->
</script>';

  $export['emediate_js'] = $fe_block_boxes;

  return $export;
}
