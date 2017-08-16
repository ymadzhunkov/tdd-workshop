#pragma once
#include <string>
/* Write a function “say” with input of integer and output of string.
 * The function return the integer itself except these numbers:

    Multiples of three, returns “Fizz”
    Multiples of five, returns “Buzz”
    Multiples of three AND five, returns “FizzBuzz”
*/
std::string say(const unsigned int number);
