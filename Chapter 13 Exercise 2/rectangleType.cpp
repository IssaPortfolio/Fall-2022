#include <iostream>
#include "rectangleType.h"

using namespace std;

// Print
void rectangleType::print() const
{
	cout << "Length : " << length;
	cout << " ";
	cout << "Width : " << width;
	cout << endl;
}

//// A
//rectangleType rectangleType::operator++() {
//	rectangleType tempRect;
//	tempRect.width = ++width;
//	tempRect.length = ++length;
//
//	return tempRect;
//}
//// A
//rectangleType rectangleType::operator++(int post) {
//	rectangleType tempRect;
//
//	tempRect.width = width++;
//	tempRect.length = length++;
//
//	return tempRect;
//}
//// A
//rectangleType rectangleType::operator--() {
//	rectangleType tempRect;
//	if (length > 0 && width > 0) {
//		tempRect.width = --width;
//		tempRect.length = --length;
//	}	
//	else {
//		if (length <= 0) {
//			cout << "Length is already " << length << ". NOT possible"  << endl;
//		}
//		if (width <= 0) {
//			cout << "Width is already " << width << ". NOT possible" << endl;
//		}
//	}
//	return tempRect;
//}
//// A
//rectangleType rectangleType::operator--(int post) {
//	rectangleType tempRect;
//	if (length > 0 && width > 0) {
//		tempRect.width = width--;
//		tempRect.width = length--;
//	}
//	else {
//		if (length <= 0) {
//			cout << "Length is already " << length << ". NOT possible" << endl;
//		}
//		if (width <= 0) {
//			cout << "Width is already " << width << ". NOT possible" << endl;
//		}
//	}
//	return tempRect;
//}
//
//// B
//rectangleType rectangleType::operator+(const rectangleType& rectangle) const
//{
//	rectangleType tempRect;
//
//	tempRect.length = length + rectangle.length;
//	tempRect.width = width + rectangle.width;
//
//	return tempRect;
//}
//// B
//rectangleType rectangleType::operator-(const rectangleType& rectangle) const
//{
//	rectangleType tempRect;
//
//	if (tempRect.length <= 0) {
//		tempRect.length = tempRect.length;
//	}
//	else {
//		tempRect.length = length - rectangle.length;
//	}
//
//
//	if (tempRect.width <= 0) {
//		tempRect.width = tempRect.width;
//	}
//	else {
//		tempRect.width = width - rectangle.width;
//	}
//
//	return tempRect;
//}
//
//// B
//rectangleType rectangleType::operator*(const rectangleType& rectangle) const
//{
//	rectangleType tempRect;
//
//	tempRect.length = length * rectangle.length;
//	tempRect.width = width * rectangle.width;
//
//	return tempRect;
//}
//
//// C
//bool rectangleType::operator==(const rectangleType& rectangle) const
//{
//	rectangleType yard1;
//	rectangleType yard2;
//
//	return (length == rectangle.length && width == rectangle.width);
//}
//// C
//bool rectangleType::operator!=(const rectangleType& rectangle) const {
//	rectangleType yard1;
//	rectangleType yard2;
//
//	return (length != rectangle.length && width != rectangle.width);
//}
//// C
//bool rectangleType::operator <= (const rectangleType& rectangle) const{
//	rectangleType yard1;
//	rectangleType yard2;
//
//	return (length <= rectangle.length && width <= rectangle.width);
//}
//// C
//bool rectangleType::operator < (const rectangleType& rectangle) const{
//	rectangleType yard1;
//	rectangleType yard2;
//
//	return (length < rectangle.length && width < rectangle.width);
//}
//// C
//bool rectangleType::operator >= (const rectangleType& rectangle) const{
//	rectangleType yard1;
//	rectangleType yard2;
//
//	return (length >= rectangle.length && width >= rectangle.width);
//}
//// C
//bool rectangleType::operator > (const rectangleType& rectangle) const{
//	rectangleType yard1;
//	rectangleType yard2;
//
//	return (length > rectangle.length && width > rectangle.width);
//}


// A
rectangleType operator++(rectangleType& rectangle) {
	++rectangle.width;
	++rectangle.length;
	return rectangle;
}
// A
rectangleType operator++(rectangleType& rectangle, int post) {
	rectangle.width++;
	rectangle.length++;
	return rectangle;
}
// A
rectangleType operator--(rectangleType& rectangle) {
	if (rectangle.length > 0 && rectangle.width > 0) {
		--rectangle.width;
		--rectangle.length;
	}
	else {
		if (rectangle.length <= 0) {
			cout << "Length is already " << rectangle.length << ". NOT possible" << endl;
		}
		if (rectangle.width <= 0) {
			cout << "Width is already " << rectangle.width << ". NOT possible" << endl;
		}
	}
	return rectangle;
}
// A
rectangleType operator--(rectangleType& rectangle, int post) {
	if (rectangle.length > 0 && rectangle.width > 0) {
		rectangle.width--;
		rectangle.length--;
	}
	else {
		if (rectangle.length <= 0) {
			cout << "Length is already " << rectangle.length << ". NOT possible" << endl;
		}
		if (rectangle.width <= 0) {
			cout << "Width is already " << rectangle.width << ". NOT possible" << endl;
		}
	}
	return rectangle;
}

// B
rectangleType operator+(const rectangleType& rectangle1, const rectangleType& rectangle2) {
	rectangleType tempRect;
	tempRect.width = rectangle1.width + rectangle2.width;
	tempRect.length = rectangle1.length + rectangle2.length;
	return tempRect;
}
// B
rectangleType operator-(const rectangleType& rectangle1, const rectangleType& rectangle2) {
	rectangleType tempRect;
	tempRect.width = rectangle1.width - rectangle2.width;
	tempRect.length = rectangle1.length - rectangle2.length;
	return tempRect;
}
// B
rectangleType operator*(const rectangleType& rectangle1, const rectangleType& rectangle2) {
	rectangleType tempRect;
	tempRect.width = rectangle1.width * rectangle2.width;
	tempRect.length = rectangle1.length * rectangle2.length;
	return tempRect;
}

// C
bool operator==(const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.area() == rectangle2.area());
}
// C
bool operator!=(const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.area() != rectangle2.area());
}
// C
bool operator <= (const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.area() <= rectangle2.area());
}
// C
bool operator < (const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.area() < rectangle2.area());
}
// C
bool operator >= (const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.area() >= rectangle2.area());
}
// C
bool operator > (const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.area() > rectangle2.area());
}

void rectangleType::setDimension(double l, double w) {
	length = l;
	width = w;
}
double rectangleType::getLength() const {
	return length;
}
double rectangleType::getWidth() const {
	return width;
}

double rectangleType::area() const {
	return (length * width);
}
double rectangleType::perimeter() const {
	return ((length + width) * 2);
}

// Constructors
rectangleType::rectangleType(double l, double w)
{
	length = l;
	width = w;
}
rectangleType::rectangleType()
{
	length = 0;
	width = 0;
}