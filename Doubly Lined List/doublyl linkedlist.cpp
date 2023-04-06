#include "doubly linkedlist.h"
#include <iostream>
using namespace std;

doublylink :: doublylink (){
    head = NULL;
    length =0;
}

void doublylink :: print(){
    Node * t = head;

    while(t!=NULL){
            cout << t->data << " ";
         t  = t->next;
    }
    cout << endl;
}

// ALL Insert Function................


void doublylink :: insertHead(int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    if(head!=NULL){
    head->pre = newNode;
    }
    newNode->pre = NULL;
    head = newNode;
}
void doublylink :: insertLast(int n){
    if (head==NULL){
        insertHead(n);
        return;
    }
    Node * t = head;

    while (t->next !=NULL){
        t= t->next;
    }

    Node *newNode = new Node ;
    newNode-> data  = n;
    newNode ->next = NULL;
    newNode->pre = t;
    t->next = newNode;
}

void doublylink :: insertMid(int n){
    Node * t = head;
    while(t!=NULL){
        if(t->data > n){
            break;
        }
        t = t->next;
    }
    Node *newNode  = new Node ;
    newNode->data = n;
    newNode->next = t;
    newNode->pre = t->pre;
    t->pre->next = newNode;
    t->pre = newNode;

}


//All Delete Function................


void doublylink :: deleteHead(){
    head->next->pre = NULL;
    head = head->next;
}

void doublylink :: deleteLast(){
    Node *t = head;
    while(t->next!=NULL){
        t=t->next;
    }
    t->pre->next = NULL;
}

void doublylink :: deleteMid(int n){
    if(head->data == n){
        deleteHead();
        return;
    }
    Node * t = head;
    while(t!=NULL){
        if(t->data == n){
            break;
        }
        t=t->next;
    }
    t->pre->next = t->next;

}


// bub
void doublylink :: sorting(){
    Node * t = head;
    Node *x, *y;
    int temp;

    for(x=t;x!=NULL;x=x->next){
        for(y=x;y!=NULL;y=y->next){
            if(x->data > y->data){
                temp = x->data;
                x->data = y->data;
                y->data = temp;
            }
        }
    }
}

