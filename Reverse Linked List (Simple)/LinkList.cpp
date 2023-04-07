#include "LinkList.h"
#include <iostream>
using namespace std;


linkList::linkList()
{
    head = NULL;
    length =0;
    currentPos = head;
}

int linkList::lengthIs()
{
    return length;
}
void linkList::resetList()
{
    currentPos=head;
}
void linkList::getNext(int &n)
{
    n=currentPos->data;
    currentPos=currentPos->next;
}

//All insert Functions..........
void linkList::insertHead(int n)
{

    Node *newNode = new Node;
    newNode->data=n;
    newNode->next=head;
    head = newNode;
    length++;
}
void linkList::insertMid(int n)
{
    Node* t = head;
    Node* preNode = NULL;
    Node *newNode = new Node;
    newNode->data=n;
    if(head->data>n)
    {
        newNode->next=head;
        head=newNode;
        length++;
        return;
    }

    while(t!=NULL)
    {
        if(t->data>n)
        {
            break;
        }
        preNode = t;
        t=t->next;
    }
    newNode->next=t;
    preNode->next=newNode;
    length++;
}
void linkList::insertLast(int n)
{
    Node *t =head;
    if(t==NULL){
        insertHead(n);
        return;
    }

    while(t->next!=NULL)
    {
        t=t->next;
    }
    Node *newNode = new Node;
    newNode->data=n;
    newNode->next=NULL;
    t->next=newNode;
    length++;
}

void linkList::Print()
{
    Node* t = head;
    while(t!=NULL)
    {
        cout<< t->data <<"  ";
        t = t->next;
    }
    cout <<endl;
}

