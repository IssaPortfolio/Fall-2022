#include <iostream>
#include <algorithm>
#include "invalidHr.h"
#include "invalidMin.h"
#include "invalidSec.h"

using namespace std;

void convertTo24Hours(int hr, int min, int sec, string amORpm) {
	if (amORpm == "am")
	{
		if (hr == 12)
			hr = 0;
	}
	else if (amORpm == "pm")
	{
		if (hr != 12)
			hr += 12;
	}
	cout << hr << ":" << min << ":" << sec << endl;
}


int main()
{
	int hr, min, sec;
	string amORpm;

	cout << "Enter hour(s): ";
	cin >> hr;
	cout << "Enter minute(s): ";
	cin >> min;
	cout << "Enter second(s): ";
	cin >> sec;
	cout << "PM or AM?: ";
	cin >> amORpm;
	transform(amORpm.begin(), amORpm.end(), amORpm.begin(), tolower);


	// HOURS
	while (true) {
		try {
			if ((hr < 0 || hr > 12) || (cin.fail())) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				throw invalidHr();
			}
			break;
		}
		catch (invalidHr obj) {
			cout << obj.what() << endl;
			cout << "Re-enter hour(s): ";
			cin >> hr;
		}
	}


	// MINUTES
	while (true) {
		try {
			if ((min < 0 || min > 59) || (cin.fail())){
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				throw invalidMin();
			}
			break;
		}
		catch (invalidMin obj) {
			cout << obj.what() << endl;
			cout << "Re-enter minute(s): ";
			cin >> min;
		}
	}


	 // SECONDS
	while (true) {
		try {
			if ((sec < 0 || sec > 59) || (cin.fail())){
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				throw invalidSec();
			}
			break;
		}
		catch (invalidSec obj) {
			cout << obj.what() << endl;
			cout << "Re-enter second(s): ";
			cin >> sec;
		}

	}

	convertTo24Hours(hr, min, sec, amORpm);


	system("pause");
	return 0;
}