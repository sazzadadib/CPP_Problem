#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

class linkList{
    struct Node{
        Node * next;
        int data;
    };
    int length;
    Node * head;
    Node * currentPos;
public:
    linkList();
    linkList(int);
    bool isEmpty();
    int lengthIs();
    void resetList();
    void getNext(int&);
    void insertHead(int);
    void insertMid(int);
    void insertLast(int);
    ;
    void Print();

};

#endif // LINKLIST_H_INCLUDED
