#include "circularLinkedList.h"
#include <iostream>
using namespace std;

circularlinklist :: circularlinklist(){
    head = NULL;
}

void circularlinklist :: insertHead(int n){
    Node * t = head;

    if(t==NULL){
        Node * newNode = new Node;
        newNode->data = n;
        newNode->next = NULL;
        head = newNode;
        return;
    }
    else if(t->next==NULL){
        Node* newNode = new Node;
        newNode->data = n;
        newNode->next = head;
        t->next=newNode;
        head = newNode;
        return;
    }

    Node *newNode = new Node;
    newNode->data = n;
    while(t->next != head){
        t = t->next;
    }
    newNode->next = t->next;
    t->next = newNode;
    head = newNode;
}

void circularlinklist :: print(){
    Node *t = head;
    if(t==NULL){
        return;
    }
    cout << t->data << " ";
    if(t->next==NULL){
            return;
    }
        t=t->next;

    while(t!=head){
        cout << t->data << " ";
        t=t->next;
    }
    cout <<endl;
}

void circularlinklist :: insertLast(int n){
    Node * t = head;

    if(t==NULL){
        Node * newNode = new Node;
        newNode->data = n;
        newNode->next = NULL;
        head = newNode;
        return;
    }
    else if(t->next==NULL){
        Node* newNode = new Node;
        newNode->data = n;
        t->next=newNode;
        newNode->next = head;
        return;
    }

    Node *newNode = new Node;
    newNode->data =n;

    while(t->next != head){
            t=t->next;

    }
    t->next = newNode;
    newNode->next = head;

}

void circularlinklist :: deleteHead (){
    Node * t = head;
    if(t==NULL){
        cout << "Error" <<endl;
        return;
    }
    else if(t->next == NULL){
        head = NULL;
        return;
    }
    else if(t->next->next == head){
        head = t->next;
        head->next = NULL;
        return ;
    }

    while(t->next!=head){
        t = t->next;
    }

    head =  head->next;
    t->next = head;

}

void circularlinklist :: deleteLast (){
    Node * t = head;
    if(t==NULL){
        cout << "Error" <<endl;
        return;
    }
    else if(t->next == NULL){
        head = NULL;
        return;
    }
    else if(t->next->next == head){
        t->next = head;
        return ;
    }

    while(t->next->next!=head){
        t = t->next;
    }

    t->next = head;

}
