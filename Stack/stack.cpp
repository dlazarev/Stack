//
//  stack.cpp
//  Stack
//
//  Created by Dmitry Lazarev on 03.12.12.
//  Copyright (c) 2012 Ilya Lazarev. All rights reserved.
//

#include "stack.h"

Stack::Stack()
{
    top = NULL;
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