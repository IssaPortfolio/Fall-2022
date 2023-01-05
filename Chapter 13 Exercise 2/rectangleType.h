#pragma once
using namespace std;

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
	friend rectangleType operator++(rectangleType&); //pre-increment
	friend rectangleType operator++(rectangleType&, int); //post-increment
	friend rectangleType operator--(rectangleType&); //pre-decrement
	friend rectangleType operator--(rectangleType&, int); //post-decrement

	// B 
	friend rectangleType operator+(const rectangleType&, const rectangleType&);
	//Overload the operator +
	friend rectangleType operator-(const rectangleType&, const rectangleType&);
	//Overload the operator -
	friend rectangleType operator*(const rectangleType&, const rectangleType&);
	//Overlaod the operator *


	// C
	friend bool operator == (const rectangleType&, const rectangleType&);
	friend bool operator != (const rectangleType&, const rectangleType&);
	// Overload the remaining relational operators using similar definitions
	friend bool operator <= (const rectangleType&, const rectangleType&);
	friend bool operator < (const rectangleType&, const rectangleType&);
	friend bool operator >= (const rectangleType&, const rectangleType&);
	friend bool operator > (const rectangleType&, const rectangleType&);



	rectangleType();
	rectangleType(double l, double w);


};