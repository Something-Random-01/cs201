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
	std::string rname = "sam";

	// adds 10 names in to a vector
	std::vector<std::string> names;
	InputNames(names);
	std::cout << std::endl;


	// prints if the name realy exist in the vector
	if (DoesNameExist(rname, names) == true) {
		std::cout << rname << " Does exist in the list of names" << std::endl;
	}
	else {
		std::cout << rname << " Does not exist in the list of names" << std::endl;
	}


	return 0;
}
