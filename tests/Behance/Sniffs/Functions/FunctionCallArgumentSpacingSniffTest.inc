<?php
$badCall_1 = date('H:i:s', time() );
$badCall_2 = date( 'H:i:s',time() );
$badCall_4 = date( 'H:i:s', time() );
$badCall_5 = date( 'H:i:s',  time() );
$badCall_6 = date( 'H:i:s', time());
$okCall    = date( 'H:i:s', $time() );

$okCallWithClosure = date( 'H:i:s', function() {}, $time() );
$badCallWithClosure = date( 'H:i:s', function() {},$time() );

$okCallWithNested = date( 'H:i:s', nested( $a, $b ), $time() );
$badCallWithNested = date( 'H:i:s', nested( $a,$b ), $time() );

$badCall_7 = date( 'H:i:s' , $time() );

$okCallWithAssignment = date( $format = 'H:i:s', time() );
$badCallWithAssignment = date( $format='H:i:s', time() );

$okCallWithNoArgs = date();
$badCallWithNoArgs = date( );

class MyClass() {
  public function myFunction() {}
  const NOT_A_FUNCTION = 'notAFunction';
}

