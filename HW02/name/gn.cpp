/*
* gn.cpp
* Ty Jacobs
* 2/4/2021
* This program has the code for the function and diffrent types
* of functions
*/

# include "gn.hpp"
# include <iostream>
#include <vector>
#include <string>
# include <algorithm>

void InputNames(std::vector<std::string> & names) {
	for (int i = 0; i < 10; i++) {
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}

