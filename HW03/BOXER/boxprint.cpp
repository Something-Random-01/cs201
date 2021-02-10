/*
Ty Jacosb
CS201
boxprint.cpp
2/9/2021

This program will get a string input and a positive number,
Then it would print a box with the string in the middle
*/

#include "boxer.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {

	string word = "Hello!";
	int number = num();
	printBox(word, number);
	printMid(word, number);
	printBox(word, number);

	return 0;
}