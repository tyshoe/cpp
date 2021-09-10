//This program calculates the amount of open seats for teachers.  It takes input from an input.txt and outputs the data to an output.txt

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	string subject, building, room;
	int seats, students, open_seats;

	fin >> subject>>building>>room>>seats>>students;

	open_seats = seats - students;

	fout << "Subject\t" << "\tBuilding\t" << "Room\t" << "\tOpen Seats" << endl;
	fout << "............... " << "............... " << "............... " << "............... " << endl;
	fout << setw(7) << subject << setw(24) << building << setw(4) << room << setw(28) << open_seats << endl;
	fin.close();
	fout.close();
	system("pause");

	return 0;

}
