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
		}// end of for
		cout << endl;
}// end of print
	
// put user number as indivdual numbers

// gets user numbers
int usif(vector<int>& nums) {
	// set varibles
	std::string number;
	std::string word;
	bool four = false;
	int num;
	int size = 0;
	std::string fword;

	// get info needed
	while (size != 4) {
		size = 0;
		std::getline(std::cin, number);
		// checks and gets the first four number and letter
		//check to see if number is negative
		if (number.size() >= 5) {
			number = number.substr(0, 5);
			istringstream ss(number);
			ss >> num;
			if (num < 0) {
				return -1;
			}// end of if
		}// end of if
		if (number.size() >= 4) {
			number = number.substr(0, 4);
			// adds the four numbers
			for (int i = 0; i < 4; i++) {
				if (isdigit(number.at(i))) {
					// makes number at the postion
					num = number.at(i) - 48;
				}
				else {
					// if letter is enterd, turns to zero
					num = 0;
				}
				// pushes back number
				nums.push_back(num);
			}// end of for loop
			size = 4;
			// end of if number.size() and prints error message if bigger or lower than 4
		}else{
			cout << endl;
			cout << "Type in 4 number between (0 to 9): " << endl;
		}

	}// end of while true
	cout << endl;
	return 0;
}// end of usif

int main() {
	int count = 0;
	int cow = 0;
	int bull = 0;
	srand(time(0));
	vector<int> rnum(4);
	vector<int> usnum;
	// get random numbers
	arr(rnum);
	// get user number

	// tells the user info
	cout << "This is a game of cow and bulls" << endl;
	cout << "The range per number is 0 to 9 with four numbers" << endl;
	cout << "Example: 1248" << endl;
	cout << "Enter a negative number to get answer: ex -1234" << endl;
	cout << "Please type in four numbers with no space: " << endl;
	cout << endl;
	
	// plays the game tell user wins
	while (true) {
		bull = 0;
		cow = 0;

		int fan = usif(usnum);
		if (fan == -1) {
			cout << "Answer: " << endl;
			negprint(rnum);
			exit(-1);
		}
		else {
			// clear user numbers
			// goes throw each spot looking for the same number
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					// checks the same spot
					if (usnum.at(i) == rnum.at(i)) {
						bull++;
						break;
					}else if (usnum.at(i) == rnum.at(j)){
						cow++;
						
					}// end of if else
				}// end of sec for loop
			}// end of first for loop

			// tells user how many bulls and cows
			usnum.clear();
			// if it maches, it lets the user know they one
			if (bull == 4) {
				cout << "YOU WIN!!!!!!!!!!!!!!" << endl;
				cout << "It took you " << count << " times." << endl;
				break;
			}
			cout << bull << " bull and " << cow << " cow" << endl;
			cout << endl;
			cout << "Enter another Number: " << endl;
			count++;
		}// end of else
	}// end of while
	

	return 0;
}