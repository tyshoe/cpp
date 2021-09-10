#include <iostream>
#include <iomanip>
#include <string>
#include "Pool.h"

using namespace std;



int main()
{
	pool myPool(5,10,4,10,10); // sets length, width, depth, fillRate, drainRate respectively
	pool yourPool(); // could be anyones pool;

	myPool.setMaxCapacity();
	myPool.setCurCapacity();

	int choice;							// user choice on function


	while (true)
	{
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Pool Attributes\n" ;									//description of pre-existing pool attributes
		cout << "Max Volume : " << myPool.getMax() << " gallons" << endl;
		cout << "Current Volume : " << myPool.getCur() << " gallons" << endl;
		cout << "Minimum Volume : " << myPool.getMin() << " gallons\n" << endl;

		cout << setfill(' ') << setw(32) << "| Select your option | \n";				//menu
		cout << setfill(' ') << setw(33) << "1 : Completely Fill Pool\n";
		cout << setfill(' ') << setw(34) << "2 : Completely Drain Pool\n";
		cout << setfill(' ') << setw(38) << "3 : Fill Pool for ___ minutes\n";
		cout << setfill(' ') << setw(39) << "4 : Drain Pool for ___ minutes\n";
		cout << setfill(' ') << setw(26) << "5 : Exit Program\n\n";
		cout << "Your choice: ";
		cin >> choice;						// user choice on function

		if (choice == 5)
			break;

		if (choice == false)
			break;

		switch (choice)
		{
		case 1:
			myPool.fillMax();
			myPool.setCurCapacity();


			cout << "\nTo compeletely fill your pool to a volume of " << myPool.getMax() << " gallons" << endl;
			cout << "Time elapsed : " << myPool.timeToMaxFill() << " minutes\n";
			cout << "Gallons added : " << myPool.fillMax() << " gallons\n";
		
			break;

		case 2:
			myPool.drainMax();
			myPool.setCurCapacity();

			cout << "\nTo compeletely drain your pool to a volume of " << myPool.getMin() << " gallons" << endl;
			cout << "Time elapsed : " << myPool.timeToMaxDrain() << " minutes\n";
			cout << "Gallons drained : " << myPool.drainMax() << " gallons\n";

			
			break;

		case 3:
			int x;
			cout << "\nHow long (in minutes) would you like to fill the Pool? ";

			cin >> x;
			myPool.setTimeFill(x);

			cout << "\nIn " << myPool.getTime() << " minutes " << myPool.fill() << " gallons of water was added to the pool" << endl;
			cout << "The new volume of your pool is " << myPool.getCur() << " gallons\n\n" << endl;
			break;

		case 4:
			int y;
			cout << "\nHow long (in minutes) would you like to drain the Pool? ";

			cin >> y;
			myPool.setTimeDrain(y);

			cout << "\nIn " << myPool.getTime() << " minutes " << myPool.drain() << " gallons of water was drained from the pool" << endl;
			cout << "The new volume of your pool is " << myPool.getCur() << " gallons\n\n" << endl;
			break;

		default: cout << "\n~~~Enter a valid option~~~\n\n" << endl;
			break;
		}

	}
	return 0;
}



