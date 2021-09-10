//This program guesses the users number

#include <iostream>
using namespace std;

const int MAX_VALUE = 19;
const int MIN_VALUE = 1;

int guess;
int high = MAX_VALUE;
int low = MIN_VALUE;
int attempt = 0;
char choice;


int main() {


    cout << "Think about a number between " << MIN_VALUE << " and " << MAX_VALUE << ". \n\n";
    guess = 10;
   
    while ((high - low)) {
        cout << "Is this your number: " << guess << "\nEnter Y for Yes\nEnter H for Higher\nEnter L for Lower \n\n";
        cin >> choice;
        attempt++;
        if (attempt > 4 ) {
            cout << "You Cheated..." << endl;
            break;
        }
        if (choice == 'y' || choice == 'Y') {
            cout << "Your number is: " << guess << ".\n";
            break;
        }
        else if (choice == 'h' || choice == 'H') {
            low = guess;
            guess += ((high - low) / 2);
        }
        else if (choice == 'l' || choice == 'L') {
            high = guess;
            guess -= ((high - low) / 2);
        }
        else cout << "Incorrect choice." << endl;


    }
  
    system("pause");
    return 0;
}
