/*
Ty Jacobs
2/11/2021
CS201
Header.hpp

This program is about the quadratic formula, The 
user would enter the a,b,c parts of the equation, should check if 
it would work and it is a real root
*/

#pragma once
#ifndef Header_HPP
#define Header_HPP

// b^2-4(a)(c)
int mid(int a, int b, int c);


//-b+(mid)^1/2 / 2(a)
int f(int a, int b, int c);

int nf(int a, int b, int c);

#endif // Header_HPP