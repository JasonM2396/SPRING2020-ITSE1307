// jmm-moneyinpocket.cpp : Defines the entry point for the console application.
// By: Jason Martinez
// Date: 3/3/20
// Description: This program has the user enter the amount of change in pocket, then will output the number of dollar bill types and cents types required.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   float fltMoney = 0.0f;

   cout << "Enter your amount of dollars including cents in pocket: ";
   cin >> fltMoney;

   int intDollars = (int) (fltMoney / 1.0f);
   int intCents = (int)((fltMoney - (float)intDollars) * 100.0f);

   int intRemainingDollars = intDollars; 

   cerr << "Starting $: " << intRemainingDollars << endl;
   int intHundredBill = (intRemainingDollars / 100);
 //  intRemainingDollars = (intRemainingDollars - (intHundredBill * 100)); // <--- Not needed, using modulus method.
   intRemainingDollars = (intRemainingDollars % 100);
   cerr << "Remaining $: " << intRemainingDollars << endl;
   int intFiftyBill = (intRemainingDollars / 50);
   intRemainingDollars = (intRemainingDollars % 50);
   cerr << "Remaining $: " << intRemainingDollars << endl;
   int intTwentyBill = (intRemainingDollars / 20);
   intRemainingDollars = (intRemainingDollars % 20);
  cerr << "Remaining $: " << intRemainingDollars << endl;
   int intTenBill = (intRemainingDollars / 10);
   intRemainingDollars = (intRemainingDollars % 10);
   cerr << "Remaining $: " << intRemainingDollars << endl;
   int intFiveBill = (intRemainingDollars / 5);
   intRemainingDollars = (intRemainingDollars % 5);
   cerr << "Remaining $: " << intRemainingDollars << endl;
   int intOneBill = (intRemainingDollars / 1);
   intRemainingDollars = (intRemainingDollars % 1);
   cerr << "Remaining $: " << intRemainingDollars << endl;

   int intRemainingCents = intCents;

   cerr << endl << "Starting cents: " << intRemainingCents << endl;
   int intQuarter = (intRemainingCents / 25);
   intRemainingCents = (intRemainingCents % 25);
   cerr << "Remaining cents: " << intRemainingCents << endl;
   int intDime = (intRemainingCents / 10);
   intRemainingCents = (intRemainingCents % 10);
   cerr << "Remaining cents: " << intRemainingCents << endl;
   int intNickel = (intRemainingCents / 5);
   intRemainingCents = (intRemainingCents % 5);
   cerr << "Remaining cents: " << intRemainingCents << endl;
   int intPenny = (intRemainingCents / 1);
   intRemainingCents = (intRemainingCents % 1);
   cerr << "Remaining cents: " << intRemainingCents << endl;


   cout << "$: " << intDollars << endl;
   cout << ".: " << intCents << endl;

   cout << endl << "Dollars" << endl;
   cout << "100: " << intHundredBill << endl;
   cout << "50: " << intFiftyBill << endl;
   cout << "20: " << intTwentyBill << endl;
   cout << "10: " << intTenBill << endl;
   cout << "5: " << intFiveBill << endl;
   cout << "1: " << intOneBill << endl;

   cout << endl << "Cents" << endl;
   cout << ".25: " << intQuarter << endl;
   cout << ".10: " << intDime << endl;
   cout << ".5: " << intNickel << endl;
//   cerr << "Remaining cents: " << intRemainingCents << endl;
   cout << ".1: " << intPenny << endl;


    return 0;
}

