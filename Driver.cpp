#include "Stack.hpp"
#include <iostream>

int main()
{
    Stack* theStack = new Stack();
    theStack->push(2);
    theStack->push(3);
    theStack->push(4);
    theStack->push(5);
    std::cout << theStack->pop() << "\n***************\n";
    theStack->display();
    return 0;
}