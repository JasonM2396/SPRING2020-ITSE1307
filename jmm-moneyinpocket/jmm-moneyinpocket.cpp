// jmm-moneyinpocket.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   float fltMoney = 185.96;

   cout << "Enter your current change in pocket:";
   cin >> fltMoney;

   int intDollars = (int) (fltMoney / 1.0f);
   int intCents = (int)((fltMoney - (float)intDollars) * 100.0f);

   int intRemainingDollars = intDollars;

   int intHundredBill = (intRemainingDollars / 100);
   cerr << "R$: " << intRemainingDollars << endl;
 //  intRemainingDollars = (intRemainingDollars - (intHundredBill * 100)); // <--- Not needed, using modulus method.
   intRemainingDollars = (intRemainingDollars % 100);
//   cerr << "R$: " << intRemainingDollars << endl;
   int intFiftyBill = (intRemainingDollars / 50);
   intRemainingDollars = (intRemainingDollars % 50);
//   cerr << "R$: " << intRemainingDollars << endl;
   int intTwentyBill = (intRemainingDollars / 20);
   intRemainingDollars = (intRemainingDollars % 20);

//   cerr << "R$: " << intRemainingDollars << endl;
   int intTenBill = 0;
   int intFiveBill = 0;
   int intOneBill = 0;

   int intRemainingCents = intCents;

   int intQuarter = (intRemainingCents / 25);
   intRemainingCents = (intRemainingCents % 25);
   int intDime = 0;
   int intNickel = 0;
   int intPenny = 0;
   int intTotal = 0;

   cout << "$: " << intDollars << endl;
   cout << ".: " << intCents << endl;

   cout << "100: " << intHundredBill << endl;
   cout << "50: " << intFiftyBill << endl;
   cout << "20: " << intTwentyBill << endl;
   cout << "10: " << intTenBill << endl;
   cout << "5: " << intFiveBill << endl;
   cout << "1: " << intOneBill << endl;



    return 0;
}

