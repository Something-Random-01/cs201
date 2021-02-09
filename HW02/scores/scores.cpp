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
	int num = 0; //initialize num to zero

	// print instructions for user
	std::cout << "Enter 1 to add names and scores\nEnter 2 to print names and scores" << std::endl;
	std::cout << "Enter 3 search for a name\nEnter 4 search for a score" << std::endl;
	std::cout << "Enter -1 to exit: ";
	std::cin >> num;

	while (num != -1) {
		if (!num) { //check and see if is a number, else end
			std::cout << "Not a number" << std::endl;
			break;
		}
		else if (num == 1) {
			getNames(names, score);
			if (dupName(names)) {
				std::cout << "Error: Name entered twice" << std::endl;;
				break;
			}
		}
		else if (num == 2) {
			printAll(names, score);
			std::cout << std::endl;
		}
		else if (num == 3) {
			ifName(names, score);
			std::cout << std::endl;
		}
		else if (num == 4) {
			ifscore(names, score);
			std::cout << std::endl;

		}
		// print instructions for user
		std::cout << "Enter 1 to add names and scores\nEnter 2 to print names and scores" << std::endl;
		std::cout << "Enter 3 search for a name\nEnter 4 search for a score" << std::endl;
		std::cout << "Enter -1 to exit: ";
		std::cin >> num;
	} //end of while loop
	

	return 0;
}