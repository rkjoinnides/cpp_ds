#include "Node.hpp"

Node::Node(int inputValue, Node * nextPtr, Node * prevPtr)
{
    val = inputValue;
    next = nextPtr;
    prev = prevPtr;
}