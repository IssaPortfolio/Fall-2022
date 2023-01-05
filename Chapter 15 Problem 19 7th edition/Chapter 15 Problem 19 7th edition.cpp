#include <iostream>
using namespace std;


double squareRootTolerance(double a, double epsilon, double tolerance) {
    // base case
    if (abs(a * a - tolerance) <= epsilon) 
        return a;
    else 
        return (squareRootTolerance(((a * a + tolerance) / (2 * a)), epsilon, tolerance));
}

int main() {
    double a;
    double tolerance;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for tolerance': ";
    cin >> tolerance;

    cout << "Square root of " << a << " is: " << squareRootTolerance(a, tolerance, a) << endl;

    system("pause");
    return 0;
}