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
using std::cin;

int main() {
	// a way for the user to exit
	string exit = "";
	// a way for the word to be set
	string word = "";
	// find a number and set a number
	int number = num();
	// for the user to enter a word
	cout << "please enter a word: ";
	cin >> word;
	cout << endl;
	// prints the full box
	printFullBox(word, number);
	cout << endl;

	while (true) {// to make a loop
		cout << "Do want to continue yes, or no: ";// ask user if they want to do it again
		cin >> exit;
		if (exit == "yes") {// does the box all ober again
			int number = num();
			cout << "please enter a word: ";
			cin >> word;
			cout << endl;
			printFullBox(word, number);
			cout << endl;
			continue;
		}
		if (exit == "no") {// exit the loop
			cout << endl;
			break;
		}// tell the user to enter yes or no when they did not
		// enter yes or no.
		cout << "Enter yes or no, no to exit" << endl;
	}

	return 0;
}