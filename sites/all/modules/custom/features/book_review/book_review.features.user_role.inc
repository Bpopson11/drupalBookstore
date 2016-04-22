<?php
/**
 * @file
 * book_review.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function book_review_user_default_roles() {
  $roles = array();

  // Exported role: Reviewer.
  $roles['Reviewer'] = array(
    'name' => 'Reviewer',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
