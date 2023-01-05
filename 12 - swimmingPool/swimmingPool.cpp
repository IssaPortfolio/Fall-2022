
#include <iostream>
#include <string>
#include "swimmingPool.h"
using namespace std;

// Gets pool dimesnsions
void swimmingPool::poolDimensions()
{
	cout << "-- POOL DIMENSIONS --\n" << endl;
	// Inputs
	cout << "Enter Length: ";
	cin >> lengthFT;
	cout << "Enter Width: ";
	cin >> widthFT;
	cout << "Enter Depth: ";
	cin >> depthFT;

	// Calculates pool volume
	volume = lengthFT * widthFT * depthFT * 7.5;
}

// Time to fill and how much method
void swimmingPool::amountToFill()
{
	// Outputs volume and asks for input
	cout << "Your pool volume is: " << volume << endl;
	cout << "At what rate (gallons per minute) do you fill your pool?: ";
	cin >> rateGPM;

	// Asks if pool partially filled
	string isPartiallyFilled;
	cout << "Is the pool partially filled? (y) or (n): ";
	cin >> isPartiallyFilled;

	// Calculates time it takes to fill
	double amountAlreadyFilled;
	if (isPartiallyFilled == "y")
	{
		cout << "How much is already filled? (in gallons): ";
		cin >> amountAlreadyFilled;

		volume = volume - amountAlreadyFilled;
		cout << "The time to fill is: " << volume / rateGPM << " minutes to fill up your pool\n" << endl;
	}
	else if (isPartiallyFilled == "n")
		cout << "The time to fill is: " << volume / rateGPM << " minutes to fill up your pool\n" << endl;

}

// Time to drain method
void swimmingPool::timeToDrain()
{
	// Input drain rate
	double drainRateGPM;
	cout << "What is the rate drain? (gallons per minute): ";
	cin >> drainRateGPM;

	// Time it takes to drain according to volume
	cout << "Your pool volume is: " << volume << endl;
	cout << "The time to drain is: " << volume / drainRateGPM << " minutes\n" << endl;

}

// Updates members
double swimmingPool::updatePoolDimensions()
{
	return lengthFT;
	return widthFT;
	return depthFT;
	return volume;
}
// Default constructor 
swimmingPool::swimmingPool(){}