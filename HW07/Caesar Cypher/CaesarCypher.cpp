/*
Ty Jacobs
4/19/2021
CS 201
This program will do a simple encryption/decryption
that shifts letters by some given number of steps.
*/

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;


// function to move lowercase letter
void charLower(char& letter, int shift) {
	int overSize = 1;
	if (letter >= 'a' && letter <= 'z') {
		if (letter + shift > 'z') {
			while (letter != 'z') {
				overSize++;
				letter += 1;
			}
			letter = 'a' + shift - overSize;
		}
		else {
			letter += shift;
		}
	}
}

void charUpper(char& letter, int shift) {
	int overSize = 1;
	if (letter >= 'A' && letter <= 'Z') {
		if (letter + shift > 'Z') {
			while (letter != 'Z') {
				overSize++;
				letter += 1;
			}
			letter = 'A' + shift - overSize;
		}
		else {
			letter += shift;
		}
	}

}

int main() {
	int shift = 3;
	string line = "hello, everyone!";
	string lineU = "Hello, everyone!";

	// has errors if more than 27 and negative numbers
	// does lower case
	for (auto &l : line) {
		charLower(l, shift);
	}
	for (auto& l : lineU) {
		charUpper(l, shift);
		charLower(l, shift);
	}
	cout << line << endl;
	cout << lineU << endl;

	return 0;
}