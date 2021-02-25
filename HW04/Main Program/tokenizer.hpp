/*
Ty Jacobs
2/23/2021
tokenizer.hpp
This program will reproduce the C runtime libarary cintaines char*stock(char* str, cinst char *delim)
*/


#pragma once
#ifndef tokenizer_HPP
#define tokenizer_HPP
#include <string>
#include <vector>

bool ReadLine(std::string& str);
unsigned StringToTokenWS(const std::string& input, std::vector<std::string>& tokens);
void AnalyzeTokens(const std::vector<std::string>& tokens);

#endif // !tokerizer_HPP
