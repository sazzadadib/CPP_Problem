#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
class linkList{
    struct Node{
        int data;
        Node * next;
    };
     Node *head;
     Node * top;
     Node * currentPos;
     int length;
 public:
    linkList();
    void insertItem(int);
    void Print();
    int lengthIs();
    void ResetList();
    void getNext(int&);
    void push(int );
    int pop();

};


#endif // LINKEDLIST_H_INCLUDED
