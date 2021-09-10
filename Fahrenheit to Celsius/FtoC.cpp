#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	float t1, t2, t3, t4, t5, t6;
	string n1, n2, n3, n4, n5, n6, Farenheit, Celsius;
	ifstream fin("input.txt");
	ofstream fout("output.txt");

	fin >> t1 >> n1;
	fin >> t2 >> n2;
	fin >> t3 >> n3;
	fin >> t4 >> n4;
	fin >> t5 >> n5;
	fin >> t6 >> n6;

	
	if (n1 == "Celsius")
		fout << t1 << " " << n1 << " " << (t1 / 5) * (9) + 32 << " " << "Fahrenheit" << endl;
	else if (n1 == "Fahrenheit")
		fout << t1 << " " << n1 << " " << (t1 - 32) * 5 / 9 << " " << "Celsius" << endl;
	else
		fout << "There was no temperature identifier";
	

	if (n2 == "Celsius")
		fout << t2 << " " << n2 << " " << (t2 / 5) * (9) + 32 << " " << "Fahrenheit" << endl;
	else if (n2 == "Fahrenheit")
		fout << t2 << " " << n2 << " " << (t2 - 32) * 5 / 9 << " " << "Celsius" << endl;
	else
		fout << "There was no temperature identifier";


	if (n3 == "Celsius")
		fout << t3 << " " << n3 << " " << (t3 / 5) * (9) + 32 << " " << "Fahrenheit" << endl;
	else if (n3 == "Fahrenheit")
		fout << t3 << " " << n3 << " " << (t3 - 32) * 5 / 9 << " " << "Celsius" << endl;
	else
		fout << "There was no temperature identifier";


	if (n4 == "Celsius")
		fout << t4 << " " << n4 << " " << (t4 / 5) * (9) + 32 << " " << "Fahrenheit" << endl;
	else if (n4 == "Fahrenheit")
		fout << t4 << " " << n4 << " " << (t4 - 32) * 5 / 9 << " " << "Celsius" << endl;
	else
		fout << "There was no temperature identifier";
	

	if (n5 == "Celsius") 
		fout << t5 << " " << n5 << " " << (t5 / 5) * (9) + 32 << " " << "Fahrenheit" << endl;
	else if (n5 == "Fahrenheit")
		fout << t5 << " " << n5 << " " << setprecision(4) << (t5 - 32) * 5 / 9 << " " << "Celsius" << endl;
	else
		fout << "There was no temperature identifier";
	
	if (n6 == "Celsius") 
		fout << t6 << " " << n6 << " " << (t6 / 5) * (9) + 32 << " " << "Fahrenheit" << endl;
	else if (n6 == "Fahrenheit")
		fout << t6 << " " << n6 << " " << setprecision(4) << (t6 - 32) * 5 / 9 << " " << "Celsius" << endl;
	else
		fout << "There was no temperature identifier";

return 0;
}

