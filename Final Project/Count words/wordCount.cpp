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
#include <iostream>
using std::cout;
using std::endl;

int main() {
	cout << "This will count the words from a file and output the results to a diffrent file." << endl;

	string infile = "words.txt";
	ifstream file(infile);
	if (!file) {
		cout << "File: " << infile << " not found" << endl;
	}

}