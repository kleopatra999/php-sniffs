<?php

/**
 * GOOD - SHOULD PASS
 */

$a = $a ?: $b;

$foo = ( $fruit)
       ? 'apple'
       : 'carrot';

$nextPtrCount = ( isset( $tokens[ $foo ]['nested_parenthesis'] ) )
                ? count( $tokens[ $foo ]['nested_parenthesis'] )
                : 0;


return ( $bob )
       ? false
       : true;


$project_owner = 'something';


return ( $project_owner )
       ? false
       : true;

$info = [
    \Net_FeatureQueue_Site::TABLE_PREFIX_ . 'parent_id' => ( $category )
                                                           ? $category->id
                                                           : 0,
];


$testing = [
    'payment_flags' => $user_flags ?: 0,
];

$options = ( $published )
           ? [ 'published' => \Core_Codes::YES ]
           : [ 'unpublished' => \Core_Codes::YES ];

$connector->expects( $this->once() )
  ->method( 'unlinkAdobeId' )
  ->with( ( $has_adobe_id )
          ? "{$adobe_id}#deleted-{$user->id}"
          : ''
        );

$options_and_such = ( $published )
                    ? [ 'published' => \Core_Codes::YES ]
                    : [ 'unpublished' => \Core_Codes::YES ];

$a = ( $b )
     ? 1
     : ( $d )
       ? 2
       : 3;

/**
 * BAD - SHOULD HAVE AT LEAST ONE ERROR
 */

// the first statement must be wrapped in parenthesis

$foo = $dave
       ? 'robot'
       : 'human';

$info = [
    \Net_FeatureQueue_Site::TABLE_PREFIX_ . 'parent_id' => $category
                                                           ? $category->id
                                                           : 0,
];

return $project_owner
       ? false
       : true;

$foo = isset( $dave )
       ? 'robot'
       : 'human';


$a = $b
    ? 1
    : ( $d )
        ? 2
        : 3;


// single-line ternary statements are not allowed

$foo = ( $bob ) ? 'dog' : 'cat';

$variable = ( $x == 1 ) ? ( ( $y == 2 ) ? true : false ) : false;

return isset( $map[ $id ] ) ? $map[ $id ] : null;

$foo = $dave ? 'robot' : 'human';

$foo = ( $dave ) ? 'robot' : 'human';

return whatever( ( $a ) ? 'b' : 'c' );

return whatever( $a ? 'b' : 'c' );

whatever( ( $a ) ? 'b' : 'c' );

whatever( $a ? 'b' : 'c' );

whatever( isset( $a ) ? 'b' : 'c' );


// alignment

$foo = ( $dave )
   ? 'robot'
   : 'human';

$foo = ( $dave )
       ? 'robot'
     : 'human';

$foo = ( $dave )
     ? 'robot'
       : 'human';

$foo = ( $dave )
        ? 'robot'
       : 'human';

$foo = ( $dave )
       ? 'robot'
        : 'human';

$foo = ( $dave )
        ? 'robot'
        : 'human';


$foo = ( $dave )
? 'robot'
       : 'human';

$foo = ( $dave )
       ? 'robot'
: 'human';

return ( $bob )
        ? false
       : true;

return ( $bob )
       ? false
        : true;


$info = [
    \Net_FeatureQueue_Site::TABLE_PREFIX_ . 'parent_id' => ( $category )
                                                            ? $category->id
                                                           : 0,
];


$info = [
    \Net_FeatureQueue_Site::TABLE_PREFIX_ . 'parent_id' => ( $category )
                                                           ? $category->id
                                                            : 0,
];

$a = ( $b )
    ? 1
    : ( $d )
        ? 2
        : 3;

$a = ( $b )
        ? 1
     : ( $d )
    ? 2
       : 3;

return  ( $bob )
        ? false
       : true;
