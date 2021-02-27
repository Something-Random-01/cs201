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
	return str == " ";
}

unsigned StringToTokenWS(const std::string& input, std::vector<std::string>& tokens) {
	int size = 0;
	std::string word;
	istringstream ss(input);
	while (ss >> word) {
		tokens.push_back(word);
		size++;
	}
	tokens.push_back("");
	return size;
}

void AnalyzeTokens(const std::vector<std::string>& tokens) {
	int isnum;
	// && word.at(word.size() -1 ) == char("\"")
	for (auto word : tokens) {
		istringstream istream(word);
		istream >> isnum;
		if (word == "") {
			std::cout << "[whitespace]\t"<< "\"" << word << "\"" << std::endl;
		}else if (word.at(word.size()-1) == char('"') && word.at(0) == char('"')) {
			std::cout << "[string]\t" << "\"\\\"" << word << "\\\"\"" << std::endl;
		}
		else if (isnum) {
			std::cout << "[integer]\t" << "\"" << word << "\"" << std::endl;
		}else {
			std::cout << "[other]\t" << "\"" << word << "\"" << std::endl;
		}// end of if else if else

	}// end of for loop
}