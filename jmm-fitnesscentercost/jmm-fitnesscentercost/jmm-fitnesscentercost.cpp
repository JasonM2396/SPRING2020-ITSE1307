// jmm-fitnesscentercost.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Jason Martinez
// Date 4/23/2020
// Credits and citiations listed at line 87. Note listed as well at line 88.

#include <iostream>
#include <iomanip>
#include <string>

void prices(double&, double&);
void userInfo(bool&, bool&, bool&, int&, int&);
void costOfMembership(double, int, double, int, bool, bool, bool);


int main()
{
	bool isSeniorCitizen;
	bool boolFiveOrMore;
	bool boolTweleveOrMoreMonths;
	int intMonths = 0;
	int intSessions = 0;
	double dblRegularMembershipPerMonth = 0;
	double dblPersonalTrainingSession = 0;
	double dblMemberCost = 0;

	std::cout << std::fixed << std::showpoint << std::setprecision;

	void displayInfo();

	std::cout << std::endl;

	prices(dblRegularMembershipPerMonth, dblPersonalTrainingSession);

	userInfo(isSeniorCitizen, boolFiveOrMore, boolTweleveOrMoreMonths, intMonths, intSessions);

	costOfMembership(dblMemberCost, intMonths, dblPersonalTrainingSession, intSessions, isSeniorCitizen, boolTweleveOrMoreMonths, boolFiveOrMore);

		std::cout << "Total cost: $" << dblMemberCost;
}

void displayInfo() 
{
	std::cout << "Welcome to the Fitness Center!" << std::endl;
	std::cout << "Several discounts are available right now." << std::endl;
	std::cout << "Discount for senior citizens is 30%." << std::endl;
	std::cout << "If a membership is bought and paid for 12 or more months, the discount is 15%." << std::endl;
	std::cout << "If more than five personal training sessions are bought and paid for, the discount on each session is 20%." << std::endl;
}

void prices(double& dblStandardPrice, double& dblCostOfPersonalTrnrSes) {
	std::cout << "Enter the cost of the standard membership per month: " << std::endl;
	std::cin >> dblStandardPrice;
	std::cout << "Enter the cost of a personal trainer session: " << std::endl;
	std::cin >> dblCostOfPersonalTrnrSes;
}
void userInfo(bool &seniorCitizen, int &intNumberOfMonths, int &intNumberOFSessions, bool bFiveMonthsOrMore, bool bTweleveOrMoreMonths)
{
	char chrChoice;
	std::cout << "Are you a senior citizen (y/n) ? " << std::endl;
	std::cin >> chrChoice;

	if (chrChoice == 'y' || chrChoice == 'Y')
	{
		seniorCitizen = true;
	}
	else
	{
		seniorCitizen = false;
	}
	std::cout << std::endl;

	std::cout << "Enter the number of personal training sessions you are buying: ";
	std::cin >> intNumberOfMonths;

	if (intNumberOFSessions > 5)
	{
		bFiveMonthsOrMore = true;
	}
	else
		bFiveMonthsOrMore = false;

	std::cout << std:: endl;
}


// Credits: Stack Overflow for the some of code used as a reference. https://stackoverflow.com/questions/48635617/calculate-the-discount-fitness-price-30-20-and-15-off
// Unfortunately I was unable to fully complete this program, the Linker Tools Errors were not making me happy,
// and as a result was unable to complete the program. This is all I have. How do I resolve Linker Tools errors?