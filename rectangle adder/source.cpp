//This program uses a class (rectangleType) and redifines operators (operator overloading)
// 
//Operators are used to perform operations on variables and values.
// 
//------------------------Common Arithmetic Operators C++----------------------------
//[operator] [name]				[description]								[example]
//[+]		 addition			(Adds together two values)					x + y
//[-]		 subtraction		(Subtracts one value from another)			x - y
//[*]		 multiplication		(Multiplies two values)						x * y
//[/]	     division			(Divides one value by another)				x / y
//[%]		 modulus			(Returns the division remainder)			x % y
//[++]		 pre-increment		(Increases the value of a variable by 1)	++x
//[--]		 pre-decrement		(Decreases the value of a variable by 1)	--x
//[++]		 post-increment		(Increases the value of a variable by 1)	x++
//[--]		 post-decrement		(Decreases the value of a variable by 1)	x--	
//-----------------------------------------------------------------------------------
// 
//------------------------Common Relational Operators C++----------------------------
//[operator]				[description]								[example]
//[==]						equal to									x == y
//[!=]						not equal to								x != y
//[<]						less than									x < y
//[?]						greater than								x > y
//[<=]						less than or equal to						x <= y
//[>=]						greater than or equal to					x >= y
//-----------------------------------------------------------------------------------
// 
//------------------------Common Logical Operators C++-------------------------------
//[operator]			[description]									[example]			[additional info]		
//[!]					Not	This evaluates to false since it is true	!(5==5)				Reverses condition
//[&&]					And												(x>0 && y>0)		If both conditions are true, the result is true, otherwise false
//[||]					Or												(x>0 || y>0)		If either condition is true, the reuslt is true
//-----------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include "rectangleType.h"
using namespace std;


int main()
{
	rectangleType myYard;		//my yard - takes default parameters

	//takes users input to construct their yard dimensions
	int x, y;
	cout << "Enter your yard length and width in feet: ";
	cin >> x;
	cin >> y;
	int z = x * y;
	rectangleType yourYard(x, y, z);	//users yard

	//my yard attributes
	cout << "My Yard" << endl;
	cout << "Length:" << myYard.getLength() << endl;
	cout << "Width:" << myYard.getWidth() << endl;
	cout << "Area:" << myYard.area() << endl;
	cout << "\n";

	//your yard attributes
	cout << "Your Yard" << endl;
	cout << "Length:" << yourYard.getLength() << endl;
	cout << "Width:" << yourYard.getWidth() << endl;
	cout << "Area:" << yourYard.area() << endl;
	cout << "\n";

	rectangleType totalYard;	//yard attributes combined
	totalYard = myYard + yourYard;

	//testing + overload
	cout << "My Yard + Your Yard" << endl;
	cout << "Length:" << totalYard.getLength() << endl;
	cout << "Width:" << totalYard.getWidth() << endl;
	cout << "Area:" << totalYard.area() << endl;
	cout << "\n";

	rectangleType totalYard2;	//yard attributes combined
	totalYard2 = myYard - yourYard;

	//testing - overload
	if (myYard.area() >= yourYard.area())	//this checks to see if the operation can be performed.  If not it will outout else statement.
	{
		cout << "My Yard + Your Yard" << endl;
		cout << "Length:" << totalYard2.getLength() << endl;
		cout << "Width:" << totalYard2.getWidth() << endl;
		cout << "Area:" << totalYard2.area() << endl;
		cout << "\n";
	}
	else
		cout << "myYard - yourYard operation cannot be performed because it results in a negative area.\n\n";

	//testing == and != overloads
	cout << "Is the area of your yard equal to the area of mine?" << endl;
	if (myYard == yourYard)
		cout << "They are equal.\n\n";
	else if (myYard != yourYard) 
	{//nested to prevent "They are equal.  __Yard is bigger."  No yard can be bigger if equal
		cout << "They are not equal." << endl;
		if (myYard > yourYard)
			cout << "myYard is bigger\n\n";
		else
			cout << "yourYard is bigger\n\n";
	}

	if (yourYard.getLength() <= 0 || yourYard.getWidth() <= 0)	//if length or width is 0 or below, it wont decrement because it cant be negative
	{
		cout << "Cannot decrement because Length or Width will be negative. \n\n";
	}
	else
	{
		--yourYard;
		cout << "Your Yard Pre Decrement" << endl;
		cout << "Length:" << yourYard.getLength() << endl;
		cout << "Width:" << yourYard.getWidth() << endl;
		cout << "Area:" << yourYard.area() << endl;
		cout << "\n";
	}

	//increment of myYard (++pre)
	++myYard;
	cout << "My Yard Pre Increment" << endl;
	cout << "Length:" << myYard.getLength() << endl;
	cout << "Width:" << myYard.getWidth() << endl;
	cout << "Area:" << myYard.area() << endl;
	cout << "\n";

	//testing post++ and post-- increments	
	//increment of myYard (post++)
	myYard++;
	cout << "My Yard Post Increment" << endl;
	cout << "Length:" << myYard.getLength() << endl;
	cout << "Width:" << myYard.getWidth() << endl;
	cout << "Area:" << myYard.area() << endl;
	cout << "\n";
	

	if (yourYard.getLength() <= 0 || yourYard.getWidth() <= 0)	//if length or width is 0 or below, it wont decrement because it cant be negative
	{
		cout << "Cannot decrement because Length or Width will be negative. \n";
	}
	else
	{
		yourYard--;
		cout << "Your Yard Post Decrement" << endl;
		cout << "Length:" << yourYard.getLength() << endl;
		cout << "Width:" << yourYard.getWidth() << endl;
		cout << "Area:" << yourYard.area() << endl;
		cout << "\n";
	}
	return 0;
}
