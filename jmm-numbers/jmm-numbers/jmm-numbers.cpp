// jmm-numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date created: 3/24/20
// Date completed: 3/30/20
// Description: This program will convert user input to individual digits and adds the sum of each digit.
// Read Citiation and Credits at line 42.

#include <iostream>
#include <sstream> // To convert the interger to a string.
int main()
{
	int intNum = 0;
	int intSum = 0;
	int intRemainder = 0;

	// User Input
	std::cout << "Please enter an integer: ";
	std::cin >> intNum;

	std::stringstream ssNumConv;
	ssNumConv << intNum;
	std::string strDigits; // I was unable to get both numbers to display correcting without using strings, so converting the int to a string was the only way.
	ssNumConv >> strDigits;

	std::cout << std::endl;
	std::cout << strDigits;
	intNum = std::abs(intNum); // When the user inputs a negative number, so the sum is not equal to zero.
	std::cout << std::endl;

	// While loop and output
	while (intNum > 0)
	{
		intRemainder = intNum % 10;
		intSum = intSum + intRemainder;
		intNum = intNum / 10;
	}

	std::cout << std::endl;
	std::cout << "The sum of the number is: " << intSum << std::endl;
}

/* Citations and Credits: Javatpoint for helping me on the code for sum of the digits and converting the int to a string for the number display to be correct.
And pprefernce.com for helping me learn the abs std function: https://en.cppreference.com/w/cpp/numeric/math/fabs
Javatpoint sites: https://www.javatpoint.com/cpp-int-to-string 
https://www.javatpoint.com/sum-of-digits-program-in-cpp
*/