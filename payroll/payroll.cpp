//This Program calculates payroll by taking 2 inputs hours and payRate.  Then it outputs your earnings, which is a function that multiplies hours and payRate.

#include <iostream>

using namespace std;

int main() {
	// creates variables
	int hours ;
	float payRate ;

	cout << "Enter hours = ";  //Enter employee's hours worked for a full week (ex:25) //only enter whole numbers and round down
	cin >> hours; 
	cout << "Enter payrate = "; //Enter employee's hourly pay rate in USD (ex: 12.50)
	cin >> payRate;
	cout << "Total earned = "; //Shows how much the company will owe the employee for the hours worked

	//function to declare earnings
	float earnings = payRate * hours;

	cout << earnings << endl;

	return 0;
}
