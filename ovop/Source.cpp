#include <iostream>
#include "rectangleType.h"

using namespace std;

// A
rectangleType operator++(rectangleType& rectangle) {
	double width = rectangle.getWidth();
	double length = rectangle.getLength();
	++width;
	++length;
	rectangle.setDimension(length, width);
	return rectangle;
}
// A
rectangleType operator++(rectangleType& rectangle, int post) {
	rectangleType tempRect;
	double width = rectangle.getWidth();
	double length = rectangle.getLength();
	tempRect.setDimension(length, width);
	width++;
	length++;
	rectangle.setDimension(length, width);
	return tempRect;
}
// A
rectangleType operator--(rectangleType& rectangle) {
	double width = rectangle.getWidth();
	double length = rectangle.getLength();
	if (length > 0 && width > 0) {
		--width;
		--length;
	}
	else {
		if (length <= 0) {
			cout << "Length is already " << length << ". Not possible" << endl;
		}
		if (width <= 0) {
			cout << "Width is already " << width << ". Not possible" << endl;
		}
	}
	rectangle.setDimension(length, width);
	return rectangle;
}
// A
rectangleType operator--(rectangleType& rectangle, int post) {
	rectangleType tempRect;
	double width = rectangle.getWidth();
	double length = rectangle.getLength();
	rectangle.setDimension(length, width);
	if (length > 0 && width > 0) {
		width--;
		length--;
	}
	else {
		if (length <= 0) {
			cout << "Length is already " << length << ". Not possible" << endl;
		}
		if (width <= 0) {
			cout << "Width is already " << width << ". Not possible" << endl;
		}
	}
	rectangle.setDimension(length, width);
	return tempRect;
}

// B
rectangleType operator+(const rectangleType& rectangle1, const rectangleType& rectangle2) {
	rectangleType tempRect;
	double width = rectangle1.getWidth() + rectangle2.getWidth();
	double length = rectangle1.getLength() + rectangle2.getLength();
	tempRect.setDimension(length, width);
	return tempRect;
}
// B
rectangleType operator-(const rectangleType& rectangle) {
	rectangleType tempRect;
	double width = rectangle.getWidth();
	double length = rectangle.getLength();
	if (length <= 0) {
		length = length;
	}
	else {
		length = rectangle.getLength() - length;
	}


	if (width <= 0) {
		width = width;
	}
	else {
		width = rectangle.getWidth() - width;
	}
	tempRect.setDimension(length, width);
	return tempRect;
}
// B
rectangleType operator*(const rectangleType& rectangle1, const rectangleType& rectangle2) {
	rectangleType tempRect;
	double width = rectangle1.getWidth() * rectangle2.getWidth();
	double length = rectangle1.getLength() * rectangle2.getLength();
	tempRect.setDimension(length, width);
	return tempRect;
}

