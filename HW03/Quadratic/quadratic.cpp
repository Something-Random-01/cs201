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
	int x1;
	int x2;


	// tells user the quadratic equation and what to enter
	cout << "Quadratic equations are a * x^2 + b * x + c = 0" << endl;
	cout << "Enter a value for a, b, and c: ";
	// gets a,b,c
	cin >> a;
	cin >> b;
	cin >> c;
	cout << endl;

	// prints ax^2+bx+c
	cout << "The space can be a + and the negitive can be the minues" << endl;
	cout << a << "x^2 " << b << "x " << c << endl;

	// sets x1 and x2 for it finds if one is neg so the print out makes since
	x1 = f(a, b, c);
	x2 = nf(a, b, c);
	// prints (x + xo)(x - x1)
	if (x1 > 0) {
		cout << "(x - " << abs(x1) << ")";
	}
	else {
		cout << "(x +" << abs(x1) << ")";
	}if (x2 > 0) {
		cout << "(x - " << abs(x2) << ")";
	}
	else {
		cout << "(x + " << abs(x2) << ")";
	}
	cout << endl;

	// prints (x-y)(x+a)
	cout << "x = " << x1 << ", " << x2 << endl;

	return 0;
}