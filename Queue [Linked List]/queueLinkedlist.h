#ifndef QUEUELINKEDLIST_H_INCLUDED
#define QUEUELINKEDLIST_H_INCLUDED
class QueueList{
    struct Node{
        int data;
        Node* next;
    };
    Node* rear;
    Node* front;
public:
    QueueList();
    bool isEmpty();
    bool isFull();
    void enQue(int );
    void deQue(int& );
    void print();
};


#endif // QUEUELINKEDLIST_H_INCLUDED
