#include <iostream>
#include "linklist.h"

using namespace std;


int main()
{
    linklist obj1;
    obj1.insertItem(8);
    obj1.insertItem(5);
    obj1.insertItem(3);
    obj1.insertItem(9);
    obj1.insertItem(7);
    obj1.Print();
    cout << endl;

    linklist obj2;
    obj2.insertItem(4);
    obj2.insertItem(6);
    obj2.insertItem(0);
    obj2.insertItem(1);
    obj2.insertItem(2);
    obj2.Print();
    cout << endl;

    /*obj1.mergeList(obj2.head);
    obj1.sorting();*/
    obj1.mergeandsort(obj2.head);
    obj1.Print();



    return 0;
}
