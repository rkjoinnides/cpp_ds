/********************************************************************* 
** Author: Riley Joinindes
** Date: 10/27/2019
** Class: OSU 162, Lab 6
** Description: Header file for the Double Linked List Class
*********************************************************************/
#ifndef DOUBLYLINKEDLIST_HPP
#define DOUBLYLINKEDLIST_HPP

#include "Node.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::ifstream;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

class DoublyLinkedList
{
    public:
        DoublyLinkedList();
        ~DoublyLinkedList();

        Node * head = nullptr;
        Node * tail = nullptr;

        void readFromFile();

        void addToHead(string inputKey, int inputVlaue);
        void addToTail(string inputKey, int inputValue);

        void deleteFirstNode();
        void deleteLastNode();

        void treverseHeadToTail();
        void traverseTailTohead();

        void printHead();
        void printTail();
};
#endif