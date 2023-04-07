#include <iostream>
#include "LinkList.h"

using namespace std;

int main()
{
    linkList list1;
    linkList list2;
    int n;

    list1.insertLast(6);
    list1.insertLast(2);
    list1.insertLast(4);
    list1.insertLast(9);
    list1.insertLast(8);

    list1.Print();


    list1.resetList();
    for(int i=0;i<list1.lengthIs();i++){
        list1.getNext(n);
        list2.insertHead(n);

    }

    list2.Print();


    return 0;
}
