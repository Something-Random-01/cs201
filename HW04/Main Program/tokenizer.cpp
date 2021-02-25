/*
Ty Jacobs
2/23/2021
tokenizer.cpp
This program will reproduce the C runtime libarary cintaines char*stock(char* str, cinst char *delim)
*/

#include "tokenizer.hpp"
#include <iostream>
#include <sstream>
using std::istringstream;
#include <string>

bool ReadLine(std::string& str) {
	std::getline(std::cin, str);
	if (str == "") {
		return false;
	}
	else {
		return true;
	}
}

unsigned StringToTokenWS(const std::string& input, std::vector<std::string>& tokens) {
	int size = 0;
	std::string word;
	istringstream ss(input);
	while (ss >> word) {
		tokens.push_back(word);
	}
	tokens.push_back("");
	
	

	return size;
}

void AnalyzeTokens(const std::vector<std::string>& tokens) {
	for (auto word : tokens) {
		std::cout << word << std::endl;
	}
}