//This program implements a recursive function to check to see if a user's input is a palindrome.

#include <iostream>
#include <iomanip>

using namespace std;

//function to check if the string forwards is the same as it is backwards
int isPalindrome(string input, int start, int end)
{
    if (end - start == 1 || start == end)
    {
        return 1;
    }
    else
    {
        if (input[start] == input[end])
        {
            return isPalindrome(input, start + 1, end - 1);
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int choice;//user choice for menu
    string input;//user input for palindrome check

    while (true)
    {
        //menu
        cout << "-" << setw(41) << setfill('-') << "\n";
        cout << "|" << "\t" << "The Palindrome Checker"         << "\t\t|"  << endl;
        cout << "|" << "\t" << "1. What is a Palindrome?"       << "\t|"    << endl;
        cout << "|" << "\t" << "2. Palindrome Examples"         << "\t\t|"  << endl;
        cout << "|" << "\t" << "3. Enter your own Palindrome"   << "\t|"    << endl;
        cout << "|" << "\t" << "4. Exit program."               << "\t\t|"  << endl;
        cout << "-" << setw(41) << setfill('-') << "\n";

        //user choice
        cout << "Input your choice: ";
        cin >> choice;

        //exit switch choice
        if (choice == 4)
            break;

        //failsafe in case user doesn't enter an integer
        //would like this to output a message to user to enter an integer, not a string but not sure how to write.  Maybe write an exception???
        if (choice == false)
            break;

        switch (choice)
        {

        //if user enters 1 choice for switch case, this code will execute
        case 1:
            cout << "Palindrome: a word, phrase or sequence that reads the same backwards as forwards" << endl;
            cout << "-" << setw(42) << setfill('-') << "\n\n";
            break;

        //if user enters 2 choice for switch case, this code will execute
        case 2:
            cout << "EXAMPLES" << endl;
            cout << "racecar" << endl;
            cout << "101" << endl;
            cout << "0" << endl;
            cout << "solos" << endl;
            cout << "radar" << endl;
            cout << "hannah" << endl;
            cout << "-" << setw(42) << setfill('-') << "\n\n";
            break;

        //if user enters 3 choice for switch case, this code will execute
        case 3:
            {
            cout << "Enter something to check if it is a Palindrome: ";
            cin >> input;
            int n = input.length();
            if (isPalindrome(input, 0, n - 1))
            {
            cout << "Your input is a Palindrome!" << endl;
            }
            else
            {
            cout << "Your input is not a Palindrome!" << endl;
            }
            cout << "-" << setw(42) << setfill('-') << "\n\n";
            break;
            }

        //if user enters invalid integer (choice > 4 or choice < 1) for switch case, this code will execute
        default:
            cout << "You must enter an integer and it must be a valid choice.\n";
            break;
        }
    }
    return 0;
}


