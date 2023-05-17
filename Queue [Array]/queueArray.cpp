#include <iostream>
#include "queueArray.h"
using namespace std;

QueueArray :: QueueArray(int n){
    maxQue = n+1;
    rear = n;
    front = n;
    items = new int[maxQue];
}

bool QueueArray :: isFull(){
    return (rear+1)%maxQue == front ;
}
bool QueueArray :: isEmpty(){
    return (rear== front );
}
void QueueArray :: enQue(int n){
    rear = (rear+1)%maxQue;
    items[rear] = n;
}
void QueueArray :: deQue(int & n){
    front = (front +1) % maxQue;
    n = items[front];
}
void QueueArray :: print(){
    int temp = front ;
    temp = (temp+1)%maxQue;
    while (temp != rear+1 ){
        cout << items[temp] << " ";
        temp = (temp+1)%maxQue;
    }
    cout <<endl;
    /*
    or......
    cout << items[rear];
    */

}
