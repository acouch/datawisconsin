<?php
/**
 * @file
 * dkan_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dkan_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create dataset content.
  $permissions['create dataset content'] = array(
    'name' => 'create dataset content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create group content.
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create resource content.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any dataset content.
  $permissions['delete any dataset content'] = array(
    'name' => 'delete any dataset content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any group content.
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any resource content.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own dataset content.
  $permissions['delete own dataset content'] = array(
    'name' => 'delete own dataset content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own group content.
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own resource content.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any dataset content.
  $permissions['edit any dataset content'] = array(
    'name' => 'edit any dataset content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any group content.
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any resource content.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit boxes.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit own dataset content.
  $permissions['edit own dataset content'] = array(
    'name' => 'edit own dataset content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own group content.
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own resource content.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
