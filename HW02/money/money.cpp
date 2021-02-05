/*
money.cpp
Ty Jacobs
2/4/2021
This program would get how many coins you have and displays the total;
*/
#include "coin.hpp"
#include <iostream>
#include <vector>

int main() {
	std::vector<int> coins;
	getCoinInfo(coins);
	std::cout << std::endl;
	printall(coins);


	return 0;
}