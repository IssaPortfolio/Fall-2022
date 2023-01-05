#include <iostream>
#include "rectangleType.h"
#include "boxType.h"
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
	cout << rectangle1;

	cout << "Rectangle 2: ";
	cout << rectangle2;
	cout << endl;

	////////////////////////////////////////////////////////

	cout << "Adding rectangle 1 and 2 to 3" << endl;
	rectangle3 = rectangle1 + rectangle2;
	cout << "Rectangle 3: ";
	cout << rectangle3;
	cout << endl;

	cout << "Multiplying rectangle 1 and 2 to 4" << endl;
	rectangle4 = rectangle1 * rectangle2;
	cout << "Rectangle 4: ";
	cout << rectangle4;
	cout << endl;

	cout << endl;
	////////////////////////////////////////////////////////
	cout << "Set the length and width for rectangle 1: ";
	cin >> rectangle1;

	////////////////////////////////////////////////////////

	if (rectangle1 == rectangle2)
		cout << "Rectangle 1 area and rectangle 2 area are equal." << endl;
	else
		cout << "Rectangle 1 area and rectangle 2 area are NOT equal." << endl;
	cout << endl;
	if (rectangle1 != rectangle2)
		cout << "Rectangle 1 area and rectangle 2 area are NOT equal." << endl;
	else
		cout << "Rectangle 1 area and rectangle 2 area are equal." << endl;
	cout << endl;
	if (rectangle1 <= rectangle2)
		cout << "Rectangle 1 area is equal or less than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT less than rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 < rectangle2)
		cout << "Rectangle 1 area is less than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT less than rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 >= rectangle2)
		cout << "Rectangle 1 area is equal or greater than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT greater to rectangle 2 area. " << endl;
	cout << endl;
	if (rectangle1 > rectangle2)
		cout << "Rectangle 1 area is greater than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT greater than rectangle 2 area." << endl;
	cout << endl << endl;

	////////////////////////////////////////////////////////

	cout << "Pre incrementing rectangle 1 once " << endl;
	++rectangle1;
	cout << rectangle1;
	cout << "Post incrementing rectangle 1 twice " << endl;
	rectangle1++;
	rectangle1++;
	cout << rectangle1;

	cout << "Pre decrementing rectangle 1 once " << endl;
	--rectangle1;
	cout << rectangle1;
	cout << "Post decrementing rectangle 1 once " << endl;
	rectangle1--;
	cout << rectangle1;

	cout << endl << endl;

	////////////////////////////////////////////////////////

	cout << "Rectangle 1: ";
	cout << rectangle1;
	cout << endl;

	cout << "Rectangle 2: ";
	cout << rectangle2;
	cout << endl << endl;


	////////////////////////////////////////////////////////

	if (rectangle1 == rectangle2)
		cout << "Rectangle 1 area and rectangle 2 area are equal." << endl;
	else
		cout << "Rectangle 1 area and rectangle 2 area are NOT equal." << endl;
	cout << endl;
	if (rectangle1 != rectangle2)
		cout << "Rectangle 1 area and rectangle 2 area are NOT equal." << endl;
	else
		cout << "Rectangle 1 area and rectangle 2 area are equal." << endl;
	cout << endl;
	if (rectangle1 <= rectangle2)
		cout << "Rectangle 1 area is equal or less than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT less than rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 < rectangle2)
		cout << "Rectangle 1 area is less than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT less than rectangle 2 area." << endl;
	cout << endl;
	if (rectangle1 >= rectangle2)
		cout << "Rectangle 1 area is equal or greater than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is equal or NOT greater to rectangle 2 area. " << endl;
	cout << endl;
	if (rectangle1 > rectangle2)
		cout << "Rectangle 1 area is greater than rectangle 2 area." << endl;
	else
		cout << "Rectangle 1 area is NOT greater than rectangle 2 area." << endl;
	cout << endl << endl;


	////////////////////////////////////////////////////////fdgfg
	boxType box1(50, 30, 10);
	boxType box2(50, 30, 10);
	boxType box3;
	boxType box4;

	////////////////////////////////////////////////////////

	cout << "Box 1: ";
	cout << box1;
	//cout << box1;

	cout << "Box 2: ";
	cout << box2;
	cout << endl;

	////////////////////////////////////////////////////////

	cout << "Adding box 1 and 2 to 3" << endl;
	box3 = box1 + box2;
	cout << "Box 3: ";
	cout << box3;
	cout << endl;

	cout << "Multiplying box 1 and 2 to 4" << endl;
	box4 = box1 * box2;
	cout << "Box 4: ";
	cout << box4;
	cout << endl;

	cout << endl;

	////////////////////////////////////////////////////////
	cout << "Set the length and width and height for box 1: ";
	cin >> box1;

	////////////////////////////////////////////////////////

	if (box1 == box2)
		cout << "Box 1 volume and Box 2 volume are equal." << endl;
	else
		cout << "Box 1 volume and Box 2 volume are NOT equal." << endl;
	cout << endl;
	if (box1 != box2)
		cout << "Box 1 volume and Box 2 volume are NOT equal." << endl;
	else
		cout << "Box 1 volume and Box 2 volume are equal." << endl;
	cout << endl;
	if (box1 <= box2)
		cout << "Box 1 volume is equal or less than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is equal or NOT less than Box 2 volume." << endl;
	cout << endl;
	if (box1 < box2)
		cout << "Box 1 volume is less than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is NOT less than Box 2 volume." << endl;
	cout << endl;
	if (box1 >= box2)
		cout << "Box 1 volume is equal or greater than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is equal or NOT greater to Box 2 volume. " << endl;
	cout << endl;
	if (box1 > box2)
		cout << "Box 1 volume is greater than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is NOT greater than Box 2 volume." << endl;
	cout << endl << endl;

	////////////////////////////////////////////////////////

	cout << "Pre incrementing box 1 once " << endl;
	++box1;
	cout << box1;
	cout << "Post incrementing box 1 twice " << endl;
	box1++;
	box1++;
	cout << box1;

	cout << "Pre decrementing box 1 once " << endl;
	--box1;
	cout << box1;
	cout << "Post decrementing box 1 once " << endl;
	box1--;
	cout << box1;

	cout << endl << endl;

	////////////////////////////////////////////////////////

	cout << "Box 1: ";
	cout << box1;
	cout << endl;

	cout << "Box 2: ";
	cout << box1;
	cout << endl << endl;


	////////////////////////////////////////////////////////

	if (box1 == box2)
		cout << "Box 1 volume and Box 2 volume are equal." << endl;
	else
		cout << "Box 1 volume and Box 2 volume are NOT equal." << endl;
	cout << endl;
	if (box1 != box2)
		cout << "Box 1 volume and Box 2 volume are NOT equal." << endl;
	else
		cout << "Box 1 volume and Box 2 volume are equal." << endl;
	cout << endl;
	if (box1 <= box2)
		cout << "Box 1 volume is equal or less than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is equal or NOT less than Box 2 volume." << endl;
	cout << endl;
	if (box1 < box2)
		cout << "Box 1 volume is less than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is NOT less than Box 2 volume." << endl;
	cout << endl;
	if (box1 >= box2)
		cout << "Box 1 volume is equal or greater than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is equal or NOT greater to Box 2 volume. " << endl;
	cout << endl;
	if (box1 > box2)
		cout << "Box 1 volume is greater than Box 2 volume." << endl;
	else
		cout << "Box 1 volume is NOT greater than Box 2 volume." << endl;
	cout << endl << endl;

	////////////////////////////////////////////////////////

	system("pause");
	return 0;

}