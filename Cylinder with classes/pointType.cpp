#include "pointType.h"
void pointType::setX(int xValue)
{
	x = xValue;
}
void pointType::setY(int yValue)
{
	y = yValue;
}
int pointType::getX() { return x; }
int pointType::getY() { return y; }

pointType::pointType()
{
	x = 0;
	y = 0;
}

pointType::pointType(int xPoint, int yPoint)
{
	x = xPoint;
	y = yPoint;
}