//
//  stack.h
//  Stack
//
//  Created by Dmitry Lazarev on 03.12.12.
//  Copyright (c) 2012 Ilya Lazarev. All rights reserved.
//

#ifndef __Stack__stack__
#define __Stack__stack__

#include <iostream>

class Stack
{
private:
    
    struct sNode {
//        friend class Stack;
        int data;
        sNode *prev;
    };
    
    sNode *top;
    
public:
    Stack();
    ~Stack();
    void push(int);
    int pop();
    bool isEmpty() { return !top; }
};
#endif /* defined(__Stack__stack__) */
