#include <iostream>
using namespace std;

void printDiamondShape(int num, int rows) {
    //Upper
    if (num < rows) {
        for (int whitespace = num; whitespace < rows; whitespace++) {
            cout << " ";
        }
        for (int i = 1; i <= num; i++) {
            cout << "* ";
        }
        cout << endl;
        printDiamondShape(num + 1, rows);
    }
    else {
        //Lower
        if (rows > 0) {
            for (int whitespace = rows; whitespace < num; whitespace++) {
                cout << " ";
            }
            for (int i = 1; i <= rows; i++) {
                cout << "* ";
            }
            cout << endl;
            printDiamondShape(num, rows - 1);
        }
    }
}

int main()
{
    int rows;
    cout << "Most columns you want your diamond to have? Enter an integer: ";
    cin >> rows;

    printDiamondShape(1, rows);
    system("pause");
    return 0;
}

