#include <iostream>
#include "LinkList.h"

using namespace std;

int main()
{
    linkList list1(21);
    list1.insertHead(12);
    list1.insertHead(10);
    list1.insertLast(25);
    list1.insertLast(30);
    list1.insertMid(5);
    list1.insertMid(11);
    list1.Print();
    list1.deleteHead();
    list1.deleteLast();
    list1.deleteMid(10);
    list1.Print();
    linkList list2;
    if(list2.isEmpty()){
        cout << "List empty"<<endl;
    }
    else{
        cout << "List is not empty"<<endl;
    }
    list2.insertHead(3);
    list2.insertHead(102);
    list2.insertHead(13);
    list2.insertHead(78);
    list2.resetList();
    int n;
    for(int i=0;i<list2.lengthIs();i++){
        list2.getNext(n);
        cout << n <<" ";
    }
    cout << endl;
    if(list2.searchList(18)){
        cout << "Found" <<endl;
    }
    else{
        cout << "Not Found" <<endl;
    }


    list2.sorting();
    list2.resetList();
    for(int i=0;i<list2.lengthIs();i++){
        list2.getNext(n);
        cout << n <<" ";
    }
    cout << endl;

    linkList list3;
    list3.insertHead(5);
    list3.insertHead(4);
    list3.insertHead(9);
    list3.insertHead(19);

    list3.sortingwhile();
    list3.resetList();
    for(int i=0;i<list3.lengthIs();i++){
        list3.getNext(n);
        cout << n <<" ";
    }

     cout << endl;

    linkList list4;
    list4.insertHead(50);
    list4.insertHead(4);
    list4.insertHead(9);
    list4.insertHead(1);
    list4.insertHead(19);

    list4.selectionsortwhile();
    list4.resetList();
    cout << endl << endl;
    for(int i=0;i<list4.lengthIs();i++){
        list4.getNext(n);
        cout << n <<" ";
    }



    return 0;
}
