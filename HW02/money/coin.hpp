/*
* coin.hpp
* Ty Jacobs
* 2/4/2021
* Gets info for the header
*/

#pragma once
#ifndef COIN_HPP
#define COIN_HPP
#include <vector>

// gets the number of coins
void getCoinInfo(std::vector<int>& coins);

// gets the total value of the coins
int total(std::vector<int>& coins);

//output
void printall(std::vector<int>& coins);
#endif // !COIN_HPP

