/*
Ty Jacobs
3/1/2021
fifo-lifo.cpp
This program will do first in first out, and last in 
first out.
*/

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

// First-In First-Out
void FifoPush(vector<string>& contanier, const string& item) {
	contanier.push_back(item);
}
void FifoPop(vector<string>& contanier, string& item) {
	item = contanier.at(0);
	contanier.erase(contanier.begin());
}

// Last-In First-Out
void LifoPush(vector<string>& contanier, const string& item) {
	contanier.insert(contanier.begin(),item);
}
void LifoPop(vector<string> contanier, string& item) {

}

// main
int main() {
	string word;
	vector<string> container;
}