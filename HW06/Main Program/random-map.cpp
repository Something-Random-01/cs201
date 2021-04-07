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

int RandomBetweenU(int first, int last) {
	std::random_device rd;
	std::mt19937_64 gen(rd());
	std::uniform_int_distribution<> distrib(first, last);
	return distrib(gen);
}

int RandomBetweenN(int first, int last) {

}
int main()
{
	// Seed with a real random value, if available
	std::random_device r;
	// Choose a random mean between 1 and 6
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(1, 6);
	int mean = uniform_dist(e1);
	std::cout << "Randomly-chosen mean: " << mean << '\n';
	// Generate a normal distribution around that mean
	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> normal_dist(mean, 2);
	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[std::round(normal_dist(e2))];
	}
	std::cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
}