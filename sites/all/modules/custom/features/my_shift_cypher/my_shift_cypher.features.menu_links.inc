<?php
/**
 * @file
 * my_shift_cypher.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function my_shift_cypher_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_use-the-shift-cypher:shift_cypher.
  $menu_links['navigation_use-the-shift-cypher:shift_cypher'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'shift_cypher',
    'router_path' => 'shift_cypher',
    'link_title' => 'Use the Shift Cypher!',
    'options' => array(
      'identifier' => 'navigation_use-the-shift-cypher:shift_cypher',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Use the Shift Cypher!');

  return $menu_links;
}
