/*
scores
Ty Jacobs
2/6/2021
CS201

This programs gets users name and scores and does an output
*/

#pragma once
#ifndef names_HPP
#define names_HPP
#include <iostream>
#include <vector>
using std::vector;
#include <string>
using std::string;

void getNames(vector<string>& names, vector<int>& score);
bool dupName(vector<string>& names);
void printAll(vector<string>& names, vector<int>& score);
void wloop(vector<string>& names, vector<int>& score);


#endif // !names_HPP

