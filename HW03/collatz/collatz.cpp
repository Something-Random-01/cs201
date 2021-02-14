/*
Ty Jacobs
CS201
2/11/2021
collatz.cpp
This program does the collatz sequence in one file named collatz.cpp
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {


	int k;// user input
	cout << "Please enter a positive number: ";
	while (true) {
		cin >> k;
		if (k > 0) {
			break;
		}// end of if
		if (!k || k != 0) {
			cout << "Not a number: " << endl;
			return -1;
		}
		cout << "ERROR: NOT A POSITIVE NUMBER" << endl;
		cout << "Please enter a positive number: ";
	}// end of while


	cout << k << " ";// prints k if one is enterd
	while (k != 1) {// while loop to end at 1
		if (k % 2 == 0) {// check if even
			k = k / 2;// happens if even
		}
		else {
			k = k * 3 + 1; // happens if its odd
		}
		cout << k << " "; // print k
		}
		cout << endl; // makes new line

	return 0;
}// end of main