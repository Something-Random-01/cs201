/*
Ty Jacobs
2/27/2021
bulls-and-cows.cpp

This program is a gussing game called bulls and cows which
I have number heard of. 
*/

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <string>
using std::istringstream;

// gets random number from 0 to 9
int numb() {
	return rand() % 10;
}

// sets the vector to have diffrent numbres
void arr(vector<int> &num) {
	num.at(0) = numb();
	vector<int> dontuse;
	dontuse.push_back(num.at(0));
	// adds and checks each number
	for (int i = 1; i < 4; i++) {
		// makes random number to each part
		num.at(i) = numb();
		// check eachs number amd remakes them if the same.
		for (int j = 0; j < dontuse.size(); j++) {
			if (num.at(i) == dontuse.at(j)) {
				// makes it that num is a diffrent number
				while (num.at(i) == dontuse.at(j)) {
					num.at(i) = numb();
				}// end of while
			}// end of if
		}// end of for loop
		dontuse.push_back(num.at(i));
	}
}// end of arr

// prints the vector.
void negprint(vector<int> num) {
	for (int i = 0; i < num.size(); i++) {
		cout << num.at(i);
	}
	cout << endl;
}


// gets user numbers
void usif(vector<int>& nums) {
	// tells the user info
	cout << "This is a game of cow and bulls" << endl;
	cout << "The range per number is 0 to 9 with four numbers" << endl;
	cout << "Example: 1248" << endl;
	cout << "Please type in four numbers with no space: ";
	// set varibles
	std::string number;
	std::string word;
	bool four = false;
	int num;
	int size = 0;

	// get info needed
	while (true) {
		std::getline(std::cin, number);
		istringstream ws(number);
		ws >> word;
		// gets only 4 letters or numbers
		if (word.size() == 4) {
			istringstream isnu(word);
			if (isdigit(word.at(0)) && isdigit(word.at(1)) && isdigit(word.at(2)) && isdigit(word.at(3))) {
				// pushes ints to nums
				while (isnu >> num) {
					nums.push_back(num);
					size = 4;
					four = true;
				}// end of while
			}// end of isdigit
		}// end of if: word.size() == 4
		// show message when size does not equale 4
		if (size != 4) {
			cout << endl;
			cout << "Type in 4 number between (0 to 9): " << endl;
		}
		if (four) {
			break;
		}

	}// end of while true
	cout << endl;
}// end of usif


int main() {
	srand(time(0));
	vector<int> rnum(4);
	vector<int> usnum;
	// get random numbers
	arr(rnum);
	// get user number
	usif(usnum);

	negprint(usnum);
	negprint(rnum);

	return 0;
}