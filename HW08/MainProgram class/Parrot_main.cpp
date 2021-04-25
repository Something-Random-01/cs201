/*
Ty Jacobs
4/23/2021
CS 201

This program will open ppm and convert it to ascii. and make it a class
*/


#include <fstream>
using std::ifstream;
using std::ofstream;
#include <iostream>
using std::string;
using std::cout;
using std::endl;
#include <string>
#include <vector>
using std::vector;

int xres, yres, maxval;
vector<int> rgb;
int r, g, b, iy;
double y;
string values = "@@@###***+++--- ";


int main() {

	cout << "Convert ppm to ascii art" << endl;

	// opens the file
	
		// Y =  0.2126R + 0.7152G + 0.0722B (from HW7)
		y = 0.2126 * r + 0.7152 * g + 0.0722 * b;
		// tests
		if (y < 0.0 || y >= 256.0) cout << "Error!" << endl;
		iy = (int)y;
		// should be [0....255]
		if (iy < 0 || iy > 255) cout << "Error!" << endl;
		iy /= 16;
		if (iy < 0 || iy > 15) cout << "Error!" << endl;
		cout << values.at(iy);
		if (i % xres == xres - 1) cout << endl;


	cout << "Finished program" << endl;
	return 0;
}