// C
bool operator==(const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.getLength() == rectangle2.getLength() && rectangle1.getWidth() == rectangle2.getWidth());
}
// C
bool operator!=(const rectangleType& rectangle1, const rectangleType& rectangle2)  {

	return (rectangle1.getLength() != rectangle2.getLength() && rectangle1.getWidth() != rectangle2.getWidth());
}
// C
bool operator <= (const rectangleType& rectangle1, const rectangleType& rectangle2)  {

	return (rectangle1.getLength() <= rectangle2.getLength() && rectangle1.getWidth() <= rectangle2.getWidth());
}
// C
bool operator < (const rectangleType& rectangle1, const rectangleType& rectangle2) {

	return (rectangle1.getLength() < rectangle2.getLength() && rectangle1.getWidth() < rectangle2.getWidth());
}
// C
bool operator >= (const rectangleType& rectangle1, const rectangleType& rectangle2)  {

	return (rectangle1.getLength() >= rectangle2.getLength() && rectangle1.getWidth() >= rectangle2.getWidth());
}
// C
bool operator > (const rectangleType& rectangle1, const rectangleType& rectangle2)  {

	return (rectangle1.getLength() > rectangle2.getLength() && rectangle1.getWidth() > rectangle2.getWidth());
}
int main()
{
	////////////////////////////////////////////////////////

	rectangleType rectangle1(25, 48);
	rectangleType rectangle2(25, 48);
	rectangleType rectangle3;
	rectangleType rectangle4;

	////////////////////////////////////////////////////////

	cout << "Rectangle 1: ";
	rectangle1.print();
	cout << endl;

	cout << "Rectangle 2: ";
	rectangle2.print();
	cout << endl;

	////////////////////////////////////////////////////////

	cout << "Adding rectangle 1 and 2 to 3" << endl;
	rectangle3 = rectangle1 + rectangle2;
	cout << "Rectangle 3: ";
	rectangle3.print();
	cout << endl;

	cout << "Multiplying rectangle 1 and 2 to 4" << endl;
	rectangle4 = rectangle1 * rectangle2;
	cout << "Rectangle 4: ";
	rectangle4.print();
	cout << endl;

	cout << endl;

	////////////////////////////////////////////////////////

	if (rectangle1 == rectangle2)
		cout << "Rectangle 1 and " << "rectangle 2 are equal." << endl;
	else
		cout << "Rectangle 1 and " << "rectangle 2 are not equal." << endl;
	cout << endl;
	if (rectangle1 != rectangle2)
		cout << "Rectangle 1 and " << "rectangle 2 are not equal." << endl;
	else
		cout << "Rectangle 1 and " << "rectangle 2 are equal." << endl;
	cout << endl;
	if (rectangle1 <= rectangle2)
		cout << "Rectangle 1 is equal or less than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is equal or not less than " << "rectangle 2. " << endl;
	cout << endl;
	if (rectangle1 < rectangle2)
		cout << "Rectangle 1 is less than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is not less than " << "rectangle 2." << endl;
	cout << endl;
	if (rectangle1 >= rectangle2)
		cout << "Rectangle 1 is equal or greater than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is equal or not greater to " << "rectangle 2. " << endl;
	cout << endl;
	if (rectangle1 > rectangle2)
		cout << "Rectangle 1 is greater than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is not greater than " << "rectangle 2." << endl;
	cout << endl << endl;

	////////////////////////////////////////////////////////

	cout << "Pre incrementing rectangle 1 once " << endl;
	++rectangle1;
	rectangle1.print();
	cout << "Post incrementing rectangle 1 twice " << endl;
	rectangle1++;
	rectangle1++;
	rectangle1.print();

	cout << "Pre decrementing rectangle 1 once " << endl;
	--rectangle1;
	rectangle1.print();
	cout << "Post decrementing rectangle 1 once " << endl;
	rectangle1--;
	rectangle1.print();

	cout << endl << endl;

	////////////////////////////////////////////////////////

	cout << "Rectangle 1: ";
	rectangle1.print();
	cout << endl;

	cout << "Rectangle 2: ";
	rectangle2.print();
	cout << endl << endl;


	////////////////////////////////////////////////////////

	if (rectangle1 == rectangle2)
		cout << "Rectangle 1 and " << "rectangle 2 are equal." << endl;
	else
		cout << "Rectangle 1 and " << "rectangle 2 are not equal." << endl;
	cout << endl;
	if (rectangle1 != rectangle2)
		cout << "Rectangle 1 and " << "rectangle 2 are not equal." << endl;
	else
		cout << "Rectangle 1 and " << "rectangle 2 are equal." << endl;
	cout << endl;
	if (rectangle1 <= rectangle2)
		cout << "Rectangle 1 is equal or less than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is equal or not less than " << "rectangle 2. " << endl;
	cout << endl;
	if (rectangle1 < rectangle2)
		cout << "Rectangle 1 is less than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is not less than " << "rectangle 2." << endl;
	cout << endl;
	if (rectangle1 >= rectangle2)
		cout << "Rectangle 1 is equal or greater than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is equal or not greater to " << "rectangle 2. " << endl;
	cout << endl;
	if (rectangle1 > rectangle2)
		cout << "Rectangle 1 is greater than " << "rectangle 2." << endl;
	else
		cout << "Rectangle 1 is not greater than " << "rectangle 2." << endl;
	cout << endl;

	////////////////////////////////////////////////////////
	system("pause");
	return 0;

}