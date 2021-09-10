#include "Pool.h"

void pool::setMaxCapacity()
{
	maxCapacity = ((length * width * depth) / .13);       // cubic ft = ft^3  ( 1 gal of water = .13 ft^3)
};

void pool::setCurCapacity()					
{
	curVolume = ((length * width * depth) / .13 / 2);
}


//choice 1
double pool::fillMax()
{
	double fill = maxCapacity - curVolume;
	return fill;
	
}
double pool::timeToMaxFill()
{
	double fill = maxCapacity - curVolume;
	double timeToFill = fill / fillRate;
	return timeToFill;
}


//choice 2
double pool::drainMax()
{
	double drain = curVolume - minCapacity;
	return drain;
}
double pool::timeToMaxDrain()
{
	double drain = curVolume - minCapacity;
	double timeToDrain = drain / drainRate;
	return timeToDrain;
}


//choice 3
void pool::setTimeFill(int minuteValue)
{
	minutes = minuteValue;

	double waterToMove = (minutes * fillRate);

	curVolume += waterToMove;
}
double pool::fill()
{
	double fillAmount = (fillRate * minutes);

	return fillAmount;
}


//choice 4
void pool::setTimeDrain(int minuteValue)
{
	minutes = minuteValue;

	double waterToMove = (minutes * fillRate);

	curVolume -= waterToMove;
}
double pool::drain()
{
	double drainAmount = (drainRate * minutes);
	
	return drainAmount;
}