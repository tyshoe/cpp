//This program takes an input file and allocates memory [dynamic array with pointers] in order to output different information
//local variables are used inside of things like for loops
//global variables are used multiple times and can be called into for loops

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> //manipulating input output

using namespace std;

string invalidCount()
{
	string str =  "Error: The votes must be a positive value.";
	cout << str;
	return str;
}

int main()
{
	ifstream fin;
	fin.open("candidates.txt");

	double totalVotes = 0;
	int currentWinnerCount = -1;
	int currentWinnerPosition = -1;

	if (fin.is_open()) //check to see if a file is open
	{
		int size;
		fin >> size;	//metadata - first line in candidates.txt

		string* first = new string[size]; //dynamic arrays
		string* last = new string[size];
		int* vote = new int[size];
		double* percent = new double[size];

		cout << "Candidates\tVotes\tPercentage" << endl;

		//FOR LOOPS EXPLAINED
		//(int i = 0;) declaring local variable --- local variable is a variable that can be used many times (ex. x or i)
		//(i < size;) same as an if check	---	this ensures that the for loop only runs for as many lines are in the txt file... since size is metadata, it wont loop more than 9 times
		//(i++) adding 1 per try.
		//(i) represents what position you are in the for loop

		for (int i = 0; i < size; i++) //fin
		{
			fin >> first[i];
			fin >> last[i];
			fin >> vote[i];

			if (vote[i] > currentWinnerCount) //set current winner
			{
				currentWinnerCount = vote[i];
				currentWinnerPosition = i;
			}
			
			//this will catch if the votes are negative and will prevent negative votes from  being taken away from the totalVotes number
			if (vote[i] < 0)
				totalVotes = totalVotes;
			else
				totalVotes = totalVotes + vote[i]; //sets totalVotes = vote[i] then adds itself(totalVotes)
			
		}
		
		for (int i = 0; i < size; i++) //cout 
		{
			percent[i] = ((vote[i] / totalVotes) * 100); // percentage function
			cout << first[i] << " "; //first name
			cout << last[i] << "\t"; //last name

			try	
			{

				//exception for negative votes
				if (vote[i] < 0)
				{
					throw vote[i];
					break;
				}
				else if (vote[i] >= 0)
					cout << vote[i] << "\t"; //votes
					cout << setprecision(4) << percent[i] << "%" << endl; //percentage
			}
			catch (int x)
			{
				invalidCount();
			}
		}
			
		cout << "\n\nTotal votes: " << totalVotes << endl;
		cout << "\nWinner: " << first[currentWinnerPosition] << " " << last[currentWinnerPosition] << endl;
		cout << "They had " << vote[currentWinnerPosition] << " votes or " << percent[currentWinnerPosition] << "% of the total votes" << endl;

	}

	return 0;
}
