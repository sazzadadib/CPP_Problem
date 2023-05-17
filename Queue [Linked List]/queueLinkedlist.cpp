#include <iostream>
#include "queueLinkedlist.h"
using namespace std;

QueueList :: QueueList(){
    front = NULL;
    rear = NULL;
}

bool QueueList :: isEmpty(){
    return rear == NULL;
}

void QueueList :: enQue(int n){
    Node * newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    if(rear == NULL){
        front = newNode;
    }
    else{
        rear->next = newNode;
    }
    rear = newNode;

}

void QueueList :: deQue(int& n){
    n  =  front->data;
    front = front->next;
    if(front ==NULL){
        rear = NULL;
    }
}

void QueueList :: print(){
    Node* temp  =  front;
    while (temp!=NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
    cout << endl;
}
