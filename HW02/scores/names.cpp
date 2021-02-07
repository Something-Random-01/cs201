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
	while(true){
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