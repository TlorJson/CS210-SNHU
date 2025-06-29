
#ifndef CS210_Project_2
#define CS210_Project_2
#pragma once
class InterestCalc
{
public:
	InterestCalc(); // Default constructor declaration
	// Setters and Getters
	void setInitialDeposit(double t_initialDeposit);
	void setMonthlyDeposit(double t_monthlyDeposit);
	void setPercentInterest(double t_percentInterest);
	void setNumberYears(int t_numberYears);
	double getInitialDeposit();
	double getMonthlyDeposit();
	double getPercentInterest();
	int getNumberYears();
	//function to calculate monthly balance
	double monthlyBalance(int t_months, double t_monthDeposit);
	//function to calculate monthy interest
	double monthlyInterest(int t_months, double t_monthDeposit);
	//function to calculate annual balance
	double annualBalance(int t_numYears, double t_depositAmount);
	//function to calculate annual interest
	double annualInterest(int t_numYears, double t_depositAmount);
	//function to display data
	void showReport(double t_monthlyDep);
private:
	double initialDeposit;
	double monthlyDeposit;
	double percentInterest;
	int numberYears;
};
#endif // Project_Two_Header_Files_InterestCalc_H_
