/*
Ty Jacobs
2/23/2021
tokenizer.cpp
This program will reproduce the C runtime libarary cintaines char*stock(char* str, cinst char *delim)
*/

#include "tokenizer.hpp"
#include <sstream>
#include <string>

bool ReadLine(std::string& str) {

	if (str == "") {
		return false;
	}
	else {
		return true;
	}
}