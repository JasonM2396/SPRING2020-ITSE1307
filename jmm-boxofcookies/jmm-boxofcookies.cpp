// jmm-boxofcookies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   int intCookiesInBox = 24;
   int intBoxesInContainer = 75;
   int intNumberOfCookies = 375;

   //TODO: Add user input logic

   int intNumberOfBoxes = intNumberOfCookies / intCookiesInBox;
   int intNumberOfContainers = intNumberOfBoxes / intCookiesInBox;
   int intRemainingCookies = intNumberOfBoxes / intCookiesInBox;

   //TODO: Figure out number of containers

   cout << "Number of Cookies: " << intNumberOfCookies;
   cout << "Number of Unboxed Cookies: (" << intRemainingCookies << ")" << endl;
   cout << "Number of Boxes of Cookies: (" << intCookiesInBox << ")" << intNumberOfBoxes << endl;
   cout << "Number of Boxes in Containers: (" << intBoxesInContainer << ")" << endl;

    return 0;
}

