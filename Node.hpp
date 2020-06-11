/********************************************************************* 
** Author: Riley Joinindes
** Date: 10/27/2019
** Class: OSU 162, Lab 6
** Description: Header file for the Node class
*********************************************************************/
#ifndef NODE_HPP
#define NODE_HPP

#include <string>

using std::string;

class Node
{
    public:
        Node * next;
        Node * prev;
        int val = 0;
        string key = "";
        Node(string inputKey, int inputValue, Node * nextPtr = nullptr , Node * prevPtr = nullptr);
};

#endif