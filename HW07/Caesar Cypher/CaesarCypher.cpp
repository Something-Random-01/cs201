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
using std::cin;
#include <sstream>
using std::stringstream;


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
	if (shift >= 0) {
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
		}// end of checking to see if its a letter
	}
	else {
		if (letter >= 'A' && letter <= 'Z') {
			overSize = 1;
			if (letter + shift < 'A') {
				while (letter != 'A') {
					overSize++;
					letter -= 1;
				}
				letter = 'Z' + shift + overSize;
			}
			else {
				letter += shift;
			}
		}

	}
}

int getNum() {
	int num;
	string word;
	cin >> word;
	stringstream ss(word);
	ss >> num;
	while (!ss) {
		cout << "Please enter a vaild number: " << word << " is not vaild"<< endl;
		std::getline(cin, word);
		stringstream ss(word);
		ss >> num;
	}
	return num;
}

void output(string &line, int& shift) {
	shift = shift % 26;
	for (auto& l : line) {
		charLower(l, shift);
		charUpper(l, shift);
	}
}

int main() {
	string line;
	cout << "This will use a Caesar Cypher to move letters in a line by some numbers." << endl;
	cout << endl;

	cout << "Enter a line to use the Caesar Cypher on: " << endl;
	std::getline(cin, line);
	cout << "Please enter a number to shift the line." << endl;
	int shift = getNum();
	
	output(line, shift);
	cout << line << endl;
	return 0;
}