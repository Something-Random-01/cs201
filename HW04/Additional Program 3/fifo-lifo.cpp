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

// Shared Functionality
bool IsContaninerEmpty(const vector<string> &container) {
	if (container.size() == 0) {
		return true;
	}
	else {
		return false;
	}
}
void PrintContainer(const vector<string> &contanier) {
	cout << endl;
	for (int i = 0; i < contanier.size(); i++) {
		cout << contanier.at(i) << endl;
	}
}

// First-In First-Out
void FifoPush(vector<string>& contanier, const string& item) {
	contanier.push_back(item);
}
void FifoPop(vector<string>& contanier, string& item) {
	if (IsContaninerEmpty(contanier)) {
		item = contanier.at(0);
		contanier.erase(contanier.begin());
	}
}

// Last-In First-Out
void LifoPush(vector<string>& contanier, const string& item) {
	contanier.insert(contanier.begin(),item);
}
void LifoPop(vector<string> contanier, string& item) {
	if (IsContaninerEmpty(contanier)) {
		item = contanier.at(contanier.size() - 1);
		contanier.pop_back();
	}
}


// main
int main() {
	string word;
	vector<string> fi;
	vector<string> fo;

	// test with a b c d
	FifoPush(fi, "A");
	FifoPush(fi, "B");
	FifoPush(fi, "C");
	FifoPush(fi, "D");

	// print Fifo
	cout << "Print all of LiFo" << endl;
	cout << "-------------------------------------"<< endl;
	PrintContainer(fi);
	cout << "Does LiFo" << endl;
	cout << "-------------------------------------" << endl;
	for (int i = 0; i < 4; i++) {
		FifoPop(fi, word);
		cout << word << endl;
	}
	cout << "Print all of Lifo" << endl;
	cout << "-------------------------------------" << endl;
	PrintContainer(fi);
	cout << "Test LiFo" << endl;
	// test LiFo
	LifoPush(fo, "A");
	LifoPush(fo, "B");
	LifoPush(fo, "C");
	LifoPush(fo, "D");


	cout << "Print all of Lifo" << endl;
	cout << "-------------------------------------" << endl;
	PrintContainer(fo);
	cout << "Does LiFoPop" << endl;
	cout << "-------------------------------------" << endl;
	for (int i = 0; i < 4; i++) {
		LifoPop(fo, word);
		cout << word << endl;
	}
	cout << "Print all of LiPo" << endl;
	cout << "-------------------------------------" << endl;
	PrintContainer(fo);

}