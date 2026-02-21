#include "queue.h"
#include <iostream>
#include <stdexcept>

queue::queue() {
    frontIndex = 0;
    rearIndex = -1; 
    currentSize = 0;
}

void queue::enqueue(int item) {
    if (isFull()) {
        cout << "Queue Error: Cannot enqueue, the queue is full." << std::endl;
        return;
    }
    
    rearIndex = (rearIndex + 1) % CAP;
    arr[rearIndex] = item;
    currentSize++;
}

int queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue Error: Cannot dequeue, the queue is empty." << endl;
        return 0; 
    }
    
    int item = arr[frontIndex];
    frontIndex = (frontIndex + 1) % CAP;
    currentSize--;
    
    return item;
}

int queue::peek() const {
    if (isEmpty()) {
        cout << "Queue Error: Cannot peek, the queue is empty." << endl;
        return 0; 
    }
    return arr[frontIndex];
}

bool queue::isEmpty() const {
    return currentSize == 0;
}

bool queue::isFull() const {
    return currentSize == CAP;
}

int queue::size() const {
    return currentSize;
}

void queue::clear() {
    frontIndex = 0;
    rearIndex = -1;
    currentSize = 0;
}

void queue::print() const {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    
    cout << "Queue elements: ";
    for (int i = 0; i < currentSize; i++) {
        int idx = (frontIndex + i) % CAP;
        cout << arr[idx] << " ";
    }
    cout << endl;
}