#ifndef QUEUE_H
#define QUEUE_H

class queue {
private:
    static const int CAP = 5; 
    int arr[CAP];             
    int frontIndex;           
    int rearIndex;            
    int currentSize;          

public:
    queue();
    void enqueue(int item);
    int dequeue();
    int peek() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
    void clear();
    void print() const;
};

#endif