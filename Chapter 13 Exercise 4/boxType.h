#pragma once
#include "rectangleType.h"

using namespace std;

class boxType : public rectangleType
{
	// 3A
	friend ostream& operator<<(ostream&, const boxType&);
	friend istream& operator>>(istream&, boxType&);
protected:
	double height;
public:
	void setDimension(double l, double w, double h);
	//Function to set the length, width, and height
	//of the box.
	//Postcondition: length = l; width = w; height = h;
	double getHeight() const;
	//Function to return the height of the box.
	//Postcondition: The value of height is returned.
	double area() const;
	//Function to return the surface area of the box.
	//Postcondition: The surface area of the box is
	// calculated and returned.
	double volume() const;
	//Function to return the volume of the box.
	//Postcondition: The volume of the box is
	// calculated and returned.
	void print() const;
	//Function to output the length, width, and height of a box.

	//// A
	friend boxType operator++(boxType&); //pre-increment
	friend boxType operator++(boxType& ,int); //post-increment
	friend boxType operator--(boxType&); //pre-decrement
	friend boxType operator--(boxType& , int); //post-decrement

	// B 
	friend boxType operator+(const boxType&, const boxType&);
	// Overload the operator +
	friend boxType operator-(const boxType&, const boxType&);
	// Overload the operator -
	friend boxType operator* (const boxType&, const boxType&);
	// Overlaod the operator *


	// C
	friend bool operator == (const boxType&, const boxType&);
	friend bool operator != (const boxType&, const boxType&);
	// Overload the remaining relational operators using similar definitions
	friend bool operator <= (const boxType&, const boxType&);
	friend bool operator < (const boxType&, const boxType&);
	friend bool operator >= (const boxType&, const boxType&);
	friend bool operator > (const boxType&, const boxType&);


	boxType();
	//Default constructor
	//Postcondition: length = 0; width = 0; height = 0;
	boxType(double l, double w, double h);
	//Constructor with parameters
	//Postcondition: length = l; width = w; height = h;

};