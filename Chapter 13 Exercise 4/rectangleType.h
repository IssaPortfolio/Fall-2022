#pragma once
#include <iostream>

using namespace std;

class rectangleType {
	// 3A
	friend ostream& operator<<(ostream&, const rectangleType&);
	friend istream& operator>>(istream&, rectangleType&);
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

	// A
	rectangleType operator++(); //pre-increment
	rectangleType operator++(int); //post-increment
	rectangleType operator--(); //pre-decrement
	rectangleType operator--(int); //post-decrement

	// B 
	rectangleType operator+(const rectangleType&) const;
	// Overload the operator +
	rectangleType operator-(const rectangleType&) const;
	// Overload the operator -
	rectangleType operator*(const rectangleType&) const;
	// Overlaod the operator *

	// C
	bool operator == (const rectangleType&) const;
	bool operator != (const rectangleType&) const;
	// Overload the remaining relational operators using similar definitions
	bool operator <= (const rectangleType&) const;
	bool operator < (const rectangleType&) const;
	bool operator >= (const rectangleType&) const;
	bool operator > (const rectangleType&) const;

	// Constructors
	rectangleType();
	rectangleType(double l, double w);
};