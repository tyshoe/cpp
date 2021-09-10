#pragma once
class pool
{
public:
	pool();
	pool(double w, double l, double d, int fr, int dr) //constructor
	{
		width = w;
		length = l;
		depth = d;
		fillRate = fr;     
		drainRate = dr;
	}

	double curVolume;
	int minutes;

	void setMaxCapacity();					// max capacity functions
	double getMax() { return maxCapacity; }

	void setCurCapacity();					// current capacity functions 
	double getCur() { return curVolume; }	// used in all choices

	int getTime() { return minutes; } // gets time


	//choice 1
	double fillMax();			// function that fills pool
	double timeToMaxFill();		// tells time to fully drain
	

	//choice 2
	double drainMax();			// function that drains pool
	double timeToMaxDrain();	// tells time to fully fill
	double getMin() { return minCapacity; } // min capacity functions


	//choice 3
	void setTimeFill(int minuteValue);
	double fill();
	

	//choice 4
	void setTimeDrain(int minuteValue);
	double drain();
	
	
private:
	double length;
	double width;
	double depth;
	int fillRate;		// gallons per min.
	int drainRate;		// gallons per min.


	double maxCapacity = (length * width * depth); //defined in main function as (5,10,4,10,10) on Line 10
	double minCapacity = 0;		// could be less than 0 but for this project, lets make it 0

};