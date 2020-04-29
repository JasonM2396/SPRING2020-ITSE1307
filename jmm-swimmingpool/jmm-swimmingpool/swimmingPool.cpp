#include "swimmingPool.h"
#include <iostream>
// Credits on line 39

swimmingPool::swimmingPool()
{
	intLength = 0;
	intWidth = 0;
	intDepth = 0;
	intWaterFillRate = 0;
	intWaterDrainRate = 0;
}
swimmingPool::swimmingPool(int intL, int intW, int intD, int intRateFill, int intRateDrain)
{
	intLength = intL;
	intWidth = intW;
	intDepth = intD;
	intWaterFillRate = intRateFill;
	intWaterDrainRate = intRateDrain;
}
double swimmingPool::dblAmountOfWater()
{
	return (intLength * intWidth * intDepth);
}
double swimmingPool::dblWaterFillTime()
{
	return dblAmountOfWater() / intWaterFillRate;
}
double swimmingPool::dblAddWater(double time)
{
	return intWaterFillRate * time;
}
double swimmingPool::dblRemoveWater(double time)
{
	return intWaterDrainRate * time;
}


// Credits go to Stack Overflow and CPlusPlus, I read the websites as references.
// https://stackoverflow.com/questions/35166993/beginner-c-programmer-stuck-writing-a-class
// http://www.cplusplus.com/forum/beginner/162535/