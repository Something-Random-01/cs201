/*
Ty Jacobs
2/11/2021
CS201
Header.hpp

This program is about the quadratic formula, The
user would enter the a,b,c parts of the equation, should check if
it would work and it is a real root
*/

#include "Header.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;


double mid(int a, int b, int c) { // finds the b^2 -4ac
	return b ^ 2 - 4 * a * c;
}
