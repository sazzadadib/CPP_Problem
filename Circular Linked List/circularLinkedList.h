#ifndef CIRCULARLINKEDLIST_H_INCLUDED
#define CIRCULARLINKEDLIST_H_INCLUDED
class circularlinklist{
    struct Node{
        int data;
        Node *next;
    };
    Node *head;
public:
    circularlinklist();
    void insertHead(int);
    void insertLast(int);
    void deleteHead();
    void deleteLast();
    void print();

};


#endif // CIRCULARLINKEDLIST_H_INCLUDED
