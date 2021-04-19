/*
Ty Jacobs
4/14/2021
CS 201

This program will open a file and read file and out put it to a
secondary file for the out put.

*/


#include <string>
using std::string;
using std::tolower;
#include <fstream>
using std::ifstream;
#include <map>
using std::map;
#include <iostream>
using std::cout;
using std::endl;
#include <sstream>
using std::istringstream;
#include <algorithm>
#include <iomanip>
using std::setw;

void lower(string &word) {
	// makes it only that letters are going throw.
	string back = "";
	for (auto c : word) {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
			back += c;
		}
	}
	word = back;
	// makes it that the word is lower case
	for (auto &c : word) {
		if (c <= 'Z' && c >= 'A') {
			c -= ('Z' - 'z');
		}
	}
}

void toWords(const string& line, map<string, int>& w) {
	string word = "";

	// does everything execpt for last word
	for (char a : line) {
		if (a != ' ') {
			word += a;
		}else {
			// makes it only letters
			lower(word);
			if (w.empty()) {
				w[word] = 1;
			}// checks to see if their is a word if not it adds one.
			else if (w.count(word) > 0) {
				w[word] += 1;
			}else {
				w[word] = 1;
			}// retests the word
			word = "";
		}
	}

	// double checks end of line to make check if theres a space or no
	for (char a : word) {
		if (a == ' ') {
			word = "";
		}
	}
	// turns last word to lower case if their is one
	lower(word);
	if (!word.empty() && w.count(word) > 0) {
		w[word] += 1;
	}// chesks if it is not empty and word is not their.
	else if (!word.empty()){
		w[word] = 1;
	}
}

int size(map<string, int> &m) {
	bool siz = true;
	int loca;

	for (auto w : m) {
		if (siz) {
			siz = false;
			loca = w.first.size();
		}
		if (w.first.size() > loca) {
			loca = w.first.size();
		}
	}

	return loca;
}

int main() {
	cout << "This will count the words from a file and output the results to a diffrent file." << endl;

	string infile = "words.txt";
	ifstream file(infile);
	if (!file) {
		cout << "File: " << infile << " not found" << endl;
	}
	cout << "Opend file: " << infile << endl;
	cout << endl;

	map<string, int> word;
	string line;
	while (getline(file, line)) {
		toWords(line, word);
	}
	int si = size(word); // size of the biggest word
	int w = si + char('\t');
	cout << "Word" << setw(w) << "How many" << endl;
	for (auto p : word) {
		cout << setw(si) << p.first << ": " << setw(w - 5) << p.second << endl;
	}
}