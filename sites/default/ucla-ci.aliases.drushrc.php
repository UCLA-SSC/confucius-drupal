<?php
/*
 *    @ucla-ci                  An alias named after the groupname
 *                              may be used to reference all of the
 *                              aliases in the group (e.g. drush @mydrupalsite status)
 * 
 *    @local        alias to local (quickstart) setup
 *    @dev          alias to dev setup
 * 
 */ 

// Remote development server
$aliases['ucla-ci-dev-server'] = array(
  'remote-host' => 'ucla-ci.stauffer.com',
	'#hidden' => TRUE,
  'exclude-paths' => ':sites/*/files/tmp:sites/*/files/js:sites/*/files/css:sites/*/files/xmlsitemap:sites/*/files/ctools:sites/*/files/imagecache:sites/*/files/imagefield_thumbs:.git:/.htaccess',
  'mode' => 'rlxczih',
  'path-aliases' => array(
  // %files path should point to staging (not dev environment)
    '%files' => '/var/www/virtual_hosts/ucla-ci.stauffer.com/htdocs/sites/default/files',
  ),
);


// Remote development site
$aliases['dev'] = array(
  'parent' => '@ucla-ci-dev-server',
  'root' => '/var/www/virtual_hosts/ucla-ci.stauffer.com/htdocs',
  'uri' => 'ucla-ci.stauffer.com',
  'path-aliases' => array(
     '%dump' => '/var/www/virtual_hosts/ucla-ci.stauffer.com/sql/ucla-ci-dev-' . date("Ymd-Hi") . '.sql',
   ),
);

