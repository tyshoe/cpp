#pragma once
#include "pointType.h"
class circleType : public pointType
{
public:
	circleType();
	circleType(int radiusValue);
	

	//radius
	void setRadius(int radiusValue);
	int getRadius();

	//area
	double getArea();

private:
	double radius = 5;
};

