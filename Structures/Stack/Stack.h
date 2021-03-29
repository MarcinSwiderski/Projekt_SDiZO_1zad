//
// Created by Marcin on 22.03.2021.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H


class Stack {
private:
    int *num;
    int top;

    bool isFull() {
        if (top == 9999999)
            return true;
        else
            return false;
    }

    bool isEmpty() {
        if (top == -1)
            return true;
        else
            return false;
    }

public:
    Stack();

    ~Stack();

    bool push(int n);

    bool pop();

    int peek();
};


#endif //UNTITLED_STACK_H
