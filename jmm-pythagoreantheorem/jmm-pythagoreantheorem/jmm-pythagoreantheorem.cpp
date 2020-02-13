// jmm-pythagoreantheorem.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Created by: Jason Martinez
// Date Created: 02/07/20
// Date Finished: 02/13/20
// Description: This program will calculate and figure out the pythagorean theorem.

#include <iostream>
#include <math.h>

int main()
{
	// 2. Variables
	float a = 9.0f;
	float b = 6.0f;
	float c = 0.0f;

	// 3. Formula
	c = sqrt(pow(a, 2.0f) + pow(b, 2.0f));

	// 1. Output
	std::cout << "Pythagorean Theorem!";
	std::cout << "\nA^2 +B^2 = C^2";

	// 4. Result
	std::cout << "\n" << a << "^2 + " << b << "^2 = " << c << "^2";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
