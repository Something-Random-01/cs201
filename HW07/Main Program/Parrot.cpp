/*
Ty Jacobs
4/14/2021
CS 201

This program will open ppm and convert it to ascii. 
*/

#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include <iostream>
using std::cout;
using std::endl;

int main() {
	
	cout << "Convert ppm to ascii art" << endl;

	string infile = "parrot.ppm";
	ifstream fin(infile);
	if (!fin) {
		cout << "File: " << infile << " Not found" << endl;
		exit(1);
	}
	cout << "Opened " << infile << endl;

	return 0;
}
