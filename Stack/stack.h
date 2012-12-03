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
    
    struct element {
        int data;
        struct element *next;
    };
    
    element *top;
    
public:
    Stack();
    int push();
    void pop(int a);
};
#endif /* defined(__Stack__stack__) */
