#include <iostream>
using namespace std;

template <class type>
class strange {
private:
    type a;
    type b;

public:
    bool operator == (const strange& Obj) const {
        if ((a == Obj.a) && (b == Obj.b))
            return true;
        else
            return false;
    }

    strange(type A, type B) {
        a = A;
        b = B;
    }
};


int main()
{
    strange<int> sObj1(1,1);
    strange<int> sObj2(1,1);

    if (sObj1 == sObj2)
        cout << "sObj1 IS equal to sObj2" << endl;
    else
        cout << "sObj1 is NOT equal to sObj2" << endl;


    strange<int> sObj3(1, 1);
    strange<int> sObj4(1, 2);

    if (sObj3 == sObj4)
        cout << "sObj3 IS equal to sObj4" << endl;
    else
        cout << "sObj3 is NOT equal to sObj4" << endl;

    system("pause");
    return 0;
}

