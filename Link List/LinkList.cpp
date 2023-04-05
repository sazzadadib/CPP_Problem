#include "LinkList.h"
#include <iostream>
using namespace std;


linkList::linkList()
{
    head = NULL;
    length =0;
    currentPos = head;
}
linkList::linkList(int n)
{
    Node *t= new Node;
    t->data = n;
    t->next = NULL;
    head = t;
    length=1;
    currentPos=head;
}
bool linkList::isEmpty()
{
    return(length==0);
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
bool linkList::searchList(int n)
{
    Node *t = head;
    while(t!=NULL)
    {
        if(t->data==n)
        {
            return true;
        }
        t=t->next;
    }
    return false;
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


//All Delete Functions..........
void linkList :: deleteHead()
{
    head = head->next;
    length--;
}
void linkList::deleteMid(int n)
{
    Node *t = head;
    Node *preNode = NULL;
    if(head->data==n)
    {
        head = head->next;
        length--;
        return;
    }

    while(t!=NULL)
    {
        if(t->data==n)
        {
            break;
        }
        preNode= t;
        t=t->next;
    }
    preNode->next=t->next;
    length--;
}
void linkList::deleteLast()
{
    Node *t = head;
    Node *preNode = NULL;
    while(t->next!=NULL)
    {
        preNode = t;
        t=t->next;
    }
    preNode->next=NULL;
    length--;
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

//Bubble Sorting.............

void linkList :: sorting()
{
    Node *x,*y;
    int temp;

    for(x=head; x->next!=NULL; x=x->next)           //x!=NULL
    {
        for(y=x->next; y!=NULL; y=y->next)
        {
            if(x->data>y->data)
            {
                temp = x->data;
                x->data = y->data;
                y->data = temp;
            }
        }
    }
}

void linkList :: sortingwhile()
{
    Node *a = head;
    Node *b;
    int temp;

    while(a->next!=NULL)                        //while(a!=NULL)
    {
        b = a->next;
        while(b!=NULL)
        {
            if(a->data > b->data)
            {
                temp = a->data;
                a->data = b->data;
                b->data = temp;
            }
            b=b->next;
        }
        a=a->next;
    }
}

//Selection Sorting ................

void linkList :: selectionsort()
{
    Node * a,*b,*m;
    int temp;
    for(a=head; a!=NULL; a=a->next)
    {
        m=a;
        for(b=a->next; b!=NULL; b=b->next)
        {
            if(m->data > b->data)
            {
                m = b;
            }
        }
        if(m!=a)
        {
            temp = m->data;
            m->data = a->data;
            a->data =temp;

        }
    }
}

void linkList :: selectionsortwhile()
{
    Node *a,*b,*m;
    int temp;

    a=head;
    while(a!=NULL)
    {
        m=a;
        b= a->next;             //b=a;
        while(b!=NULL)
        {
            if(b->data<m->data)
            {
                m=b;
            }
            b=b->next;
        }
        if(m!=a)
        {
            temp = a->data;
            a->data = m->data;
            m->data = temp;
        }
        a=a->next;
    }
}
