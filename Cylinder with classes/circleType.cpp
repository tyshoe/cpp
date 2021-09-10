#include "circleType.h"

//radius
void circleType::setRadius(int radiusValue)
{
	radius = radiusValue;
}
int circleType::getRadius()
{
	return radius;
}



//area
double circleType::getArea()
{
	double area = (3.14 * radius * radius);
	return area;
}


circleType::circleType()
{
	radius;
}

circleType::circleType(int radiusValue)
	{
			radius = radiusValue;
	}