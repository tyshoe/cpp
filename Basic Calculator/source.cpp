//This program is a basic calculator (+)(-)(*)(/)(^2)(sqrt)

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int choice;
	float n1, n2, result;

	cout << "CALCULATOR\n" <<
			"By TYSH\n";

	while (true)
	{
		cout << "\n1. Addition\n" <<
			"2. Subtraction\n" <<
			"3. Multiplication\n" <<
			"4. Division\n" <<
			"5. Square\n" <<
			"6. Square root\n" <<
			"7. Exit\n" <<
			"\nWhat would you like to do? ";
		//type whole number of your choice
		cin >> choice;

		if (choice == 7)
			break;

		if (choice == false)
			cout << "please enter an integer";
			cin.clear();
			cin.ignore(123, '\n');
			break;

		switch (choice)
		{
		case 1: cout << "\nEnter two values separated with a space\n" << endl;
			cin >> n1 >> n2;
			result = n1 + n2;
			cout << "\n" << n1 << "+" << n2 << "=" << result << endl;
			cout << "~" << setw(60) << setfill('~');
			break;

		case 2: cout << "\nEnter two values separated with a space\n" << endl;
			cin >> n1 >> n2;
			result = n1 - n2;
			cout << "\n" << n1 << "-" << n2 << "=" << result << endl;
			cout << "~" << setw(60) << setfill('~');
			break;

		case 3: cout << "\nEnter two values separated with a space\n" << endl;
			cin >> n1 >> n2;
			result = n1 * n2;
			cout << "\n" << n1 << "*" << n2 << "=" << result << endl;
			cout << "~" << setw(60) << setfill('~');
			break;

		case 4: cout << "\nEnter two values separated with a space\n" << endl;
			cin >> n1 >> n2;
			result = n1 / n2;
			cout << "\n" << n1 << "/" << n2 << "=" << result << endl;
			cout << "~" << setw(60) << setfill('~');
			break;

		case 5: cout << "\nEnter the value you want to square\n" << endl;
			cin >> n1;
			result = n1 * n1;
			cout << "\n" << n1 << "^2 = " << result << endl;
			cout << "~" << setw(60) << setfill('~');
			break;
			
		case 6: cout << "\nEnter the value you want to get the square root of\n" << endl;
			cin >> n1;
			result = sqrt(n1);
			cout << "\nSquare root = " << result << endl;
			cout << "~" << setw(60) << setfill('~');
			break;
		default: cout << "\n~~~Enter a valid option~~~" << endl;
			break;
		}

	}
	return 0;
}
