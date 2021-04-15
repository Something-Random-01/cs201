/*
Ty Jacobs
4/14/2021
CS 201

This program will open a file and read file and out put it to a
secondary file for the out put.

*/


#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include <map>
using std::map;
#include <iostream>
using std::cout;
using std::endl;
#include <sstream>
using std::istringstream;

void toWords(const string& line, map<string, int>& w) {
	string word = "";

	// does everything execpt for last word
	for (char a : line) {
		if (a != ' ') {
			word += a;
		}
		else {
			cout << word << endl;
			word = "";
		}
	}

	// double checks end of line to make check if theres a space or no
	
	//if (word.size() != 0) {
	//
	//}
	bool lastW = true;
	for (char a : word) {
		if (a == ' ') {
			lastW == false;
		}
	}
	if (lastW) cout << word << endl;

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
	while (getline(file,line)) {
		cout << line << endl;
		cout << endl;

		toWords(line, word);
	
	}

}