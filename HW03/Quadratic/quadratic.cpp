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

int main() {
	// sets a,b,c
	int a;
	int b;
	int c;

	// tells user the quadratic equation and what to enter
	cout << "Quadratic equations are a * x^2 + b * x + c = 0" << endl;
	cout << "Enter a value for a, b, and c: ";
	// gets a,b,c
	cin >> a;
	cin >> b;
	cin >> c;
	cout << endl;

	cout << mid(a, b, c) << endl;
	return 0;
}