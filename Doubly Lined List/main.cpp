#include <iostream>
#include "doubly linkedlist.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    doublylink obj1;
    obj1.insertHead(8);
    obj1.insertHead(2);
    obj1.insertHead(6);
    obj1.insertHead(9);
    obj1.insertHead(5);

    obj1.print();

    obj1.sorting();
    obj1.print();

    doublylink obj2;
    obj2.insertLast(8);
    obj2.insertLast(2);
    obj2.insertLast(6);
    obj2.insertLast(9);
    obj2.insertLast(5);

    obj2.print();


    doublylink obj3;
    obj3.insertLast(2);
    obj3.insertLast(4);
    obj3.insertLast(5);
    obj3.insertLast(7);
    obj3.insertLast(9);

    obj3.insertMid(6);

    obj3.print();

    obj3.deleteHead();
    obj3.deleteLast();
    obj3.deleteMid(7);

    obj3.print();





    return 0;
}
