#include <iostream>
#include "linkedlist.h"

using namespace std;

linkList :: linkList(){
    head = NULL;
    top = head;
    currentPos = head;
    length =0;

}
void linkList :: Print(){
    Node *  t = head;

    while(t!=NULL){
        cout << t->data<< " ";
        t = t->next;
    }
}
void linkList ::  insertItem( int n ){
    Node * newNode  = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
    length ++;
}
int  linkList :: lengthIs(){
    return length;
}
void linkList :: ResetList(){
      currentPos = head;
}
void linkList :: getNext(int &n){
    n= currentPos->data;
    currentPos = currentPos->next;

}
void linkList :: push (int n){
    Node * newNode = new Node;
    newNode-> data  = n;
    newNode-> next  = top;
    top= newNode;

}
int linkList :: pop(){
    int n = top->data;
    top = top->next;
    return n;
}
