#include <iostream>
#include "circularLinkedList.h"

using namespace std;

int main()
{

    circularlinklist obj1;

    obj1.insertHead(9);
    obj1.insertHead(5);
    obj1.insertHead(4);
    obj1.insertHead(8);
    obj1.insertHead(6);

    obj1.deleteHead();
    obj1.deleteLast();

    obj1.print();

    circularlinklist obj2;

    obj2.insertLast(6);
    obj2.insertLast(7);
    obj2.insertLast(8);
    obj2.insertLast(9);
    obj2.insertLast(10);

    obj2.deleteHead();
    obj2.deleteLast();

    obj2.print();


    return 0;
}
