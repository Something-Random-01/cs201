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

int main() {
	srand(time(0));
	vector<int> rnum(4);
	arr(rnum);

	for (int i = 0; i < 4; i++) {
		cout << rnum.at(i) << " ";
	}
	cout << endl;

	return 0;
}