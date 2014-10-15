<?php
/**
 * @file
 * minimediabase.box.inc
 */

/**
 * Implements hook_default_box().
 */
function minimediabase_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'annonsbalk_botten_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Annonsbalk botten';
  $box->options = array(
    'body' => array(
      'value' => '<div class="annonsbalk" id="botten">Hela webbplatsen är information från Företaget</div><!-- /#annonsbalk.botten -->',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['annonsbalk_botten_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'annonsbalk_topp_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Annonsbalk topp';
  $box->options = array(
    'body' => array(
      'value' => '<div class="annonsbalk" id="topp">Hela webbplatsen är information från Företaget</div><!-- /#annonsbalk.topp -->',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['annonsbalk_topp_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'surveymonkey_overlay';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Surveymonkey overlay';
  $box->options = array(
    'body' => array(
      'value' => '<div id="zsurvey" style="display:none">
<div id="closer" style="float:left;padding:3px;background-color:#acacac;font-size:14px;font-weight:bold;color:#fff;width:100%;text-decoration:underline;cursor:pointer;margin-bottom:15px;">
  <div style="width:70%;float:left">Dagens Energis Läsarundersökning</div>
  <div id="closerbutton" style="text-align:right;width:29%;float:right">[ Stäng fönster ]</div>
</div>
<div id="surveyMonkeyInfo" style="margin-left:auto;margin-right:auto;"><div>
<script src="https://www.surveymonkey.com/jsEmbed.aspx?sm=XSSxMEY1V4iIhuctoLLp2Q_3d_3d"></script>
</div></div>
</div>
<script>
var cook = document.cookie;
if(cook.indexOf(\'surveyshown\')==-1){
  jQuery(\'#closerbutton\').click(function(){jQuery(\'#zsurvey\').hide();jQuery(\'#cover\').hide();});
  var x = Math.floor(Math.random()*10);
  if(console){console.log(\'x=\'+x);}
  if(x == 1){
    jQuery(\'#cover\').show();
    jQuery(\'#zsurvey\').show();
    document.cookie = \'surveyshown=1; expires=Thu, 2 Aug 2014 20:47:11 UTC; path=/\';
  }
}
</script>  ',
      'format' => 'script',
    ),
    'additional_classes' => '',
  );
  $export['surveymonkey_overlay'] = $box;

  return $export;
}
