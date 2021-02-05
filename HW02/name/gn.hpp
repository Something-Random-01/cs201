/*
* gn.hpp
* Ty Jacobs
* 2/4/2021
* This program has the name of a function
*/


#pragma once
#ifndef GN_HPP
#define GN_HPP
#include <vector>
#include <string>

// asks user for 10 names and adds them in a vector
void InputNames(std::vector<std::string>& names);

// adds the function to see if their is a name in a list
bool DoesNameExist(const std::string & nameToFind, const std::vector<std::string> & names);

// prints all of the names
void PrintNames(const std::vector<std::string>& names);

// gets the length of the string
void length(std::vector<std::string>& names);

#endif