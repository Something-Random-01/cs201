/*
Ty Jacobs
2/23/2021
tokenizertest.cpp
This program will reproduce the C runtime libarary cintaines char*stock(char* str, cinst char *delim)
*/

#include "tokenizer.hpp"
#include <sstream>
#include <string>
#include <iostream>

int main() {
	std::string line;
	std::cout << "Please type in some text. When you are done, type \"end\", \" end\" or \"END\"" << std::endl;
	std::getline(std::cin, line);
	
	std::cout << ReadLine(line);


return 0;
}