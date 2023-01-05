#include <iostream>
#include "rectangleType.h"

using namespace std;


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
		cout << "Rectangle 1 area and " << "rectangle 2 area are equal." << endl;
	else
		cout << "Rectangle 1 area and " << "rectangle 2 area are NOT equal." << endl;
	cout << endl;
	if (rectangle1 != rectangle2)
		cout << "Rectangle 1 area and " << "rectangle 2 area are NOT equal." << endl;
	else
		cout << "Rectangle 1 area and " << "rectangle 2 area are equal." << endl;
	cout << endl;
	if (rectangle1 <= rectangle2)
		cout << "Rectangle 1 area is equal or less than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT less than " << "rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 < rectangle2)
		cout << "Rectangle 1 area is less than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT less than " << "rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 >= rectangle2)
		cout << "Rectangle 1 area is equal or greater than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT greater to " << "rectangle 2 area. " << endl;
	cout << endl;
	if (rectangle1 > rectangle2)
		cout << "Rectangle 1 area is greater than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT greater than " << "rectangle 2 area." << endl;
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
		cout << "Rectangle 1 area and " << "rectangle 2 area are equal." << endl;
	else
		cout << "Rectangle 1 area and " << "rectangle 2 area are NOT equal." << endl;
	cout << endl;
	if (rectangle1 != rectangle2)
		cout << "Rectangle 1 area and " << "rectangle 2 area are NOT equal." << endl;
	else
		cout << "Rectangle 1 area and " << "rectangle 2 area are equal." << endl;
	cout << endl;
	if (rectangle1 <= rectangle2)
		cout << "Rectangle 1 area is equal or less than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT less than " << "rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 < rectangle2)
		cout << "Rectangle 1 area is less than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT less than " << "rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 >= rectangle2)
		cout << "Rectangle 1 area is equal or greater than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT greater to " << "rectangle 2 area. " << endl;
	cout << endl;
	if (rectangle1 > rectangle2)
		cout << "Rectangle 1 area is greater than " << "rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT greater than " << "rectangle 2 area." << endl;
	cout << endl << endl;


	////////////////////////////////////////////////////////
	system("pause");
	return 0;

}