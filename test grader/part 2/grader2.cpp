//This program takes and 2 input files (students & grades) and outputs their letter grade to out output.txt

#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	ifstream fin("students.txt");
	ifstream fin2("grades.txt");
	ofstream fout("report.txt");

	string fn1, fn2, ln1, ln2, grade1, grade2;
	float stg1, stg2, stg3, stg4, stg5, stg6;
	int avg1, avg2;
	
	

	fin >> fn1 >> ln1 >> fn2 >> ln2;
	fin2 >> stg1 >> stg2 >> stg3 >> stg4 >> stg5 >> stg6;

	avg1 = (stg1 + stg2 + stg3) / 3;
	avg2 = (stg4 + stg5 + stg6) / 3;

	if (avg1 >= 100)
		grade1 = "Teacher was far too easy.";

	else if (avg1 >= 90)
		grade1 = "A";

	else if (avg1 >= 80)
		grade1 = "B";

	else if (avg1 >= 70)
		grade1 = "C";

	else if (avg1 >= 60)
		grade1 = "D";

	else
		grade1 = "F";

	if (avg2 >= 100 )
		grade2 = "Teacher was far too easy.";

	else if (avg2 >= 90)
		grade2 = "A";

	else if (avg2 >= 80)
		grade2 = "B";

	else if (avg2 >= 70)
		grade2 = "C";

	else if (avg2 >= 60)
		grade2 = "D";

	else
		grade2 = "F";

	

	fout << "Student's Name\t" << "\tStudent's Grade" << endl;
	fout << ln1 << ", " << fn1 << "\t" <<  grade1 << endl;
	fout << ln2 << ", " << fn2 << "\t\t" <<  grade2 << endl;

	return 0;

}
