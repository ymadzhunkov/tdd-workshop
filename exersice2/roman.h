#pragma once
#include <string>
/* Write a function “roman” with input of integer and output of roman scribing of that number as string.
 
   Roman digits:
   'I' - 1
   'V' - 5
   'X' - 10
   'L' - 50
   'C' - 100
   'D' - 500
   'M' - 1000

Example:
   roman(24) == "XXIV"
   roman(0)

*/
std::string roman(const unsigned int number);
