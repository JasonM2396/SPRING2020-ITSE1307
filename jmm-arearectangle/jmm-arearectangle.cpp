// jmm-arearectangle.cpp : Defines the entry point for the console application.
//By: Jason Martinez
//Date: 02-06-2020
//Description: This program will find the area of rectangle.

#include "stdafx.h"
#include <iostream>


int main()
{
	//2. Variables
	int intLength = 5;
	int intWidth = 6;
//	int intLength = 0;
//	int intWidth = 0;
	int intArea = 0;

	//4. Input
		std::cout << "Please enter the length of the rectangle as a whole number: ";
		std::cin >> intLength;
		std::cout << "Please enter the width of the rectangle as a whole number: ";
		std::cin >> intWidth;

	//3. Processing
	intArea = intLength * intWidth;
	
	//1. Output
	//	std::cout << "\nThe area of the rectangle is: 0;
	std::cout << "\nThe area of the rectangle is: " << intArea;
	return 0;
}

