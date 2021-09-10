//This program is a simple ATM.  It can check balance, deposit, withdraw, and exit.  
//ADD A FAIL SAFE IN CASE USER ENTERS STRING INSTEAD OF INTEGER*********************************************************

#include <iostream>
#include <iomanip>
using namespace std;

//holds the menu without returning any values
void showMenu()
{
	cout << "**********MENU**********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "************************" << endl;
}

int main()
{
	int choice; //users choice
	double balance = 500; //start balance

	do {
		showMenu(); //shows the menu

		cout << "Please choose an option: "; //asks user for option 
		cin >> choice;



		if (choice >= 1 && choice <= 4) //fail-safe to make sure the user enters valid input
		{
			switch (choice)
			{
			case 1:
				cout << "Your current balance is: " << "$" << fixed << setprecision(2) << balance << endl; break;
			case 2:
				char autodeposit;
				double depositAmount;
				cout << "Would you like to automatically deposit $10.00?\nType Y or N: ";
				cin >> autodeposit;
				if (autodeposit == 'Y')
				{
					depositAmount = 10;
					balance += depositAmount;
				}
				else
				{
					cout << "How much would you like to deposit: ";
					cin >> depositAmount;
					balance += depositAmount;
				}
				cout << "\nYour new balance is: $" << fixed << setprecision(2) << balance << endl;
				break;
			case 3:
				char autowithdraw;
				double withdrawAmount;
				cout << "Would you like to automatically withdraw $10.00?\nType Y or N: ";
				cin >> autowithdraw;
				if (autowithdraw == 'Y')
				{
					withdrawAmount = 10;
					balance -= withdrawAmount;
					cout << "\nYour new balance is: $" << fixed << setprecision(2) << balance << endl;
				}
				else
				{
					cout << "How much would you like to withdraw: ";
					cin >> withdrawAmount;
					{
						if (withdrawAmount <= balance)
							balance -= withdrawAmount;
						else
							cout << "Insufficient Funds" << endl;
					}
					cout << "\nYour new balance is: $" << fixed << setprecision(2) << balance << endl;
					break;
				}
			}
		}
		// this happens if the user enters an invalid input (choice)
		else 
			cout << "Please chooose a valid option." << endl;
	} while (choice != 4);


	system("pause");
	return 0;

}
