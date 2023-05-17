#include <iostream>
#include "queueLinkedlist.h"

using namespace std;

int main()
{

    QueueList obj1;
    int n;


    if(obj1.isEmpty()){
        cout << "Queue is Empty"<<endl;
    }
    else{
        cout << "Queue is Not Empty"<<endl;
    }


    obj1.enQue(5);
    obj1.enQue(14);
    obj1.enQue(8);
    obj1.enQue(3);
    obj1.enQue(18);
    obj1.enQue(98);


    obj1.print();


    obj1.deQue(n);


    cout << n <<endl;


    obj1.print();


    if(obj1.isEmpty()){
        cout << "Queue is Empty"<<endl;
    }
    else{
        cout << "Queue is Not Empty"<<endl;
    }


    obj1.deQue(n);
    obj1.deQue(n);
    obj1.deQue(n);
    obj1.deQue(n);
    obj1.deQue(n);

    if(obj1.isEmpty()){
        cout << "Queue is Empty"<<endl;
    }
    else{
        cout << "Queue is Not Empty"<<endl;
    }


    return 0;
}
