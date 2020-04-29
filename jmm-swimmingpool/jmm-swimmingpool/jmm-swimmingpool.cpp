// jmm-swimmingpool.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Credits on line 30

#include <iostream>
#include "swimmingPool.h"

int main()
{
	int intLength, intWidth, intDepth, intWaterFillRate, intWaterDrainRate;
    std::cout << "Enter the length of the pool: " << std::endl;
	std::cin >> intLength;
	std::cout << "Enter the width of the pool: " << std::endl;
	std::cin >> intWidth;
	std::cout << "Enter the depth of the pool: " << std::endl;
	std::cin >> intDepth;
	std::cout << "Enter the rate of the water filling the pool: " << std::endl;
	std::cin >> intWaterFillRate;
	std::cout << "Enter rate of the water draining from the pool: " << std::endl;
	std::cin >> intWaterDrainRate;

	swimmingPool mySwimmingPool(intLength, intWidth, intDepth, intWaterFillRate, intWaterDrainRate);
	double dblWaterCapcity = mySwimmingPool.dblAmountOfWater();
	std::cout << "Total water capacity of the swimming pool: " << dblWaterCapcity << std::endl;

	double dblAmountOfTimeToFill = mySwimmingPool.dblWaterFillTime();
	std::cout << "Time needed to fill the pool: " << dblAmountOfTimeToFill << std::endl;
}


// Credits go to Stack Overflow and CPlusPlus, I read the websites as references.
// https://stackoverflow.com/questions/35166993/beginner-c-programmer-stuck-writing-a-class
// http://www.cplusplus.com/forum/beginner/162535/