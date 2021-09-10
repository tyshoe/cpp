//This program takes 2 input files with last names and first names and sorts the names.  it outputs the sorted names to an output.txt

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	ifstream fin;
	fin.open("firstNames.txt");

	ifstream fin2;
	fin2.open("lastNames.txt");

	string fn1, fn2, fn3, fn4, fn5;
	string ln1, ln2, ln3, ln4, ln5;

	fin >> fn1 >> fn2 >> fn3 >> fn4 >> fn5;
	fin2 >> ln1 >> ln2 >> ln3 >> ln4 >> ln5;


	ofstream fout;
	fout.open("lastNamefirstName.txt");

	fout << ln1 << ", " << fn1 << endl;
	fout << ln2 << ", " << fn2 << endl;
	fout << ln3 << ", " << fn3 << endl;
	fout << ln4 << ", " << fn4 << endl;
	fout << ln5 << ", " << fn5 << endl;


	return 0;
}
