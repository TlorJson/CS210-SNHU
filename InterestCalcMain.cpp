#include <iostream>
#include "InterestCalc.h"
#include <vector>
#include <conio.h>
#include <iomanip>
using namespace std;
InterestCalc InitialDisplay(InterestCalc inputData) {
	// print inital requests and receive input
	double deposit;
	double monthly;
	double interest;
	int years;
	cout << "******************************" << endl;
	cout << "**********Data Input **********" << endl;
	cout << "Initial Investment Amount:" << endl;
	cin >> deposit;
	inputData.setInitialDeposit(deposit);
	cout << "Monthly Deposit:" << endl;
	cin >> monthly;
	inputData.setMonthlyDeposit(monthly);
	cout << "Annual Interest:" << endl;
	cin >> interest;
	inputData.setPercentInterest(interest);
	cout << "Number of years:" << endl;
	cin >> years;
	inputData.setNumberYears(years);
	cout << "Press any key to continue..." << endl;
	return inputData;
}
int main()
{
	char ch; // For detecting a keystroke
	do {
		//Display the initial view and receive input
		InterestCalc inputData;
		inputData = InitialDisplay(inputData);
		//Listen for a keystroke to continue
		ch = _getch();
		// Display the report excluding the monthly deposits
		inputData.showReport(0);
		cout << endl << endl;
		// Display the report with the monthly deposits
		inputData.showReport(inputData.getMonthlyDeposit());
		ch = _getch();
	} while (ch != NULL);
}