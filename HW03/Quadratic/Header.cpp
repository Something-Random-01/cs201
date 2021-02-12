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


int mid(int a, int b, int c) { // finds the b^2 -4ac
	int m = pow(b, 2) - 4 * a * c;
	if (m < 0) {
		cout << "Fail due to it being negitive on the b^2 - 4(a)(c)" << endl;
		exit(30000);
	}
	else {
		return m;
	}
}

// -b + (mid)^1/2 / 2(a)
int f(int a, int b, int c) {
	double dsqur = sqrt(mid(a,b,c));
	int isqur = sqrt(mid(a, b, c));
	if (dsqur - isqur != 0) {
		cout << "No real roots" << endl;
		exit(-1);
	}
	return (b * -1 + isqur) / 2 * a;
}