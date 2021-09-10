#include "rectangleType.h"
//length functions
void rectangleType::setLength(int l)
{
	length = l;
}
int rectangleType::getLength() { return length; }

//width functions
void rectangleType::setWidth(int w)
{
	width = w;
}
int rectangleType::getWidth() { return width; }

//area function
int rectangleType::area()
{
	totalArea = length * width;
	return totalArea;
}


//overloads + operator
rectangleType rectangleType::operator+(const rectangleType& rectangle) const
{
	rectangleType tempRect;
	tempRect.length = length + rectangle.length;
	tempRect.width = width + rectangle.width;
	return tempRect;
}

//overloads - operator
rectangleType rectangleType::operator-(const rectangleType& rectangle) const
{
	rectangleType tempRect;
	tempRect.length = length - rectangle.length;
	tempRect.width = width - rectangle.width;
	if (tempRect.length > 0 && tempRect.width > 0)
	return tempRect;
}

// overloads ++pre operator
rectangleType rectangleType::operator++()
{
	length++;//increment the length and width
	width++;
	return *this; //return the incremented value of the object
}

//overloads --pre operator
rectangleType rectangleType::operator--()
{
	length--;//increment the length and width
	width--;
	return *this; //return the incremented value of the object
}

//overloads post++ operator
rectangleType rectangleType::operator++(int u)
{
	rectangleType temp = *this;//use this pointer to copy the value of the object
				
	length++;			//increment the object	
	width++;	

	return temp;
}

//overloads post-- operator
rectangleType rectangleType::operator--(int u)
{
	rectangleType temp = *this;//use this pointer to copy the value of the object

	length--;			//decrement the object	
	width--;

	return temp;
}

//overloads == operator
bool rectangleType::operator==(const rectangleType& rectangle) const
{
	return (totalArea == rectangle.totalArea);
}

//overloads == operator
bool rectangleType::operator!=(const rectangleType& rectangle) const
{
	return (totalArea != rectangle.totalArea);
}

//overloads > operator
bool rectangleType::operator>(const rectangleType& rectangle) const
{
	return (totalArea > rectangle.totalArea);
}