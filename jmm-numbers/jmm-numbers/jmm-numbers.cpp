// jmm-numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date created: 3/24/20
// Date completed: 3/30/20
// Description: This program will convert user input to individual digits and adds the sum of each digit.
// Read Citiation and Credits at line 42.

#include <iostream>
#include <string>
int main()
{
	{
		int intNumber = 3456;
		int intIndividualDigits = 0;
		int intSum = 0;
		std::string strOutput; // Done to prevent the number reversal after input.
		std::cout << "Please enter a number: ";
		std::cin >> intNumber;

	intNumber = std::abs(intNumber); // This will convert a negative number the user inputs into positive, this prevents the sum equaling to zero.

		while (intNumber != 0)
		{
			intIndividualDigits = intNumber % 10;
			intSum = intSum + intIndividualDigits;
			intNumber = intNumber / 10;
			strOutput.insert(0, std::to_string(intIndividualDigits));
			strOutput.insert(0, " ");
		}

		std::cout << strOutput << std::endl;
		std::cout << "The sum of the number is: " << intSum << std::endl;
		return 0;
	}
}

// Citations and Credits: Cpprefernce.com for helping me learn the abs std function: https://en.cppreference.com/w/cpp/numeric/math/fabs
