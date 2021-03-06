// jmm-milekmconverter.cpp : Defines the entry point for the console application.
// By: Jason Martinez
// Date: 02/11/20
// Description: This program will allow users to convert miles to kilometers and convert kilometers to miles based on their input.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
// Variables
   float numberOfMi = 0.0f;
   float numberOfKm = 0.0f;

 // input miles
   cout << "Enter the number of Miles: ";
   cin >> numberOfMi;

 // Processing Miles
   numberOfKm = numberOfMi * 1.609344f;

 // Output miles
   cout << numberOfMi << " Miles converted to " << numberOfKm << " Kilometers\n";

// Input Kilometer
   cout << "Enter the number Kilometers: ";
   cin >> numberOfKm;

// Processing Kilometer
   numberOfMi = numberOfKm * 0.621371f;

// Output Kilometer
   cout << numberOfKm << " Kilometers converted to " << numberOfMi << " Miles\n";
   return 0;
}

