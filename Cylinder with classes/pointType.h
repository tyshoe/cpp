#pragma once
class pointType
{
public:
	pointType();
	pointType(int xValue, int yValue);
	/*{
		x = xValue;
		y = yValue;
	}*/

	void setX(int xValue);
	void setY(int yValue);

	int getX();
	int getY();

private:
	int x = 0;
	int y = 0;
};

