#include <iostream>
#include "pointType.h"
#include "circleType.h"
#include "cylinderType.h"

using namespace std;

int main()
{
	pointType myPoint(0,0);
	circleType myCircle(0);
	cylinderType myCylinder(0);
	


	//centerpoint code
	int xCoor, yCoor;
	cout << "What are the coordinates for the center of your cylinder: (x y)";
	cin >> xCoor >> yCoor;
	myPoint.setX(xCoor);
	myPoint.setY(yCoor);
	
	//radius code
	double radius;
	cout << "What is the radius of your cylider: ";
	cin >> radius;
	myCircle.setRadius(radius);

	//height code
	int height;
	cout << "What is the height of your cylider: ";
	cin >> height;
	myCylinder.setHeight(height);
	myCylinder.setRadius(radius);


	//All Cylinder Attributes
	cout << "\nCylinder Attributes" << endl;
	cout << "coordinates: (" << myPoint.getX() << "," << myPoint.getY() << ")" << endl;
	cout << "radius: " << myCircle.getRadius() << endl;
	cout << "height: " << myCylinder.getHeight() << endl;
	cout << "area: " << myCircle.getArea() << endl;
	cout << "volume: " << myCylinder.getVolume() << endl;
	cout << "surface area: " << myCylinder.getSurfaceArea() << endl;
	return 0;
}
