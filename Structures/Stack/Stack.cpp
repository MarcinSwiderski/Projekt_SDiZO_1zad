//
// Created by Marcin on 22.03.2021.
//

#include "Stack.h"

Stack::Stack() {
    top=-1;
    num = new int[10000000];
}
Stack::~Stack() {
    delete[] num;
}

bool Stack::push(int n) {
    if (isFull()) {
        return false;
    }
    ++top;
    num[top] = n;
    return true;
}

bool Stack::pop() {
    if (isEmpty())
        return false;
    --top;
    return true;
}

int Stack::peek() {
    if (isEmpty())
        return 0;
    return num[top];
}


