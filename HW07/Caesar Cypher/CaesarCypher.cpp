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
	if (shift >= 0) {
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
	}else {// end of shift >= 0
		if (letter >= 'a' && letter <= 'z') {
			overSize = 1;
			if (letter + shift < 'a') {
				while (letter != 'a') {
					overSize++;
					letter -= 1;
				}
				letter = 'z' + shift + overSize;
			}
			else {
				letter += shift;
			}
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
	int shift = -27;
	string line = "a";

	cout << "This will use a Caesar Cypher to move letters in a line by any number." << endl;

	// has errors if more than 26 and negative numbers
	shift = shift % 26;
	for (auto &l : line) {
		charLower(l, shift);
		charUpper(l, shift);
	}

	cout << line << endl;
	return 0;
}