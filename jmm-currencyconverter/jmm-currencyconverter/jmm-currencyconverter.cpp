// jmm-currencyconverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By: Jason Martinez
//Date Created: 02/06/2020
//Date Finished: 02/11/2020
//Description: This program will convert US Dollars (USD) based on user input into British Pound Sterling (GBP).

#include <iostream>

int main()
{
//Variables

	float usDollar = 0.0f;
	float poundSterling = 0.0f;

//Input

   std::cout << "Currency Exchange\n";
   std::cout << "Please enter your amount in USD: $";
   std::cin >> usDollar;
   std::cout << "\n";

//Processing

	poundSterling = usDollar / 1.29f;

//Output

	std::cout << usDollar << " US Dollars converted to " << poundSterling << " British Pound Sterling.\n";
}
