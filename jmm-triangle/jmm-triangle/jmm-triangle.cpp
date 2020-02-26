// jmm-triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date: 2/24/20
// Description: This program will determine if a triangle is a right triangle based on what length the user inputs for each side.
// Credits and citations for any code used as a reference for this program are listed on line 50.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Variables
	float fltSideA = 0.0f;
	float fltSideB = 0.0f;
	float fltSideC = 0.0f;

	// User Input
	cout << "Enter the length of the first side of the triangle: ";
	cin >> fltSideA;
	cout << "Enter the length of the second side of the triangle: ";
	cin >> fltSideB;
	cout << "Enter the length of the third side of the triangle: ";
	cin >> fltSideC; 
	cout << endl;

	fltSideC = pow(fltSideC, 2.0f); // This is placed to added the power subscript to the user input for Side C.

	// Processing the Output
	cout << "Side A + Side B = " << pow(fltSideA, 2.0f) + pow(fltSideB, 2.0f) << endl;
	cout << "Side C = " << fltSideC << endl;

	// If the output is a right triangle!
	if (fltSideC == pow(fltSideA, 2.0f) + pow(fltSideB, 2.0f)) {
		cout << "\nThe result is a right triangle!" << endl;
	}

	// If a value less than or equal to 0 is entered on any side!
	else if (fltSideA <= 0.0f || fltSideB <= 0.0f || fltSideC <= 0.0f) {
		cerr << "\nInvalid input(s) has/have been detected!";
			return 1;
	}

	// If the output is not a right triangle!
	else
		cout << "\nThe result is NOT a right triangle!" << endl;	

	return 0;
}
// Citations and Credits
// Used some of the Phythagorean Theorem assignment code for the if statements to work.
// Credits to Matorian from the Cplusplus.com forums for having some code that I looked at as a reference for certain parts, like the if else statement. 
// Link to that forum: http://www.cplusplus.com/forum/beginner/29025/