/*
* name.cpp
* Ty Jacobs
* 2/4/2021
* This program will get 10 user names and do something with them
*/

# include "gn.hpp"
# include <iostream>
#include <vector>
#include <string>
# include <algorithm>

int main() {

	std::vector<std::string> names;
	InputNames(names);
	std::cout << std::endl;

	return 0;
}
