#ifndef DOUBLY_LINKEDLIST_H_INCLUDED
#define DOUBLY_LINKEDLIST_H_INCLUDED

class doublylink{
    struct Node {
        int data;
        Node *next;
        Node *pre;
    };
    Node* head;
    int length;
public:
    doublylink();
    void insertHead(int);
    void insertLast(int);
    void insertMid(int);
    void deleteHead();
    void deleteLast();
    void deleteMid(int);
    void sorting();
    int lengthIs();
    void print();


};



#endif // DOUBLY_LINKEDLIST_H_INCLUDED
