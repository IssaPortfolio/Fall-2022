#include <iostream>
using namespace std;

int sumSquares(int num) {
    // base case
    if (num == 0) {
        return 0;
    }
    else {
        return (num * num) + sumSquares(num - 1);
    }
}


int main()
{
    int num;
    cout << "Enter a number you want squared: ";
    cin >> num;

    if (num <= 0) {
        cout << "Number cannot be negative or zero! \nPlease enter a positive number: ";
        cin >> num;
    }

    cout << sumSquares(num) << endl;
    system("pause");
    return 0;
}

