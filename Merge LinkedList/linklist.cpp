#include <iostream>
#include "linklist.h"
using namespace std;

linklist::linklist()
{
    head = NULL;
}
void linklist :: insertItem(int n)
{

    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void linklist :: Print()
{
    Node* t = head;

    while(t!=NULL)
    {
        cout << t->data<< " ";
        t=t->next;
    }
}
void linklist::mergeList(Node *head1)
{
    Node *t = head;

    while(t->next !=NULL)
    {
        t= t->next;
    }
    t->next = head1;


}

void linklist :: sorting ()
{
    Node *t = head;
    Node *x, *y;
    int temp;

    for(x= t; x!=NULL; x=x->next)
    {
        for(y=x; y!=NULL; y=y->next)
        {
            if(x->data >y->data)
            {
                temp = x->data;
                x->data = y->data;
                y->data = temp;
            }
        }
    }
}

void linklist :: mergeandsort(Node * head1)
{
    Node *t = head;
    Node *a = head;
    Node *x, *y;
    int temp;

    while(t->next !=NULL)
    {
        t= t->next;
    }
    t->next = head1;

    for(x= a; x!=NULL; x=x->next)
    {
        for(y=x; y!=NULL; y=y->next)
        {
            if(x->data >y->data)
            {
                temp = x->data;
                x->data = y->data;
                y->data = temp;
            }
        }
    }

}
