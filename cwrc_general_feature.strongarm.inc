<?php
/**
 * @file
 * cwrc_general_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cwrc_general_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_object_lock_lift_lock_on_modify';
  $strongarm->value = FALSE;
  $export['islandora_object_lock_lift_lock_on_modify'] = $strongarm;

  return $export;
}
