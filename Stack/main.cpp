//
//  main.cpp
//  Stack

#include <iostream>
#include "stack.h"

int main(int argc, const char * argv[])
{
    Stack st;
    
    st.push(2);
    st.push(8);
    st.push(3);
    st.push(5);
    st.push(4);
    
    while (!st.isEmpty())
        std::cout << st.pop() << std::endl;
    return 0;
}

