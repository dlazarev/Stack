//
//  stack.cpp
//  Stack

#include "stack.h"

Stack::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
    sNode *tmp;
    
    while(top) {
        tmp = top;
        top = top->prev;
        delete tmp;
    }
}

void Stack::push(int a)
{
    sNode *tmp = new sNode;
    tmp->data = a;
    tmp->prev = top;
    top = tmp;
}

int Stack::pop()
{
    if (!top) return -1;
    
    int a = top->data;
    sNode *tmp = top;
    top = tmp->prev;
    delete tmp;
    return a;
}