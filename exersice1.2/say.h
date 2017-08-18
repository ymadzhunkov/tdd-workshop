#pragma once
#include <string>
/* Write a function “say” with input of integer and output of string.
 * The function return the integer itself except these numbers:

    Multiples of three, returns “Fizz”
    Multiples of five, returns “Buzz”
    Multiples of seven, returns “Wat”
    Multiples of three AND five, returns “FizzBuzz”
    Multiples of three AND seven, returns “FizzWat”
    Multiples of five AND seven, returns “BuzzWat”
    Multiples of three, five AND seven,  returns “FizzBuzzWat”
*/
std::string say(const unsigned int number);
