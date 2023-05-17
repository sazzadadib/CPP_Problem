#include <iostream>
#include "bsttry.h"
using namespace std;

bsttry :: bsttry(){
    root =  NULL;
}


//Insert function  ............................


void bsttry :: insertItem(int n){
    insertFunc(root,n);
}
void bsttry :: insertFunc(Node*& tree, int n){
    if(tree==NULL){
        tree=  new Node;
        tree->data=n;
        tree->left=NULL;
        tree->right=NULL;
    }
    else if(tree->data > n){
        insertFunc(tree->left,n);
    }
    else{
        insertFunc(tree->right, n);
    }
}


//Print function  ..........................

void bsttry :: print(){
    printFunc(root);
}
void bsttry ::printFunc(Node* tree){
    if(tree!=NULL){
        printFunc(tree->left);
        cout << tree->data << "  ";
        printFunc(tree->right);
    }
}


//Length count ............................

int bsttry ::lengthIs(){
    return countFunc(root);
}
int bsttry :: countFunc(Node * tree){
    if(tree==NULL){
        return 0;
    }
    else{
     return (countFunc(tree->left)+countFunc(tree->right)+1);

    }
}



//Delete function ...................

void bsttry :: deleteItem(int n){
    Delete(root, n);
}
void bsttry :: Delete(Node*& tree , int n){
    if(tree->data>n){
        Delete(tree->left,n);
    }
    else if(tree->data<n){
        Delete(tree->right,n);
    }
    else{
        DeleteNode(tree);
    }
}

void bsttry :: DeleteNode(Node*& tree){
    Node* temp = tree;
    int n;
    if(tree->left==NULL && tree->right==NULL){
        tree = NULL;
    }
    else if(tree->left==NULL){
        tree = tree->right;
    }
    else if(tree->right == NULL){
        tree = tree->left;
    }
    else{
        GetPredecessor(tree->left,n);
        tree->data = n;
        Delete(tree->left,n);
    }
}
void bsttry :: GetPredecessor(Node* tree , int &n){
    while(tree->right!=NULL){
        tree =tree->right;
    }
    n = tree->data;
}



//Retrieve function ..........................

void bsttry :: RetrieveItem(int n){
    RetrieveFunc(root, n);
}
void bsttry :: RetrieveFunc(Node*  tree, int n){
    if(tree==NULL){
        cout << "Item is not found" << endl;
    }
    else if( tree->data > n){
        RetrieveFunc(tree->left , n);
    }
    else if(tree->data<n){
        RetrieveFunc(tree->right,n);
    }
    else{
        cout << "Item Found" <<endl;
    }
}
