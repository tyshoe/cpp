//In C++, there are three access specifiers:
//public - members are accessible from outside the class
//private - members cannot be accessed (or viewed) from outside the class
//protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
//check book pages 920-950 in C++Programming.pdf
#include <iostream>
#pragma once
using namespace std;
class rectangleType
{
public:
	//constructors
	rectangleType() {};
	rectangleType(int l, int w, int a)
	{
		length = l;
		width = w;
		totalArea = a;
	}

	//functions
	void setLength(int l);
	int getLength();
	void setWidth(int w);
	int getWidth();
	int area();

	//operator overloads
	rectangleType operator+(const rectangleType&) const;	//overloads + operator
	rectangleType operator-(const rectangleType&) const;	//overloads - operator
	rectangleType operator++();		//overloads ++pre operator
	rectangleType operator--();		//overloads --pre operator
	rectangleType operator++(int);	//overloads post++ operator
	rectangleType operator--(int);	//overloads post++ operator
	bool operator==(const rectangleType&) const;	//overloads == operator
	bool operator!=(const rectangleType&) const;	//overloads != operator
	bool operator>(const rectangleType&) const;	//overloads > operator

protected:
	int length = 10;
	int width = 5;
	int totalArea = 50;
};