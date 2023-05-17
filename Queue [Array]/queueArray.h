#ifndef QUEUEARRAY_H_INCLUDED
#define QUEUEARRAY_H_INCLUDED

class QueueArray{
    int rear,front,maxQue;
    int * items;
    public:
        QueueArray(int);
        bool isFull();
        bool isEmpty();
        void enQue(int );
        void deQue (int& );
        void print ();
};

#endif // QUEUEARRAY_H_INCLUDED
