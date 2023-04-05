#ifndef STACKLINKLIST_H_INCLUDED
#define STACKLINKLIST_H_INCLUDED
class Stack{
    struct Node{
        int data;
        Node * next;
    };
    Node * top;
    int length;
public:
    Stack();
    Stack(int);
    void push(int);
    void isEmpty();
    void makeEmpty();
    int lengthIs();
    int pop();
    int Top();
};


#endif // STACKLINKLIST_H_INCLUDED
