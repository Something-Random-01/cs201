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
#include <string>
using std::cout;
using std::endl;

// gets a positive number
int num() {
	int n = 0;// enter a number
	cout << "Please enter a positive number: ";
	std::cin >> n;
	if (!n) {
		cout << "HA, NOT AN INFINITY LOOP" << endl;
		exit(-1);
	}
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

// gets middle part of the box
void printMid(const string word,const int len) {

	for (int i = 0; i < len; i++) {
		cout << "*";
	}// end of for loop
	cout << " ";
	for (int i = 0; i < word.size(); i++) {
		cout << " ";
	}// end of for loop
	cout << " ";
	for (int i = 0; i < len; i++) {
		cout << "*";
	}// end of the for loop
	cout << endl;

	// middle of the middle box
	for (int i = 0; i < len; i++) {
		cout << "*";
	}// end of loop
	cout << " ";
	cout << word;
	cout << " ";
	for (int i = 0; i < len; i++) {
		cout << "*";
	}//end of loop
	cout << endl;

	for (int i = 0; i < len; i++) {
		cout << "*";
	}// end of for loop
	cout << " ";
	for (int i = 0; i < word.size(); i++) {
		cout << " ";
	}// end of for loop
	cout << " ";
	for (int i = 0; i < len; i++) {
		cout << "*";
	}// end of the for loop
	cout << endl;
}// end of print mid

void printBox(const string word, const  int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < word.size() + 2 + len * 2; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void printFullBox(const string word, const int len) {
	printBox(word, len);
	printMid(word, len);
	printBox(word, len);
}