#include "stackLinklist.h"
#include <iostream>

Stack::Stack(){
    top = NULL;
    length =0;
}
Stack::Stack(int n){
    Node *newNode = new Node;
    newNode->data=n;
    newNode->next=top;
    top=newNode;
    length=1;
}
void Stack :: push(int n){
    Node *newNode = new Node;
    newNode->data= n;
    newNode->next=top;
    top=newNode;
    length++;
}
int Stack :: pop(){
    Node *t;
    t=top;
    top=t->next;
    length--;
    return t->data;
}
int Stack :: lengthIs(){
    return length;
}
