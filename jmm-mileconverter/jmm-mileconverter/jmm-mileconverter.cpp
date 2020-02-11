// jmm-mileconverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Data: 02/07/20
// Description: This program will convert the number of miles to kilometers based on user input.

#include <iostream>

int main()
{
	//Variables
	float numberOfMiles;
	float numberOfKm;

	//Input
		std::cout << "Enter the number of miles you want to convert: ";
		std::cin >> numberOfMiles;

	// Processing the output
//	numberOfMiles = 2;
	numberOfKm = numberOfMiles * 1.609344;

	// Output
    std::cout << numberOfMiles << " Miles converted to Killometers: " << numberOfKm << "\n";
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
