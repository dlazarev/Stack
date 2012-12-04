//
//  stack.h
//  Stack
//

#ifndef __Stack__stack__
#define __Stack__stack__

#include <iostream>

class Stack
{
private:
    
    struct sNode {
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
