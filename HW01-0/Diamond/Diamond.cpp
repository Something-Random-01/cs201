# include <iostream>

int main() {
	// sets variables
	int number;
	int gdown = 1;
	int moreStars = 0;

	// lets user enter a positive number
	std::cout << "Please type a postive number ";
	std::cin >> number;
	std::cout << std::endl;

	// makes it only positve numbers are enterd
	if (number <= 0) {
		std::cout << "Not a postive number or a number or a zero" << std::endl;
	}

	// adds top of the diamond
	for (int i = 0; i < number; i++) {
		for (int k = 0; k < number - gdown; k++) {
			std::cout << " ";
		}
		for (int j = 0; j < gdown + moreStars; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
		moreStars = moreStars + 1;
		gdown = gdown + 1;
	}

	// adds bottom of the diamond
	moreStars = number - 2;
	gdown = number - 1;
	for (int i = 0; i < number - 1; i++) {
		for (int k = 0; k < number - gdown; k++) {
			std::cout << " ";
		}
		for (int j = 0; j < gdown + moreStars; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
		moreStars = moreStars - 1;
		gdown = gdown - 1;

	}
	return 0;
}