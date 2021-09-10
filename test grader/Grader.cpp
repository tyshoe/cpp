//This program calculates the average test score.  It reads an input.txt and outputs an output.txt

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int main() {

	ifstream fin("input.txt");
	ofstream fout("output.txt");

	string firstName, lastName;
	float test1score, test2score, test3score, test4score, test5score, averageScore;

	fin >> firstName >> lastName >> test1score >> test2score >> test3score >> test4score >> test5score;

	averageScore = (test1score + test2score + test3score + test4score + test5score) / 5;
	fout << setprecision(2) << fixed;

	fout << firstName << " " << lastName << endl;
	fout << "Test Scores:" << endl;
	fout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	fout << "Average score: " << setw(29) << setfill('.') << averageScore << endl;
	fout << "Test score 1: " << setw(30) << setfill('.') << test1score << endl;
	fout << "Test score 2: " << setw(30) << setfill('.') << test2score << endl;
	fout << "Test score 3: " << setw(30) << setfill('.') << test3score << endl;
	fout << "Test score 4: " << setw(30) << setfill('.') << test4score << endl;
	fout << "Test score 5: " << setw(30) << setfill('.') << test5score << endl;
	fout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	fin.close();
	fout.close();
	system("pause");

	return 0;
}
