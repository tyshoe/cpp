#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int ratingMinimum;
int score;
string state, location, file, University = " ";

void PromptInput() {
	cout << "Enter the name of your unviserity list file" << endl;
	cout << "example : input.txt" << endl;
	cin >> file;
}

void RatingThreshold(int& a) {
	cout << "What is your preferred minimum rating?\nexample : 75" << endl;
	cin >> a;
}

void Heading() {
	cout << "University\t" << "Rating\t" << "\tCity\t" << "\tState" << "\n";
	cout << setw(14) << setfill('-') << "-\t" << setw(14) << "-\t" << setw(12) << "-\t" << setw(14) << "-" << endl;
}

bool Data(int& d) {
	if (d > ratingMinimum)
		return true;
	else return false;
}

void Output(string& a, string& b, string& c, int& d) {
	cout << a << setw(16) << setfill(' ') << d << setw(24) << c << setw(7) << b << endl;
}

int main() {
	
	PromptInput();
	ifstream in(file);
	ofstream fout("output.txt");
	RatingThreshold(ratingMinimum);
	Heading();
	while (!in.eof()) {
		in >> University;
		in >> score;
		in >> state;
		in >> location;
		if (Data(score))
			Output(University, state, location, score);
	}
	fout << "University\t" << "Rating\t" << "\tCity\t" << "\tState" << "\n";
	fout << setw(14) << setfill('-') << "-\t" << setw(14) << "-\t" << setw(12) << "-\t" << setw(14) << "-" << endl;
	fout << University << setw(16) << setfill(' ') << score << setw(24) << location << setw(7) << state << endl;


	return 0;
}
