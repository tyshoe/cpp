//This program does the product of 2 numbers,  Perimeter of a rectangle,  & radius of circle. 

#include <iostream>
#include <string>

using namespace std;

int main() {

	const string prompt1 = "The product of 2 numbers";
	const string prompt2 = "The perimeter of a rectangle";
	const string prompt3 = "The radius of a circle";

	float output1;
	float output2;
	float output3;
	float number1, number2, length, height, radius;
	const float pi = 3.141593;
	
	//product of 2 numbers
	cout << prompt1 << endl;
	cout << "number1: ";
	cin >> number1;
	cout << "number2: ";
	cin >> number2;
	output1 = number1 * number2;
	cout << "Product: " << output1 << "\n\n";

	//perimeter of a rectangle
	cout << prompt2 << endl;
	cout << "input length: ";
	cin >> length;
	cout << "input height: ";
	cin >> height;
	output2 = 2 * (length + height);
	cout << "Perimeter: " << output2 << "\n\n";

	//radius of a circle
	cout << prompt3 << endl;
	cout << "radius: ";
	cin >> radius;
	output3 = 2 * pi * radius;
	cout << "Radius: " << output3 << "\n\n";
	
	return 0;

}
