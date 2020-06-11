#include "DoublyLinkedList.hpp"
#include <iostream>
using std::cout;
using std::endl;

DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
}

void DoublyLinkedList::addToHead(int inputValue)
{
    //consider the case of an empty list
    if((head == nullptr) && (tail == nullptr))
    {
        cout<<"adding to an empty list \n";
        head = new Node(inputValue);
        tail = head;
    }

    //consider case of a list with one entry
    else if(head == tail)
    {
        cout<<"adding to a list with one entry \n";
        head = new Node(inputValue, head);
        tail = head->next; 
    }

    //all other cases
    else
    {
        cout<<"Adding to a list with more than one entry \n";
        head = new Node(inputValue, head);
    }
}

void DoublyLinkedList::addToTail(int inputValue)
{
    //consider the empty case
    if ((head == nullptr) && (tail == nullptr))
    {
        cout<<"adding to an empty list \n";
        head = new Node(inputValue);
        tail = head;
    }

    //consider the case of list with one entry
    else if (head == tail)
    {
        cout<<"adding to list of size 1 \n";
        tail = new Node(inputValue, nullptr, head);
        head->next = tail;
    }

    else
    {
        cout<<"adding to a list with more than one entry \n";
        tail->next = new Node(inputValue, nullptr, tail);
        tail = tail->next;
    }
} 

void DoublyLinkedList::treverseHeadToTail()
{
    Node * tempPtr = head;
    while (tempPtr != nullptr)
    {
        cout<<tempPtr->val<<endl;
        tempPtr = tempPtr->next;
    }
    
}

void DoublyLinkedList::traverseTailTohead()
{
    Node * tempPtr = tail;
    while(tempPtr != nullptr)
    {
        cout<<tempPtr->val<<endl;
        tempPtr = tempPtr->prev;
    }
}

void DoublyLinkedList::deleteFirstNode()
{
    Node * tempPtr = head;
    head = head->next;
    delete tempPtr;
}

void DoublyLinkedList::deleteLastNode()
{
    Node * tempPtr = tail;
    tail = tail->prev;
    delete tempPtr;
}

void DoublyLinkedList::printHead()
{
    cout<<head->val<<endl;
}

void DoublyLinkedList::printTail()
{
    cout<<tail->val<<endl;
}

DoublyLinkedList::~DoublyLinkedList()
{
    Node * tempPtr = head;
    while(tempPtr != nullptr)
    {
        cout<<"deleting "<<tempPtr->val<<endl;
        Node * trailingPtr = tempPtr;
        tempPtr = tempPtr->next;
        delete trailingPtr;
    }
}