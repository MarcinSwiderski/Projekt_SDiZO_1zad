//
// Created by Marcin on 22.03.2021.
//

#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H


class Queue {
private:
    int size;
    unsigned int capacity;
    int *array;


public:
    Queue();
    ~Queue();

    void pushBack(int n);

    bool popFront();

    int _size() { return size; }

    int front();

    int back();

};


#endif //UNTITLED_QUEUE_H
