#pragma once

class rectangleType
{
protected:
	double length;
	double width;

public:
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;

	//// A
	//rectangleType operator++(); //pre-increment
	//rectangleType operator++(int); //post-increment
	//rectangleType operator--(); //pre-decrement
	//rectangleType operator--(int); //post-decrement

	//// B 
	//rectangleType operator+(const rectangleType&) const;
	//Overload the operator +
	//rectangleType operator-(const rectangleType& rectangle) const;
	//Overload the operator -
	//rectangleType operator*(const rectangleType&) const;
	//Overlaod the operator *


	//// C
	//bool operator == (const rectangleType&) const;
	//bool operator != (const rectangleType&) const;
	//// Overload the remaining relational operators using similar definitions
	//bool operator <= (const rectangleType&) const;
	//bool operator < (const rectangleType&) const;
	//bool operator >= (const rectangleType&) const;
	//bool operator > (const rectangleType&) const;



	rectangleType();
	rectangleType(double l, double w);


};