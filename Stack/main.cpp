//
//  main.cpp
//  Stack

#include <iostream>
#include "stack.h"
#include "Queue.h"

int main(int argc, const char * argv[])
{
    Stack st;
    
    st.push(2);
    st.push(8);
    st.push(3);
    st.push(5);
    st.push(4);
    
    std::cout << "Stack example" << std::endl;
    while (!st.isEmpty())
        std::cout << st.pop() << std::endl;
    
    Queue qu;
    
    qu.push(9);
    qu.push(2);
    qu.push(4);
    qu.push(1);
    qu.push(6);
    
    std::cout << std::endl << "Queue example" << std::endl;
    std::cout << "First element=" << qu.getFirst() << std::endl;
    std::cout << "Last element=" << qu.getLast() << std::endl;
    
    while (!qu.isEmpty())
        std::cout << qu.pop() << std::endl;
    
    
    
    return 0;
}

