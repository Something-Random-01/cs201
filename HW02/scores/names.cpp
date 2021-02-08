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

void getNames(std::vector<std::string>& names, std::vector<int>& score) {
	// keeps tracks of the number of loops
	int i = 0;
	// logs the name
	std::string name;
	// score that was entered in
	int sc = 0;
	while (true) {
		std::cout << "Please enter a name and score (enter NoName 0 to exit) ";
		std::cin >> name;
		std::cin >> sc;
		names.push_back(name);
		score.push_back(sc);
		if (name == "NoName" && sc == 0) {
			break;
		}
	}
	names.pop_back();
	score.pop_back();

}

// finds if there is two names
bool dupName(std::vector<std::string>& names) {
	// variable to keep track if its true
	bool ift = false;
	int count = 0;
	for (int i = 1; i < names.size(); i++) {
		count = 0;
		for (int j = 0; j < names.size(); j++) {
			if (names[i] == names[j]) {
				count++;
			}
			if (count >= 2) {
				ift = true;
			}
		}
	}

	return ift;
}
// prints all the names and scores
void printAll(vector<string>& names, vector<int>& score) {
	std::cout << std::endl;
	for (int i = 0; i < names.size(); i++) {
		std::cout << names[i] << " " << score[i] << std::endl;
	}
	std::cout << std::endl;
}

// search for a name
void ifName(vector<string>& names, vector<int>& score) {
	// sets name and asks users to enter a name to look for
	string name;
	std::cout << "Please enter a name to look for: ";
	std::cin >> name;

	// sets a vairble to false for it wont print name not there and 
	// a int where the program found the name
	int loc = 0;
	bool there = false;
	for (int i = 0; i < names.size(); i++) {
		if (name == names[i]){
			loc = i;
			there = true;
		}
	}
	if (there == true) {
		std::cout << names[loc] << " " << score[loc] << std::endl;
	}
	else {
		std::cout << "Name not found" << std::endl;
	}
}




// gets a 1,2,3,4, -1
void wloop(vector<string>& names, vector<int>& score) {
	int num = 0;
	while (num != -1) {
		std::cout << "Enter 1 to add names and scores, Enter 2 to print Names and scores" << std::endl;
		std::cout << "Enter 3 to look for a Name, Enter 4 to look for a score" << std::endl;
		std::cout << "Enter -1 to exit: ";
		std::cin >> num;
		if (!num) {
			std::cout << "Not a number" << std::endl;
			break;
		}
		else {
			if (num == 1) {
				getNames(names, score);
				if (dupName(names)) {
					std::cout << "Error: two names entered" << std::endl;;
					break;
				}
			}
			if (num == 2) {
				printAll(names, score);
				std::cout << std::endl;
			}
			if (num == 3) {
				ifName(names, score);
				std::cout << std::endl;
			}
			if (num == 4) {
				std::cout << std::endl;

			}
		}
	}
}