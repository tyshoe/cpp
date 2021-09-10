#pragma once
#include "circleType.h"

class cylinderType : public circleType
{
public:
	cylinderType();
	cylinderType(double heightValue)
	{
		height = heightValue;
	}

	//height
	void setHeight(int heightValue);
	int getHeight();

	
	//volume
	double getVolume();
	//surface area
	double getSurfaceArea();

private:

	double height;
	double radius;
};

