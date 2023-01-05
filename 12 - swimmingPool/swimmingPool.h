#pragma once

#include <string>
using namespace std;

class swimmingPool 
{
private:
	// Members
	double lengthFT = 0;
	double widthFT = 0;
	double depthFT = 0;
	double volume = 0;
	int rateGPM = 0;
public:
	// Method signatures
	void poolDimensions();
	double updatePoolDimensions();
	void amountToFill();
	void timeToDrain();
	// Default constructor 
	swimmingPool();
};