// jmm-mi2km_and_km2mi_converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date: 02/18/20
// Description: This program will convert Miles to Kilometers or Kilometers to Miles based on user input, and depending on which choice.

#include <iostream>
#include <cctype>

using namespace std;

const float FLT_MI2KM = 1.609344f;
const float FLT_KM2MI = 0.621371f;

int main()
{
	float fltUserInput = 0.0f;
	float fltConvertOutput = 0.0f;
	char chrUserChoice = ' ';

	cout << "Conversion of Miles to Kilometers and Kilometers to Miles";
	cout << "\nSelect your option. (m)i to km or (k)m to mi? "; // Type and enter m or k to confirm.
	cin >> chrUserChoice;
	chrUserChoice = tolower(chrUserChoice);

	if (chrUserChoice == 'm' || chrUserChoice == 'M') { // When the user enters m or M as their choice.
		cout << "\nEnter the number of miles traveled: ";
		cin >> fltUserInput;

		fltConvertOutput = fltUserInput * FLT_MI2KM;

		cout << "You've entered " << fltUserInput << " miles, that will be converted as " << fltConvertOutput << " kilometers.";
	}
	else if (chrUserChoice == 'k' || chrUserChoice == 'K') { // When the user enters k or K as their choice.
		cout << "\nEnter the number of kilometers traveled: ";
		cin >> fltUserInput;

		fltConvertOutput = fltUserInput * FLT_KM2MI;

		cout << "You've entered " << fltUserInput << " kilometers, that will be converted as " << fltConvertOutput << " miles.";
	}
	else { // If the user enters another character rather than m/M or k/K.
		cout << "You have entered an invalid character!" << endl;

	}
	return 0;
}
