/* MUHAMMAD HAYYAN
 23I-2041___CY-A
 Assignment#03____Q11*/
 
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
		//Program to calculate monthly payment on loan
	
	float loan, rate, monthly_pay, paid_back, interest;
	int payments;
	
		//Taking Inputs
	cout<< "\nLoan Amount:\t\t\t$ ";
	cin>> loan;
	cout<< "\nMonthly interest rate(%):\t";
	cin>> rate; 
	cout<< "\nNumber Of Payments: \t\t";
	cin>> payments;
	
		//Calculations
	rate = rate/100;
	monthly_pay = (rate * pow(1+rate, payments))/(pow(1+rate, payments) - 1);
	monthly_pay   = monthly_pay * loan;
	paid_back   = monthly_pay * payments;
	interest    = paid_back - loan;
	
		//Outputting calculations
	cout<< "\nMonthly Payment:\t\t$ "<<setprecision(2)<<fixed<<monthly_pay<<endl; 
	cout<< "\nAmount Paid Back:\t\t$ "<<setprecision(2)<<fixed<<paid_back<<endl;
	cout<< "\nInterest Paid:\t\t\t$ "<<setprecision(2)<<fixed<<interest<<endl;
	
	return 0;	
}
