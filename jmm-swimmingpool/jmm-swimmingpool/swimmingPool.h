#pragma once
// Credits on line 21
class swimmingPool
{
public:
	swimmingPool();
	swimmingPool(int intL, int intW, int intD, int intRateFill, int intRateDrain);
	double dblAmountOfWater();
	double dblWaterFillTime();
	double dblAddWater(double time);
	double dblRemoveWater(double time);
	double dblTotalWater();

private:
	int intLength;
	int intWidth;
	int intDepth;
	int intWaterFillRate;
	int intWaterDrainRate;
};
// Credits go to Stack Overflow and CPlusPlus, I read the websites as references.
// https://stackoverflow.com/questions/35166993/beginner-c-programmer-stuck-writing-a-class
// http://www.cplusplus.com/forum/beginner/162535/