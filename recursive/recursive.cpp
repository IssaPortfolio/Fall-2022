

#include <iostream>
using namespace std;

int gcd(int x, int y) {

    if (y == 0)
        return x;
    else if (y != 0)
        return gcd(y, x % y);



}


int main()
{

    cout << gcd(16, 6) << endl << endl;
    system("pause");
    return 0;
}
