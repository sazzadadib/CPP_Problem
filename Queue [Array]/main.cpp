#include <iostream>
#include "queueArray.h"
using namespace std;

int main()
{

    QueueArray obj1(5);
    int n;


    if(obj1.isEmpty()){
        cout << "Queue is Empty"<<endl;
    }
    else{
        cout << "Queue is Not Empty"<<endl;
    }


    obj1.enQue(8);
    obj1.enQue(12);
    obj1.enQue(9);
    obj1.enQue(2);
    obj1.enQue(36);


    if(obj1.isFull()){
        cout << "Queue is Full"<<endl;
    }
    else{
        cout << "Queue is Not Full"<<endl;
    }


    obj1.print();


    if(obj1.isEmpty()){
        cout << "Queue is Empty"<<endl;
    }
    else{
        cout << "Queue is Not Empty"<<endl;
    }


    obj1.deQue(n);


    cout << n << endl;


    obj1.print();
    return 0;
}
