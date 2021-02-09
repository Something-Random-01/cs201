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
	//int i = 0;
	// logs the name
	// score that was entered in
	int sc = -1;
	std::string name = "";
	while (name != "NoName" && sc != 0) {
		std::cout << "Please enter a name and score (enter NoName 0 to exit) ";
		std::cin >> name;
		std::cin >> sc;
		if (!sc && sc != 0) {
			std::cout << "Not a number" << std::endl;
			exit(-1);
		}
		names.push_back(name);
		score.push_back(sc);
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

// search for a score to find the names
void ifscore(vector<string>& names, vector<int>& score) {
	// set varible and finds the score to get
	// to let program know if user found a score
	bool th = false;
	int scored;
	std::cout << "Please enter a score to look for: ";
	std::cin >> scored;
	if (!scored) {
		std::cout << "not a number" << std::endl;
		exit(-1);
	}
		for (int i = 0; i < score.size(); i++) {
			if (scored == score[i]) {
				std::cout << names[i] << " " << score[i] << std::endl;
				th = true;
			}
		}
		if (th == false) {
			std::cout << "score not found" << std::endl;
		}
	}
