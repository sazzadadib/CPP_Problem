#ifndef BSTTRY_H_INCLUDED
#define BSTTRY_H_INCLUDED
class bsttry{
    struct Node{
        int data;
        Node * left;
        Node * right;
    };
    Node * root;
public:
    bsttry();
    void insertItem(int);
    void insertFunc(Node*&, int );
    void print();
    void printFunc(Node*);
    int lengthIs();
    int countFunc(Node*);
    void deleteItem(int);
    void Delete(Node*&,int);
    void DeleteNode(Node*&);
    void GetPredecessor(Node*, int&);
    void RetrieveItem(int);
    void RetrieveFunc(Node*,int);
};

#endif // BSTTRY_H_INCLUDED
