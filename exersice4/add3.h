#pragma once
/*
 * returns a + b + c 
 * performing the operations in such order that there is minimal
 * loss of precision
 * NOTE: IEEE754 only approximates real arithmetic
 * This approximation is not associative
 * (a + b) + c != a + (b + c)
 *
 * (1.0e23 + -1.0e23) + 1.0 = 1.0
 * 1.0e23 + (-1.0e23 + 1.0) = 0.0
 */ 
float add3(const float a, const float b, const float c);
