/********************************************************************* 
** Author: Riley Joinindes
** Date: 11/10/2019
** Class: OSU 162, Lab 6
** Description: Implementation file for the Node class
*********************************************************************/
#include "Node.hpp"

/********************************************************************* 
**Description: Constructor gives the node a value and prev and next
pointers
*********************************************************************/
Node::Node(string inputKey, int inputValue, Node * nextPtr, Node * prevPtr)
{
    key = inputKey;
    val = inputValue;
    next = nextPtr;
    prev = prevPtr;
}