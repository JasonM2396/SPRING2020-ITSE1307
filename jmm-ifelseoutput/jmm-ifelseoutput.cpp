// jmm-ifelseoutput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   int intChoice = 0;

   cout << "Enter a positive whole number: ";
   cin >> intChoice;

   if (intChoice > 0) {
      cout << "Continue with logic\n";
//      return 1;
   }
   else {
      cerr << "Invalid input, exiting program\n";
      return 1;
   }
    return 0;
}

