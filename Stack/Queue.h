//
//  Queue.h
//  Stack
//
//  Created by Dmitry Lazarev on 04.12.12.
//  Copyright (c) 2012 Ilya Lazarev. All rights reserved.
//

#ifndef __Stack__Queue__
#define __Stack__Queue__

#include <iostream>

class Queue {
private:
    struct qNode {
        int data;
        qNode *next;
    };
    qNode *top;
    qNode *bottom;
    
public:
    Queue();
    ~Queue();
    void push(int);
    int pop();
    bool isEmpty() { return !bottom; }
    int getLast() { return top ? top->data : -1; }
    int getFirst() { return bottom ? bottom->data : -1; }
};

#endif /* defined(__Stack__Queue__) */
