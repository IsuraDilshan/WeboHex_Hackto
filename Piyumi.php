<?php
$x=6;
$y=10;
function call()
{
    global $x,$y;
    $z=$x+$y;
    echo $z;
}
call()
echo"<br>";
echo"Output",$x*$y;
?>