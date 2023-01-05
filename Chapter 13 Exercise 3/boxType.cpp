#include "boxType.h"
#include <iostream>
using namespace std;

void boxType::print() const {
	rectangleType::print(); //to print the length and width
	cout << "; Height = " << height;
}

void boxType::setDimension(double l, double w, double h) {
	rectangleType::setDimension(l, w);
	if (h >= 0)
		height = h;
	else
		height = 0;
}

double boxType::getHeight() const {
	return height;
}

double boxType::area() const {
	return 2 * (getLength() * getWidth()
		+ getLength() * height
		+ getWidth() * height);
}

double boxType::volume() const {
	return rectangleType::area() * height;
}

// A
boxType boxType::operator++() {
	boxType tempBox;
	tempBox.width = ++width;
	tempBox.length = ++length;
	tempBox.height = ++height;

	return tempBox;
}
// A
boxType boxType::operator++(int post) {
	boxType tempBox;

	tempBox.width = width++;
	tempBox.length = length++;
	tempBox.height = height++;

	return tempBox;
}
// A
boxType boxType::operator--() {
	boxType tempBox;
	if (length > 0 && width > 0) {
		tempBox.width = --width;
		tempBox.length = --length;
		tempBox.height = --height;
	}
	else {
		if (length <= 0) {
			cout << "Length is already " << length << ". Not possible" << endl;
		}
		if (width <= 0) {
			cout << "Width is already " << width << ". Not possible" << endl;
		}
	}
	return tempBox;
}
// A
boxType boxType::operator--(int post) {
	boxType tempBox;
	if (length > 0 && width > 0) {
		tempBox.width = width--;
		tempBox.width = length--;
		tempBox.height = height--;
	}
	else {
		if (length <= 0) {
			cout << "Length is already " << length << ". Not possible" << endl;
		}
		if (width <= 0) {
			cout << "Width is already " << width << ". Not possible" << endl;
		}
	}
	return tempBox;
}

// B
boxType boxType::operator+(const boxType& box) const
{
	boxType tempBox;

	tempBox.length = length + box.length;
	tempBox.width = width + box.width;
	tempBox.height = height + box.height;

	return tempBox;
}
// B
boxType boxType::operator-(const boxType& box) const
{
	boxType tempBox;

	if (tempBox.length <= 0) {
		tempBox.length = tempBox.length;
	}
	else {
		tempBox.length = length - box.length;
	}


	if (tempBox.width <= 0) {
		tempBox.width = tempBox.width;
	}
	else {
		tempBox.width = width - box.width;
	}
	if (tempBox.height <= 0) {
		tempBox.height = tempBox.height;
	}
	else {
		tempBox.height = height - box.height;
	}

	return tempBox;
}

// B
boxType boxType::operator*(const boxType& box) const {

	boxType tempBox;

	tempBox.length = length * box.length;
	tempBox.width = width * box.width;
	tempBox.height = height * box.height;

	return tempBox;
}

// C
bool boxType::operator==(const boxType& box) const {

	return (this->volume() == box.volume());
}
// C
bool boxType::operator!=(const boxType& box) const {

	return (this->volume() != box.volume());
}
// C
bool boxType::operator <= (const boxType& box) const {

	return (this->volume() <= box.volume());
}
// C
bool boxType::operator < (const boxType& box) const {

	return (this->volume() < box.volume());
}
// C
bool boxType::operator >= (const boxType& box) const {

	return (this->volume() >= box.volume());
}
// C
bool boxType::operator > (const boxType& box) const {

	return (this->volume() > box.volume());
}

 //3A
ostream& operator<<(ostream& COUT, const boxType& box) {
	COUT << "Length: " << box.length;
	COUT << " Width: " << box.width ;
	COUT << " Height: " << box.height << endl;
	return COUT;
}
istream& operator>>(istream& CIN, boxType& box) {
	CIN >> box.length >> box.width >> box.height;
	return CIN;
}




boxType::boxType() {
	height = 0.0;
}

boxType::boxType(double l, double w, double h) : rectangleType(l, w) {
	if (h >= 0)
		height = h;
	else
		height = 0;
}