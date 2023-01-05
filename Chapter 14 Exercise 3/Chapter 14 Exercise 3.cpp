
#include <iostream>
#include <iomanip>
using namespace std;

int menu() {
    int menuSelected;
    cout << "MENU" << endl << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtractions" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << endl;
    cout << "Select an option: ";
    cin >> menuSelected;
    return menuSelected;
}

void addition(const double num1, const double num2, double& ans) {

    ans = num1 + num2;
}

void subtractions(const double num1, const double num2, double& ans) {
    ans = num1 - num2;
}

void multiplication(const double num1, const double num2, double& ans) {
    ans = num1 * num2;
}

void division(const double num1, const double num2, double& ans) {
    ans = num1 / num2;
}

int main()
{
    cout << setprecision(2);

    int menuSelected;
    menuSelected = menu();

    double num1, num2;
    double ans = 0;

    cout << endl << endl;

    cout << "Enter first and second numbers: ";
    cin >> num1 >> num2;
    if (menuSelected == 4)
    {
        while (true) {
            try {
                if ((num2 == 0) || (cin.fail())) {
                    cin.clear();
                    cin.ignore((numeric_limits<streamsize>::max(), '\n'));
                    throw -1;
                }
                else {
                    break;
                }
            }

            catch (int error) {
                if (error == -1) {
                    cout << "Cannot be strings or denominator is 0!" << endl;
                    cout << "Re-enter first and second numbers: ";
                    cin >> num1 >> num2;
                }
            }
        }
    }
    cout << endl << endl;


    switch (menuSelected) {
    case 1:
        addition(num1, num2, ans);
        break;
    case 2:
        subtractions(num1, num2, ans);
        break;
    case 3:
        multiplication(num1, num2, ans);
        break;
    case 4:
        division(num1, num2, ans);
        break;
    }

    cout << "Answer is: " << ans << endl;

    cout << endl << endl;

    system("pause");
    return 0;
}


//
//
//#include <iostream>
//using namespace std;
//
//int menu() {
//    int menuSelected;
//    cout << "MENU" << endl << endl;
//    cout << "1. Add fractions" << endl;
//    cout << "2. Subtract fractions" << endl;
//    cout << "3. Multiply fractions" << endl;
//    cout << "4. Divide fractions" << endl;
//    cout << endl;
//    cout << "Select an option: ";
//    cin >> menuSelected;
//    return menuSelected;
//}
//
//void addFractions(int numerator1, int denominator1, int numerator2, int denominator2, int& numeratorANS, int& denominatorANS) {
//
//    numeratorANS = (numerator1 * denominator2) + (numerator2 * denominator1);
//    denominatorANS = denominator1 * denominator2;
//}
//
//void subtractFractions(int numerator1, int denominator1, int numerator2, int denominator2, int& numeratorANS, int& denominatorANS) {
//    numeratorANS = (numerator1 * denominator2) - (numerator2 * denominator1);
//    denominatorANS = denominator1 * denominator2;
//}
//
//void multiplyFractions(int numerator1, int denominator1, int numerator2, int denominator2, int& numeratorANS, int& denominatorANS) {
//    numeratorANS = numerator1 * numerator2;
//    denominatorANS = denominator1 * denominator2;
//}
//
//void divideFractions(int numerator1, int denominator1, int numerator2, int denominator2, int& numeratorANS, int& denominatorANS) {
//    numeratorANS = numerator1 * denominator2;
//    denominatorANS = denominator1 * numerator2;
//}
//
//int main()
//{
//    int menuSelected;
//    menuSelected = menu();
//
//    int numerator1, denominator1, numerator2, denominator2;
//    int numeratorANS = 0, denominatorANS = 0;
//
//
//    cout << "Enter numerator1, denominator1, numerator2, denominator2: ";
//    cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;
//    cout << endl << endl;
//    while (true) {
//        try {
//            if ((denominator1 == 0) || (denominator2 == 0) || (cin.fail())) {
//                cin.clear();
//                cin.ignore();
//                throw - 1;
//            }
//            else {
//                break;
//            }
//        }
//
//        catch (int error) {
//            if (error == -1) {
//                cout << "Cannot be strings or denominator is 0!" << endl;
//                cout << "Enter numerator1, denominator1, numerator2, denominator2: ";
//                cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;
//                cout << endl << endl;
//            }
//
//        }
//    }
//
//
//    switch (menuSelected) {
//    case 1:
//        addFractions(numerator1, denominator1, numerator2, denominator2, numeratorANS, denominatorANS);
//        break;
//    case 2:
//        subtractFractions(numerator1, denominator1, numerator2, denominator2, numeratorANS, denominatorANS);
//        break;
//    case 3:
//        multiplyFractions(numerator1, denominator1, numerator2, denominator2, numeratorANS, denominatorANS);
//        break;
//    case 4:
//        divideFractions(numerator1, denominator1, numerator2, denominator2, numeratorANS, denominatorANS);
//        break;
//    }
//
//    cout << "Answer is: " << numeratorANS << "/" << denominatorANS << endl;
//
//    system("pause");
//    return 0;
//}


// ^ wrong book edition 