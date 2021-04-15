/*
Ty Jacobs
4/14/2021
CS 201

This program will open ppm and convert it to ascii. 
*/


#include <fstream>
using std::ifstream;
#include <iostream>
using std::string;
using std::cout;
using std::endl;
#include <string>

int main() {
	
	cout << "Convert ppm to ascii art" << endl;

	// opens the file
	string infile = "parrot.ppm";
	ifstream fin(infile);
	if (!fin) {
		cout << "File: " << infile << " Not found" << endl;
		exit(1);
	}
	cout << "Opened " << infile << endl;
	

	// read the magic number
	string line;
	getline(fin, line);
	if (line.size() < 2 || line.at(0) != 'P' || line.at(1) != '3') {
		cout << "Unable to read magic number P3" << endl;
		exit(2);
	}
	cout << "PPM (text)" << endl;
	
	getline(fin, line);
	if (line[0] == '#') {
		cout << "Ignoreing comment" << endl;
	}

	int xres, yres, maxval;
	fin >> xres >> yres >> maxval;
	if (!fin) {
		cout << "Error rading file" << endl;
		exit(3);
	}
	cout << "Image size: " << xres << "x" << yres << endl;
	cout << "Maxval = " << maxval << endl;

	// loop for xres & yres iterations
	int r, g, b, iy;
	double y;
	string values = "@@@###***+++--- ";
	for (int i = 0; i < xres * yres; i++) {
		fin >> r >> g >> b;
		if (!fin) {
			cout << "Error reading stream" << endl;
			exit(4);
		}
		// Y =  0.2126R + 0.7152G + 0.0722B (from HW7)
		y = 0.2126*r + 0.7152*g + 0.0722*b;
		// tests


	}


	return 0;
}
