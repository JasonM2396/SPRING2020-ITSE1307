// jmm-bmi.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date Created: 3/7/2020
// Date Finished: 3/9/2020
// Description: This program will calculate the body fat and body fat percentage based on the gender of the person.

#include <iostream>
using namespace std;

int main()
{
	char genderChoice;
	float fltBodyWeight, fltWrist, fltWaist, fltHip, fltForearm;
	float fltA1, fltA2, fltA3, fltA4, fltA5, fltB, fltBodyfat, fltBodyfatPercentage;

    cout << "Please enter your gender. If you are a male, enter 'm'. If you are female, enter 'f'. ";
	cin >> genderChoice;

	switch (genderChoice)
	{
	//Female BMI

		case 'f':
		//Input - Female
//		cout << "You are a female." << endl;
			cout << "Enter body weight: ";
			cin >> fltBodyWeight;
			fltA1 = (fltBodyWeight * 0.732f) + 8.987f;

			cout << "Enter wrist measurement: ";
			cin >> fltWrist;
			fltA2 = (fltWrist) / 3.140f;

			cout << "Enter waist measurement: ";
			cin >> fltWaist;
			fltA3 = (fltWaist) * 0.157f;

			cout << "Enter hip measurement: ";
			cin >> fltHip;
			fltA4 = (fltHip) * 0.249f;

			cout << "Enter forearm measurement: ";
			cin >> fltForearm;
			fltA5 = (fltForearm) * 0.434f;

		//Output, calculating B, Body fat and body fat percentage - Female

			fltB = fltA1 + fltA2 - fltA3 - fltA4 + fltA5;
			fltBodyfat = fltBodyWeight - fltB;
			cout << "Your body fat = " << fltBodyfat << endl;
			fltBodyfatPercentage = (fltBodyfat * 100) / fltBodyWeight;
			cout << "Your body fat percentage = " << fltBodyfatPercentage << "%";
			break;

	// Male BMI

	case 'm':
		//Input - Male
//		cout << "You are a male." << endl;
			cout << "Enter body weight: ";
			cin >> fltBodyWeight;
			fltA1 = (fltBodyWeight * 1.082f) + 94.42f;

		cout << "Enter wrist measurement: ";
		cin >> fltWrist;
		fltA2 = (fltWrist) * 4.15f;

		//Output, calculating B, Body fat and body fat percentage - Male

			fltB = fltA1 - fltA2;
			fltBodyfat = fltBodyWeight - fltB;
			cout << "Your body fat = " << fltBodyfat << endl;
			fltBodyfatPercentage = (fltBodyfat * 100) / fltBodyWeight;
			cout << "Your body fat percentage = " << fltBodyfatPercentage << "%";
			break;
		default: // If an invalid character is entered
			cerr << "Invalid character entered";
			return 1;
	}
	return 0;
}