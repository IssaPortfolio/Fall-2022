
#include <iostream>
#include "memberType.h"

int main()
{
    // instance
    memberType student1;
    // methods
    student1.setName();
    student1.updateName();

    student1.setID();
    student1.setNumOfBooksPurchased();
    student1.setBooksCosts();

    student1.updateIDandBooksInfo();
    student1.printInfo();

    system("pause");
    return 0;
}