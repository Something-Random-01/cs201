/*
Ty Jacobs
4/6/2021
CS 201

Uses the <random> header to test both a unifrom distribution of random numbers
and a normal distribution of random numbers using std::map<int,int> to simulate a histogram

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>

std::random_device rd;
std::mt19937_64 gen(rd());

int RandomBetweenU(int first, int last) {
	std::uniform_int_distribution<> distrib(first, last);
	return distrib(gen);
}

int RandomBetweenN(int first, int last) {
	std::normal_distribution<> distrib(first, last);
	return distrib(gen);
}

int RandomBetween(int first, int last) {
	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	int x = last + 2;
	while (x > last && x < first) {
		x = 1 + rand() / ((RAND_MAX + 1u) / last);
	}
	return x;

}

void PrintDistribution(const std::map<int,int> &numbers) {
	for (const auto&  i : numbers) {
		std::cout << "Number: " << i.first << " Number of numbers: " << i.second << std::endl;
	}

}

int main() {
	int x = 0;

	std::map<int, int> numb;
	for (int i = 0; i < 101; i++) {
		x = RandomBetweenU(1, 6);
		if (numb.empty()) {
			numb[x] = 1;
		}
		else if (numb.count(x) != 0) {
			numb[x] += 1;
		}
		else {
			numb[x] = 1;
		}
	}
	std::cout << "This is for uniform random number." << std::endl;
	PrintDistribution(numb);
	std::cout << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

	numb.clear();

	for (int i = 0; i < 101; i++) {
		x = RandomBetweenN(1, 6);
		if (numb.empty()) {
			numb[x] = 1;
		}
		else if (numb.count(x) != 0) {
			numb[x] += 1;
		}
		else {
			numb[x] = 1;
		}
	}
	std::cout << "This is for normally distributted random number." << std::endl;
	PrintDistribution(numb);
	std::cout << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

	std::map<int, int> numb;
	for (int i = 0; i < 101; i++) {
		x = RandomBetweenU(1, 6);
		if (numb.empty()) {
			numb[x] = 1;
		}
		else if (numb.count(x) != 0) {
			numb[x] += 1;
		}
		else {
			numb[x] = 1;
		}
	}
	std::cout << "This is for uniform random number." << std::endl;
	PrintDistribution(numb);
	std::cout << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

	return 0;
}