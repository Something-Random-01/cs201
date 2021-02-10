/*
Ty Jacosb
CS201
boxer.cpp
2/9/2021

This program will get a string input and a positive number,
Then it would print a box with the string in the middle
*/

#include "boxer.hpp"
#include <iostream>
using std::cout;
using std::endl;

int num() {
	int n = 0;// enter a number
	cout << "Please enter a positive number: ";
	std::cin >> n;
	cout << endl;
	while (true) {// gets a positive number
		if (n >= 0) {
			return n;
		}// end of if
		else {
			cout << "Please enter a positive number: ";
			std::cin >> n;
		}
	}// end of while
}// end of num