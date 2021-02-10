/*
Ty Jacosb
CS201
boxer.hpp
2/9/2021

This program will get a string input and a positive number,
Then it would print a box with the string in the middle
*/

#pragma once
#ifndef boxer_HPP
#define boxer_HPP
#include <string>
using std::string;


//chech to see if nag. And a number
int num();
// print the middle of the box
void printMid(const string word,const int len);
// print the top and bottom of the box
void printBox(const string word,const  int len);
// prints the full box
void printFullBox(const string word, const int len);

#endif // !boxer_HPP

