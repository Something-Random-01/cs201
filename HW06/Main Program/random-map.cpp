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

std::random_device r;
std::mt19937_64 gen(r());

int RandomBetweenU(int first, int last) {
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(1, 6);
	return uniform_dist(e1);
}

int RandomBetweenN(int first, int last) {
	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> normal_dist(first, last);
	return normal_dist(e2);
}

int RandomBetween(int first, int last) {
	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	int x = last + 2;
	while (x > last && x < first) {
		x = 1 + rand() % last;
	}
	return x;

}

void PrintDistribution(const std::map<int,int> &numbers) {
	for (const auto&  i : numbers) {
		std::cout << "Number: " << i.first << " Number of numbers: " << i.second << std::endl;
	}

}

int main() {
	int size = 100;
	int x = 0;

	std::map<int, int> numb;
	for (int i = 0; i <= size; i++) {
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

	for (int i = 0; i <= size; i++) {
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

	numb.clear();

	for (int i = 0; i <= size; i++) {
		x = RandomBetween(1, 6);
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
	std::cout << "This is for a random number using rand()." << std::endl;
	PrintDistribution(numb);
	std::cout << std::endl;
	numb.clear();

	return 0;
}