# include <iostream>

int main() {
	// sets varible I will use
	int numberGiven;
	int biggestNumber;
	int negNumber = 0;

	// intro
	std::cout << "Enter a sequence of positive integers, ending with zero." << std::endl;
	std::cout << "I will print the greatest positive number entered." << std::endl;

	// gets the first number
	std::cout << "Enter a positive integer (0 to end): ";
	std::cin >> numberGiven;
	biggestNumber = numberGiven;
	

	// gets all of the numbers wanted
	if (numberGiven < 0) {
		negNumber = 1;
	}
	if (numberGiven == 0) {
		std::cout << "No positive integers were entered." << std::endl;
	}
	else{
		while (numberGiven != 0) {
			std::cout << "Enter a positive integer(0 to end); ";
			std::cin >> numberGiven;

			if (numberGiven < 0) {
				negNumber = 1;
			}

			if (numberGiven > biggestNumber) {
				biggestNumber = numberGiven;
			}
		}
	}
	
	// does all of the output needed and errors
	if (negNumber == 1) {
		std::cout << std::endl;
		std::cout << "FAILED DUE TO NEGATIVE NUMBER." << std::endl;
	}
	else{
		std::cout << std::endl;
		std::cout << "The greatest number entered: " << biggestNumber << std::endl;
	}

	return 0;
}