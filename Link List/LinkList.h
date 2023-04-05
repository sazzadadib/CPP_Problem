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
    void makeEmpty();
    void resetList();
    bool searchList(int);
    void sorting();
    void sortingwhile();
    void selectionsort();
    void selectionsortwhile();
    void getNext(int&);
    void insertHead(int);
    void insertMid(int);
    void insertLast(int);
    void deleteHead();
    void deleteMid(int);
    void deleteLast();
    void Print();

};


#endif // LINKLIST_H_INCLUDED
