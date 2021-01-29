<?php
header('Content-Type:text/plain');
$allTheStates="Mississippi Alabama tuxas Texas Massachusetts Kansas";
$statesArray=[];
$states1=explode(' ',$allTheStates);
$i=0;
//states that ends with xas
foreach($states1 as $state)
{
    if(preg_match('/xas$/',$state))
    {
        $statesArray[$i]=$state;
        $i=$i+1;
        echo "states that ends with xas are:".$state."\n";
    }
}

//states that begins with K and ends with s
foreach($states1 as $state)
{
    if(preg_match('/^k.*s$/i',$state))
    {
        $statesArray[$i]=$state;
        $i=$i+1;
        echo "states that begins with k and ends with s are:".$state."\n";
    }
}

//states that begins with M and ends with s
foreach($states1 as $state)
{
    if(preg_match('/^m.*s$/i',$state))
    {
        $statesArray[$i]=$state;
        $i=$i+1;
        echo "states that begins with M and ends with s are:".$state."\n";
    }
}

//states that ends with a
foreach($states1 as $state)
{
    if(preg_match('/a$/i',$state))
    {
        $statesArray[$i]=$state;
        $i=$i+1;
        echo "states that ends with a are:".$state."\n";
    }
}

foreach($statesArray as $element=>$value)
    echo "\n".$value."is the element ".$element;

?>
