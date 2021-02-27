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
#include <vector>

int main() {
	bool b = false;
	std::vector<std::string> token;
	std::string line;
	std::cout << "Please type in some text. When you are done, type \"end\", \" End\" or \"END\"" << std::endl;

	while (true) {
		ReadLine(line);
		int si = StringToTokenWS(line, token);

		for (int i = 0; i < token.size(); i++) {
			if (token.at(i) == "end" || token.at(i) == "End" || token.at(i) == "END" || token.at(i) == "E") {
				token.pop_back();
				b = true;
			}// end of if
		}// end of for loop
		if (b) {
			break;
		}// end of if
	}// end of while


	std::cout << std::endl;
	AnalyzeTokens(token);

return 0;
}