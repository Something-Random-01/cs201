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
		if (word == "") {// prints the ""
			std::cout << "[whitespace]\t"<< "\"" << word << "\"" << std::endl;
			// gets the string
		}
		else if (word.at(word.size()-1) == char('"') && word.at(0) == char('"')) {
			// removes the front and back "
			word.replace(0, 1, "");
			word.replace(word.size() - 1, word.size(), "");
			std::cout << "[string]\t" << "\"\\\"" << word << "\\\"\"" << std::endl;
		}
		// gets the identifier
		else if (word.at(0) >= char('A') && word.at(0) <= char('Z') || word.at(0) >= char('a') && word.at(0) <= char('z')) {
			std::cout << "[identifier]\t" << "\"" << word << "\"" << std::endl;
		} 
		else if (isnum) {// gets the integer
			std::cout << "[integer]\t" << "\"" << word << "\"" << std::endl;
		}
		else { // gets the other
			std::cout << "[other]\t\t" << "\"" << word << "\"" << std::endl;
		}// end of if else if else

	}// end of for loop
}