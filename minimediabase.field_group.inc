<?php
/**
 * @file
 * minimediabase.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function minimediabase_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_detaljer|node|article|form';
  $field_group->group_name = 'group_detaljer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detaljer',
    'weight' => '3',
    'children' => array(
      0 => 'field_kategori',
      1 => 'field_placering',
      2 => 'field_listordning',
      3 => 'field_omrade',
      4 => 'field_weight',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-detaljer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_detaljer|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_puff|node|article|form';
  $field_group->group_name = 'group_puff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Puff',
    'weight' => '0',
    'children' => array(
      0 => 'field_pufftext',
      1 => 'field_puffrubrik',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-puff field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_puff|node|article|form'] = $field_group;

  return $export;
}
