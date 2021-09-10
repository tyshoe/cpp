#include "cylinderType.h"





//height
void cylinderType::setHeight(int heightValue)
{
	height = heightValue;
}
int cylinderType::getHeight()
{
	return height;
}


//volume
double cylinderType::getVolume()
{
	double volume = (getArea() * height);
	return volume;
}

//surface area
double cylinderType::getSurfaceArea()
{

	double surfaceArea = ((2*3.14*getRadius()*height)+(2*(getArea())));
	return surfaceArea;
}