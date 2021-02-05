/*
* coin.hpp
* Ty Jacobs
* 2/4/2021
* Gets info for the header
*/
#include "coin.hpp"
#include <vector>
#include <iostream>


// gets all of the value for each coin
//(0) is pennies (1) is nickels, (2) is dimes, (3) quarters, (4) one-dollar coins
void getCoinInfo(std::vector<int>& coins) {
	int nc;
	std::cout << "Please enter the number of pennies you have: ";
	std::cin >> nc;
	coins.push_back(nc);
	std::cout << "Please enter the number of nickels you have: ";
	std::cin >> nc;
	coins.push_back(nc);
	std::cout << "Please enter the number of dimes you have: ";
	std::cin >> nc;
	coins.push_back(nc);
	std::cout << "Please enter the number of quarters you have: ";
	std::cin >> nc;
	coins.push_back(nc);
	std::cout << "Please enter the number of half-dollars you have: ";
	std::cin >> nc;
	coins.push_back(nc);
}

// gets the total of all of the coins
int total(std::vector<int>& coins) {
	int total = 0;
	int p = coins[0] * 1;
	int n = coins[1] * 5;
	int d = coins[2] * 10;
	int q = coins[3] * 25;
	int od = coins[4] * 50;
	total = p + n + d + q + od;
	return total;
}

// prints every thing
void printall(std::vector<int>& coins) {
	if (coins[0] == 1) {
		std::cout << "You have " << coins[0] << " pennie" << std::endl;
	}
	else {
		std::cout << "You have " << coins[0] << " pennies" << std::endl;
	}if (coins[1] == 1) {
		std::cout << "You have " << coins[1] << " nickel" << std::endl;
	}
	else {
		std::cout << "You have " << coins[1] << " nickels" << std::endl;
	}if (coins[2] == 1) {
		std::cout << "You have " << coins[2] << " dime" << std::endl;
	}
	else {
		std::cout << "You have " << coins[2] << " dimes" << std::endl;
	}if (coins[3] == 1) {
		std::cout << "You have " << coins[3] << " quarter" << std::endl;
	}
	else {
		std::cout << "You have " << coins[3] << " quarters" << std::endl;
	} if (coins[4] == 1) {
		std::cout << "You have " << coins[4] << " half-dollar coin" << std::endl;
	}
	else {
		std::cout << "You have " << coins[4] << " half-dollar coins" << std::endl;
	}

	int ft = total(coins) % 100;
	int ls = total(coins) / 100;
	
	std::cout << "The value of all your coins is $" << ls << "." << ft  << std::endl;
}