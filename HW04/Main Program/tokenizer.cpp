/*
Ty Jacobs
2/23/2021
tokenizer.cpp
This program will reproduce the C runtime libarary cintaines char*stock(char* str, cinst char *delim)
*/

#include "tokenizer.hpp"
#include <sstream>
using std::istringstream;
#include <string>

bool ReadLine(const std::string& str) {
	if (str == "") {
		return false;
	}
	else {
		return true;
	}
}

unsigned StringToTokenWS(const std::string& input, std::vector<std::string>& tokens) {
	int size = 0;

	if (ReadLine(input)) {
		for (auto word : input) {
			tokens.push_back(input);
			size++;
		}
		tokens.push_back("");
	}
	else {
		tokens.push_back("");
	}
	return size;
}