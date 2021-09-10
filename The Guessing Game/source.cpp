//This program prompts the user to guess a secret number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int guess, secretnumber, loopCount;

	loopCount = 0;

	bool a = 0;

	srand(time(0));
	secretnumber = (rand() % 20 + 1);

	cout << "The Secret Number is a whole number between 1 and 20.\n" <<
		"You get 5 guesses to guess it right.  Good luck!\n\n";

	do
	{
		cout << "Guess " << loopCount + 1 << " = ";
		cin >> guess;
		loopCount++;


		if (secretnumber > guess)
			cout << "The secret number is higher.\n\n";
		
		else if (secretnumber < guess)
			cout << "The secret number is lower.\n\n";

		else if (secretnumber == guess)
			cout << "Correct!";

		if (secretnumber == guess) {
			a = true;
		}
	} while ((guess != secretnumber) && (loopCount < 5));

	if ((loopCount == 5) && (a == false)) {
		cout << "Game Over!";
	}

	return 0;
}
