#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
class linklist{

    struct Node{
        int data;
        Node *next;
    };
public:
    Node *head;
    linklist();
    void insertItem(int);
    void Print();
    void mergeList(Node*);
    void sorting();
    void mergeandsort(Node*);


};


#endif // LINKLIST_H_INCLUDED
