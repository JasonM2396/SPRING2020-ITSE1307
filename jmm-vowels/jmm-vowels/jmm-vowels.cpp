// jmm-vowels.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date Created: 4/14/20
// Date Finished: 4/21/20
// Description: This program will increase the number of vowels if the user inputs a letter that is a vowel, and loops if the user asks if they want to enter another character.
// Citations and credits are at line 66.

#include <iostream>
//#include <string>
using namespace std;

bool isVowel(char);

bool isVowel(char chrLetter) {
	switch (chrLetter) //Switch for if statement
	{
	case 'a': 
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return true; // Only added to u since this way is much more efficient to have each case call the same thing
		break;
	default:
		return false;
		break;
	}
}

int main()
{
	char chrLetter;
	bool loopStarted;
	char chrAsk;
	int intVowelCounter = 0;

	do // Values
	{
		loopStarted = true;
		intVowelCounter = 0;
		do // Initiating the loop
		{
			cout << "Please enter a character: " << endl;
			cin >> chrLetter;

			if (isVowel(chrLetter)) {
				intVowelCounter++;
				cout << "The character you entered is a vowel. Do you want to enter another chraracter (y or n)? " << endl;
				cin >> chrAsk;
				if (chrAsk == 'n') {
					loopStarted = false;
				}
			}
			else {
				cout << "The character you entered is not a vowel. Do you want to enter another chraracter (y or n)? " << endl;
				cin >> chrAsk;
				if (chrAsk == 'n') {
					loopStarted = false;
				}
			}
		} while (loopStarted);
		cout << "Vowels counted: " << intVowelCounter << endl;
	} while (false); // finish loop
	
}
// Credits to giftalp from Daniweb for help on the do while loops. Used as a reference. https://www.daniweb.com/programming/software-development/threads/193122/sum-of-vowels