#include <iostream>
#include "bsttry.h"

using namespace std;

int main()
{
    bsttry obj1;
    obj1.insertItem(10);
    obj1.insertItem(5);
    obj1.insertItem(7);
    obj1.insertItem(19);
    obj1.insertItem(2);
    obj1.print();
    cout <<endl<< obj1.lengthIs()<<endl;
    obj1.deleteItem(7);
    obj1.print();
    cout <<endl<< obj1.lengthIs()<<endl;
    obj1.RetrieveItem(7);
    obj1.RetrieveItem(5);


    /*check whether the Binary Tree Node passed as parameter is actually a Binary-Search-Tree.*/

    if(obj1.isActuallyBST()){
        cout << "True"<<endl;
    }
    else{
        cout << "False"<<endl;

    }

    return 0;
}
