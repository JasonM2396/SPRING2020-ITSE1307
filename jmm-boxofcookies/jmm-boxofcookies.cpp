// jmm-boxofcookies.cpp : Defines the entry point for the console application.
// By: Jason Martinez
// Date Created: February 25, 2020
// Date Finished: February 27, 2020
// Description: This program will show the amount of boxed cookies, remaining unboxed cookies, number of containers and 
// leftover boxes depending on the amount of cookies the user inputs.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   int intCookiesInBox = 24;
   int intBoxesInContainer = 75;
   int intNumberOfCookies = 0;

   //TODO: Add user input logic
   cout << "Please enter the total number of cookies: ";
   cin >> intNumberOfCookies;
   cout << endl;

   int intNumberOfBoxes = intNumberOfCookies / intCookiesInBox;
   int intRemainingCookies = intNumberOfCookies % intCookiesInBox;
   int intNumberOfContainers = intNumberOfBoxes / intBoxesInContainer;
   int intRemainingBoxes = intNumberOfBoxes % intBoxesInContainer;

   //TODO: Boxes and Remaining Cookies

   cout << "Number of Cookies: " << intNumberOfCookies << endl;
   cout << "Number of Boxes of Cookies (" << intCookiesInBox << " cookies): " << intNumberOfBoxes << endl;
   cout << "Number of Unboxed Cookies: " << intRemainingCookies << endl;

   // Containers and Remaining Boxes
   cout << "Number of Containers: (" << intBoxesInContainer << " boxes): " << intNumberOfContainers << endl;
   cout << "Number of Remaining Boxes: " << intRemainingBoxes << endl;
    return 0;
}

