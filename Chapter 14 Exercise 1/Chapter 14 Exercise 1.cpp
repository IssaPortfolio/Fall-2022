
#include <iostream>
#include <iomanip>
using namespace std;

double feetInchToCM(double& feetInput, double& inchesInput) {
    const double FEET_TO_INCHES = 12;
    const double CM_TO_INCHES = 2.54;
    double feetToInch;
    double inchesTotal;

    feetToInch = feetInput * FEET_TO_INCHES;

    inchesTotal = feetToInch + inchesInput;

    return inchesTotal * CM_TO_INCHES;
}


int main() {

    cout << setprecision(2) << fixed;
    double feet = 0, inches = 0;

    cout << "Enter feet and inches: ";
    cin >> feet >> inches;
    while (true) {
        try {
            if ((inches < 0) || (feet < 0) || (cin.fail())) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw - 1;
            }
            else {
                break;
            }
        }

        catch (int error) {
            if (error == -1) {
                cout << "Inputs cannot be negative or strings!" << endl;
                cout << "Re-enter feet and inches: ";
                cin >> feet >> inches;
            }

        }
    }

    cout << "Converted to CM: " << feetInchToCM(feet, inches) << endl << endl;

    cout << endl;

    system("pause");
    return 0;
}