/*
Ty Jacobs
4/23/2021
CS 201

This program will open ppm and convert it to ascii. and make it a class
*/


#include <iostream>
using std::cout;
using std::endl;
#include "RGBImage.hpp"

int main() {

	cout << "Convert ppm to ascii art" << endl;

	RGBImage ss("parrot.ppm");
	ss.toASCII();

	cout << "Finished program" << endl;
	return 0;
}
