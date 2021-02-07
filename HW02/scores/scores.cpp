/*
scores
Ty Jacobs
2/6/2021
CS201

This programs gets users name and scores and does an output
*/
#include "names.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {

	std::vector<std::string> names;
	std::vector<int> score;

	std::cout << std::endl;
	getNames(names, score);
	if (dupName(names)) {
		std::cout << "Error; two names entered" << std::endl;;
		return -1;
	}
	printAll(names, score);

	return 0;
}