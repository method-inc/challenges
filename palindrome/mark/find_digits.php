<?php

set_time_limit(900);

//Start a timer
$time_start = microtime(true);

//Read in the text file of digits:
$pi = file_get_contents("digits.txt");
$signifigant_digits = 7;
$pos = 0;
$found = false;
$digits = "";

//Find the palindrome
while(!$found)
{
	$digits = substr($pi, $pos, $signifigant_digits);
	if(is_palindromic_prime($digits))
		$found = true;
	$pos++;
	if(trim($digits) == "")$found = true;
}

echo '<br /><br /><strong>Found Palindrome: ' . $digits . '</strong> (' . ($pos-$signifigant_digits) . ' digits in)';

$time_end = microtime(true);
$time = $time_end - $time_start;

echo "<br />Took $time seconds\n";

function is_palindromic_prime($number)
{
	if(!is_palindrome($number))return false; //Weed out the easy ones first...
	echo "Checking palindrome: " . $number . "<br />";
	return is_prime((int)$number);
}

//Function returns true or false if the string is a plaindrome.
function is_palindrome($string)
{
	return $string==strrev($string);
}    
    
// is_prime(number) checks if a number is a prime number or not
// code from: http://fundisom.com/phparadise/php/html_and_code/prime_numbers
function is_prime($i)
{
	if($i % 2 != 1) return false;
	$d = 3;
	$x = sqrt($i);
	while ($i % $d != 0 && $d < $x) $d += 2;
	return ($i % $d == 0 && $i != $d) == false ? true : false;
}