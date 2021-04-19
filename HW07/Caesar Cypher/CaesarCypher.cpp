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

int main() {
	int shift = 3;
	string line = "z";
	int overSize = 0;

	for (auto &l : line) {
		if (l >= 'a' && l <= 'z' || l >= 'A' && l <= 'Z') {
			if (l + shift > 'z') {
				overSize = 'z' - l + shift -1;
				cout << overSize << " ";
				l = 'a' + overSize;
				cout << l << endl;
			}
			else {
				l += shift;
			}
	}
	}
	cout << line << endl;

	return 0;
}