//
//  Queue.cpp
//  Stack
//
//  Created by Dmitry Lazarev on 04.12.12.
//  Copyright (c) 2012 Ilya Lazarev. All rights reserved.
//

#include "Queue.h"

Queue::Queue()
{
    top = NULL;
    bottom = NULL;
}

Queue::~Queue()
{
    qNode *tmp = bottom;
    while (tmp) {
        tmp = bottom;
        bottom = bottom->next;
        delete tmp;
    }
    
}

void Queue::push(int a)
{
    qNode *tmp = new qNode;
    tmp->data = a;
    tmp->next = NULL;
    
    if (!top) {
        top = tmp;
        bottom = top;
        bottom->next = NULL;
    } else {
        top->next = tmp;
        top = tmp;
    }
}

int Queue::pop()
{
    int a = bottom->data;
    qNode *tmp = bottom;
    bottom = bottom->next;
    delete tmp;
    
    if (bottom == NULL) top = NULL;
    return a;
}

