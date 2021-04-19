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

int leftLower(char letter) {
	int siz = 1;
	while (letter != 'z') {
		siz++;
		letter += 1;
	}
	return siz;
}

// function to move lowercase letter
void charLower(char& letter, int shift) {
	int overSize = 0;
	if (letter >= 'a' && letter <= 'z') {
		if (letter + shift > 'z') {
			letter = 'a' + shift - leftLower(letter);
		}
		else {
			letter += shift;
		}
	}
}

int main() {
	int shift = 3;
	string line = "hello, everyone!";

	// has errors if more than 27 and negative numbers
	// does lower case
	for (auto &l : line) {
		charLower(l, shift);
	}
	cout << line << endl;

	return 0;
}