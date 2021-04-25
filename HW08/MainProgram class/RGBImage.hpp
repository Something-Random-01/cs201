#pragma once
#ifndef  RGBImage_HPP
#define RGBImage_HPP

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

class RGBImage
{
public:
	RGBImage() : _xres(0), _yres( 0 ), _maxval (0) {}
	RGBImage(string fname);
	~RGBImage() { cout << "DESTRUCTOR" << endl; }
	void toASCII();

private:
	int _xres, _yres, _maxval;
	vector<int> _image;
};

RGBImage::RGBImage(string fname) {
	int r, g, b;
	ifstream fin(fname);
	if (!fin) {
		cout << "File: " << fname << " Not found" << endl;
		exit(1);
	}
	cout << "Opened " << fname << endl;


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

	fin >> _xres >> _yres >> _maxval;
	if (!fin) {
		cout << "Error rading file" << endl;
		exit(3);
	}
	cout << "Image size: " << _xres << "x" << _yres << endl;
	cout << "Maxval = " << _maxval << endl;

	// loop for xres & yres iterations


	for (int i = 0; i < _xres * _yres; i++) {
		fin >> r >> g >> b;
		if (!fin) {
			cout << "Error reading stream" << endl;
			if (fin.eof()) cout << "Reached end of file" << endl;
			exit(4);
		}
		// save to vector - change to Pixel Class / Image class
		_image.push_back(r);
		_image.push_back(g);
		_image.push_back(b);
	}
}

void RGBImage::toASCII() {
	int iy;
	double y;
	string values = "@@@###***+++--- ";
	int r, g, b;
	int index = 0;

}

#endif // ! RGBImage_HPP

