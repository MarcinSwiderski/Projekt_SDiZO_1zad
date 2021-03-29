//
// Created by Marcin on 22.03.2021.
//

#include "List.h"

List::List(){
    this->head = nullptr;
    this->sz = 0;
}
void List::add(int data) {
    node_ptr newNodePtr = new Node;
    newNodePtr->data = data;
    newNodePtr->nextNode = nullptr;
    if (isEmpty())
    {
        this->head = newNodePtr;
    }
    else
    {
        node_ptr prevHeadPtr = this->head;
        this->head = newNodePtr;
        newNodePtr->nextNode = prevHeadPtr;
    }
    incrementSize();

}
int List::find(int data) {
    node_ptr currentNodePtr = this->head;
    int iter = 0;
    while (currentNodePtr != nullptr)
    {
        if((currentNodePtr->data) == data){
            return iter;
        }
        currentNodePtr = currentNodePtr->nextNode;
        iter++;
    }
    return -1;
}
bool List::remove(int data) {
    node_ptr prevNodePtr = nullptr;
    node_ptr currentNodePtr = head;

    if (isEmpty())
    {
        return false;
    }
    while (currentNodePtr != nullptr)
    {
        if (data == currentNodePtr->data)
        {
            node_ptr nodeAfterCurrentPtr = currentNodePtr->nextNode;
            if (prevNodePtr == nullptr)
            {
                this->head = nodeAfterCurrentPtr;
            }
            else
            {
                prevNodePtr->nextNode = nodeAfterCurrentPtr;
            }
            delete currentNodePtr;
            decrementSize();
            return true;
        }
        prevNodePtr = currentNodePtr;
        currentNodePtr = currentNodePtr->nextNode;
    }
    return false;
}
size_t List::size() {
    return this->sz;
}
List::~List(){
    this->emptyList();
}
