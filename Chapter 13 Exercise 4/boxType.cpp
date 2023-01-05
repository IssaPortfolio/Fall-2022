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
boxType operator++(boxType& box) {
	++box.width;
	++box.length;
	++box.height;
	return box;
}
// A
boxType operator++(boxType& box, int post) {
	boxType tempBox = box;
	box.width++;
	box.length++;
	box.height++;
	return tempBox;
}
// A
boxType operator--(boxType& box) {
	if (box.length > 0 && box.width > 0) {
		--box.width;
		--box.length;
		--box.height;
	}
	else {
		if (box.length <= 0) {
			cout << "Length is already " << box.length << ". NOT possible" << endl;
		}
		if (box.width <= 0) {
			cout << "Width is already " << box.width << ". NOT possible" << endl;
		}
		if (box.height <= 0) {
			cout << "Height is already " << box.height << ". NOT possible" << endl;
		}
	}
	return box;
}
// A
boxType operator--(boxType& box, int post) {
	if (box.length > 0 && box.width > 0) {
		box.width--;
		box.length--;
		box.height;
	}
	else {
		if (box.length <= 0) {
			cout << "Length is already " << box.length << ". NOT possible" << endl;
		}
		if (box.width <= 0) {
			cout << "Width is already " << box.width << ". NOT possible" << endl;
		}
		if (box.height <= 0) {
			cout << "Height is already " << box.height << ". NOT possible" << endl;
		}
	}
	return box;
}

// B
boxType operator+(const boxType& box1, const boxType& box2) {
	boxType tempBox;
	tempBox.length = box1.length + box2.length;
	tempBox.width = box1.width + box2.width;
	tempBox.height = box1.height + box2.height;
	return tempBox;
}
// B
boxType operator-(const boxType& box1, const boxType& box2) {
	boxType tempBox;
	tempBox.length = box1.length - box2.length;
	tempBox.width = box1.width - box2.width;
	tempBox.height = box1.height - box2.height;

	return tempBox;
}
// B
boxType operator*(const boxType& box1, const boxType& box2) {
	boxType tempBox;
	tempBox.length = box1.length * box2.length;
	tempBox.width = box1.width * box2.width;
	tempBox.height = box1.height * box2.height;

	return tempBox;
}

// C
bool operator==(const boxType& box1, const boxType& box2) {

	return (box1.volume() == box2.volume());
}
// C
bool operator!=(const boxType& box1, const boxType& box2) {

	return (box1.volume() != box2.volume());
}
// C
bool operator <= (const boxType& box1, const boxType& box2) {

	return (box1.volume() <= box2.volume());
}
// C
bool operator < (const boxType& box1, const boxType& box2) {

	return (box1.volume() < box2.volume());
}
// C
bool operator >= (const boxType& box1, const boxType& box2) {

	return (box1.volume() >= box2.volume());
}
// C
bool operator > (const boxType& box1, const boxType& box2) {

	return (box1.volume() > box2.volume());
}

// 3A
ostream& operator<<(ostream& COUT, const boxType& box) {
	COUT << "Length: " << box.length;
	COUT << " Width: " << box.width;
	COUT << " Height: " << box.height << endl;
	return COUT;
}
// 3A
istream& operator>>(istream& CIN, boxType& box) {
	CIN >> box.length >> box.width >> box.height;
	return CIN;
}

boxType::boxType() {}

boxType::boxType(double l, double w, double h) : rectangleType(l, w) {
	if (h >= 0)
		height = h;
	else
		height = 0;
}

