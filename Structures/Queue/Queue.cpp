//
// Created by Marcin on 22.03.2021.
//

#include "Queue.h"

Queue::Queue(){

    size = 0;
}

Queue::~Queue() {
    delete[] array;
}

void Queue::pushBack(int n) {

    array[size++] = n;
}
bool Queue::popFront() {

    for(int i = 0; i < size - 1; i++) {

        array[i] = array[i + 1];
    }

    size--;
}

int Queue::front() {
    if(size > 0)
        return array[0];

    return -1;
}

int Queue::back() {
    if(size > 0)
        return array[size - 1];

    return -1;
}
