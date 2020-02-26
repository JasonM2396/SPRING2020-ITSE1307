// jmm-mileconverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date: 02/07/20
// Date Finished: 02/13/20
// Description: This program will convert the number of miles to kilometers based on user input.

#include <iostream>

int main()
{
	//Variables
	float numberOfMiles = 0.0f;
	float numberOfKm = 0.0f;

	//Input
		std::cout << "Enter the number of miles you want to convert: ";
		std::cin >> numberOfMiles;

	// Processing the output
//	numberOfMiles = 2;
	numberOfKm = numberOfMiles * 1.609344f;

	// Output
    std::cout << numberOfMiles << " Miles converted to " << numberOfKm << " Kilometers\n";

	return 0;
}

