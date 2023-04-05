#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
     linkList obj1;
     obj1.insertItem(8);
     obj1.insertItem(4);
     obj1.insertItem(9);
     obj1.insertItem(7);
     obj1.insertItem(2);

     obj1.Print();
     cout << endl;
     int n;
     obj1.ResetList();
     for(int i=0;i<obj1.lengthIs();i++){
        obj1.getNext(n);
        obj1.push(n);
     }
     cout << endl;
     for(int i =0;i<obj1.lengthIs();i++){
         cout <<obj1.pop()<<" ";
     }




    return 0;
}
